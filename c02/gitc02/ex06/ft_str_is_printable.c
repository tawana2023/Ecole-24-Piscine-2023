/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altawana <altawana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 11:15:06 by altawana          #+#    #+#             */
/*   Updated: 2023/08/17 11:35:27 by altawana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str < ' ' || *str == 127)
			return (0);
		str++;
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{	
printf("%d", ft_str_is_printable("ABCDEFGHJ0123456%$?89"));
printf("\n%d", ft_str_is_printable("\n\t\v\f"));
}
*/
