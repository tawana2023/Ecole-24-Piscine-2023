/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altawana <altawana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 11:19:50 by altawana          #+#    #+#             */
/*   Updated: 2023/08/20 12:57:42 by altawana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (*to_find == 0)
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (to_find[j] == 0 || to_find[j] == str[i + j])
		{
			if (to_find[j] == 0)
				return (str + i);
			j++;
		}
		++i;
	}
	return (0);
}
/*
int	main(void)
{
	char str[] = "year 2023 Paris piscine ecole for leraning";
	char to_find[] = "piscine";
	printf("%s", ft_strstr(str, to_find));
}
*/
