/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testlit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiche <bsiche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 21:23:33 by bsiche            #+#    #+#             */
/*   Updated: 2018/11/05 21:36:13 by bsiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_select.h"

int		main(int argc, char **argv)
{
	char			**tabl;
	t_lstcontainer	*new;
	char			*str;
	t_list			*tmp;
	int				i;

	tabl = ft_strsplit(argv[1], ' ');
	new = lstcontainer_new();
	i = 0;
	while (tabl[i])
	{
		str = ft_strdup(tabl[i]);
		new->add(new, str);
		i++;
	}
	tmp = ft_lstget(0, new->firstelement);
	while (tmp)
	{
		str = tmp->content;
		ft_putendl(str);
		tmp = tmp->next;
	}
	return (0);
}