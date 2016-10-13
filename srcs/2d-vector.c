/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2d-vector.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/10 14:20:49 by jleu              #+#    #+#             */
/*   Updated: 2016/10/13 16:16:19 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "2d-vector.h"

t_2d_vector		*2d_vector_new()
{
	t_2d_vector *v;

	v = (t_2dvector*)malloc(sizeof(t_2dvector));
	return (v);
}

t_2d_vector		*2d_vector_init(double x, double y)
{
	t_2d_vector *v;

	v = 2d_vector_new();
	v->x = x;
	v->y = y;
	return (v);
}

t_2d_vector		*2d_vector_rotate(t_2d_vector *v, double angle)
{
	double x;
	double y;

	x = v->x;
	y = v->y;
	v->x = x * cos(angle) - y * sin(angle);
	v->y = x * sin(angle) + y * cos(angle);
	return (v);
}

t_2d_vector		*2d_vector_normalize(t_2d_vector *v)
{
	double norme;

	norme = 2d_vector_norme(v);
	v->x /= norme;
	v->y /= norme;
	return (v);
}

double			2d_vector_norme(t_2d_vector *v)
{
	return (sqrt(v.x * v.x + v.y * v.y));
}

double			2d_vector_dist(t_2d_vector *v1, t_2d_vector v2)
{
	t_2d_vector v3;

	v3.x = v2->x - v1.x;
	v3.y = v2.y - v1.y;
	return (2d_vector_norme(v3));
}

t_2d_vector		vector_add(t_2d_vector *v1, t_2d_vector *v2)
{
	t_2d_vector v3;

	v3.x = v1.x + v2.x;
	v3.y = v1.y + v2.y;
	return (v3);
}

t_2d_vector		vector_mult(t_2d_vector *v1, double value)
{
	t_2d_vector v2;

	v2 = *v1;
	v2->x *= value;
	v2->y *= value;
	return (v2);
}

void			2d_vector_destroy(t_2d_vector *v)
{
	if (v)
	{
		free (v);
		v = NULL;
	}
}
