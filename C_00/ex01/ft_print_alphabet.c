/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaiane- < kdaiane-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 20:35:15 by kdaiane-          #+#    #+#             */
/*   Updated: 2022/04/12 18:53:11 by kdaiane-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int		ascii;
	char	letter;

	ascii = 97;
	while (ascii <= 122)
	{
		letter = ascii;
		write(1, &letter, 1);
		ascii++;
	}
}
