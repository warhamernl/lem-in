/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/23 11:38:14 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/04/03 11:08:22 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_putchar_fd writes the char c to the file discriptor passed
**	as argument.
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
