/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   screen.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/13 15:56:41 by jleu              #+#    #+#             */
/*   Updated: 2016/10/14 15:54:22 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCREEN_H
# define SCREEN_H

typedef struct	s_screen
{
	int			h;
	int			l;
}				t_screen;

t_screen		*screen_new();
t_screen		*screen_init(int h, int l);
void			screen_destroy(t_screen **screen);

#endif
