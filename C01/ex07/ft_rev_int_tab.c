/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelouar <mbelouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 22:53:36 by mbelouar          #+#    #+#             */
/*   Updated: 2022/05/16 13:29:35 by mbelouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	cnt;

	i = 0;
	size -= 1;
	while (size > i)
	{
		cnt = tab[i];
		tab[i] = tab[size];
		tab[size] = cnt;
		i++;
		size--;
	}
}
