/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signals.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiche <bsiche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 14:00:48 by bsiche            #+#    #+#             */
/*   Updated: 2018/08/31 02:05:37 by bsiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void		fg_bg(int sino)
{
	if (sino == SIGTSTP)
	{
		set_back_term();
		signal(SIGTSTP, SIG_DFL);
		ioctl(STDERR_FILENO, TIOCSTI, "\x1A");
	}
	else if (sino == SIGCONT)
	{
		get_term();
		ft_siginit();
		update_pos(g_tracking.active_arg);
	}
}

void		handle_sin(int sino)
{
	char		*test;

	if (sino == SIGABRT || sino == SIGINT || sino == SIGKILL
	|| sino == SIGINT || sino == SIGQUIT)
	{
		set_back_term();
		free_everything();
		exit(0);
	}
	if (sino == SIGWINCH)
	{
		update_size();
		if (g_tracking.fancy == 1)
		{
			clear_screen2();
			print_chell();
		}
		else
			clear_screen2();
		test = tgetstr("cm", NULL);
		tputs(tgoto(test, 0, 0), 1, yan_putchar);
		update_pos(g_tracking.active_arg);
	}
	if (sino == SIGTSTP || sino == SIGCONT)
		fg_bg(sino);
}

void		ft_siginit(void)
{
	signal(SIGABRT, handle_sin);
	signal(SIGINT, handle_sin);
	signal(SIGSTOP, handle_sin);
	signal(SIGQUIT, handle_sin);
	signal(SIGKILL, handle_sin);
	signal(SIGWINCH, handle_sin);
	signal(SIGCONT, handle_sin);
	signal(SIGTSTP, handle_sin);
}
