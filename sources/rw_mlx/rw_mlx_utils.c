/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rw_mlx_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uwywijas <uwywijas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 16:38:31 by uwywijas          #+#    #+#             */
/*   Updated: 2023/12/09 17:53:55 by uwywijas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/rw_mlx.h"

int	on_destroy(t_program *program)
{
	mlx_destroy_window(program->mlx, program->window);
	mlx_destroy_display(program->mlx);
	freetab(program->map->data, program->map->size.y);
	free(program->map);
	free(program->mlx);
	exit(0);
	return (0);
}

int	create_color(int t, int r, int g, int b)
{
	return (t << 24 | r << 16 | g << 8 | b);
}
