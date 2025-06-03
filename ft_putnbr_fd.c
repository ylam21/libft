/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaly <omaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 15:34:24 by omaly             #+#    #+#             */
/*   Updated: 2025/06/03 15:34:26 by omaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*str;
	size_t	i;

	str = ft_itoa(n);
	if (!str)
		return ;
	i = 0;
	while (i < ft_strlen(str))
		write(fd, &str[i++], 1);
	free(str);
}
