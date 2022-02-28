
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

int    ft_strncmp(char *s1, char *s2, unsigned int n);

int    main()
{
    printf("%d", ft_strncmp("HelloworldC", "HelloWorldA", 8));
    printf("%d", ft_strncmp("Hello", "Hellold", 3));
    printf("%d", ft_strncmp("HelloWorldA", "HelloWorldC", 11));
}
