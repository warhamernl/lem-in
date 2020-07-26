/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstdelend.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/11 18:13:55 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/12/11 18:13:55 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

void	ft_lstdelend(t_list **list)
{
	t_list *iter;
	t_list *trail;

	if (!list)
		return ;
	iter = *list;
	if (!iter)
		return ;
	if (ft_listlen(iter) == 1)
	{
		ft_lstdelone(&iter, &ft_del);
		*list = NULL;
		return ;
	}
	trail = iter;
	while (iter->next)
	{
		trail = iter;
		iter = iter->next;
	}
	free(iter->content);
	free(iter);
	if (trail)
		trail->next = NULL;
}
