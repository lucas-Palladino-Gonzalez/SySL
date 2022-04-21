// Lucas Palladino Gonzalez

#include <stdio.h>
#include <ctype.h>


int main(){
    int caracter;
    do{
        caracter = getchar();
        if (isdigit(caracter))
        {
            continue;
        }   else if(isupper(caracter))
            {
             caracter = tolower(caracter);
            }   else if(islower(caracter))
                {
                    caracter = toupper(caracter);
                }
        putchar(caracter);
    } while (caracter != EOF);
    return 0;
}
