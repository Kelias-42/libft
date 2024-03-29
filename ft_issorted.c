/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_issorted.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algautie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 12:01:32 by algautie          #+#    #+#             */
/*   Updated: 2019/09/18 12:01:33 by algautie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_issorted(int *tab, int size)
{
	int i;

	i = -1;
	while (++i < size - 1)
		if (tab[i] >= tab[i + 1])
			return (0);
	return (1);
}
