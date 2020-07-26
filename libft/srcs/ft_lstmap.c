/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/27 09:54:23 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/04/03 11:05:57 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_lstmap iterates trough an existing linked list and creates a list copy
**	resulting from the application of the function passed as argument for each
**	node in the list.
*/

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*map;

	if (lst)
	{
		map = f(lst);
		map->next = ft_lstmap(lst->next, f);
		return (map);
	}
	return (NULL);
}
