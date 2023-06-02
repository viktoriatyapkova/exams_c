#include <stdio.h>

float sumFoo(int n){
    float sum=1, copy;
    for(float i=3; i<=n; i++){
        copy=(i-1)*i;
        sum+=(1/copy);
    }
    return sum;
}


int main(){
    float n=3;
    printf("%f", sumFoo(n));
}