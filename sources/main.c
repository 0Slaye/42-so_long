/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uwywijas <uwywijas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:47:33 by uwywijas          #+#    #+#             */
/*   Updated: 2023/12/11 17:45:51 by uwywijas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/map.h"
#include "../includes/player.h"
#include "../includes/rw_mlx.h"

int	main(void)
{
	t_vector2	window_size;
	t_program	program;
	t_map		*map;

	map = get_map("./maps/exemple.ber");
	if (map == NULL)
		return (ft_putstr_fd("Error\nWrong map format.\n", 1), 0);
	window_size.x = map->size.x * TILE_OFFSET;
	window_size.y = (map->size.y + 1) * TILE_OFFSET;
	program.textures = malloc(sizeof(void *) * (map->size.x * (map->size.y + 1)));
	printf("nb textures = %d\n", map->size.x * map->size.y);
	program.map = map;
	program.mlx = mlx_init();
	program.window = mlx_new_window(program.mlx, window_size.x, window_size.y, "so_long");
	show_map(program);
	mlx_hook(program.window, KEYCODE_CLOSED, 0, &on_destroy, &program);
	mlx_key_hook(program.window, &on_keyinput, &program);
	mlx_loop(program.mlx);
	return (0);
}
