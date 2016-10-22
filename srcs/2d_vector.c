/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2d-vector.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/10 14:20:49 by jleu              #+#    #+#             */
/*   Updated: 2016/10/22 18:29:46 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "2d_vector.h"
#include <stdlib.h>

t_2d_vector		*vector_new()
{
	t_2d_vector *v;

	v = (t_2d_vector*)malloc(sizeof(t_2d_vector));
	return (v);
}

t_2d_vector		*vector_init(double x, double y)
{
	t_2d_vector *v;

	v = vector_new();
	v->x = x;
	v->y = y;
	return (v);
}

t_2d_vector		*vector_rotate(t_2d_vector *v, double angle)
{
	double x;
	double y;

	x = v->x;
	y = v->y;
	v->x = x * cos(angle) - y * sin(angle);
	v->y = x * sin(angle) + y * cos(angle);
	return (v);
}

t_2d_vector		*vector_normalize(t_2d_vector *v)
{
	double norme;

	norme = vector_norme(v);
	v->x /= norme;
	v->y /= norme;
	return (v);
}

double			vector_norme(t_2d_vector *v)
{
	return (sqrt(v->x * v->x + v->y * v->y));
}

double			vector_dist(t_2d_vector *v1, t_2d_vector *v2)
{
	t_2d_vector v3;

	v3.x = v2->x - v1->x;
	v3.y = v2->y - v1->y;
	return (vector_norme(&v3));
}

t_2d_vector		*vector_add(t_2d_vector *v1, t_2d_vector *v2)
{
	v1->x += v2->x;
	v1->y += v2->y;
	return (v1);
}

t_2d_vector		vector_mult(t_2d_vector *v1, double value)
{
	t_2d_vector v2;

	v2 = *v1;
	v2.x *= value;
	v2.y *= value;
	return (v2);
}

void			vector_destroy(t_2d_vector **v)
{
	if (*v)
	{
		free (*v);
		*v = NULL;
	}
}
