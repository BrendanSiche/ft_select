/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   return.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiche <bsiche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 20:14:22 by bsiche            #+#    #+#             */
/*   Updated: 2018/08/31 02:07:15 by bsiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void	ft_endit(void)
{
	free_everything();
	set_back_term();
	checkquit();
	exit(0);
}

void	ft_badending(void)
{
	free_everything();
	set_back_term();
	brokenquit();
	exit(0);
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
	while (tmp)
	{
		buf = tmp->content;
		ft_putstr_fd(buf->name, STDOUT_FILENO);
		if (tmp->next != NULL)
			ft_putstr_fd(" ", STDOUT_FILENO);
		tmp = tmp->next;
	}
	ft_endit();
}
