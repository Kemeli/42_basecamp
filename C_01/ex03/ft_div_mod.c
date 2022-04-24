/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaiane- < kdaiane-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 04:01:23 by kdaiane-          #+#    #+#             */
/*   Updated: 2022/04/22 20:54:01 by kdaiane-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*mod = a % b;
	*div = a / b;
}


int main()
{
	int	a;
	int b;
	int aux1 = 1;
	int	aux2 = 1;
	int *div;
	int *mod;
	mod = &aux1;
	div = &aux2;
	a = 100;
	b = 11;
	printf("before: div: %d, mod: %d \n", *div, *mod);
	ft_div_mod(a, b, div, mod);
	printf("after: div: %d, mod: %d \n", *div, *mod);
}
