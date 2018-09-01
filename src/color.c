/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiche <bsiche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 14:05:02 by bsiche            #+#    #+#             */
/*   Updated: 2018/08/30 21:02:56 by bsiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void	ft_color(int i)
{
	if (i == 0)
		ft_putstr_fd("\033[38;5;63m", STDERR_FILENO);
	if (i == 1)
		ft_putstr_fd("\033[38;5;20m", STDERR_FILENO);
	if (i == 2)
		ft_putstr_fd("\033[31m", STDERR_FILENO);
	if (i == 3)
		ft_putstr_fd("\033[35m", STDERR_FILENO);
}

void	basicstat(t_arg *arg)
{
	struct stat buf;
	char		*permission;
	char		type;

	arg->type = 0;
	if (lstat(arg->name, &buf) != -1)
	{
		permission = ft_usrmode(buf.st_mode);
		type = permission[0];
		if (type == 'd')
			arg->type = 1;
		if (type == '-' && permission[3] == 'x')
			arg->type = 2;
		if (type == 'l')
			arg->type = 3;
		free(permission);
	}
}

void	ft_colorstat(void)
{
	t_arg		*arg;
	t_list		*tmp;

	tmp = g_tracking.arglist->firstelement;
	while (tmp)
	{
		arg = tmp->content;
		basicstat(arg);
		tmp = tmp->next;
	}
}
