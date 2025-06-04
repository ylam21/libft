/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaly <omaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 15:32:44 by omaly             #+#    #+#             */
/*   Updated: 2025/06/04 19:08:45 by omaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*_s;
	unsigned char	_c;

	_s = (unsigned char *)s;
	_c = (unsigned char)c;
	while (n--)
	{
		*_s++ = _c;
	}
	return (s);
}
