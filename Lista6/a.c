#include <stdio.h>

void bubble(int v[], int n){
    int l , r ; 
    for(int i = 0 ; i < n-1 ; i++){
        for(int j = 0 ; j < n-1 ; j++){    
            if(v[j] > v[j+1]){
                int aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }   
        }
    }


}


int main() {

int v[1000];
int n = 0 ;


while(scanf("%d" , &v[n]) != EOF){
    n++;
}

bubble(v, n);

for(int i = 0 ; i < n ; i++){
    printf("%d " , v[i]);
}printf("\n");




}



