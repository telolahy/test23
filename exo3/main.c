#include <stdio.h>
#include <stdlib.h>
void ft_print_numbers(void);
int main()
{

    //ex03: ft_print_numbers - Afficher les chiffres de 0 à 9
    ft_print_numbers();
    return 0;
}
void ft_print_numbers()
{
    int nombre =0;
    for(int i=0;i<10;i++)
        printf("%d",i);
}
