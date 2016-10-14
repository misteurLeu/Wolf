/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scene.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/13 15:54:42 by jleu              #+#    #+#             */
/*   Updated: 2016/10/14 15:49:39 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCENE_H
# define SCENE_H

# include "cam.h"

typedef struct	s_scene
{
	t_cam		*cam;
	char		**scene;
	int			sizex;
	int			sizey;
}				t_scene

t_scene			*scene_new();
t_scene			*scene_init(t_cam *cam, char **scene, int x, int y);
void			scene_destroy(t_scene **scene);

#endif
