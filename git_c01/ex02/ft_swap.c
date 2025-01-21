/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpantoja <jpantoja@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 11:10:46 by jpantoja          #+#    #+#             */
/*   Updated: 2024/08/21 12:45:47 by jpantoja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 20;
	b = 10;

	ft_swap(&a, &b); 
	printf("valores de punteros %i %i", a, b);
	return(0);
}*/
