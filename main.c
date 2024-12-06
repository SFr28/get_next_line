/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfraslin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:54:28 by sfraslin          #+#    #+#             */
/*   Updated: 2024/12/05 17:52:44 by sfraslin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	int	fd;
	int	i;
	char	*str;

	i = 0;
	fd = open("test.txt", O_RDONLY);
	while (i < 15)
	{
		str = get_next_line(fd);
		printf("%d: %s", i, str);
		free(str);
		i++;
	}
	close(fd);
	return(0);
}
