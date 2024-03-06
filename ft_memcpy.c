/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaiser <dkaiser@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:15:12 by dkaiser           #+#    #+#             */
/*   Updated: 2024/03/05 11:39:34 by dkaiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((char *)dst + i) = *((char *)src + i);
		i++;
	}
	return (dst);
}

/* #include <stdio.h> */
/* int main(void) */
/* { */
/*     char src[] = "Test Hurra"; */
/*     char src2[] = "Test Hurra"; */
/*     char dst[] = "AAAAAAIIIIIEEEEE"; */
/*     char dst2[] = "AAAAAAIIIIIEEEEE"; */
/*     printf("ft_memcpy: %s\n", (char *) ft_memcpy(dst, src, 20)); */
/*     printf("memcpy: %s\n", (char *) memcpy(dst2, src2, 20)); */
/* } */
