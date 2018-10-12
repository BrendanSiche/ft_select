/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   facts3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiche <bsiche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 19:04:56 by bsiche            #+#    #+#             */
/*   Updated: 2018/08/30 21:07:20 by bsiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void	ft_sub(char *blank)
{
	ft_putstr_fd(SUB1, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO15, STDERR_FILENO);
	ft_putstr_fd(SUB2, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO16, STDERR_FILENO);
	ft_putstr_fd(SUB3, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO17, STDERR_FILENO);
	ft_putstr_fd(SUB4, STDERR_FILENO);
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

void	ft_factsphere(char *blank)
{
	ft_putstr_fd(FACTS1, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO15, STDERR_FILENO);
	ft_putstr_fd(FACTS2, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO16, STDERR_FILENO);
	ft_putstr_fd(FACTS3, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO17, STDERR_FILENO);
	ft_putstr_fd(FACTS4, STDERR_FILENO);
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

void	ft_avocado(char *blank)
{
	ft_putstr_fd(AVOC1, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO15, STDERR_FILENO);
	ft_putstr_fd(AVOC2, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO16, STDERR_FILENO);
	ft_putstr_fd(AVOC3, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO17, STDERR_FILENO);
	ft_putstr_fd(AVOC4, STDERR_FILENO);
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

void	ft_magic(char *blank)
{
	ft_putstr_fd(MAGIC1, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO15, STDERR_FILENO);
	ft_putstr_fd(MAGIC2, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO16, STDERR_FILENO);
	ft_putstr_fd(MAGIC3, STDERR_FILENO);
	ft_putstr_fd(blank, STDERR_FILENO);
	ft_putendl_fd(LOGO17, STDERR_FILENO);
	ft_putstr_fd(MAGIC4, STDERR_FILENO);
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
