#include <stdio.h>
int main(){

int array[] = {5,9,7,6,4,0,2,3,8,1};

for(int i = 0; i < 10; i++){
    int min_pos = i;
    for(int j = i+1; j < 10; j++){
        if(array[j] < array[min_pos]){
            min_pos = j;
        }
    }
    if(min_pos != i){
            int temp = array[i];
            array[i] = array[min_pos];
            array[min_pos] = temp;
        }
}

for(int i = 0; i < 10; i++){
    printf("%d\n",array[i]);
}

    return 0;
}