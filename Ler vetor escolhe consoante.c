#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que leia um vetor de 10 caracteres, e diga quantas consoantes foram lidas. Imprime as consoantes.
  */
int main() {

    int i;
    char count;
    char v[10] = {'l','z','j','o','u','x','a', 'p', 'c', 'm'};
    
    printf("\n  Consoantes lidas"); 
    printf("\n- - - - - - - - - - - - \n"); 
    for(i = 0; i < 10; i++)
    {
    if(v[i] == 'a' || v[i] == 'A' || v[i] == 'e' || 
      v[i] == 'E' || v[i] == 'i' || v[i] == 'I' ||
           v[i] == 'o' || v[i] == 'O' ||
           v[i] == 'u' || v[i] == 'U'){
          //printf(" %c ", vogais[i]);
    }
    else 
    {
      printf(" %c ", v[i]);
       count++;
    }
        
    }
    printf("\n- - - - - - - - - - - - \n\n"); 
    printf("Total de consoantes = %d", count);
    
   
    return 0;
}
