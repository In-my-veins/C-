#include <stdio.h>


void insertion_sort(int a[], int n){

 for(int i = 0; i < n; i++){
    int key = a[i];
    int  j = i - 1;

    while (j > 0 && a[j] > key)
    {
        a[j+1] = a[j];
        j--;
    }

    a[j+1] = key;
    
 }
for(int i = 0; i < n; i++){
    printf("%d\n",a[i]);
}
}

int main(){
int array[] = {1,8,4,9,5,7,6,3,2};
insertion_sort(array,9);
    return 0;
}

