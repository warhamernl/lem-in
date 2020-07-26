/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memalloc.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/22 12:58:38 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/04/03 11:06:14 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_memalloc takes a size given in bytes, and allocates that much memory
**	to a pointer to be returned. Bytes are initialized to zero.
*/

void	*ft_memalloc(size_t size)
{
	void *ptr;

	ptr = (void*)malloc(size);
	if (ptr)
	{
		ft_memset(ptr, 0, size);
		return (ptr);
	}
	return (0);
}
