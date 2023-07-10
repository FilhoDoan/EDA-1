#include <stdio.h>


void selection(int v[], int n) {
//{7,5,4,3,2,1};

    for(int j = 0 ; j < n-1; j ++){
    int min = j;
    for(int i = j+1; i <= n-1; i++){
        
        if(v[i] < v[min]){
            min = i ;
        }
    }
     int aux = v[j];
     v[j] = v[min]; 
     v[min] = aux;
    }
}

int main() {

int v[10000];
int n = 0;

while (scanf("%d ",&v[n]) != EOF){
    n++;
}
selection(v,n);

for(int i = 0 ; i < n ; i++){
        printf("%d ", v[i]);
    }   printf("\n");
 
}