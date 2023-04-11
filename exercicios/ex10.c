#include <stdio.h>

int main()
{
   
   int valor, valorDentro, valorFora;
   for(int i = 0;i < 10; i++){
       
       printf("digite um valor: \n");
       scanf("%d", &valor);
           
        if(valor >= 10 && valor <=20){
            valorDentro++;
            
        } else{
               valorFora++;
        }
       
    }
