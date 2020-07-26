/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstiter.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/27 09:53:57 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/04/03 11:05:49 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_lstiter iter iterates through an existing linked list and applies
**	the function 'f' passed as argument, to each node in the list.
*/

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	if ((lst)->next)
		ft_lstiter((lst)->next, f);
	f(lst);
}
