/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algautie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 10:38:44 by algautie          #+#    #+#             */
/*   Updated: 2019/06/24 10:59:30 by algautie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strdchr(char *str, char c, int start)
{
	int i;

	i = start - 1;
	while (str[++i])
		if (str[i] == c)
			return (i);
	return (-1);
}
