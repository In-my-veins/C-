#include <stdio.h>

void selectSort(int array[],int n){
    for(int i = 0; i < n; i++){
        int min_pos = i;
        for(int j = i+1; j < n - 1; j++)
        if(array[j] < array[min_pos]) min_pos = j;
    }
}


int main(){

    return 0;
}