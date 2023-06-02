#include <stdio.h>
int main (){
    int n, sum=0, len=0;
    float result;  
    
    while (n != 0){ 
        if(n % 10 == 3){
            scanf("%d\n", &n);
            sum += n; 
            len += 1; 
        }
    }
    result = (float)sum / (float)len;
    printf("%f\n", result);
}
