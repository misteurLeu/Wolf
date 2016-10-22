/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raycaster.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/19 17:38:15 by jleu              #+#    #+#             */
/*   Updated: 2016/10/22 18:52:59 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAYCASTER_H
# define RAYCASTER_H

# include "ray.h"
# include "intersection.h"
# include "scene.h"

t_intersection	*raycaster_find_intersection(t_ray *ray, t_scene * scene);

#endif
