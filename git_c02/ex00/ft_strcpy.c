/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpantoja <jpantoja@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 13:24:50 by jpantoja          #+#    #+#             */
/*   Updated: 2024/08/22 16:14:39 by jpantoja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	origen[] = "Esta es mi funcion";
	char	destino[] = "definitiva";

	printf("%s, %s\n", destino, origen);
	
	ft_strcpy(origen, destino);
	printf("%s, %s", destino, origen);
	return (0);
}*/
