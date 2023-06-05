#include <stdio.h>

 void leva(char *n){

    if(*n =='\0'){
       return;   // retorna a pilha da stack
   } 
    if(*n == 'x'){
        leva(n + 1); 
        printf("x");
    }else{

     printf("%c", *n);
     leva(n+1);   


    }        
 }


int main(){
    char xixis[101];

    scanf("%s", xixis);

    leva(xixis);
    
    printf("\n");

}