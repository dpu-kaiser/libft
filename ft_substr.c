/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaiser <dkaiser@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 21:58:31 by dkaiser           #+#    #+#             */
/*   Updated: 2024/03/07 14:55:55 by dkaiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*result;

	i = 0;
	while (s[i])
		i++;
	if (i - start < len)
		len = (i - start);
	if (start >= len)
		len = 0;
	result = malloc(len + 1);
	if (result)
	{
		result[len] = '\0';
		i = 0;
		while (i < len)
		{
			result[i] = s[i + start];
			i++;
		}
	}
	return (result);
}

/* #include <stdio.h> */
/* int main () */
/* { */
/*     char s[] = "Hello there"; */
/*     char *substr = ft_substr(s, 25, 10); */
/*     printf("%s\n", substr); */
/* } */
