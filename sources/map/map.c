/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uwywijas <uwywijas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:58:11 by uwywijas          #+#    #+#             */
/*   Updated: 2023/12/08 17:15:33 by uwywijas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/map.h"

int	count_line(int fd)
{
	unsigned char	buffer;
	int				result;
	int				reads;

	result = 0;
	reads = -1;
	while (reads > 0)
	{
		reads = read(fd, buffer, 1);
		if (reads == -1 || reads == 0)
			return (result);
		if (buffer == '\n')
			result++;
	}
	return (result);
}

t_map	*get_map(int fd)
{
	printf("Lines : %d\n", count_line(fd));
}
