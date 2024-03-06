/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaiser <dkaiser@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:45:25 by dkaiser           #+#    #+#             */
/*   Updated: 2024/03/06 13:30:25 by dkaiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	len;

	len = 0;
	if (dstsize > 0)
	{
		while (len < dstsize - 1 && src[len] != '\0')
		{
			dst[len] = src[len];
			len++;
		}
		dst[len] = '\0';
		while (src[len] != '\0')
		{
			len++;
		}
	}
	return (len);
}

/* #include <stdio.h> */

/* int	main(void) */
/* { */
/* 	char	src[] = "Hello"; */
/* 	char	dst[] = "01234567890123456789"; */
/* 	char	dst2[] = "01234567890123456789"; */
/* 	size_t	len; */
/* 	size_t	len2; */

/* 	len = strlcpy(dst, src, 10); */
/* 	len2 = ft_strlcpy(dst2, src, 10); */
/* 	printf("strlcpy (%zu): %s\n", len, dst); */
/* 	printf("ft_strlcpy (%zu): %s\n", len2, dst2); */
/* } */
