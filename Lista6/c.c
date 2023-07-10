#include <stdio.h>

void insertionSortPlus(int v[], int n ){
    for(int i = n-1; i > 0 ; i--) {
         if(v[i-1] > v[i]){
            int aux = v[i-1];
            v[i-1] = v[i];
            v[i] = aux ; 
         }
    }
    for(int i = 0; i <= n-1 ; i++) { 
        int j = i; int vtemp = v[j];
        while(vtemp < v[j-1]){
            v[j] = v[j-1];
            j--;
        }
        v[j] = vtemp;
    }
}

int main () {

int v[10000];
int n = 0; 



while (scanf("%d ",&v[n]) != EOF){
    n++;
}

insertionSortPlus(v,n);

for(int i = 0 ; i < n ; i++){
        printf("%d ", v[i]);
    }   printf("\n");
 
}

