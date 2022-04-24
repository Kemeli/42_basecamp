/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaiane- < kdaiane-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 22:07:48 by kdaiane-          #+#    #+#             */
/*   Updated: 2022/04/21 03:44:57 by kdaiane-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
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
int	main()
{
	char str1[] = "Dobby has no master";
	char str2[] = "+JYyQGEYltnkrjaNhPARFzYUGRYnqSQNUKJhsKofRrX$";
	printf("before: dest: %s\n", str1);
	ft_strcpy(str1, str2);
	printf("after: dest: %s\n", str1);
	return (0);
}
*/