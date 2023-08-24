/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altawana <altawana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 08:07:31 by altawana          #+#    #+#             */
/*   Updated: 2023/08/22 15:28:41 by altawana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
int main(void)
{
	int a;
	int b;
	a = 1;
	b = 2;
	ft_swap(&a, &b);
	printf("%d\n", a);
	printf("%d\n", b);
	return(0);
}