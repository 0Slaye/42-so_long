/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   common.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uwywijas <uwywijas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 18:20:53 by uwywijas          #+#    #+#             */
/*   Updated: 2023/12/08 18:49:19 by uwywijas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/common.h"

void	print_and_exit(char *error)
{
	ft_putstr_fd("Error\n", 1);
	ft_putstr_fd(error, 1);
	ft_putstr_fd("\n", 1);
	exit(EXIT_FAILURE);
}

void	freetab(char **value, int i)
{
	i++;
	while (--i >= 0)
		free(value[i]);
	free(value);
}