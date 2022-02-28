/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltinda <baltinda@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:09:22 by baltinda          #+#    #+#             */
/*   Updated: 2022/02/17 17:11:40 by baltinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
    if (b != 0)
    {
        *div = a / b;
        *mod = a % b;
    }
}

#include <stdio.h>

int    main()
{
    int a;
    int b;
    int *div = &a;
    int *mod = &b;

    a = 10;
    b = 5;
    
    ft_div_mod(a, b, div, mod);
    printf("%d\n", *div);
    printf("%d", *mod);
}
