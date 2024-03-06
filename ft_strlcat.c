/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaiser <dkaiser@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:36:59 by dkaiser           #+#    #+#             */
/*   Updated: 2024/03/06 14:11:36 by dkaiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	len;
	size_t	i;

	if (dstsize == 0)
		return (0);
	len = 0;
	while (len < dstsize - 1 && dst[len] != '\0')
	{
		len++;
	}
	i = 0;
	while (len < dstsize - 1 && src[i] != '\0')
	{
		dst[len] = src[i];
		len++;
		i++;
	}
	dst[len] = '\0';
	return (len);
}

/* #include <stdio.h> */
/* int main () { */
/*     char dst[12] = "Hello "; */
/*     char dst2[12] = "Hello "; */
/*     char src[] = "World"; */

/*     size_t len = strlcat(dst, src, 12); */
/*     size_t len2 = ft_strlcat(dst2, src, 12); */
/*     printf("strlcat (%zu): %s\n", len, dst); */
/*     printf("ft_strlcat (%zu): %s\n", len2, dst2); */
/* } */
