/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   screen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/14 14:38:33 by jleu              #+#    #+#             */
/*   Updated: 2016/10/14 15:54:15 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "screen.h"

t_screen	*screen_new()
{
	t_screen *screen;

	screen = (t_screen*)malloc(sizeof(t_screen));
	return (screen);
}

t_screen	*screen_init(int h, int l)
{
	t_screen *screen;

	screen = screen_new();
	screen->h = h;
	screen->l = l;
	return (screen);
}

void		screen_destroy(t_screen **screen)
{
	if (*screen)
	{
		free(*screen);
		*screen = NULL;
	}
}
