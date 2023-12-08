/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uwywijas <uwywijas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:47:33 by uwywijas          #+#    #+#             */
/*   Updated: 2023/12/08 20:12:07 by uwywijas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/imports.h"
#include "../includes/map.h"

int main(void)
{
	t_map		*map;

	map = get_map("./maps/exemple.ber");
	return (freetab(map->data, map->size.y), free(map), 0);
}