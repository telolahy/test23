#include <stdio.h>
#include <stdlib.h>
void ft_print_reverse_alphabet();
int main()
{
    ft_print_reverse_alphabet();
    return 0;
}
void ft_print_reverse_alphabet()
{
    char lettre ='{';
    do
        {
            lettre--;
            printf("%c",lettre);
        }while(lettre!='a');


}
