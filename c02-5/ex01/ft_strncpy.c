/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 12:12:28 by mtak              #+#    #+#             */
/*   Updated: 2020/10/26 12:12:54 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	char			*res;

	res = dest;
	i = 0;
	while (i < n && src[i] != '\0')
	{
		*dest = src[i];
		dest++;
		i++;
	}
	while (i < n)
	{
		*dest = '\0';
		dest++;
	}
	return (res);
}
