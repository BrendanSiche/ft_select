/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_key.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiche <bsiche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 03:05:45 by bsiche            #+#    #+#             */
/*   Updated: 2018/09/01 23:31:10 by bsiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void	clear_print(t_arg *buf)
{
	char	*test;

	if (g_tracking.fancy == 1)
		clear_screen3();
	else
		clear_screen2();
	test = tgetstr("cm", NULL);
	ft_printlist();
	tputs(tgoto(test, buf->x, buf->y), 1, yan_putchar);
}

void	update_pos(int active)
{
	t_list		*tmp;
	t_arg		*buf;

	tmp = NULL;
	if ((tmp = ft_lstget(active, g_tracking.arglist->firstelement)) != NULL)
		g_tracking.active_arg = active;
	if (tmp == NULL)
	{
		tmp = g_tracking.arglist->firstelement;
		g_tracking.active_arg = 0;
	}
	if (active < 0)
	{
		tmp = ft_lstgetlast(g_tracking.arglist->firstelement);
		g_tracking.active_arg = tmp->index;
	}
	buf = tmp->content;
	clear_print(buf);
}

void	ft_cursor(long c)
{
	int			active;
	int			i;

	active = g_tracking.active_arg;
	i = g_tracking.col_nbr;
	if (c == K_LEFT)
		active = active - 1;
	if (c == K_RIGHT)
		active = active + 1;
	if (c == K_DOWN)
		active = active + i;
	if (c == K_UP)
		active = active - i;
	update_pos(active);
}

void	readloop(void)
{
	long c;

	c = 0;
	read(STDERR_FILENO, &c, 8);
	if (c == K_DOWN || c == K_LEFT || c == K_RIGHT || c == K_UP)
		ft_cursor(c);
	if (c == K_SPC)
		ft_select();
	if (c == K_RTN)
		ft_print_and_quit();
	if (c == K_ESC)
		ft_badending();
	if (c == K_DEL)
		ft_delete();
	if (c != K_DOWN && c != K_UP && c != K_LEFT && c != K_RIGHT && c != K_UP &&
		c != K_SPC && c != K_RTN && c != K_ESC && c != K_BSP && c != K_DEL)
		add_to_str(c);
	if (c == K_BSP)
		rem_from_str();
}

int		get_key(void)
{
	int		i;
	char	*test;

	i = g_tracking.col_nbr;
	if (g_tracking.fancy == 1)
		print_chell();
	else
		clear_screen2();
	ft_printlist();
	test = tgetstr("cm", NULL);
	tputs(tgoto(test, 0, 0), 1, yan_putchar);
	while (1)
	{
		readloop();
	}
	return (0);
}
