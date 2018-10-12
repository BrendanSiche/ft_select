/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiche <bsiche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 00:39:37 by bsiche            #+#    #+#             */
/*   Updated: 2018/09/01 23:00:21 by bsiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

int		yan_putchar(int c)
{
	return (write(STDERR_FILENO, &c, 1));
}

void	init_status(void)
{
	srand(time(NULL));
	g_tracking.str = NULL;
	g_tracking.random = rand() % 13;
	g_tracking.active_arg = 0;
	g_tracking.select = lstcontainer_new();
}

void	basic_print(void)
{
	t_list		*tmp;
	t_arg		*arg;

	tmp = g_tracking.arglist->firstelement;
	while (tmp)
	{
		arg = tmp->content;
		ft_putendl(arg->name);
		tmp = tmp->next;
	}
	exit(0);
}

void	init_arg(char **argv)
{
	int				i;
	int				size;
	int				a;
	t_arg			*arg;

	i = 1;
	g_tracking.arglist = lstcontainer_new();
	size = 0;
	while (argv[i])
	{
		arg = malloc(sizeof(t_arg) + 1);
		arg->name = ft_strdup(argv[i]);
		arg->color = ft_strdup("\033[0m");
		lstcontainer_add(g_tracking.arglist, arg);
		a = ft_strlen(argv[i]);
		if (a > size)
			size = a;
		i++;
	}
	g_tracking.size = size;
	ft_strpad();
	set_axis();
	ft_colorstat();
}

int		main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putendl("Usage: ft_select [arg...]");
		return (0);
	}
	ft_siginit();
	init_status();
	init_arg(argv);
	get_term();
	if (g_tracking.fancy == 0)
	{
		ft_putendl_fd(ERROR, STDERR_FILENO);
		sleep(1);
		clear_screen2();
	}
	get_key();
	return (0);
}
