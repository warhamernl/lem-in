/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstpushfront.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/08 17:48:39 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/04/14 15:20:28 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_lstpushfromt creates a new node structure (if it does not exist)
**	 and adds it to the start of an existing linked list.
*/

void	ft_lstpushfront(void const *bytes, t_list **lst, size_t size)
{
	if (lst != NULL && bytes != NULL)
	{
		if (!*lst)
			*lst = ft_lstnew(bytes, size);
		else
			ft_lstadd(lst, ft_lstnew(bytes, size));
	}
}
