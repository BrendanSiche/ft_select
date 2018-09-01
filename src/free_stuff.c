/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stuff.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiche <bsiche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 16:12:52 by bsiche            #+#    #+#             */
/*   Updated: 2018/08/30 21:48:26 by bsiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void	free_arg(t_arg *tmp)
{
	free(tmp->color);
	tmp->color = NULL;
	free(tmp->name);
	tmp->name = NULL;
	free(tmp->pad);
	tmp->pad = NULL;
}

void	free_everything(void)
{
	t_lstcontainer	*buf;
	t_list			*tmp;

	buf = g_tracking.select;
	tmp = buf->firstelement;
	while (tmp)
	{
		free_arg(tmp->content);
		tmp = tmp->next;
	}
	ft_lstdel(g_tracking.select->firstelement, 1);
	free(g_tracking.select);
	buf = g_tracking.arglist;
	tmp = buf->firstelement;
	while (tmp)
	{
		free_arg(tmp->content);
		tmp = tmp->next;
	}
	ft_lstdel(g_tracking.arglist->firstelement, 1);
}

void	checkquit(void)
{
	ft_putstr_fd("\n", STDERR_FILENO);
	ft_putstr_fd("\033[38;5;82m", STDERR_FILENO);
	ft_putendl_fd(CHECK1, STDERR_FILENO);
	ft_putendl_fd(CHECK2, STDERR_FILENO);
	ft_putendl_fd(CHECK3, STDERR_FILENO);
	ft_putendl_fd(CHECK4, STDERR_FILENO);
	ft_putendl_fd(CHECK5, STDERR_FILENO);
	ft_putendl_fd(CHECK6, STDERR_FILENO);
	ft_putendl_fd(CHECK7, STDERR_FILENO);
	ft_putendl_fd(CHECK8, STDERR_FILENO);
	ft_putendl_fd(CHECK9, STDERR_FILENO);
	ft_putendl_fd(CHECK10, STDERR_FILENO);
	ft_putendl_fd(CHECK11, STDERR_FILENO);
	ft_putendl_fd(CHECK12, STDERR_FILENO);
	ft_putendl_fd(CHECK13, STDERR_FILENO);
	ft_putendl_fd(CHECK14, STDERR_FILENO);
	ft_putendl_fd(CHECK15, STDERR_FILENO);
	ft_putendl_fd(CHECK16, STDERR_FILENO);
	ft_putendl_fd(CHECK17, STDERR_FILENO);
	ft_putendl_fd(CHECK18, STDERR_FILENO);
	ft_putendl_fd(CHECK19, STDERR_FILENO);
	ft_putendl_fd(CHECK20, STDERR_FILENO);
	ft_putstr_fd("\033[0m", STDERR_FILENO);
}

void	brokenquit(void)
{
	ft_putstr_fd("\n", STDERR_FILENO);
	ft_putstr_fd("\033[38;5;160m", STDERR_FILENO);
	ft_putendl_fd(HEART1, STDERR_FILENO);
	ft_putendl_fd(HEART2, STDERR_FILENO);
	ft_putendl_fd(HEART3, STDERR_FILENO);
	ft_putendl_fd(HEART4, STDERR_FILENO);
	ft_putendl_fd(HEART5, STDERR_FILENO);
	ft_putendl_fd(HEART6, STDERR_FILENO);
	ft_putendl_fd(HEART7, STDERR_FILENO);
	ft_putendl_fd(HEART8, STDERR_FILENO);
	ft_putendl_fd(HEART9, STDERR_FILENO);
	ft_putendl_fd(HEART10, STDERR_FILENO);
	ft_putendl_fd(HEART11, STDERR_FILENO);
	ft_putendl_fd(HEART12, STDERR_FILENO);
	ft_putendl_fd(HEART13, STDERR_FILENO);
	ft_putendl_fd(HEART14, STDERR_FILENO);
	ft_putendl_fd(HEART15, STDERR_FILENO);
	ft_putendl_fd(HEART16, STDERR_FILENO);
	ft_putendl_fd(HEART17, STDERR_FILENO);
	ft_putendl_fd(HEART18, STDERR_FILENO);
	ft_putendl_fd(HEART19, STDERR_FILENO);
	ft_putendl_fd(HEART20, STDERR_FILENO);
	ft_putstr_fd("\033[0m", STDERR_FILENO);
}
