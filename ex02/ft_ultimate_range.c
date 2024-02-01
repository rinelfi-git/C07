/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 22:47:51 by erijania          #+#    #+#             */
/*   Updated: 2024/02/01 18:22:41 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ret;
	int	size;
	int	i;

	if (min >= max)
	{
		range = 0;
		return (0);
	}
	size = max - min;
	ret = malloc(sizeof(int) * size);
	if (ret)
	{
		i = 0;
		while (i < size)
		{
			ret[i] = i + min;
			i++;
		}
		range[0] = ret;
		return (size);
	}
	return (-1);
}
