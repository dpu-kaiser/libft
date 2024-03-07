/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaiser <dkaiser@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:07:54 by dkaiser           #+#    #+#             */
/*   Updated: 2024/03/07 16:40:20 by dkaiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	k;

	i = 0;
	if (*needle == '\0' || needle == haystack)
		return ((char *)haystack);
	while (i < len)
	{
		k = 0;
		while (haystack[i + k] && haystack[i + k] == needle[k] && i + k < len)
		{
			k++;
		}
		if (!needle[k])
			return ((char *)haystack + i);
		i++;
	}
	return (0);
}

/* #include <stdio.h> */

/* int	main(void) */
/* { */
/* 	char	haystack[] = "M"; */
/* 	char	needle[] = "MZIRIBMZE"; */

/* 	printf("strnstr: %s\n", strnstr(haystack, haystack, 2)); */
/* 	printf("ft_strnstr: %s\n", ft_strnstr(haystack, haystack, 2)); */
/* } */
