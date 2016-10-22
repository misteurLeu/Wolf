/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   screen.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/13 15:56:41 by jleu              #+#    #+#             */
/*   Updated: 2016/10/22 22:02:29 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCREEN_H
# define SCREEN_H

#include <SDL2/SDL.h>

typedef struct		s_screen
{
	int				h;
	int				l;
	SDL_Surface 	*surface;
	SDL_Window		*sdl_win;
	SDL_Renderer	*sdl_ren;
}					t_screen;

t_screen		*screen_new();
t_screen		*screen_init(int l, int h);
void			screen_set_pixel(t_screen *s, uint32_t color, unsigned int x, unsigned int y);
void			screen_draw(t_screen *s);
void			screen_destroy(t_screen **screen);

#endif
