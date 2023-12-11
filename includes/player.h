/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uwywijas <uwywijas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:46:15 by uwywijas          #+#    #+#             */
/*   Updated: 2023/12/11 15:58:26 by uwywijas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_H
# define PLAYER_H

# include "map.h"

void	move_up(t_map *map, t_vector2 coords);
void	move_down(t_map *map, t_vector2 coords);
void	move_left(t_map *map, t_vector2 coords);
void	move_right(t_map *map, t_vector2 coords);

#endif