#include <stdio.h>

int main()
{
    float media;
    for(int i = 0;i < 4; i++){
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    if(numero >= 13 && numero <=73 ){
     media += numero;
    }
    }
    
    printf("a media aritmetica dos numeros lidos entre "
    "13 e 73 e: %f", media/4);
    
}
