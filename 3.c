#include <stdio.h>
int main (){
    int n, sum=0, len=0; 
    double result;
    
    while (n != 0){ 
        if(n % 10 == 3){
            scanf("%d\n", &n);
            sum += n; 
            len += 1; 
        }
    }
       result = (double)sum / (double)(len-1);
    printf("%f\n", result);
}