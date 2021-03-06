/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   term_setup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiche <bsiche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 05:23:25 by bsiche            #+#    #+#             */
/*   Updated: 2018/09/01 23:00:53 by bsiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void	check_term(char *name)
{
	int			a;
	char		buf[1024];

	if (isatty(0) != 1)
	{
		ft_putendl("Not a terminal");
		exit(0);
	}
	a = tgetent(buf, name);
	if (a == 0)
		ft_putendl("No such entry in terminal database");
	if (a == -1)
		ft_putendl("Terminfo database could not be found");
	if (a != 1)
		exit(0);
}

int		clear_screen3(void)
{
	char	*res;
	char	*test;

	test = tgetstr("cm", NULL);
	tputs(tgoto(test, 0, 21), 1, yan_putchar);
	if ((res = tgetstr("cd", NULL)) == NULL)
		return (-1);
	tputs(res, 1, yan_putchar);
	return (0);
}

int		clear_screen2(void)
{
	char	*res;

	if ((res = tgetstr("cl", NULL)) == NULL)
		return (-1);
	tputs(res, 1, yan_putchar);
	return (0);
}

void	set_back_term(void)
{
	tputs(tgetstr("ve", NULL), 1, yan_putchar);
	tputs(tgetstr("te", NULL), 1, yan_putchar);
	tcsetattr(STDERR_FILENO, TCSANOW, &g_tracking.default_term);
}

void	get_term(void)
{
	char			*name_term;
	struct termios	term;

	if (!(name_term = getenv("TERM")))
	{
		ft_putendl("No terminal found in ENV");
		exit(0);
	}
	check_term(name_term);
	tcgetattr(0, &term);
	tcgetattr(0, &g_tracking.default_term);
	term.c_lflag &= ~(ICANON | ECHO);
	term.c_cc[VMIN] = 1;
	term.c_cc[VTIME] = 0;
	tputs(tgetstr("vi", NULL), 1, yan_putchar);
	tputs(tgetstr("ti", NULL), 1, yan_putchar);
	tcsetattr(0, TCSANOW, &term);
	tcgetattr(0, &g_tracking.myterm);
}
