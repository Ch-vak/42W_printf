/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvakasir <cvakasir@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 09:49:38 by cvakasir          #+#    #+#             */
/*   Updated: 2022/06/22 09:55:43 by cvakasir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libfth02/libft.h"
# include <stdarg.h>
# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

int		ft_putchar(int c);
int		ft_putstr(const char *str);
size_t	ft_strlen(const char *s);
int		ft_hexa_lower(unsigned long int pointer_value);
int		ft_hexa_upper(unsigned long int pointer_value);
int		ft_write_number(int numb);
int		ft_uns_dec(unsigned int numb);
int		check_for_next(char const *string, va_list args, int i);
int		ft_printf(const char *string, ...);
int		ft_pointer_case(va_list args);

#endif