/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altawana <altawana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 09:46:53 by altawana          #+#    #+#             */
/*   Updated: 2023/08/22 18:50:40 by altawana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	ex;

	ex = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		ex = ex * nb;
		nb--;
	}
	return (ex);
}
/*
int	main(void)
{
	printf("%i", ft_iterative_factorial(3));
}
*/
