/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   select_arg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiche <bsiche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 06:36:49 by bsiche            #+#    #+#             */
/*   Updated: 2018/09/16 00:57:31 by bsiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

int		ft_deselect(t_arg *buf)
{
	t_arg	*buf2;
	t_list	*tmp;

	tmp = g_tracking.select->firstelement;
	while (tmp != NULL)
	{
		buf2 = tmp->content;
		if (buf->id == buf2->id)
		{
			free_arg(buf2);
			g_tracking.select->remove(g_tracking.select, tmp, 1);
			free(buf->color);
			buf->color = ft_strnew(0);
			return (0);
		}
		tmp = tmp->next;
	}
	return (1);
}

void	ft_select(void)
{
	t_list		*tmp;
	t_arg		*buf;
	t_arg		*new;
	int			i;

	i = g_tracking.active_arg;
	tmp = ft_lstget(i, g_tracking.arglist->firstelement);
	buf = tmp->content;
	if (ft_deselect(buf) != 0)
	{
		new = malloc(sizeof(t_arg));
		new->color = ft_strdup(buf->color);
		new->name = ft_strdup(buf->name);
		new->pad = ft_strdup(buf->pad);
		new->x = buf->x;
		new->y = buf->y;
		new->id = buf->id;
		lstcontainer_add(g_tracking.select, new);
		buf = tmp->content;
		free(buf->color);
		buf->color = ft_strdup("\033[7m");
	}
	i = i + 1;
	update_pos(i);
}

void	update_g(t_list *arg_to_del)
{
	free_arg(arg_to_del->content);
	g_tracking.arglist->remove(g_tracking.arglist, arg_to_del, 1);
	g_tracking.active_arg = g_tracking.active_arg - 1;
	if (g_tracking.active_arg < 0)
		g_tracking.active_arg = 0;
	lstcontainer_reindex(g_tracking.arglist);
	lstcontainer_reindex(g_tracking.select);
	set_axis();
}

void	ft_stuff(t_arg *buf, t_list *tmp)
{
	t_arg		*buf2;

	buf2 = tmp->content;
	if (buf2->id == buf->id)
	{
		free_arg(buf2);
		g_tracking.select->remove(g_tracking.select, tmp, 1);
	}
}

void	ft_delete(void)
{
	t_list		*tmp;
	t_list		*arg_to_del;
	t_arg		*buf;
	t_arg		*buf2;
	int			i;

	i = g_tracking.active_arg;
	arg_to_del = ft_lstget(i, g_tracking.arglist->firstelement);
	buf = arg_to_del->content;
	tmp = g_tracking.select->firstelement;
	while (tmp)
	{
		ft_stuff(buf, tmp);
		tmp = tmp->next;
	}
	update_g(arg_to_del);
	i = g_tracking.active_arg;
	tmp = ft_lstget(i, g_tracking.arglist->firstelement);
	if (tmp != NULL)
		buf = tmp->content;
	else
		ft_badending();
	clear_print(buf);
}
