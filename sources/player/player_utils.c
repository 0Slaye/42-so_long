/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uwywijas <uwywijas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:49:13 by uwywijas          #+#    #+#             */
/*   Updated: 2023/12/13 16:19:32 by uwywijas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/player.h"
#include "../../includes/rw_mlx.h"

void	move_up(t_program *program, t_vector2 coords)
{
	if (coords.y == 0)
		return ;
	if (program->map->data[coords.y - 1][coords.x] != '1')
	{
		program->map->data[coords.y - 1][coords.x] = 'P';
		program->map->data[coords.y][coords.x] = '0';
		program->movements++;
		ft_putstr_fd("Movements : ", 1);
		ft_putnbr_fd(program->movements, 1);
		ft_putstr_fd("\n", 1);
	}
}

void	move_down(t_program *program, t_vector2 coords)
{
	if (coords.y == program->map->size.y)
		return ;
	if (program->map->data[coords.y + 1][coords.x] != '1')
	{
		program->map->data[coords.y + 1][coords.x] = 'P';
		program->map->data[coords.y][coords.x] = '0';
		program->movements++;
		ft_putstr_fd("Movements : ", 1);
		ft_putnbr_fd(program->movements, 1);
		ft_putstr_fd("\n", 1);
	}
}

void	move_left(t_program *program, t_vector2 coords)
{
	if (coords.x == 0)
		return ;
	if (program->map->data[coords.y][coords.x - 1] != '1')
	{
		program->map->data[coords.y][coords.x - 1] = 'P';
		program->map->data[coords.y][coords.x] = '0';
		program->movements++;
		ft_putstr_fd("Movements : ", 1);
		ft_putnbr_fd(program->movements, 1);
		ft_putstr_fd("\n", 1);
	}
}

void	move_right(t_program *program, t_vector2 coords)
{
	if (coords.x == program->map->size.x)
		return ;
	if (program->map->data[coords.y][coords.x + 1] != '1')
	{
		program->map->data[coords.y][coords.x + 1] = 'P';
		program->map->data[coords.y][coords.x] = '0';
		program->movements++;
		ft_putstr_fd("Movements : ", 1);
		ft_putnbr_fd(program->movements, 1);
		ft_putstr_fd("\n", 1);
	}
}
