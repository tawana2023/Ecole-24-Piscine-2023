/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altawana <altawana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 11:52:54 by altawana          #+#    #+#             */
/*   Updated: 2023/08/22 10:36:47 by altawana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ftputchar(char c)
{
	write(1, &c, 1);
}
void ft_print(int a, int b)
{
	ftputchar(a / 10 + '0');
	ftputchar(a % 10 + '0');
	ftputchar( ' ');
	ftputchar(b / 10 + '0');
	ftputchar(b % 10 + '0');
}
void ft_print_comb2()
{
	int a;
	int b;
	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print(a, b);
			if(!(a == 98 && b == 99))
			{
				ftputchar(',');
				ftputchar(' ');
			}
			b++;
		}
		a++;
	}
}
int main (void)
{
	ft_print_comb2();
	return(0);
}