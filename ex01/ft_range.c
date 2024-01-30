/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 22:35:12 by erijania          #+#    #+#             */
/*   Updated: 2024/01/30 22:46:41 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_range(int min, int max)
{
	int	*ret;
	int	size;
	int	i;

	if (min >= max)
		return (0);
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
		return (ret);
	}
	return (0);
}
