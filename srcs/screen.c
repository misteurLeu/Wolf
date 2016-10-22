/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   screen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/14 14:38:33 by jleu              #+#    #+#             */
/*   Updated: 2016/10/22 22:08:23 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "screen.h"
#include <stdlib.h>
#include <SDL2/SDL.h>

t_screen	*screen_new()
{
	t_screen *screen;

	screen = (t_screen*)malloc(sizeof(t_screen));
	return (screen);
}

t_screen	*screen_init(int l, int h)
{
	t_screen *screen;

	screen = screen_new();
	screen->h = h;
	screen->l = l;
	screen->surface = SDL_CreateRGBSurface(0, l, h, 32, 0, 0, 0, 0);
	screen->sdl_win = SDL_CreateWindow("Wolf3d",
			SDL_WINDOWPOS_UNDEFINED,
			SDL_WINDOWPOS_UNDEFINED,
			l,
			h,
			SDL_WINDOW_SHOWN);
	screen->sdl_ren = SDL_CreateRenderer(screen->sdl_win, -1,
			SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	SDL_SetRenderDrawColor(screen->sdl_ren, 0x00, 0x00, 0x00, 0x00);
	return (screen);
}

void			screen_set_pixel(t_screen *s, uint32_t color,
		unsigned int x, unsigned int y)
{
	*((uint32_t*)(s->surface->pixels) + x + y * s->surface->w) = color;
}

void		screen_draw(t_screen *s)
{
	SDL_Texture *tex;

	tex = SDL_CreateTextureFromSurface(s->sdl_ren, s->surface);
	SDL_RenderClear(s->sdl_ren);
	SDL_RenderCopy(s->sdl_ren, tex, 0, 0);
	SDL_RenderPresent(s->sdl_ren);
	SDL_DestroyTexture(tex);
}

void		screen_destroy(t_screen **screen)
{
	if (*screen)
	{
		free(*screen);
		*screen = NULL;
	}
}
