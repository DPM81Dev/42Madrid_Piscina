/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpantoja <jpanoja@student.42madrid.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 11:30:40 by jpantoja          #+#    #+#             */
/*   Updated: 2024/08/27 17:13:22 by jpantoja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	str[]="01235";
	char	str2[]="1235A";
	char	str3[]="";
	int	n;
	
	n = ft_str_is_numeric(str);

	printf("Funcion correcta solo numeros %i\n", n);
	printf("Funcion erronea numeros y letras %i\n", ft_str_is_numeric(str2));
	printf("Funcion vacia %i", ft_str_is_numeric(str3));
	return (0);
}*/
