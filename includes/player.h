/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uwywijas <uwywijas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:46:15 by uwywijas          #+#    #+#             */
/*   Updated: 2023/12/13 16:17:53 by uwywijas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_H
# define PLAYER_H

# include "map.h"
# include "rw_mlx.h"

void	move_up(t_program *program, t_vector2 coords);
void	move_down(t_program *program, t_vector2 coords);
void	move_left(t_program *program, t_vector2 coords);
void	move_right(t_program *program, t_vector2 coords);

#endif