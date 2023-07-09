/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbesli <isbesli@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:03:49 by isbesli           #+#    #+#             */
/*   Updated: 2023/07/07 15:01:58 by isbesli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_s1;
	unsigned char	*s2_s2;
	size_t			i;

	i = 0;
	s1_s1 = (unsigned char *)s1;
	s2_s2 = (unsigned char *)s2;
	while (i < n)
	{
		if (s1_s1[i] != s2_s2[i])
			return (s1_s1[i] - s2_s2[i]);
		i++;
	}
	return (0);
}
