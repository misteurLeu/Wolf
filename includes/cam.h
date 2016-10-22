/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cam.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/10 15:19:38 by jleu              #+#    #+#             */
/*   Updated: 2016/10/22 20:52:22 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAM_H
# define CAM_H

# include "2d_vector.h"
# include "screen.h"

typedef struct s_cam
{
	t_2d_vector *origin;
	t_2d_vector *direction;
	t_screen	*screen;
	double		fov;
	double		angle;
}				t_cam;

t_cam			*cam_new();
t_cam			*cam_init(t_2d_vector *o, t_2d_vector *d, double fov, t_screen *s);
t_cam			*cam_rotate_left(t_cam *cam, double angle);
t_cam			*cam_rotate_right(t_cam *cam, double angle);
t_cam			*cam_move_front(t_cam *cam, double range);
t_cam			*cam_move_back(t_cam *cam, double range);
void			cam_destroy(t_cam **cam);

#endif
