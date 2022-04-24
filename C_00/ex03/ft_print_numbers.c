/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaiane- < kdaiane-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 19:18:00 by kdaiane-          #+#    #+#             */
/*   Updated: 2022/04/12 16:01:26 by kdaiane-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	num;
	int		ascii;

	ascii = 48;
	while (ascii <= 57)
	{
		num = ascii;
		write(1, &num, 1);
		ascii++;
	}
}
