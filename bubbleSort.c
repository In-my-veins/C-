#include <stdio.h>

void sortArray(int array[], int n){
 for(int i = 0; i < n - 1; i++){
    for(int j = 0; j < n-1-i; j++){
        if(array[j] > array[j+1]){
            int swap = array[j]; array[j] = array[j+1]; array[j] = swap;
        }
    }
 }
 for(int i = 0; i < n; i++){
    printf("%d\n",array[i]);
 }

}


int main(){

    int swapNumbers[] = {73,4,32,54,2,5,34,3,83};
    sortArray(swapNumbers,9);

    return 0;
}