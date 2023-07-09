/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbesli <isbesli@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 14:32:28 by isbesli           #+#    #+#             */
/*   Updated: 2023/07/07 14:32:29 by isbesli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*sr;
	char	*ds;

	i = len;
	ds = (char *)dst;
	sr = (char *)src;
	if (dst == src)
		return (dst);
	else if (ds > sr)
	{
		while (i > 0)
		{
			i--;
			ds[i] = sr[i];
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (ds);
}
