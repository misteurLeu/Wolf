/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/22 16:31:32 by jleu              #+#    #+#             */
/*   Updated: 2016/10/22 22:08:21 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"
#include "raycaster.h"
#include "ray.h"
#include "scene.h"
#include "intersection.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <SDL2/SDL.h>

int	main()
{
	t_intersection	*inter;
	t_ray			*ray;
	t_scene			*scene;
	int				pixel;
	SDL_Event		event;
	int				exit;

	pixel = 0;
	SDL_Init(SDL_INIT_VIDEO);
	scene = scene_init(cam_init(vector_init(5.,5.), vector_init(1., 0), M_PI / 3.,
						screen_init(1024, 768)), map00(), 9, 10);
	ray = ray_init(scene->cam->origin, scene->cam->direction);
	while (++pixel < scene->cam->screen->l)
	{
		inter = raycaster_find_intersection(ray, scene);
		printf("val inter : %c pos_x : %f pos_y : %f dist : %f\n", *inter->p_o_s, inter->position->x, inter->position->y, vector_dist(inter->position, scene->cam->origin));
		vector_rotate(ray->direction, scene->cam->fov / scene->cam->screen->l);
		screen_set_pixel(scene->cam->screen, 666, pixel, scene->cam->screen->h / 2);
	}
	screen_draw(scene->cam->screen);
	exit = 0;
/*	while (!exit)
	{
		while (SDL_PollEvent(&event))
		{
			if (event.type == SDL_QUIT || (event.type == SDL_KEYDOWN && event.key.keysym.sym == SDLK_ESCAPE))
				exit = 1;
		}
	}*/
//	scene_destroy(&scene);
//	ray_destroy(&ray);
//	intersection_destroy(&inter);
	return (1);
}
