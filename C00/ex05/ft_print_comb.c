/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltinda <baltinda@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 12:49:44 by baltinda          #+#    #+#             */
/*   Updated: 2022/02/15 15:29:29 by baltinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_3num(char sayi1, char sayi2, char sayi3)
{
	write(1, &sayi1, 1);
	write(1, &sayi2, 1);
	write(1, &sayi3, 1);
	if (sayi1 != '7' || sayi2 != '8' || sayi3 != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_3num(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
