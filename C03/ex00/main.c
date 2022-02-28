/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltinda <baltinda@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 16:26:53 by baltinda          #+#    #+#             */
/*   Updated: 2022/02/28 16:28:29 by baltinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

int    main()
{
    printf("%d", ft_strcmp("Hello", "Hello1"));
    printf("\n%d", ft_strcmp("Hello", "He"));
    printf("\n%d", ft_strcmp("He", "Hello"));
    printf("\n%d", ft_strcmp("Hello", "Hello"));
}
