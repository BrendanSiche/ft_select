/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   col_size.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiche <bsiche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 04:05:56 by bsiche            #+#    #+#             */
/*   Updated: 2018/08/31 00:55:25 by bsiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void	ft_isfancy(int lin, int col)
{
	int		space;
	int		nb;

	lin = lin - 25;
	space = lin * g_tracking.col_nbr;
	nb = g_tracking.arglist->size(g_tracking.arglist);
	if (space > nb && col > 128)
	{
		g_tracking.padding = col - 128;
		g_tracking.fancy = 1;
	}
	lin = lin + 25;
	space = lin * g_tracking.col_nbr;
	nb = g_tracking.arglist->size(g_tracking.arglist);
	if (space < nb)
	{
		g_tracking.toosmall = 1;
		if (col < 19)
			g_tracking.toosmall = 2;
		if (col < 8)
			g_tracking.toosmall = 3;
	}
}

void	assign_size(int ts_col)
{
	g_tracking.toosmall = 1;
	if (ts_col < 19)
		g_tracking.toosmall = 2;
	if (ts_col < 8)
		g_tracking.toosmall = 3;
}

int		getsize(int a)
{
	struct winsize	ts;
	int				col;
	int				max;
	int				row;

	max = g_tracking.size;
	ioctl(STDERR_FILENO, TIOCGWINSZ, &ts);
	col = (ts.ws_col) / (max + 6);
	row = (ts.ws_row) - 2;
	g_tracking.toosmall = 0;
	if (col < 1)
	{
		assign_size(ts.ws_col);
		col = 1;
	}
	ft_isfancy(row, ts.ws_col);
	if (a == 0)
		return (col);
	if (a == 1)
		return (row);
	else
		return (ts.ws_col);
}

void	update_size(void)
{
	t_list		*tmp;
	int			i;
	int			col;

	tmp = g_tracking.arglist->firstelement;
	g_tracking.fancy = 0;
	i = g_tracking.arglist->size(g_tracking.arglist);
	g_tracking.col_nbr = getsize(0);
	g_tracking.lin_nbr = getsize(1);
	col = getsize(2);
	ft_isfancy(g_tracking.lin_nbr, col);
	set_axis();
}

void	set_axis(void)
{
	t_arg	*cur_arg;
	t_list	*tmp;
	int		x;
	int		i;

	x = 0;
	tmp = g_tracking.arglist->firstelement;
	if (tmp != NULL)
	{
		cur_arg = tmp->content;
		i = g_tracking.size * g_tracking.col_nbr;
		while (tmp)
		{
			cur_arg = tmp->content;
			cur_arg->x = x;
			cur_arg->y = tmp->index / g_tracking.col_nbr;
			x = x + g_tracking.size + 4;
			if (x > i)
				x = 0;
			tmp = tmp->next;
		}
	}
}
