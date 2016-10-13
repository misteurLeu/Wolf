/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2d-vector.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/10 14:16:40 by jleu              #+#    #+#             */
/*   Updated: 2016/10/13 15:40:06 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef 2D-VECTOR_H
# define 2D-VECTOR_H

typedef struct	s_2d_vector
{
	double		x;
	double		y;
}				t_2d_vector;

t_2d_vector		*2d_vector_new();
t_2d_vector		*2d_vector_init(double x, double y);
t_2d_vector		*2d_vector_rotate(t_2d_vector *v, double angle);
t_2d_vector		*2d_vector_normalize(t_2d_vector *v);
double			2d_vector_norme(t_2d_vector *v);
double			2d_vector_dist(t_2d_vector *v1, t_2d_vector *v2);
void			2d_vector_destroy(t_2d_vector *v);
t_2d_vector		2d_vector_mult(t_2d_vector *v1, double value);

#endif
