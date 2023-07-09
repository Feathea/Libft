/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbesli <isbesli@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 12:11:55 by isbesli           #+#    #+#             */
/*   Updated: 2023/07/08 16:50:08 by isbesli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	a;
	size_t	d;
	size_t	s;

	a = ft_strlen(dst);
	d = ft_strlen(dst);
	s = ft_strlen(src);
	i = 0;
	if (n <= d)
		return (n + s);
	while (src[i] && a < n - 1)
	{
		dst[a] = src[i];
		i++;
		a++;
	}
	dst[a] = '\0';
	return (d + s);
}
