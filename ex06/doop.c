/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 08:37:10 by jchung            #+#    #+#             */
/*   Updated: 2017/07/11 09:13:12 by jchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putnbr(int nb);
int		ft_atoi(char *str);
int		ft_strlen(char *str);

void	doop(char *c, char *n1, char *n2)
{
	if (ft_strlen(c) == 1)
	{
		if (*c == 42)
			ft_putnbr(ft_atoi(n1) * ft_atoi(n2));
		if (*c == 43)
			ft_putnbr(ft_atoi(n1) + ft_atoi(n2));
		if (*c == 45)
			ft_putnbr(ft_atoi(n1) - ft_atoi(n2));
		if (*c == 47)
		{
			if (!ft_atoi(n2))
				write(1, "Stop : division by zero", 1);
			else
				ft_putnbr(ft_atoi(n1) / ft_atoi(n2));
		}
		if (*c == 37)
		{
			if (!ft_atoi(n2))
				write(1, "Stop : modulo by zero", 1);
			else
				ft_putnbr(ft_atoi(n1) % ft_atoi(n2));
		}
	}
	ft_putnbr(0);
}
