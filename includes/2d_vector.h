/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2d-vector.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/10 14:16:40 by jleu              #+#    #+#             */
/*   Updated: 2016/10/22 18:47:05 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef D_VECTOR_H
# define D_VECTOR_H

typedef struct	s_2d_vector
{
	double		x;
	double		y;
}				t_2d_vector;

t_2d_vector		*vector_new();
t_2d_vector		*vector_init(double x, double y);
t_2d_vector		*vector_rotate(t_2d_vector *v, double angle);
t_2d_vector		*vector_normalize(t_2d_vector *v);
double			vector_norme(t_2d_vector *v);
double			vector_dist(t_2d_vector *v1, t_2d_vector *v2);
t_2d_vector		vector_mult(t_2d_vector *v1, double value);
t_2d_vector		*vector_add(t_2d_vector *v1, t_2d_vector *v2);
void			vector_destroy(t_2d_vector **v);

#endif
