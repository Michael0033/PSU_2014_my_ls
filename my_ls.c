/*
** my_ls.c for my_ls.c in 
** 
** Made by michael besnainou
** Login   <besnai_m@epitech.net>
** 
** Started on  Mon Nov 24 13:27:06 2014 michael besnainou
** Last update Sun Nov 30 22:46:46 2014 michael besnainou
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <unistd.h>
#include <pwd.h>
#include "include/my.h"

void		my_ls_error()
{
  my_putstr(SYNTAXE_ERROR);
  my_putchar('\n');
}

int		main(int argc, char **argv)
{
  DIR		*dirp;
  struct dirent	*d;
  const	char	*name;

  if (argc == 1)
    my_ls_simple(&dirp, &d, &name);
  else if (argc == 2)
    {
      if (argv[1][0] == '-')
	{
	  if (argv[1][1] == 'a')
	    my_ls_a(&dirp, &d, &name);
	  else if (argv[1][1] == 'd')
	    my_ls_d(&dirp, &d, &name);
	  else if (argv[1][1] == 'l')
	    my_ls_l(argc, argv);
	  else
	    my_ls_error();
	}
      else
	my_ls_error();
    }
  return (0);
}

void		my_ls_simple(DIR *dirp, struct dirent *d, const char *name)
{
  name = ".";
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

void		my_ls_a(DIR *dirp, struct dirent *d, const char *name)
{
  name = ".";
  dirp = opendir(name);
  while ((d = readdir(dirp)) != '\0')
    {
      my_putstr(d -> d_name);
      my_putchar('\n');
    }
}

void		my_ls_d(DIR *dirp, struct dirent *d, const char *name)
{
  name = ".";
  dirp = opendir(name);
  while ((d = readdir(dirp)) != '\0')
    {
      if (d -> d_name[0] == '.' && d -> d_name[1] == '\0')
	my_putstr(d -> d_name);
    }
  my_putchar('\n');
}
