/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rw_mlx.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uwywijas <uwywijas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 16:08:15 by uwywijas          #+#    #+#             */
/*   Updated: 2023/12/09 17:54:50 by uwywijas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RW_MLX_H
# define RW_MLX_H

# include <mlx.h>
# include "map.h"

# define WINDOW_W 800
# define WINDOW_H 500
# define TILE_OFFSET 16
# define KEYCODE_CLOSED 17
# define KEYCODE_ESC 65307
# define KEYCODE_W 119
# define KEYCODE_A 97
# define KEYCODE_S 115
# define KEYCODE_D 100

typedef struct	s_program
{
	void	*mlx;
	void	*window;
	t_map	*map;
}	t_program;

typedef struct	s_image
{
	void		*pointer;
	t_vector2	size;
	char		*pixels;
	int			bits_per_pixel;
	int			line_size;
	int			endian;
}	t_image;

t_image	get_image(void *mlx, char *path);

void	*create_image(void *mlx, char *path);
int		create_color(int t, int r, int g, int b);
int		on_destroy(t_program *program);
int		on_key_pressed(int keycode, t_program *program);

#endif