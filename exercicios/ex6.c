#include <stdio.h>
#include <stdlib.h>

int main() {
   for (int i = 1000;i < 2000; i++) {
    div_t resultado = div(i,11);
    
    if(resultado.quot == 5){
     printf("O numero %d divido por 11 r resto e 5: ", i); 
    }
    
   } 
}
