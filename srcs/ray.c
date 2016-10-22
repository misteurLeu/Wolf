/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ray.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/19 17:42:27 by jleu              #+#    #+#             */
/*   Updated: 2016/10/22 17:17:35 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "2d_vector.h"
#include "ray.h"
#include <stdlib.h>

t_ray	*ray_new()
{
	t_ray *ray;

	ray = (t_ray*)malloc(sizeof(t_ray));
	return (ray);
}

t_ray	*ray_init(t_2d_vector *o, t_2d_vector *d)
{
	t_ray *ray;

	ray = ray_new();
	ray->origin = o;
	ray->direction = d;
	return (ray);
}

void	ray_destroy(t_ray **ray)
{
	if (*ray)
	{
		free(*ray);
		*ray = NULL;
	}
}
