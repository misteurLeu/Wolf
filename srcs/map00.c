/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map00.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/22 16:22:47 by jleu              #+#    #+#             */
/*   Updated: 2016/10/22 17:17:06 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**map00()
{
	char **map;

	map = (char**)malloc(sizeof(char*) * 10);
	map[0] = (char*)malloc(sizeof(char) * 10);
	map[1] = (char*)malloc(sizeof(char) * 10);
	map[2] = (char*)malloc(sizeof(char) * 10);
	map[3] = (char*)malloc(sizeof(char) * 10);
	map[4] = (char*)malloc(sizeof(char) * 10);
	map[5] = (char*)malloc(sizeof(char) * 10);
	map[6] = (char*)malloc(sizeof(char) * 10);
	map[7] = (char*)malloc(sizeof(char) * 10);
	map[8] = (char*)malloc(sizeof(char) * 10);
	map[9] = (char*)malloc(sizeof(char) * 10);
	map[0] = "111111111";
	map[1] = "100000001";
	map[2] = "100000001";
	map[3] = "100000001";
	map[4] = "100000001";
	map[5] = "100000001";
	map[6] = "100000001";
	map[7] = "100000001";
	map[8] = "100000001";
	map[9] = "111111111";
	return (map);
}
