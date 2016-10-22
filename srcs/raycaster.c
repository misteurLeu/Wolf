/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raycaster.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/19 18:59:07 by jleu              #+#    #+#             */
/*   Updated: 2016/10/22 19:16:56 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "raycaster.h"
#include "ray.h"
#include "intersection.h"
#include "scene.h"
#include <stdlib.h>

t_intersection	*raycaster_find_intersection(t_ray *ray, t_scene *scene)
{
	t_intersection	*inter;
	t_2d_vector		vect;
	t_2d_vector		temp;
	int 			prof;
	char			last;

	temp = *ray->origin;
	prof = -1;
	vect = vector_mult(ray->direction, 0.1);
	while (((int)temp.x < scene->sizex && temp.x >= 0.) &&
			((int)temp.y < scene->sizey && temp.y >= 0.) &&
			scene->scene[(int)temp.x][(int)temp.y] == '0')
		vector_add(&temp, &vect);
	if (scene->scene[(int)temp.x][(int)temp.y] != 0 && scene->scene[(int)temp.x][(int)temp.y] != '0')
	{
		last = scene->scene[(int)temp.x][(int)temp.y];
		while (++prof < 10)
		{
			if (scene->scene[(int)temp.x][(int)temp.y] == last)
					vect = vector_mult(&vect, -0.5);
			else
					vect = vector_mult(&vect, 0.5);
			vector_add(&temp, &vect);
		}
		inter = intersection_init(vector_init(temp.x, temp.y),
				&last);
	}
	return (inter);
}
