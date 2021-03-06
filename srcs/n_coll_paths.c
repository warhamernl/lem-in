/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   n_coll_paths.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/06 07:27:08 by jdunnink      #+#    #+#                 */
/*   Updated: 2020/02/06 07:27:08 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

static	void	n_parse(t_data *d, int src, int dst, t_list **l1)
{
	int		i;
	int		links;
	int		link;
	int		depth;

	ft_lstpushfront(&src, l1, sizeof(int *));
	if (src == dst)
		return ;
	i = 0;
	links = d->links_num[src];
	depth = d->bfs_state[src];
	if (depth == 1)
		return (ft_lstpushfront(&dst, l1, sizeof(int *)));
	while (i < links)
	{
		link = d->links[src][i];
		if (link != -1 && d->bfs_state[link] == depth - 1)
			n_parse(d, link, dst, l1);
		i++;
	}
}

/*
**	n_coll_paths receives the maze state generated by n_bfs and
**	parses all the paths that have reached the start node.
**	the final path collection is returned as a linked list
**	of linked lists. The bfs_data in n_bfs is run from
**	end to start, so the parsing is done from start to end.
**
**	example:
**	n_coll_paths found 2 paths, ( 4, 6, 7 ) and (67, 34, 99)
**
**	paths_l2 (node 1)
**		iter->content = path_1 (linked_list) 4, 6, 7
**		iter->next = node 2
**
**	paths_l2 (node 2)
**		iter->content = path_2 (linked_list) 67, 34, 99
**		iter->next = NULL
*/

t_list			*n_coll_paths(t_data *d, int *state, int src)
{
	int		i;
	int		links;
	int		link;
	t_list	*paths_l2;
	t_list	*paths_l1;

	paths_l2 = NULL;
	paths_l1 = NULL;
	d->bfs_state = state;
	i = 0;
	links = d->links_num[d->start];
	while (i < links)
	{
		link = d->links[d->start][i];
		if (link != -1 &&
			(state[link] != 0 || (state[link] == 0 &&
			link == src)))
		{
			n_parse(d, link, src, &paths_l1);
			ft_lstappend(&paths_l2, paths_l1, sizeof(t_list *));
			paths_l1 = NULL;
		}
		i++;
	}
	return (paths_l2);
}
