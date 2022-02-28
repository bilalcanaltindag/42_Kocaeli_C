/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealtun <ealtun@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 17:54:55 by ealtun            #+#    #+#             */
/*   Updated: 2022/02/13 14:10:25 by baltinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	p;
	int	r;

	r = 1;
	while (r <= y && x > 0)
	{
		p = 1;
		while (p <= x)
		{
			if ((p == 1 || p == x) && (r == 1 || r == y))
				ft_putchar('o');
			else if ((p != 1 || p != x) && (r == 1 || r == y))
				ft_putchar('-');
			else if ((p == 1 || p == x) && (r != 1 || r != y))
				ft_putchar('|');
			else if ((p != 1 || p != x) && (r != 1 || r != y))
				ft_putchar(' ');
			p++;
		}
		ft_putchar('\n');
		r++;
	}
}
