/*
** my_put_nbr.c for Exo07 in /home/besnai_m/rendu/day3
** 
** Made by michael besnainou
** Login   <besnai_m@epitech.net>
** 
** Started on  Thu Oct  2 11:53:43 2014 michael besnainou
** Last update Thu Nov 20 16:46:53 2014 michael besnainou
*/

#include "../../include/my.h"

int	my_put_nbr(int nb)
{
  int calc;

  calc = 1;
  if (nb >= 0)
    nb = -nb;
  else
    my_putchar('-');
  while ((nb / calc) < -9)
    calc *= 10;
  while (calc >= 1)
    {
      my_putchar('0' + (nb / calc) * -1);
      nb %= calc;
      calc /= 10;
    }
  return (nb);
}
