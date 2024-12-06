/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfraslin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 11:58:22 by sfraslin          #+#    #+#             */
/*   Updated: 2024/12/06 17:14:45 by sfraslin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

char	*get_next_line(int fd);
char	*ft_join(char *s1, char *s2, int j, int r);
char	*ft_new_line(char *stash, char *str);
char	*ft_read(char *str, char *stash, int fd, int i);
char	*ft_zero(char *buffer);
void	ft_cpy(char *dest, char *src, long int n);
void	ft_stash(char *buffer, char *stash);
int		ft_len(char *str, int r);

#endif
