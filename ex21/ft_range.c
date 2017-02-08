/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achambon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 19:28:43 by achambon          #+#    #+#             */
/*   Updated: 2016/11/22 23:18:55 by achambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int i;
	int j;

	j = 0;
	i = 0;
	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(int) * ((max - min) + 1));
	while (i < (max - min))
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
