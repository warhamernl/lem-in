/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   error.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/02 10:35:37 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/12/06 21:44:28 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

/*
**	The 3 main error handlers for each phase of the program.
**	inspect error codes to trace the source of errors.
*/

void			error_input(int err_code, t_data *data, char *line)
{
	if (err_code > 0)
		ft_putendl("ERROR");
	free_data(&data);
	if (line != NULL)
		free(line);
	exit(0);
}

void			error_verif(int err_code, t_data *data)
{
	if (err_code > 0)
		ft_putendl("ERROR");
	free_data(&data);
	exit(0);
}

void			error_exec(int err_code, t_data *data, t_pathdata *path_data)
{
	if (err_code > 0)
		ft_putendl("ERROR");
	if (path_data != NULL)
		free_pathdata(path_data);
	if (data != NULL)
		free_data(&data);
	exit(0);
}
