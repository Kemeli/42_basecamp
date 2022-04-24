/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaiane- < kdaiane-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 21:12:37 by kdaiane-          #+#    #+#             */
/*   Updated: 2022/04/23 05:02:53 by kdaiane-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	arr[10];
	int		count_mod;
	int		i;

	if (nb < 0)
		ft_putchar('-');
	if (nb == 0)
		ft_putchar('0');
	else
	{
		i = 9;
		while (nb)
		{
			count_mod = nb % 10;
			if (count_mod < 0)
			count_mod *= -1;
			arr[i--] = count_mod + '0';
			nb /= 10;
		}
		i++;
		write(1, &arr[i], 10 - i);
	}
}


int main()
{
	int i;
	i = -2147483648;
	ft_putnbr(i);
	ft_putchar('\n');

	i = 2147483647;
	ft_putnbr(i);
	ft_putchar('\n');

	i = 0;
	ft_putnbr(i);
	ft_putchar('\n');
}
