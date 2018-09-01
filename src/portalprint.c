/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   portalprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiche <bsiche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 15:50:03 by bsiche            #+#    #+#             */
/*   Updated: 2018/08/30 21:39:47 by bsiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

char	*blankstr(int i, int a)
{
	char	*blank;
	int		b;

	if ((blank = ft_strnew(i)) == NULL)
		return (NULL);
	b = 0;
	while (b < i)
	{
		if (a == 1)
			blank[b] = '~';
		if (a == 0)
			blank[b] = '-';
		b++;
	}
	return (blank);
}

void	print_chell4(char *blank)
{
	if (g_tracking.random == 5)
		ft_pants(blank);
	if (g_tracking.random == 6)
		ft_mary(blank);
	if (g_tracking.random == 7)
		ft_twelve(blank);
	if (g_tracking.random == 8)
		ft_rope(blank);
	if (g_tracking.random == 9)
		ft_humans(blank);
	if (g_tracking.random == 10)
		ft_sub(blank);
	if (g_tracking.random == 11)
		ft_factsphere(blank);
	if (g_tracking.random == 12)
		ft_avocado(blank);
	if (g_tracking.random > 12)
		ft_magic(blank);
}

void	print_chell3(char *blank)
{
	ft_putstr_fd(FACT1, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO14, STDERR_FILENO);
	if (g_tracking.random > 4)
		print_chell4(blank);
	if (g_tracking.random == 0)
		ft_lincoln(blank);
	if (g_tracking.random == 1)
		ft_queen(blank);
	if (g_tracking.random == 2)
		ft_willi(blank);
	if (g_tracking.random == 3)
		ft_schro(blank);
	if (g_tracking.random == 4)
		ft_auto(blank);
}

void	print_chell2(char *blank)
{
	ft_putstr_fd(USAGE1, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO6, STDERR_FILENO);
	ft_putstr_fd(BLANK1, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO7, STDERR_FILENO);
	ft_putstr_fd(USAGE2, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO8, STDERR_FILENO);
	ft_putstr_fd(BLANK1, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO9, STDERR_FILENO);
	ft_putstr_fd(USAGE3, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO10, STDERR_FILENO);
	ft_putstr_fd(BLANK1, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO11, STDERR_FILENO);
	ft_putstr_fd(BLANK1, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO12, STDERR_FILENO);
	ft_putstr_fd(BLANK1, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO13, STDERR_FILENO);
	print_chell3(blank);
}

void	print_chell(void)
{
	char	*blank;

	ft_putstr_fd("\033[38;5;209m", STDERR_FILENO);
	ft_putstr_fd(BORDER1, STDERR_FILENO);
	blank = blankstr(g_tracking.padding, 0);
	ft_putstr_fd(blank, STDERR_FILENO);
	free(blank);
	blank = blankstr(g_tracking.padding, 1);
	ft_putendl_fd(BORDER2, STDERR_FILENO);
	ft_putstr_fd(BLANK1, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO1, STDERR_FILENO);
	ft_putstr_fd(BLANK1, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO2, STDERR_FILENO);
	ft_putstr_fd(INTRO1, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO3, STDERR_FILENO);
	ft_putstr_fd(INTRO2, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO4, STDERR_FILENO);
	ft_putstr_fd(BLANK1, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO5, STDERR_FILENO);
	print_chell2(blank);
}
