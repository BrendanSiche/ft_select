/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   return.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiche <bsiche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 20:14:22 by bsiche            #+#    #+#             */
/*   Updated: 2018/09/05 22:42:23 by bsiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void	ft_endit(char *new)
{
	free_everything();
	set_back_term();
	checkquit();
	ft_putendl(new);
	free(new);
	exit(0);
}

void	ft_badending(void)
{
	free_everything();
	set_back_term();
	brokenquit();
	exit(0);
}

void	lst_to_string(void)
{
	t_list		*tmp;
	t_arg		*buf;
	char		*new;
	int			i;

	tmp = g_tracking.select->firstelement;
	new = ft_strnew(0);
	i = 0;
	while (tmp)
	{
		buf = tmp->content;
		if (i != 0)
			new = ft_strjoin(new, " ", 1);
		new = ft_strjoin(new, buf->name, 1);
		i++;
		tmp = tmp->next;
	}
	ft_endit(new);
}

void	ft_print_and_quit(void)
{
	t_lstcontainer	*list;
	t_list			*tmp;
	t_arg			*buf;
	char			*test;

	clear_screen2();
	tputs(tgetstr("ve", NULL), 1, yan_putchar);
	tputs(tgetstr("te", NULL), 1, yan_putchar);
	test = tgetstr("cm", NULL);
	tputs(tgoto(test, 0, 0), 1, yan_putchar);
	list = g_tracking.select;
	if (list->firstelement == NULL)
		ft_badending();
	tmp = list->firstelement;
	lst_to_string();
}
