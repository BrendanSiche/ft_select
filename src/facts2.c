/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   facts2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiche <bsiche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 19:04:56 by bsiche            #+#    #+#             */
/*   Updated: 2018/08/18 19:52:24 by bsiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void	ft_pants(char *blank)
{
	ft_putstr_fd(PANT1, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO15, STDERR_FILENO);
	ft_putstr_fd(PANT2, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO16, STDERR_FILENO);
	ft_putstr_fd(PANT3, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO17, STDERR_FILENO);
	ft_putstr_fd(PANT4, STDERR_FILENO);
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

void	ft_mary(char *blank)
{
	ft_putstr_fd(MARY1, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO15, STDERR_FILENO);
	ft_putstr_fd(MARY2, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO16, STDERR_FILENO);
	ft_putstr_fd(MARY3, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO17, STDERR_FILENO);
	ft_putstr_fd(MARY4, STDERR_FILENO);
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

void	ft_twelve(char *blank)
{
	ft_putstr_fd(TWEL1, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO15, STDERR_FILENO);
	ft_putstr_fd(TWEL2, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO16, STDERR_FILENO);
	ft_putstr_fd(TWEL3, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO17, STDERR_FILENO);
	ft_putstr_fd(TWEL4, STDERR_FILENO);
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

void	ft_rope(char *blank)
{
	ft_putstr_fd(ROPE1, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO15, STDERR_FILENO);
	ft_putstr_fd(ROPE2, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO16, STDERR_FILENO);
	ft_putstr_fd(ROPE3, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO17, STDERR_FILENO);
	ft_putstr_fd(ROPE4, STDERR_FILENO);
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

void	ft_humans(char *blank)
{
	ft_putstr_fd(HUMA1, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO15, STDERR_FILENO);
	ft_putstr_fd(HUMA2, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO16, STDERR_FILENO);
	ft_putstr_fd(HUMA3, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO17, STDERR_FILENO);
	ft_putstr_fd(HUMA4, STDERR_FILENO);
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
