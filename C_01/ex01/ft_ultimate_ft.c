/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaiane- < kdaiane-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 19:54:11 by kdaiane-          #+#    #+#             */
/*   Updated: 2022/04/22 20:52:50 by kdaiane-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int main()
{
	int	nbr;
	int	*********ptr9;
	int	********ptr8;
	int	*******ptr7;
	int	******ptr6;
	int	*****ptr5;
	int	****ptr4;
	int	***ptr3;
	int	**ptr2;
	int	*ptr1;
	nbr = 258;
	ptr1 = &nbr;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ptr9 = &ptr8;
	printf("Before: %d\n", *********ptr9);
	ft_ultimate_ft(ptr9);
	printf("After: %d\n", *********ptr9);
	return (0);
}