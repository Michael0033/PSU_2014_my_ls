/*
** my_getnbr.c for Lib C in /home/besnai_m/Desktop/
** 
** Made by michael besnainou
** Login   <besnai_m@epitech.net>
** 
** Started on  Thu Oct 16 14:39:59 2014 michael besnainou
** Last update Thu Nov  6 15:38:02 2014 michael besnainou
*/

int	my_getnbr(char *str)
{
  int	i;
  int	pos;
  int	nb;

  pos = 1;
  i = 0;
  while (str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
    {
      if (str[i] == '-')
        {
          pos = -pos;
        }
      i++;
    }
  str = str + i;
  nb = 0;
  i = 0;
  while (str[i] >= '0' && str[i] <= '9')
    {
      nb = nb * 10;
      nb = nb - (str[i] - '0');
      i++;
    }
  return (nb * pos * -1);
}
