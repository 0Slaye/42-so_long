/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uwywijas <uwywijas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:47:33 by uwywijas          #+#    #+#             */
/*   Updated: 2023/12/09 17:07:50 by uwywijas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/map.h"

int main(void)
{
	t_map		*map;

	map = get_map("./maps/exemple.ber");
	if (map == NULL)
		return (ft_putstr_fd("Error\nWrong map format.\n", 1), 0);
	return (freetab(map->data, map->size.y), free(map), 0);
}