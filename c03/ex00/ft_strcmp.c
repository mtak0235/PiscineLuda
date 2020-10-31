/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 19:06:28 by mtak              #+#    #+#             */
/*   Updated: 2020/10/26 23:27:16 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int ret;

	while (!(ret = *(unsigned char *)s1 - *(unsigned char *)s2) && *s2)
	{
		s1++;
		s2++;
	}
	return (ret);
}