#include <stdio.h>
#include <math.h>
// ruas paralelas ou perpendiculares 
//definir os cruzamentos
 

int main(){
     
    int xm, ym, xr,yr;
    int cruzamentos; 

    scanf("%d %d %d %d", &xm, &ym, &xr, &yr);
    
    cruzamentos = sqrt(pow((xr - xm),2.0) + pow((yr - ym),2.0));

    printf("%d", cruzamentos);



}