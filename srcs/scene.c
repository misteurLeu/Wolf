/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scene.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/14 15:43:55 by jleu              #+#    #+#             */
/*   Updated: 2016/10/22 21:17:58 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scene.h"
#include "cam.h"
#include <stdlib.h>

t_scene	*scene_new()
{
	t_scene *s;

	s = (t_scene*)malloc(sizeof(t_scene));
	return (s);
}

t_scene	*scene_init(t_cam *cam, char **s, int x, int y)
{
	t_scene *scene;

	scene = scene_new();
	scene->cam = cam;
	scene->scene = s;
	scene->sizex = x;
	scene->sizey = y;
	return (scene);
}

void	scene_destroy(t_scene **scene)
{
	if (*scene)
	{
		cam_destroy(&(*scene)->cam);
		free(scene);
		*scene = NULL;
	}
}
