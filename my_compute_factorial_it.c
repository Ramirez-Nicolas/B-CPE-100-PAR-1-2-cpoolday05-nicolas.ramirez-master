/*
** EPITECH PROJECT, 2020
** my_compute_factorial_it.c
** File description:
** 
*/

int  my_compute_factorial_it(int nb)
{
    int nbr;

    nbr = 1;
    if (nb < 0 || nb > 12) {
        return (0);
    }
    if (nb == 0) {
        return (1);
    }
    while (nb >= 1) {
        nbr = nbr * nb;
        nb--;
    }
    return (nbr);
}
