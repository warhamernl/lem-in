/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/20 13:59:28 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/03/22 15:08:29 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
**	ft_strcmp compares string s1 to string s2 and returns 0 if the strings are
**	equal, non-zero if the they are not.
*/

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
