/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intersection.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/14 15:54:58 by jleu              #+#    #+#             */
/*   Updated: 2016/10/14 18:28:59 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERSECTION_H
# define INTERSECTION_H

#include "2d-vector.h"

typedef struct	s_intersection
{
	char		**p_o_s;
	t_2d_vector	*position;
}				t_intersection;

t_intersection	*intersection_new();
t_intersection	*intersection_init(t_2d_vector *pos, char **p_o_s);
void			intersection_destroy(t_intersection **inter);

#endif
