/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uwywijas <uwywijas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:50:38 by uwywijas          #+#    #+#             */
/*   Updated: 2023/12/11 18:41:53 by uwywijas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H

# include "imports.h"
# include "get_next_line.h"

# define WALL '1'
# define FLOOR '0'
# define COLLECT 'C'
# define PLAYER 'P'
# define EXIT 'E'
# define PATHFINDER '+'
# define TEXTR_WALL "textures/xpm32/wall.xpm"
# define TEXTR_FLOOR "textures/xpm32/floor.xpm"
# define TEXTR_COLLECT "textures/xpm32/collectable.xpm"
# define TEXTR_PLAYER "textures/xpm32/player.xpm"
# define TEXTR_EXIT "textures/xpm32/exit.xpm"

typedef struct s_vector2
{
	int	x;
	int	y;
}	t_vector2;

typedef struct s_map
{
	t_vector2	size;
	char		**data;
}	t_map;

t_map		*get_map(char *path);
t_vector2	get_coords(t_map *map, char c);
int			check_custom_map_char(t_map *map);
int			get_map_char(t_map *map, char c);
int			check_map(t_map *map);
char		**pathfinder(t_map *map, t_vector2 coords);
int			is_map_valid_path(t_map *map, char **pathfinder);

#endif