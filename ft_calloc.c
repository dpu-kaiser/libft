/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaiser <dkaiser@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:45:56 by dkaiser           #+#    #+#             */
/*   Updated: 2024/03/06 19:52:19 by dkaiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*calloc(size_t count, size_t size)
{
	void	*result;
	size_t	i;

	result = malloc(count * size);
	i = 0;
	while (i < count * size)
	{
		*((char *)result + i) = 0;
		i++;
	}
	return (result);
}