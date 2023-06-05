#include <stdio.h>


int soma_dos_numeros(char *num){

    int s = 0;
   
   // para o final da lista 
    if(*num == '\0'){
        return *num;
    }
    else{
        s = (*num) - '0'+ soma_dos_numeros(num + 1 );
        return s;
    }


}




int main(){

}