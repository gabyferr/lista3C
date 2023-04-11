#include <stdio.h>

int main ()
{
    
      float nota1, nota2, nota3, media;
      int codigoAluno=1;
 
      while(codigoAluno != 0) {
 
      printf("\nDigite o codigo do aluno: \n");
      scanf("%d", &codigoAluno);
      
      printf ("Digite as 3 nota: \n");
      scanf ("%f %f %f",&nota1, &nota2, &nota3);
      
      media = (nota1 + nota2 + nota3)/3;
      
      printf("O codigo do aluno é: %d ",codigoAluno);
      printf("\nA media do aluno é: %f",media);
    }
}
