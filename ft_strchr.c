/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaiser <dkaiser@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:12:39 by dkaiser           #+#    #+#             */
/*   Updated: 2024/03/07 16:10:27 by dkaiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (!c)
		return ((char *)&s[i]);
	return (0);
}

/* #include <stdio.h> */
/* #include <string.h> */
/* int main() { */
/*     char str[] = "Hello world"; */
/*     printf("strchr: %s\n", strchr(str, 'o')); */
/*     printf("ft_strchr: %s\n", ft_strchr(str, 'o')); */
/* } */
