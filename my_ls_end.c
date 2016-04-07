/*
** my_ls_end.c for my_ls_end in 
** 
** Made by michael besnainou
** Login   <besnai_m@epitech.net>
** 
** Started on  Sat Nov 29 15:49:00 2014 michael besnainou
** Last update Sun Nov 30 19:13:51 2014 michael besnainou
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <unistd.h>
#include <pwd.h>
#include "include/my.h"

void		my_ls_l(int argc, char **argv)
{
  DIR		*dirp;
  const char	*name;
  struct dirent	*d;

  name = ".";
  if (argc >= 3)
    dirp = opendir(argv[2]);
  else
    dirp = opendir(name);
  while ((d = readdir(dirp)) != '\0')
    {
      if (d -> d_name[0] != '.')
	{
	  my_putstr(d -> d_name);
	  my_putchar('\n');
	}
    }
}
