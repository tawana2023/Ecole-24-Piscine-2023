/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altawana <altawana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 12:08:35 by altawana          #+#    #+#             */
/*   Updated: 2023/08/22 09:30:45 by altawana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void fputchar(char c)
{
	write( 1, &c, 1);
}
void suit(char a, char b, char c)
{
	fputchar(a);
	fputchar(b);
	fputchar(c);
	if(!(a == '7' && b == '8' && c =='9'))
	{
		fputchar(',');
		fputchar(' ');
	}
}
void ft_print_comb(void)
{
	char a;
	char b;
	char c;
	
	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				suit(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
	
}
int main (void)
{
	ft_print_comb();
	return(0);
}