/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uwywijas <uwywijas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:49:13 by uwywijas          #+#    #+#             */
/*   Updated: 2023/12/11 16:18:05 by uwywijas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/player.h"

void	move_up(t_map *map, t_vector2 coords)
{
	if (coords.y == 0)
		return ;
	if (map->data[coords.y - 1][coords.x] != '1')
	{
		map->data[coords.y - 1][coords.x] = 'P';
		map->data[coords.y][coords.x] = '0';
	}
}

void	move_down(t_map *map, t_vector2 coords)
{
	if (coords.y == map->size.y)
		return ;
	if (map->data[coords.y + 1][coords.x] != '1')
	{
		map->data[coords.y + 1][coords.x] = 'P';
		map->data[coords.y][coords.x] = '0';
	}
}

void	move_left(t_map *map, t_vector2 coords)
{
	if (coords.x == 0)
		return ;
	if (map->data[coords.y][coords.x - 1] != '1')
	{
		map->data[coords.y][coords.x - 1] = 'P';
		map->data[coords.y][coords.x] = '0';
	}
}

void	move_right(t_map *map, t_vector2 coords)
{
	if (coords.x == map->size.x)
		return ;
	if (map->data[coords.y][coords.x + 1] != '1')
	{
		map->data[coords.y][coords.x + 1] = 'P';
		map->data[coords.y][coords.x] = '0';
	}
}
