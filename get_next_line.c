/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouajjou <iouajjou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:19:57 by iouajjou          #+#    #+#             */
/*   Updated: 2023/11/10 16:07:26 by iouajjou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*checkline(t_list *lst)
{
	while (lst)
	{
		if (lst->line)
			return ()
		lst = lst->next;
	}
}

char *get_next_line(int fd)
{
	static t_list	*lst;
	char			buffer[BUFFER_SIZE];
	size_t			i;

	trigger = 0;
	while (!trigger)
	{
		if (!list)
		{
			read(fd, buffer, BUFFER_SIZE);
			addback_list(lst, newlist(buffer))
		}
		if ()
	}

}

#include <fcntl.h>
#include <stdio.h>

int main()
{
	int fd = open("test", O_RDONLY);
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
	close(fd);
}
