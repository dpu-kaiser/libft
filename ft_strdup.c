/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaiser <dkaiser@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:54:16 by dkaiser           #+#    #+#             */
/*   Updated: 2024/03/06 20:24:51 by dkaiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*result;
	int		len;

	len = 0;
	while (*(s1++))
		len++;
	result = malloc(len + 1);
	if (!result)
		return (0);
	result[++len] = '\0';
	while (len--)
		result[len] = *(--s1);
	return (result);
}

/* #include <stdio.h> */
/* int main() { */
/*     char *output; */
/*     char input[] = "Dies ist ein Test."; */
/*     output = ft_strdup(input); */
/*     printf("%s\n", output); */
/* } */
