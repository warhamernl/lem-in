/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/21 09:11:38 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/03/22 14:35:56 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
**	ft_isalpha return 1 if a passed integer corresponds to a
**	alphabetical ascii value, and 0 if it does not.
*/

int	ft_isalpha(int c)
{
	if ((c >= 97 && c <= 122) ||
		(c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
