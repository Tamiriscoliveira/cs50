#include <cs50.h>
#include <stdio.h>

int main (void){

    //pega os números do usuário
    int x = get_int("x:");
    int y = get_int("y:");


    //divide x por y
    float z = x /y;
    printf("%i\n", x + y);

}
