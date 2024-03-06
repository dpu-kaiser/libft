/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaiser <dkaiser@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:07:54 by dkaiser           #+#    #+#             */
/*   Updated: 2024/03/06 16:24:52 by dkaiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	k;

	i = 0;
	while (i < len)
	{
		k = 0;
		while (haystack[i + k] == needle[k])
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
/* int main() { */
/*     char haystack[] = "Hello world"; */
/*     char needle[] = "d"; */
/*     printf("strnstr: %s\n", strnstr(haystack, needle, 10)); */
/*     printf("ft_strnstr: %s\n", ft_strnstr(haystack, needle, 10)); */
/* } */
