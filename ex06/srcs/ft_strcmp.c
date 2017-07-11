/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 15:57:58 by jchung            #+#    #+#             */
/*   Updated: 2017/07/11 10:03:27 by jchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return (0);
	else if (*s1 != *s2)
		return (*s1 - *s2);
	else
		return (ft_strcmp(++s1, ++s2));
}
