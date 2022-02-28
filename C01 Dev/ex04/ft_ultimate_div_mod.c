/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltinda <baltinda@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:17:44 by baltinda          #+#    #+#             */
/*   Updated: 2022/02/21 16:04:46 by baltinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	bol;
	int	mod;

	if (*b != 0)
	{
		bol = (*a) / (*b);
		mod = (*a) % (*b);
		*a = bol;
        *b = mod;
	}
}

#include <stdio.h>

int main()
{
    int	x;
    int	y;

    x = 15;
    y = 3;
    ft_ultimate_div_mod(&x, &y);
    printf("%d | %d", x, y);
}
