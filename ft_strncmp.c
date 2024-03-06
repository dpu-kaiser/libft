/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaiser <dkaiser@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:45:10 by dkaiser           #+#    #+#             */
/*   Updated: 2024/03/06 15:10:48 by dkaiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	result;

	result = 0;
	while (!result && n > 0 && (*s1 || *s2))
	{
		result = *s1 - *s2;
		if (*s1)
			s1++;
		if (*s2)
			s2++;
		n--;
	}
	return (result);
}

/* #include <stdio.h> */
/* int main() { */
/*     char str1[] = "Hello"; */
/*     char str2[] = "Hellu"; */
/*     printf("strncmp: %d\n", strncmp(str1, str2, 5)); */
/*     printf("ft_strncmp: %d\n", ft_strncmp(str1, str2, 5)); */
/* } */