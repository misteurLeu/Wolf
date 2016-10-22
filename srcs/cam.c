/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cam.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/13 15:27:50 by jleu              #+#    #+#             */
/*   Updated: 2016/10/22 21:17:44 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cam.h"
#include <math.h>
#include <stdlib.h>

t_cam			*cam_new()
{
	t_cam		*cam;

	cam = (t_cam*)malloc(sizeof(t_cam));
	return (cam);
}

t_cam			*cam_init(t_2d_vector *o, t_2d_vector *d, double fov, t_screen *s)
{
	t_cam		*cam;

	cam = cam_new();
	cam->origin = o;
	cam->direction = d;
	cam->fov = fov;
	cam->screen = s;
	cam->angle = fov / s->l;
	return (cam);
}

t_cam			*cam_rotate_left(t_cam *cam, double angle)
{
	vector_rotate(cam->direction, 2.0 * M_PI - angle);
	return (cam);
}

t_cam			*cam_rotate_right(t_cam *cam, double angle)
{
	vector_rotate(cam->direction, angle);
	return (cam);
}

t_cam			*cam_move_front(t_cam *cam, double range)
{
	t_2d_vector v;

	v = *cam->direction;
	v = vector_mult(&v, range);
	cam->origin = vector_add(&v, cam->origin);
	return (cam);
}

t_cam			*cam_move_back(t_cam *cam, double range)
{
	t_2d_vector v;

	v = *cam->direction;
	v = vector_mult(&v, -1 * range);
	cam->origin = vector_add(&v, cam->origin);
	return (cam);
}

void			cam_destroy(t_cam **cam)
{
	if (*cam)
	{
		vector_destroy(&(*cam)->origin);
		vector_destroy(&(*cam)->direction);
		screen_destroy(&(*cam)->screen);
		free(*cam);
		*cam = NULL;
	}
}
