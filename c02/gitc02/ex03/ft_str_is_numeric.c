/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altawana <altawana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:44:19 by altawana          #+#    #+#             */
/*   Updated: 2023/08/17 11:59:18 by altawana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/*
#include <stdio.h>

int main (void)
{
printf("%d", ft_str_is_numeric( "0123456789"));
printf("\n%d", ft_str_is_numeric("0135794268"));
printf("\n%d", ft_str_is_numeric("-_wowhowgoodbad,"));
}
*/
