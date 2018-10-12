/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpad.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiche <bsiche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 02:01:30 by bsiche            #+#    #+#             */
/*   Updated: 2018/08/30 21:14:54 by bsiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void	ft_strpad2(void)
{
	int			i;
	int			a;
	t_list		*tmp;
	t_arg		*arg;

	tmp = g_tracking.arglist->firstelement;
	i = lstcontainer_size(g_tracking.arglist);
	g_tracking.col_nbr = getsize(0);
	g_tracking.lin_nbr = getsize(1);
	a = 0;
	while (tmp)
	{
		arg = tmp->content;
		arg->id = a;
		a++;
		tmp = tmp->next;
	}
}

void	ft_strpad(int size)
{
	int			i;
	int			a;
	char		*blank;
	t_list		*tmp;
	t_arg		*arg;

	tmp = g_tracking.arglist->firstelement;
	size = g_tracking.size;
	while (tmp)
	{
		arg = tmp->content;
		a = ft_strlen(arg->name);
		a = size - a;
		blank = ft_strnew(a + 1);
		i = 0;
		while (i <= a)
		{
			blank[i] = ' ';
			i++;
		}
		arg->pad = blank;
		tmp = tmp->next;
	}
	ft_strpad2();
}
