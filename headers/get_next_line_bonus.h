/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrouchy <hrouchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 11:05:30 by hrouchy           #+#    #+#             */
/*   Updated: 2025/06/02 11:48:29 by hrouchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>



char	*get_next_line(int fd);
char	*ft_read(int fd, char *static_str);
char	*ft_line(char *statict_str);

void	*ft_calloc(size_t nmemb, size_t size);
int		ft_strlen(const char *str);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strjoin(const char *s1, const char *s2);

char	*ft_strchr(const char *s, int c);
char	*ft_next(char *buffer);
char	*ft_free(char *buffer, char *buf);
char	*ft_clean(char *static_str);
char	*ft_strdup(const char *s);

#endif
