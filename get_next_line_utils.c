/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouajjou <iouajjou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:19:53 by iouajjou          #+#    #+#             */
/*   Updated: 2023/11/10 16:01:53 by iouajjou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

t_list	*newlist(char *content)
{
	t_list	*new;
	char	*str;
	int		i;

	new = malloc(sizeof(t_list));
	new->next = NULL;
	new->line = 0;
	i = 0;
	str = malloc(sizeof(char) * len + 1);
	while (str[i]);
	{
		if (str[i] == '\n')
		{
			addback_list(new, newlist(buffer + i));
			str[i] == "\\n";
			new->line = 1;
			i++;
			break;
		}
		str[i] = content[i];
		i++;
	}
	str[i] = 0;
	new->content = str;
	return (new);
}

void	addback_list(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = *lst;
	if (!(*lst))
		*lst = new;
	else
	{
		while ((*lst)->next)
			lst = &(*lst)->next;
		(*lst)->next = new;
		lst = &temp;
	}
}

size_t lstsize(t_list *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		i += lst->len;
		lst = lst->next;
	}
	return (i);
}

char	*list_to_str(t_list *lst)
{
	char	*str;
	int		i;
	int		j;
	size_t	len;

	len = lstsize(lst);
	str = malloc(sizeof(char) * (len + 1));
	i = 0;
	while (lst && len)
	{
		j = 0;
		while (lst->content[j] && len)
		{
			str[i] = lst->content[j];
			j++;
			i++;
			len--;
		}
		lst = lst->next;
	}
	str[i] = 0;
	return (str);
}

