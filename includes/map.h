/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uwywijas <uwywijas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:50:38 by uwywijas          #+#    #+#             */
/*   Updated: 2023/12/08 19:13:59 by uwywijas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H

# include "imports.h"
# include "geometry.h"
# include "get_next_line.h"

# define WALL '1'
# define FLOOR '0'
# define COLLECT 'C'
# define PLAYER 'P'
# define EXIT 'E'

typedef struct s_map
{
	t_vector2	size;
	char		**data;
}	t_map;

t_map	*get_map(char *path);
int		check_custom_map_char(t_map *map);
int		check_map(t_map *map);

#endif