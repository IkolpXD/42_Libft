/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-jes <made-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 12:56:26 by made-jes          #+#    #+#             */
/*   Updated: 2024/11/04 19:15:35 by made-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char const *str)
{
	int	number;
	int	i;
	int	signal;

	i = 0;
	signal = 1;
	number = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
		signal = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while ((str[i] >= '0' && str[i] <= '9') && str[i])
	{
		number = number * 10 + (str[i] - '0');
		i++;
	}
	return (number * signal);
}

/*int	main()
{
	printf("%d\n", ft_atoi("1"));
	printf("%d\n", ft_atoi("42"));
	printf("%d\n", ft_atoi("  -42"));
	printf("%d\n", ft_atoi("+42"));
	printf("%d\n", ft_atoi("--42"));
	return (0);
}*/