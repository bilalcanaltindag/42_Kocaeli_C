/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltinda <baltinda@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:40:14 by baltinda          #+#    #+#             */
/*   Updated: 2022/02/21 15:55:27 by baltinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	tut;

	tut = *a;
	*a = *b;
	*b = tut;
}

#include <stdio.h>

int    main()
{
    int    x;
    int    y;
    
    x = 2;
    y = 3;
    ft_swap(&x, &y);
    printf("%d \n", x);
    printf("%d", y);
}
