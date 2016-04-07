/*
** my.h for Exo02 in /home/besnai_m/rendu/day9/include
** 
** Made by michael besnainou
** Login   <besnai_m@epitech.net>
** 
** Started on  Thu Oct  9 13:44:23 2014 michael besnainou
** Last update Sun Nov 30 22:45:18 2014 michael besnainou
*/

#ifndef MY_H_
# define MY_H_

#  define SYNTAXE_ERROR	"my_ls: cannot access -: No such file or directory"

void	my_putchar(char c);
int	my_put_nbr(int nb);
int	my_putstr(char *str);
int	my_strlen(char *str);
int	my_getnbr(char *str);
int	my_printf(char *str, ...);
void	my_ls_simple();
void	my_ls_a();
void	my_ls_d();
void	my_ls_error();
void	my_ls_l();

#endif /* !MY_H_ */
