/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altawana <altawana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 13:32:07 by altawana          #+#    #+#             */
/*   Updated: 2023/08/23 14:11:36 by altawana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int i; 
	int swap;
	i = 0;
	while (i < (size -1))
	{
		if (tab[i] > tab[i + 1])
		{
			swap = tab[i];
			tab[i] = tab[ i +1];
			tab[i + 1] = swap;
			if([i !=0)
			{
				--i;
			}
		}
		else{
			i++;
		}
	}
}
