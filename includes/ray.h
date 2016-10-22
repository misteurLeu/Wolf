/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ray.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/19 17:39:25 by jleu              #+#    #+#             */
/*   Updated: 2016/10/22 17:19:00 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAY_H
# define RAY_H

#include "2d_vector.h"

typedef struct	s_ray
{
	t_2d_vector *origin;
	t_2d_vector *direction;
}				t_ray;

t_ray			*ray_new();
t_ray			*ray_init(t_2d_vector *o, t_2d_vector *d);
void			ray_destroy(t_ray **ray);

#endif
