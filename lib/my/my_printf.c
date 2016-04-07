/*
** my_printf.c for my_printf.c in 
** 
** Made by michael besnainou
** Login   <besnai_m@epitech.net>
** 
** Started on  Sun Nov  9 16:00:49 2014 michael besnainou
** Last update Mon Nov 24 13:29:34 2014 michael besnainou
*/

#include <stdarg.h>
#include "../../include/my.h"

void	my_printf_params(va_list args, int *i, char *str);

int	my_printf(char *str, ...)
{
  va_list	args;
  int	i;

  i = 0;
  va_start(args, str);
  while (str[i] != '\0')
    {
      if (str[i] == '%')
	my_printf_params(args, &i, str);
      else
	my_putchar(str[i]);
      i = i + 1;
    }
  return (0);
}

void	my_printf_params(va_list args, int *i, char *str)
{
  *i = *i + 1;
  while (str[*i] == '+' || str[*i] == '-')
    *i = *i + 1;
  while (str[*i] == '#' || str[*i] == '0')
    *i = *i + 1;
  if (str[*i] == 'd' || str[*i] == 'i')
    my_put_nbr(va_arg(args, int));
  else if (str[*i] == 'c')
    my_putchar(va_arg(args, int));
  else if (str[*i] == 's')
    my_putstr(va_arg(args, char *));
  else if (str[*i] == 'u')
    my_put_unsigned_nbr(va_arg(args, unsigned int));
  else if (str[*i] == 'o')
    my_put_nbr_base2(va_arg(args, unsigned int), "01234567");
  else if (str[*i] == 'x')
    my_put_nbr_base2(va_arg(args, unsigned int), "0123456789abcdef");
  else if (str[*i] == 'X')
    my_put_nbr_base2(va_arg(args, unsigned int), "0123456789ABCDEF");
  else if (str[*i] == 'b')
    my_put_nbr_base2(va_arg(args, unsigned int), "01");
  else if (str[*i] == '%')
    my_putchar('%');
}
