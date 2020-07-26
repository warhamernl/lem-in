/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/21 15:31:35 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/04/03 11:06:46 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_memcmp compares s1 to s2 up to n bytes, returning a positive value
**	if s1 is higher than s2, and a negative value if s2 is higher than
**	s1. If s1 is equal to s2, 0 is retured.
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *one;
	unsigned char *two;

	if (!s1 && !s2 && !n)
		return (0);
	one = (unsigned char*)s1;
	two = (unsigned char*)s2;
	while (n)
	{
		n--;
		if (*one != *two)
			return ((unsigned char)*one - *two);
		one++;
		two++;
	}
	return (0);
}
