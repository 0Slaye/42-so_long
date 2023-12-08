/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uwywijas <uwywijas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:47:33 by uwywijas          #+#    #+#             */
/*   Updated: 2023/12/08 18:08:39 by uwywijas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/imports.h"
#include "../includes/map.h"

int main(void)
{
	t_map		*map;

	map = get_map("./maps/exemple.ber");
	return (0);
}