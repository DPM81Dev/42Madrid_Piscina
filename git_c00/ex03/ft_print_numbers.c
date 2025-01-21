/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpantoja <jpantoja@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 09:54:32 by jpantoja          #+#    #+#             */
/*   Updated: 2024/08/19 13:58:40 by jpantoja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	numeros;

	numeros = '0';
	while (numeros <= '9')
	{
		write (1, &numeros, 1);
		numeros++;
	}
}

/*int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
