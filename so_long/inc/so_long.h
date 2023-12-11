/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:43:21 by dsabater          #+#    #+#             */
/*   Updated: 2023/12/11 13:15:41 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../mlx/mlx.h"
# include "../libft/libft.h"
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdbool.h>
# include <unistd.h>

typedef struct s_img
{
	void	*wall;
	void	*floor;
	void	*player;
	void	*coll;
	void	*stair;
	int		height;
	int		width;
}				t_img;

typedef struct s_game
{
	void		*mlx;
	void		*win;
	t_img		img;
	int			height;
	int			width;
	int			coll_count;
	int			total_coll;
	int			walk_count;
	char		*map;
}				t_game;

// MLX DEFINES

# define PLAYER "textures/sprites/main_character.xpm"
# define COLL "textures/sprites/death_mouse_to_take.xpm"
# define STAIR "textures/sprites/stair.xpm"
# define WALL "textures/backgrounds/wall.xpm"
# define FLOOR "textures/backgrounds/floor.xpm"

# define W 13
# define A 0
# define S 1
# define D 2
# define ESC 53

// FUNCTIONS

void	check_args(int argc, char **argv);
void	init_game(t_game *g, char *fpath);
void	init_sprites(t_game *g);
void	set_img(t_game *g);
int		keyhooks(int kh, t_game *g);
void	map_load(t_game *g, char *fpath);
void	map_create(t_game *g, int fpath);
int		endgame(t_game *g);
void	print_error(char *msg);
void	move_w(t_game *g);
void	move_a(t_game *g);
void	move_s(t_game *g);
void	move_d(t_game *g);
void	check_map(t_game *g);
char	*ft_strjoin_no_nl(char *s1, char *s2);
char	*ft_strdup_no_nl(char *s1);
void	map_possible_arrival(t_game *g);
int		coll_count(char *str);

#endif
