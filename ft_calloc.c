/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 17:38:37 by healeksa          #+#    #+#             */
/*   Updated: 2024/01/26 18:01:20 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*dest;

	dest = malloc(num * size);
	if (!dest)
		return (0);
	ft_bzero(dest, num * size);
	return (dest);
}
