/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algautie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 12:20:26 by algautie          #+#    #+#             */
/*   Updated: 2018/11/24 12:20:27 by algautie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int j;

	i = 0;
	j = (int)ft_strlen(s1);
	while (s2[i])
	{
		s1[j++] = s2[i];
		i++;
	}
	s1[j] = '\0';
	return (s1);
}
