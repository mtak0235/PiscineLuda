/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 21:59:55 by mtak              #+#    #+#             */
/*   Updated: 2020/10/26 23:28:28 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char *temp;

	temp = dest;
	while (*temp)
		temp++;
	while (*src)
	{
		*temp = *src;
		src++;
		temp++;
	}
	*temp = '\0';
	return (dest);
}