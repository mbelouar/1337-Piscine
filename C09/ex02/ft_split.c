/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelouar <mbelouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 12:19:03 by mbelouar          #+#    #+#             */
/*   Updated: 2022/06/02 21:21:52 by mbelouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_if_contains(char c, char *sprs)
{
	int	i;

	i = 0;
	if (c == '\0')
		return (1);
	while (sprs[i] != '\0')
	{
		if (c == sprs[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_strings(char *str, char *sp)
{
	int	cnt;
	int	i;

	cnt = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (check_if_contains(str[i + 1], sp) == 1
			&& check_if_contains(str[i], sp) == 0)
				cnt += 1;
		i++;
	}
	return (cnt);
}

void	ft_strcpy(char *dest, char *src, char *sep)
{
	int	i;

	i = 0;
	while (check_if_contains(src[i], sep) == 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	full_str(char *str, char *sep, char **dst)
{
	int	index;
	int	i;
	int	j;

	i = 0;
	index = 0;
	while (str[i])
	{
		if (check_if_contains(str[i], sep))
			i++;
		else
		{
			j = 0;
			while (!check_if_contains(str[i + j], sep))
				j++;
			dst[index] = malloc(j + 1);
			ft_strcpy(dst[index], &str[i], sep);
			i += j;
			index++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	int		wc;
	char	**dest;

	wc = count_strings(str, charset);
	dest = (char **)malloc(sizeof(char *) * (wc + 1));
	if (!dest)
		return (0);
	full_str(str, charset, dest);
	dest[wc] = 0;
	return (dest);
}
