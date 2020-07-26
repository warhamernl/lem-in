/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/21 17:00:21 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/04/03 11:07:13 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_memmove copies len bytes from string src to string dst.
**	The two strings may overlap; the copy is always done in
**	a non-destructive manner.
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (src <= dst)
	{
		while (len > 0)
		{
			len--;
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
		}
	}
	else
		ft_memcpy(dst, src, len);
	return ((void *)dst);
}
