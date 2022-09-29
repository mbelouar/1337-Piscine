/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelouar <mbelouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:49:25 by mbelouar          #+#    #+#             */
/*   Updated: 2022/06/01 13:04:12 by mbelouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;
	int	res;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	res = ft_strlen(src);
	return (res);
}

int	len_total(int size, char **str)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (i < size)
	{
		cnt += ft_strlen(str[i]);
		i++;
	}
	return (cnt);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*dest;
	int		glob_size;
	char	*d;

	if (size == 0)
		return (malloc(sizeof(char)));
	i = -1;
	glob_size = len_total(size, strs) + ft_strlen(sep) * (size - 1);
	dest = malloc(sizeof(char) * (glob_size + 1));
	if (!dest)
		return (0);
	dest[0] = 0;
	d = dest;
	while (++i < size)
	{
		dest += ft_strcat(dest, strs[i]);
		if (i < size - 1)
			dest += ft_strcat(dest, sep);
	}
	*dest = '\0';
	return (d);
}
