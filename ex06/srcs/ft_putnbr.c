/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 07:57:04 by jchung            #+#    #+#             */
/*   Updated: 2017/07/11 09:10:51 by jchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
int		last_value(int n);

int		g_min = -2147483648;

void	ft_putnbr(int nb)
{
	int itr;

	if (nb == g_min)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
		nb = -nb;
	if (nb >= 1000000000)
		nb = last_value(nb);
	itr = 1;
	while (nb / itr > 0)
	{
		itr *= 10;
	}
	while (itr > 0)
	{
		ft_putchar(nb / itr + '0');
		nb %= itr;
		itr /= 10;
	}
}

int		last_value(int n)
{
	ft_putchar(n / 1000000000 + '0');
	return (n % 1000000000);
}
