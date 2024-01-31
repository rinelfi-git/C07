/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 19:14:56 by erijania          #+#    #+#             */
/*   Updated: 2024/01/30 19:41:13 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	ft_strlen;

	ft_strlen = 0;
	while (str[ft_strlen])
		ft_strlen++;
	return (ft_strlen);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	src_i;

	src_i = -1;
	while (src[++src_i])
		dest[src_i] = src[src_i];
	dest[src_i] = '\0';
	return (dest);
}

char	*ft_strdup(char	*str)
{
	char	*ret;
	int		str_len;

	str_len = ft_strlen(str) + 1;
	ret = malloc(sizeof(char) * str_len);
	if (ret)
		return (ft_strcpy(ret, str));
	return (0);
}
