/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   lemin.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/02 08:53:24 by jdunnink       #+#    #+#                */
/*   Updated: 2020/02/16 10:43:28 by mlokhors      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEMIN_H
# define LEMIN_H

# include "../libft/includes/libft.h"
# include "../libft/includes/get_next_line.h"

typedef	struct	s_pathdata
{
	int			rooms;
	int			total_links;
	int			start;
	int			end;
	int			**links;
	int			*links_num;
	int			total_paths;
	t_list		*paths;
}				t_pathdata;

typedef struct	s_data
{
	int			ants;
	int			ants_at_start;
	int			ants_in_maze;
	int			ants_at_end;
	int			rooms;
	int			total_links;
	int			start;
	int			end;
	int			*ant_distr;
	int			**links;
	int			*links_num;
	int			*state;
	int			*bfs_state;
	char		**room_names;
	t_list		*move_list;
	t_list		*lines;
	t_list		*coors;
}				t_data;

typedef	struct	s_coor
{
	int x;
	int	y;
}				t_coor;

typedef	struct	s_gnl
{
	ssize_t		dest;
	ssize_t		read;
	ssize_t		output;
	int			nl;
}				t_gnl;

typedef struct	s_varpack1
{
	int			link;
	int			best_link;
	int			i;
	float		best_rating;
	float		link_rating;
}				t_varpack1;

typedef	struct	s_link
{
	int src;
	int dst;
}				t_link;

/*
**	reading input and data structure setup
*/

void			setup(t_data **data, t_pathdata **path_data);
ssize_t			new_gnl(const int fd, char **line);
void			read_input(t_data **data);
void			init_data(t_data **data);
void			init_pathdata(t_data **data, t_pathdata **path_data);
void			init_state(t_data **data);
void			init_link_storage(t_data **data);
int				is_link(char *link, t_data *data);
int				is_valid_room(char *line, t_data *data);
void			add_room(char *line, t_data **data, int *type);
void			add_link(char *link, t_data **data);
void			verify_data(t_data *data);

/*
**	exploration algorithm
*/

void			n_push_ends(t_list *batch, t_pathdata *p);
t_list			*n_pop(t_list *batch, t_list ***ptr);
void			n_create_macro(t_list **macro, t_list *src);
int				n_compare(int ants, t_list *new, t_list *prev);
int				*n_bfs(t_data *data, int link, int **state);
t_list			*n_coll_paths(t_data *d, int *state, int src);
void			n_split_cycles(t_data *d, t_list **paths_l3);
void			n_dump_paths(t_list *paths_l3);
int				n_new_path(t_list *new, t_list **batch);
void			n_sort(t_list **paths_l3);
int				n_conflict(t_list *new, t_list *paths_l2);
int				gen_paths(t_data *d, t_pathdata *p);
int				n_alt_solve(int ants, t_list *paths_l3, t_pathdata *p);
void			n_find(t_data *data, t_list **paths_l3);
int				n_open_links(t_data *data, int *state, int room, int src);
int				n_conn(t_data *d, int room_1, int room_2);
void			n_regen(t_data *d, t_list *branch, t_list *origin);
void			n_free_paths(t_list *paths);
void			n_movelinks(t_list *ret, t_list *macro);
void			n_del(void *content, size_t content_size);
void			n_nodel(void *content, size_t content_size);
t_list			*n_combine(int ants, t_list *macro);
void			n_free_batch(t_list *batch);
void			n_take_origin(t_list **path);
int				n_count_cycles(t_list *path);

/*
**	traversal algorithm
*/

void			distribute_ants(int ants, t_list *batch, int *distr);
void			traverse_maze(t_data *data, t_pathdata *path_data);
void			distribute_ants(int ants, t_list *batch, int *distr);
void			add_start_rooms(int start, t_list *paths);
void			save_move_output(int ant_nbr, int next_room, t_data *data);
void			n_move(t_data *data, int room, int next, int path_index);

/*
**	utility
*/

int				get_room_index(char *roomname, t_data *data);
char			*get_room_name(int room_index, t_data *data);
t_list			*get_pathcpy(t_pathdata *path_data, int index);
t_list			*get_path(t_pathdata *path_data, int index);
int				moves(t_list *ants);
void			show_paths(t_list *paths);
void			free_paths(t_pathdata *data);
void			free_data(t_data **target);
void			free_pathdata(t_pathdata *target);
int				is_link_to_start(t_pathdata *data, int room);
void			block_link(t_data *data, int room);
void			dump_lines(t_data *data);

/*
**	error handlers
*/

void			error_verif(int err_code, t_data *data);
void			error_input(int err_code, t_data *data, char *line);
void			error_exec(int err_code, t_data *data, t_pathdata *pathdata);

/*
**	printing
*/

void			print_move_list(t_data *data);
void			print_data(char *segment, t_data **data);
void			print_path(t_list *path);

#endif
