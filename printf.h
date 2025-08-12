/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaratang <iaratang@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 12:19:00 by iaratang          #+#    #+#             */
/*   Updated: 2025/08/11 16:53:29 by iaratang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>

int	ft_strchr(char c, char *set);
int	ft_printf(const char *format, ...);
int	ft_print_str(char *str);
int	ft_print_char(char c);
int	ft_print_number(int n);


#endif
