/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isolate_number.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algautie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 11:57:34 by algautie          #+#    #+#             */
/*   Updated: 2019/06/26 10:21:59 by algautie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_isolate_number(char *str, int start)
{
	int		i;
	char	*tmp;
	int		size;
	long	ret;
	int		j;

	size = 0;
	i = start - 1;
	while (ft_isdigit(str[++i]))
		size++;
	tmp = malloc(sizeof(char) * (size + 1));
	tmp[size] = '\0';
	i = start - 1;
	j = 0;
	while (ft_isdigit(str[++i]) && ++j)
		tmp[j - 1] = str[i];
	ret = ft_atolong(tmp);
	free(tmp);
	return (ret);
}
