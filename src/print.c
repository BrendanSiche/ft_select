/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiche <bsiche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 04:22:13 by bsiche            #+#    #+#             */
/*   Updated: 2018/08/30 21:24:50 by bsiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

int		ft_check(void)
{
	int		flag;
	int		space;
	int		nb;

	flag = 0;
	space = g_tracking.lin_nbr * g_tracking.col_nbr;
	nb = g_tracking.arglist->size(g_tracking.arglist);
	if (space < nb || g_tracking.toosmall != 0)
		return (1);
	else
		return (0);
}

void	ft_actualprint(int col_nbr, int i, t_arg *arg, size_t j)
{
	ft_putstr_fd("\033[38;5;209m  - ", STDERR_FILENO);
	ft_putstr_fd(arg->color, STDERR_FILENO);
	if (((size_t)g_tracking.active_arg) == j)
		ft_putstr_fd("\033[4m", STDERR_FILENO);
	ft_color(arg->type);
	ft_putstr_fd(arg->name, STDERR_FILENO);
	ft_putstr_fd("\033[0m", STDERR_FILENO);
	if ((i + 1) < col_nbr)
		ft_putstr_fd(arg->pad, STDERR_FILENO);
}

void	ft_printline(void)
{
	int		i;
	t_list	*tmp;
	t_arg	*arg;
	int		col_nbr;

	tmp = g_tracking.arglist->firstelement;
	col_nbr = g_tracking.col_nbr;
	while (tmp)
	{
		i = 0;
		while (i < col_nbr && tmp)
		{
			arg = tmp->content;
			ft_actualprint(col_nbr, i, arg, tmp->index);
			i++;
			tmp = tmp->next;
		}
		ft_putchar_fd('\n', STDERR_FILENO);
	}
	if (g_tracking.str != NULL)
	{
		ft_putstr_fd("\n\n", STDERR_FILENO);
		ft_putstr_fd("The file you're looking for is : ", STDERR_FILENO);
		ft_putstr_fd(g_tracking.str, STDERR_FILENO);
	}
}

void	ft_printlist(void)
{
	if (ft_check() == 0)
		ft_printline();
	else
	{
		if (g_tracking.toosmall == 1)
		{
			ft_putendl_fd("(╯°□°）╯︵ ┻━┻", STDERR_FILENO);
			ft_putendl_fd("Term size too small", STDERR_FILENO);
		}
		if (g_tracking.toosmall == 2)
		{
			ft_putendl_fd("ಠ╭╮ಠ", STDERR_FILENO);
			ft_putendl_fd("SRSLY ??", STDERR_FILENO);
		}
		if (g_tracking.toosmall == 3)
		{
			ft_putendl_fd("ಥ_ಥ", STDERR_FILENO);
		}
	}
}
