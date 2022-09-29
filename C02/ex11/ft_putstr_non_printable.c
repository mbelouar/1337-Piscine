/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelouar <mbelouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 10:25:23 by mbelouar          #+#    #+#             */
/*   Updated: 2022/05/19 14:26:21 by mbelouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	aff(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (! (str[i] >= 32 && str[i] <= 126))
		{
			aff('\\');
			aff("0123456789abcdef"[str[i] / 16]);
			aff("0123456789abcdef"[str[i] % 16]);
			i++;
		}
		aff(str[i]);
		i++;
	}
}
