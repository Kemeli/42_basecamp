/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaiane- < kdaiane-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 15:26:40 by kdaiane-          #+#    #+#             */
/*   Updated: 2022/04/22 20:57:46 by kdaiane-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	res;

	div = *a / *b;
	res = *a % *b;
	*a = div;
	*b = res;
}


int	main(void)
{
	int *a;
	int *b;
	int num1;
	int num2;
	num1 = 30;
	num2 = 8;
	a = &num1;
	b = &num2;
	printf("before: *a:%d *b:%d\n", num1, num2);
	ft_ultimate_div_mod(a, b);
	printf("after: *a:%d *b :%d\n", num1, num2);
	return (0);
}
