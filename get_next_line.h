/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouajjou <iouajjou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:20:01 by iouajjou          #+#    #+#             */
/*   Updated: 2023/11/10 15:05:57 by iouajjou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# define BUFFER_SIZE 42

typedef struct s_list
{
	char			*content;
	size_t			len;
	struct s_list	*next;
}	t_list;

char	*get_next_line(int fd);
t_list	*newlist(char *content, size_t len);
void	addback_list(t_list **lst, t_list *new);
char	*list_to_str(t_list *lst);
void	ft_lstdelone(t_list *lst);
void	ft_lstclear(t_list **lst);

#endif
