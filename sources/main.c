/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uwywijas <uwywijas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:47:33 by uwywijas          #+#    #+#             */
/*   Updated: 2023/12/11 15:41:58 by uwywijas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/map.h"
#include "../includes/rw_mlx.h"

int	main(void)
{
	t_program	program;
	t_map		*map;

	map = get_map("./maps/exemple.ber");
	if (map == NULL)
		return (ft_putstr_fd("Error\nWrong map format.\n", 1), 0);
	program.map = map;
	program.mlx = mlx_init();
	program.window = mlx_new_window(program.mlx, WINDOW_W, WINDOW_H, "so_long");
	mlx_hook(program.window, KEYCODE_CLOSED, 0, &on_destroy, &program);
	mlx_loop(program.mlx);
	return (freetab(map->data, map->size.y), free(map), 0);
}
