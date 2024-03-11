/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaiser <dkaiser@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 16:45:21 by dkaiser           #+#    #+#             */
/*   Updated: 2024/03/11 13:25:08 by dkaiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*cur_new;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	content = f(lst->content);
	cur_new = ft_lstnew(content);
	if (!cur_new)
	{
		del(content);
		return (NULL);
	}
	result = cur_new;
	if (!lst->next)
		return (result);
	lst = lst->next;
	while (lst)
	{
		content = f(lst->content);
		cur_new->next = ft_lstnew(content);
		if (!cur_new->next)
		{
			del(content);
			ft_lstclear(&result, del);
			return (NULL);
		}
		if (!lst->next)
			return (result);
		lst = lst->next;
		cur_new = cur_new->next;
	}
	return (result);
}
