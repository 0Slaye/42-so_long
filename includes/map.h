/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uwywijas <uwywijas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:50:38 by uwywijas          #+#    #+#             */
/*   Updated: 2023/12/08 17:02:24 by uwywijas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H

# include "imports.h"
# include "geometry.h"
# include "get_next_line.h"

typedef struct s_map
{
	t_vector2	size;
	t_coords	start;
	t_coords	exit;
	char		**data;
}	t_map;

t_map	*get_map(int fd);

#endif