/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striter.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/22 15:25:26 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/03/27 13:01:10 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
**	ft_striter iterates through the string pointed to by s, and applies
**	the function 'f' to each character in the string.
*/

void	ft_striter(char *s, void (*f)(char *s))
{
	int i;

	if (!s || !f)
		return ;
	i = 0;
	while (*s != '\0')
	{
		f(s);
		s++;
	}
}
