#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    float somaSalario;
    int maiorIdade=0, menorIdade=0, qtdFSalario=0;
    
    for(int i = 0; i < 3; i++){
    
        float salario;
        int idade, sexo;
    
        printf("\ndigite sua idade: \n");
        scanf("%d", &idade);
        
        printf("\ndigite seu salario: \n");
        scanf("%f", &salario);
        
        printf("\ninforme seu sexo 0 M e 1 F: \n");
        scanf("%d", &sexo);
        
        somaSalario += salario;
        
        if(maiorIdade < idade){
           maiorIdade = idade;
        }
        if(menorIdade > idade || menorIdade == 0){
           menorIdade = idade;
        }
        
        if(salario < 101 &&sexo==1){
            qtdFSalario++;
        }
    }
    
    printf("media do salario é: %f", somaSalario/3);
    printf("\na maior idade  é: %d", maiorIdade);
    printf("\na menor idade é: %d", menorIdade);
    printf("\nquantidade de mulheres com salário até R$100,00 e: %d", qtdFSalario);
    
}


