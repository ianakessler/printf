/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaratang <iaratang@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 15:10:01 by iaratang          #+#    #+#             */
/*   Updated: 2025/08/12 15:24:05 by iaratang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static void	ft_putchar(char c);
static int num_len(int n);

int	ft_print_num(int n)
{
	if (n < -2147483647)
	{
		write(1, "-2147483648", 11);
	}
	else if (n < 0 && n > -2147483647)
	{
		ft_putchar('-');
		ft_print_num(-n);
	}
	else if (n > 9)
	{
		ft_print_num(n / 10);
		ft_print_num(n % 10);
	}
	else
	{
		ft_putchar(n + '0');
	}
	return (num_len(n));
}

static int num_len(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	else if (n == 0)
	{
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}
#include <stdio.h>
int main(void)
{
	int i = num_len(1234567890);
	printf("%d", i);
	return (0);
}
