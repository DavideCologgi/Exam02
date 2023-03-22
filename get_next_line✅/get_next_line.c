/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcologgi <dcologgi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 09:58:37 by dcologgi          #+#    #+#             */
/*   Updated: 2023/03/02 15:57:21 by dcologgi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	buffer;
	char	line[700000];
	int		i;
	int		b;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	i = 0;
	b = read(fd, &buffer, 1);
	while (b > 0)
	{
		line[i] = buffer;
		i++;
		if (buffer == '\n')
			break ;
		b = read(fd, &buffer, 1);
	}
	line[i] = '\0';
	if (b < 0 && i == 0)
		return (NULL);
	return (ft_strdup(line));
}
