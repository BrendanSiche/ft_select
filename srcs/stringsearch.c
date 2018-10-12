/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stringsearch.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiche <bsiche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 13:51:33 by bsiche            #+#    #+#             */
/*   Updated: 2018/08/30 21:40:57 by bsiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void		add_to_str(char c)
{
	int		i;
	int		a;
	char	*dup;

	a = 0;
	if (c >= 33 && c <= 122)
	{
		if (!g_tracking.str)
			g_tracking.str = ft_strnew(0);
		i = ft_strlen(g_tracking.str);
		dup = ft_strnew(i + 1);
		while (g_tracking.str[a])
		{
			dup[a] = g_tracking.str[a];
			a++;
		}
		dup[a] = c;
		a++;
		dup[a] = '\0';
		free(g_tracking.str);
		g_tracking.str = dup;
	}
	ft_goto();
}

void		ft_clean(void)
{
	int		i;
	int		a;
	char	*dup;

	a = 0;
	i = ft_strlen(g_tracking.str);
	dup = ft_strnew(i);
	while (a < i - 1)
	{
		dup[a] = g_tracking.str[a];
		a++;
	}
	dup[a] = '\0';
	free(g_tracking.str);
	g_tracking.str = dup;
}

void		rem_from_str(void)
{
	if (g_tracking.str)
	{
		ft_clean();
	}
	if (ft_strlen(g_tracking.str) == 0)
	{
		free(g_tracking.str);
		g_tracking.str = NULL;
		g_tracking.active_arg = 0;
	}
	if (g_tracking.str == NULL)
		g_tracking.active_arg = 0;
	ft_goto();
}

void		ft_goto(void)
{
	t_arg	*arg;
	t_list	*tmp;
	int		a;

	if (g_tracking.str && ft_strlen(g_tracking.str) != 0)
	{
		tmp = g_tracking.arglist->firstelement;
		a = ft_strlen(g_tracking.str);
		while (tmp)
		{
			arg = tmp->content;
			if (ft_strncmp(g_tracking.str, arg->name, a) == 0)
			{
				g_tracking.active_arg = tmp->index;
				break ;
			}
			tmp = tmp->next;
		}
	}
	update_pos(g_tracking.active_arg);
}
