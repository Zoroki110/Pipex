/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trouilla <trouilla@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 22:20:13 by trouilla          #+#    #+#             */
/*   Updated: 2024/12/20 10:45:26 by trouilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>

int		ft_putchar(char c);
int		ft_putnbr_p(int nb);
int		ft_putstr_p(char *str);
int		ft_print_hex_min(unsigned int n);
int		ft_print_hex_maj(unsigned int n);
int		ft_putnbr_u(unsigned int n);
int		ft_hexptr(unsigned long long n);
int		ft_print_hex_p(void *ptr);
int		ft_find_type(char c, va_list args);
int		ft_printf(const	char *format, ...);

#endif	
