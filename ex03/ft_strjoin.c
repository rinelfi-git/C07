/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 22:51:25 by erijania          #+#    #+#             */
/*   Updated: 2024/01/30 23:24:47 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	ret;

	ret = 0;
	while (str[ret])
		ret++;
	return (ret);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	strlen;

	strlen = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[strlen + i] = src[i];
		i++;
	}
	dest[strlen + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		alloc_len;
	int		i;
	char	*ret;

	if (size == 0)
		return ("");
	alloc_len = 0;
	i = 0;
	while (i < size)
		alloc_len += ft_strlen(strs[i++]);
	alloc_len += (size - 1) * ft_strlen(sep) + 1;
	ret = malloc(sizeof(char) * alloc_len);
	if (ret)
	{
		i = 0;
		while (i < size - 1)
		{
			ret = ft_strcat(ret, strs[i]);
			ret = ft_strcat(ret, sep);
			i++;
		}
		ret = ft_strcat(ret, strs[i]);
		return (ret);
	}
	return (0);
}
