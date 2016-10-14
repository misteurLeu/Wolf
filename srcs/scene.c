/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scene.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/14 15:43:55 by jleu              #+#    #+#             */
/*   Updated: 2016/10/14 15:50:30 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scene.h"
#include "cam.h"

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
	scene->x = x;
	scene->y = y;
}

void	scene_destroy(t_scene **scene)
{
	if (*scene)
	{
		free(scene);
		*scene = NULL;
	}
}
