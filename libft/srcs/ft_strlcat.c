/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/22 10:27:23 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/03/29 13:00:03 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	The strlcat function appends the NUL-terminated string src to the
**	end of dst.  It will append at most n bytes, NUL-terminating the result.
**	The source and destination strings should not overlap, as the behavior
**	is undefined. The value returned is the size of the intended concatenation.
*/

size_t		ft_strlcat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	if (!s1 && !s2 && !n)
		return (0);
	i = 0;
	j = 0;
	while (s1[i] && i < n)
		i++;
	while (s2[j] && i + j + 1 < n)
	{
		s1[i + j] = s2[j];
		j++;
	}
	if (i != n)
		s1[i + j] = '\0';
	return (i + ft_strlen(s2));
}
