/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaiane- < kdaiane-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 19:54:11 by kdaiane-          #+#    #+#             */
/*   Updated: 2022/04/22 20:53:20 by kdaiane-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}


int main()
{
	int test1;
	int test2;
	int *pnt1;
	int *pnt2;
	pnt1 = &test1;
	pnt2 = &test2;
	test1 = 0;
	test2 = 42;
	printf("before: a = %d , b = %d \n", test1, test2);
	ft_swap(pnt1, pnt2);
	printf("after : a = %d, b = %d \n", test1, test2);
	return(0);
}
