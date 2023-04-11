#include <stdio.h

int main()
{
    int numero, intervalo1, intervalo2, intervalo3, intervalo4;
    
    do {  
       printf("digite um numero: \n");
       scanf("%d", &numero);
           
        if(numero >= 0 && numero <=20){
           intervalo1++;
        }
        
        if(numero >= 26 && numero <=50){
            intervalo2++;
        } 
        
        if(numero >= 51 && numero <= 75){
            intervalo3++;
        } 
        
        if(numero >= 76 && numero <=100){
            intervalo4++;
        } 
    } while (numero > 0);
    
       printf("\n Os numeros que estao dentro do intervalo de 0 a 20 sao: %d", intervalo1);
       printf("\n Os numeros que estao dentro do intervalo de 26 a 50 sao: %d", intervalo2);
       printf("\n Os numeros que estao dentro do intervalo de 51 a 75 sao: %d", intervalo3);
       printf("\n Os numeros que estao dentro do intervalo de 76 a 100 sao: %d", intervalo4);
       
       
