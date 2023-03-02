/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcologgi <dcologgi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 09:59:04 by dcologgi          #+#    #+#             */
/*   Updated: 2023/03/02 10:23:33 by dcologgi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *line)
{
	int	len;

	len = 0;
	while (line[len] != '\0')
		len++;
	return (len);
}

char	*ft_strdup(char *line)
{
	char	*duplicate;
	int		i;
	int		size;

	i = 0;
	if (!line)
		return (0);
	size = ft_strlen(line);
	duplicate = malloc(sizeof(char *) * (size + 1));
	if (!duplicate)
		return (0);
	while (line[i] != '\0')
	{
		duplicate[i] = line[i];
		i++;
	}
	duplicate[i] = '\0';
	return (duplicate);
}
