#include <stdio.h>
#include <stdbool.h>

int main()
{
    
    int  contador = -1, qtdSalario = 0;
    float salarioLoop, mediaFilhos, maiorSalario;
    
    while(true){
        
        float salario;
        int filhos;
        
            printf("\nDigite o salario: \n");
            scanf("%f", &salario);
            
            if(salario < 0){
                break;
            }
            
            printf("\nDigite a quantidade de filhos: \n");
            scanf("%d", &filhos);
        
        salarioLoop += salario;
       
        
        if(salario < 101 ){
            qtdSalario++;
        }
        
        if(maiorSalario < salario){
           maiorSalario = salario;
        }
         contador++;
    }
    
    
         printf("\na media salarial da populacao e: %f", salarioLoop/contador);
         printf("\npercentual de pessoas com salário até R$100,00 e: %d pessoas", qtdSalario);
         printf("\nmaior salario e: %f", maiorSalario);
}
