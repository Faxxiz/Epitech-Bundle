/*
** my_sort_int_array.c for libmy in /home/pereni_j/libmy/src
**
** Made by joseph pereniguez
** Login   <pereni_j@epitech.net>
**
** Started on  Tue Jun 16 10:37:49 2015 joseph pereniguez
** Last update Tue Jun 16 16:27:48 2015 joseph pereniguez
*/

#include    "../include/my.h"

void		my_sort_int_array(int *tab, int size)
{
    int		i;
    int		pass;

    pass = 0;
    while (pass < size)
    {
        i = 0;
        while (i < size - 1)
        {
            if (tab[i] > tab[i + 1])
                my_swap(&tab[i], &tab[i + 1]);
                i = i + 1;
        }
        pass = pass + 1;
    }
}