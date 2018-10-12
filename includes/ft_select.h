/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiche <bsiche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 16:30:16 by bsiche            #+#    #+#             */
/*   Updated: 2018/09/01 23:31:32 by bsiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SELECT_H
# define FT_SELECT_H
# include "../libft/libft.h"
# include <sys/ioctl.h>
# include <termios.h>
# include <curses.h>
# include <term.h>
# include <termcap.h>
# include <signal.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <time.h>
# include "aperture.h"

# define K_LEFT		4479771
# define K_RIGHT	4414235
# define K_DOWN		4348699
# define K_UP		4283163
# define K_RTN		10
# define K_ESC		27
# define K_SPC		32
# define K_ESC		27
# define K_DEL		2117294875L
# define K_BSP		127

typedef struct	s_termvalue
{
	char			*name;
	int				col;
	struct termios	attr;
}				t_termvalue;

typedef struct	s_arg
{
	char			*color;
	char			*name;
	char			*pad;
	int				x;
	int				y;
	int				id;
	int				type;
}				t_arg;

typedef struct	s_tracking
{
	int				active_arg;
	t_lstcontainer	*select;
	t_lstcontainer	*arglist;
	t_lstcontainer	*backup;
	struct termios	default_term;
	struct termios	myterm;
	char			*str;
	int				size;
	int				col_nbr;
	int				lin_nbr;
	int				toosmall;
	int				padding;
	int				fancy;
	int				random;
}				t_tracking;

t_tracking		g_tracking;

void			ft_strpad();

int				getsize(int a);

void			basic_print();

char			*ft_usrmode(mode_t mode);

void			ft_printlist();

int				get_key(void);

int				yan_putchar(int c);

int				clear_screen2(void);

void			set_axis(void);

void			get_term(void);

void			ft_select(void);

void			clear_print(t_arg *buf);

void			ft_print_and_quit(void);

void			ft_delete(void);

void			update_pos(int active);

void			ft_siginit(void);

void			free_everything(void);

void			set_back_term(void);

void			update_size(void);

void			ft_color(int i);

void			ft_colorstat(void);

void			print_chell();

char			*blankstr(int i, int a);

void			checkquit(void);

void			brokenquit(void);

void			rem_from_str(void);

void			ft_goto(void);

int				clear_screen3(void);

void			ft_badending(void);

void			free_arg(t_arg *tmp);
#endif
