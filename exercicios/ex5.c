#include <stdio.h>
#include <stdbool.h>

int main()
{
     int maiorIdade, qtdFCOI=0;
    
    while(true){
        
      int idade, sexo, cabelo, olhos;
      
      printf("Digite a sua idade: ");
      scanf("%d", &idade);
      
      if(idade == -1){
          break;
      }
      
      printf("Digite a cor dos olhos verdes 0 outra cor 1: ");
      scanf("%d", &olhos);
      
      printf("Informe a cor do seu cabelo loiro 0 outra cor 1: ");
      scanf("%d", &cabelo);
    
    
      printf("Informe seu sexo 0 M e 1 F: ");
      scanf("%d", &sexo);
      
    
    if(maiorIdade < idade){
           maiorIdade = idade;
        }
    
     if(idade >17 &&idade<=35 && sexo==1 && cabelo==0 && olhos==0){
            qtdFCOI++;
        }
    
    }
    
    printf("\na maior idade dos habitantes e: %d", maiorIdade);
    printf("\na quantidade de indivíduos do sexo feminino cuja idade está entre 18 e 35 anos" 
    "inclusive e que tenham olhos verdes e cabelos louros e: %d", qtdFCOI);
}

