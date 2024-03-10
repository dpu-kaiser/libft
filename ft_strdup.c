/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaiser <dkaiser@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:54:16 by dkaiser           #+#    #+#             */
/*   Updated: 2024/03/10 13:17:47 by dkaiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*result;
	int		len;
	int		i;

	len = 0;
	while (s1[len])
		len++;
	result = malloc(len + 1);
	if (!result)
		return (0);
	result[len] = '\0';
	i = 0;
	while (i < len)
	{
		result[i] = s1[i];
		i++;
	}
	return (result);
}

/* #include <stdio.h> */
/* int main() { */
/*     char *output; */
/*     char input[] = "test"; */
/*     output = ft_strdup(input); */
/*     printf("%s\n", output); */
/* } */
