/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altawana <altawana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 10:13:29 by altawana          #+#    #+#             */
/*   Updated: 2023/08/22 18:48:53 by altawana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i * i <= nb && i < 46341)
		i++;
	i--;
	if (i * i == nb)
		return (i);
	return (0);
}
/*
int	main(void)
{
	int	i;
	int	seg_fault;

	seg_fault = 100000000;
	i = 2147483647;
	// while (++i != Seg_Fault)
	printf("%d: %d\n", i, ft_sqrt(i));
}
*/
