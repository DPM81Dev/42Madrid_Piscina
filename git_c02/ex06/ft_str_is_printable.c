/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpantoja <jpantoja@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:41:13 by jpantoja          #+#    #+#             */
/*   Updated: 2024/08/28 12:38:01 by jpantoja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 31 || str[i] == 127)
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	str[]="aas\ndadasda";
	int	n;

	n = ft_str_is_printable(str);	
	printf("El resultado es %d", n);
	return(0);
}*/
