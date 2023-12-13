/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uwywijas <uwywijas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:46:15 by uwywijas          #+#    #+#             */
/*   Updated: 2023/12/13 17:11:21 by uwywijas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_H
# define PLAYER_H

# include "map.h"
# include "rw_mlx.h"

# define TEXTR_PLAYER_1 "textures/xpm32/playeru.xpm"
# define TEXTR_PLAYER_2 "textures/xpm32/playerl.xpm"
# define TEXTR_PLAYER_3 "textures/xpm32/playerd.xpm"
# define TEXTR_PLAYER_4 "textures/xpm32/playerr.xpm"

void	move_up(t_program *program, t_vector2 coords);
void	move_down(t_program *program, t_vector2 coords);
void	move_left(t_program *program, t_vector2 coords);
void	move_right(t_program *program, t_vector2 coords);
int		check_win(t_program *program, t_vector2 coords);

#endif