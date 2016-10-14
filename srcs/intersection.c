/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intersection.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/14 15:59:54 by jleu              #+#    #+#             */
/*   Updated: 2016/10/14 18:28:56 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "2d-vector.h"

ntersection		*intersection_new()
{
	t_intersection inter;

	inter = (t_intersection*)malloc(sizeof(t_intersection));
	return (inter);
}

t_intersection	*intersection_init(t_2d_vector *pos, char **p_o_s)
{
	t_intersection inter;

	inter = interection_new();
	inter->p_o_s = p_o_s;
	inter->position = pos;
	return (inter);
}

void			intersection_destroy(t_intersection **inter)
{
	if (*inter)
	{
		free (*inter);
		*inter = NULL;
	}
}
