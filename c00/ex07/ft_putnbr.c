/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altawana <altawana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:39:37 by altawana          #+#    #+#             */
/*   Updated: 2023/08/22 11:54:00 by altawana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	c;

	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	c = nb;
	if (c >= 10)
	{
		ft_putnbr(c/10);
	}
	ft_putchar(c % 10 + 48);
}

int main(void)
{
	ft_putnbr(2147483648);
	ft_putnbr(-2147483648);
}