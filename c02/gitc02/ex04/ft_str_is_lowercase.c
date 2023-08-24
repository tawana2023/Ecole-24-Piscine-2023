/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altawana <altawana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:54:13 by altawana          #+#    #+#             */
/*   Updated: 2023/08/17 11:35:02 by altawana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (*str < 'a' || *str > 'z')
			return (0);
		str++;
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
	printf("%d", ft_str_is_lowercase("abcdefghijklmnop"));
	printf("\n%d", ft_str_is_lowercase("aBcDefGhjklMnOpQ"));
	printf("\n%d", ft_str_is_lowercase("-_1234567890abcdEFGHlMn89"));
}
*/