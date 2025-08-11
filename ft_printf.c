/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaratang <iaratang@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 12:29:51 by iaratang          #+#    #+#             */
/*   Updated: 2025/08/11 15:01:42 by iaratang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	print_params(const char format_specifier, va_list args);

int	ft_printf(const char *format, ...)
{
	va_list	arguments;
	int		i;
	int		counter;

	counter = 0;
	i = 0;
	va_start(arguments, format);

	while (format[i])
	{
		if (format[i] == '%' && ft_strchr(format[i + 1], "cspdiuxX%"))
		{
			i++;
			counter += print_params(format[i], arguments);
		}
		else
			counter += ft_print_char(format[i]);
		i++;
	}
	va_end(arguments);
	return (counter);
}

static int	print_params(const char format_specifier, va_list args)
{
	if (format_specifier == '%')
		return (ft_print_char(format_specifier));
	else if (format_specifier == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (format_specifier == 's')
		return (ft_print_str(va_arg(args, char *)));

	return (0);
}

int	main(void)
{
	ft_printf("ola meu nome é %%%s, tenho 23 anos", "ian");
}

