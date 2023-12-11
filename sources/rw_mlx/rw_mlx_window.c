/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rw_mlx_window.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uwywijas <uwywijas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:17:28 by uwywijas          #+#    #+#             */
/*   Updated: 2023/12/11 17:34:53 by uwywijas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/map.h"
#include "../../includes/rw_mlx.h"

void	*get_current_image(t_program program, t_vector2 coords)
{
	void	*image;

	image = NULL;
	if (program.map->data[coords.y][coords.x] == WALL)
		image = get_image(program.mlx, TEXTR_WALL).pointer;
	else if (program.map->data[coords.y][coords.x] == FLOOR)
		image = get_image(program.mlx, TEXTR_FLOOR).pointer;
	else if (program.map->data[coords.y][coords.x] == PLAYER)
		image = get_image(program.mlx, TEXTR_PLAYER).pointer;
	else if (program.map->data[coords.y][coords.x] == EXIT)
		image = get_image(program.mlx, TEXTR_EXIT).pointer;
	else if (program.map->data[coords.y][coords.x] == COLLECT)
		image = get_image(program.mlx, TEXTR_COLLECT).pointer;
	return (image);
}

void	show_map(t_program program)
{
	t_vector2	coords;
	void		*image;

	coords.y = 0;
	mlx_clear_window(program.mlx, program.window);
	while (coords.y <= program.map->size.y)
	{
		coords.x = 0;
		while (coords.x < program.map->size.x)
		{
			mlx_destroy_image(program.mlx, program.textures[coords.x * (coords.y + 1)]);
			image = get_current_image(program, coords);
			mlx_put_image_to_window(program.mlx, program.window, image, coords.x * TILE_OFFSET, coords.y * TILE_OFFSET);
			coords.x++;
		}
		coords.y++;
	}
}
