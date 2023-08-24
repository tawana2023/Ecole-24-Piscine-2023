/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interative_power.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altawana <altawana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 09:57:32 by altawana          #+#    #+#             */
/*   Updated: 2023/08/23 10:51:22 by altawana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	exr;

	exr = nb;
	while (power > 1)
	{
		exr = exr * nb;
		power--;
	}
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (exr);
}
/*
#include <stdio.h>
int	main(void)
{
	int	nb;
	int	power;

	nb = 5;
	power = 4;
	printf("%d\n", ft_iterative_power(nb, power));
}
*/
