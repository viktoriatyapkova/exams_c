#include <stdio.h> 

int isPalindrom(int num){
    int copy, reverse = 0, dig;
    copy = num;
    while(num > 0){
        dig = num % 10;
        reverse = reverse * 10 + dig;
        num = num / 10 ;
    }
    if(copy == reverse){
        return 1;
    }
    else{
        return 0;
    }
}   

int main(){
    int num = 121;
    printf("%d ", isPalindrom(num));
}