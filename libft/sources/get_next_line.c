/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:48:27 by agimi             #+#    #+#             */
/*   Updated: 2022/12/26 15:41:43 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*kra(int fd, char *naah)
{
	char	*buff;
	int		ak;

	buff = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	ak = 1;
	while (!ft_strchr(naah, '\n') && ak != 0)
	{
		ak = read(fd, buff, BUFFER_SIZE);
		if (ak == -1)
		{
			free(naah);
			naah = NULL;
			break ;
		}
		buff[ak] = '\0';
		naah = ft_strjoin(naah, buff);
	}
	free(buff);
	return (naah);
}

char	*get_next_line(int fd)
{
	char		*ster;
	static char	*naah[4096];

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	naah[fd] = kra(fd, naah[fd]);
	if (!naah[fd])
		return (NULL);
	ster = thisone(naah[fd]);
	naah[fd] = notthisone(naah[fd]);
	return (ster);
}