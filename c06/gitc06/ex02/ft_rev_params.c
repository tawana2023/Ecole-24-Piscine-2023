/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altawana <altawana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:13:26 by altawana          #+#    #+#             */
/*   Updated: 2023/08/23 08:54:40 by altawana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char *av[])
{
	int	i;
	int	k;

	i = 1;
	if (ac > 1)
	{
		while (ac > 1)
		{
			k = -1;
			while (av[ac - 1][++k] != '\0')
				ft_putchar(av[ac - 1][k]);
			ft_putchar('\n');
			ac--;
		}
	}
	return (0);
}
