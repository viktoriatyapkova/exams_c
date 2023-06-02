#include <stdio.h>
void changeMin(int arr[], int n){
int i, k, min1, min2 ;
for (i = 0; i < n; i++)
scanf ("%d", &arr[i]);
min1 = 0; min2 = 0;
for(i=0; i<n; i++){
    if (arr[i] < min1){
        min1 = arr[i];
        }
    if (arr[i] < min2 && arr[i] > min1) {
        min2 = arr[i];
        }
    }
    for (int i=0; i<k; i++){
        int l =min1;
        min1=min2;
        min2=l;
    }

    for (int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}
