/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 09:03:41 by jchung            #+#    #+#             */
/*   Updated: 2017/07/04 09:36:29 by jchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*whitespaces(char *ptr);
int		num_count(char *str);

int		ft_atoi(char *str)
{
	int negative;
	int sum;

	str = whitespaces(str);
	if (*str == '-')
	{
		negative = 1;
		str++;
	}
	else if (*str == '+')
		str++;
	else if (*str <= '0' || *str >= '9')
		return (0);
	else
		negative = 0;
	sum = 0;
	while (*str != '\0' && *str >= '0' && *str <= '9')
	{
		sum *= 10;
		sum += *str - '0';
		str++;
	}
	if (*str >= '0' && *str <= '9')
		sum += *str;
	return (negative ? sum * -1 : sum);
}

char	*whitespaces(char *ptr)
{
	while (*ptr == ' ' || (*ptr >= 9 && *ptr <= 13))
	{
		ptr++;
	}
	return (ptr);
}
