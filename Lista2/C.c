#include <stdio.h>

// n = 500 
// n = 100

int F91(int n){
    if(n >= 101){
        return n-10;

 } 
 return F91(F91(n+11));
}

int main(){

    int num;

    while(scanf("%d",&num) > 0 && num!= 0 ){

        printf("f91(%d) = %d\n", num, F91(num));

    }


}