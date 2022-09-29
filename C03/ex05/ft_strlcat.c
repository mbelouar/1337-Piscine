/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelouar <mbelouar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 23:13:47 by mbelouar          #+#    #+#             */
/*   Updated: 2022/05/22 12:01:25 by mbelouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len_src;
	unsigned int	len_dest;

	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	j = len_dest;
	if (len_dest >= size)
		return (len_src + size);
	i = 0;
	while (src[i] != '\0' && j < size - 1)
	{
		dest[len_dest + i] = src[i];
		i++;
		j++;
	}
	dest[i + len_dest] = '\0';
	return (len_src + len_dest);
}
