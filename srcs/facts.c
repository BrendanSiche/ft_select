/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   facts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiche <bsiche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 18:22:54 by bsiche            #+#    #+#             */
/*   Updated: 2018/08/30 21:07:16 by bsiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void	ft_lincoln(char *blank)
{
	ft_putstr_fd(LINCOLN1, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO15, STDERR_FILENO);
	ft_putstr_fd(LINCOLN2, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO16, STDERR_FILENO);
	ft_putstr_fd(LINCOLN3, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO17, STDERR_FILENO);
	ft_putstr_fd(LINCOLN4, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO18, STDERR_FILENO);
	ft_putstr_fd(BLANK1, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO19, STDERR_FILENO);
	free(blank);
	blank = blankstr(g_tracking.padding, 0);
	ft_putstr_fd(BORDER1, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putstr_fd(BORDER2, STDERR_FILENO);
	ft_putendl_fd("\033[0m", STDERR_FILENO);
	free(blank);
}

void	ft_queen(char *blank)
{
	ft_putstr_fd(QUEEN1, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO15, STDERR_FILENO);
	ft_putstr_fd(QUEEN2, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO16, STDERR_FILENO);
	ft_putstr_fd(QUEEN3, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO17, STDERR_FILENO);
	ft_putstr_fd(QUEEN4, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO18, STDERR_FILENO);
	ft_putstr_fd(BLANK1, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO19, STDERR_FILENO);
	free(blank);
	blank = blankstr(g_tracking.padding, 0);
	ft_putstr_fd(BORDER1, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putstr_fd(BORDER2, STDERR_FILENO);
	ft_putendl_fd("\033[0m", STDERR_FILENO);
	free(blank);
}

void	ft_willi(char *blank)
{
	ft_putstr_fd(WILLI1, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO15, STDERR_FILENO);
	ft_putstr_fd(WILLI2, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO16, STDERR_FILENO);
	ft_putstr_fd(WILLI3, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO17, STDERR_FILENO);
	ft_putstr_fd(WILLI4, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO18, STDERR_FILENO);
	ft_putstr_fd(BLANK1, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO19, STDERR_FILENO);
	free(blank);
	blank = blankstr(g_tracking.padding, 0);
	ft_putstr_fd(BORDER1, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putstr_fd(BORDER2, STDERR_FILENO);
	ft_putendl_fd("\033[0m", STDERR_FILENO);
	free(blank);
}

void	ft_schro(char *blank)
{
	ft_putstr_fd(SCHRO1, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO15, STDERR_FILENO);
	ft_putstr_fd(SCHRO2, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO16, STDERR_FILENO);
	ft_putstr_fd(SCHRO3, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO17, STDERR_FILENO);
	ft_putstr_fd(SCHRO4, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO18, STDERR_FILENO);
	ft_putstr_fd(BLANK1, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO19, STDERR_FILENO);
	free(blank);
	blank = blankstr(g_tracking.padding, 0);
	ft_putstr_fd(BORDER1, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putstr_fd(BORDER2, STDERR_FILENO);
	ft_putendl_fd("\033[0m", STDERR_FILENO);
	free(blank);
}

void	ft_auto(char *blank)
{
	ft_putstr_fd(AUTO1, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO15, STDERR_FILENO);
	ft_putstr_fd(AUTO2, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO16, STDERR_FILENO);
	ft_putstr_fd(AUTO3, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO17, STDERR_FILENO);
	ft_putstr_fd(AUTO4, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO18, STDERR_FILENO);
	ft_putstr_fd(BLANK1, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO19, STDERR_FILENO);
	free(blank);
	blank = blankstr(g_tracking.padding, 0);
	ft_putstr_fd(BORDER1, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putstr_fd(BORDER2, STDERR_FILENO);
	ft_putendl_fd("\033[0m", STDERR_FILENO);
	free(blank);
}
