#include<stdio.h>
int main(){
//Printing sum for each row(row-wise)
int array[4][4];
    for(int i = 0; i < 4; i++){
        for(int k = 0; k < 4; k++){
            printf("Enter array components [%d][%d]: ",i,k);
            scanf("%d",&array[i][k]);
        }
    }
    for(int i = 0; i < 4; i++){
       int sum = 0;

       for(int k = 0; k < 4; k++){
        sum += array[i][k];
       }
       printf("%d\n",sum);
    }

    //Column-wise sum

    for(int k = 0; k < 4; k++){
        int sumu = 0;
        for(int i = 0; i < 4; i++){
            sumu += array[i][k];
        }
        printf("%d\n",sumu);
    }

    //Main diagonal sum;
     int Sum;
    for(int i = 0; i < 4; i++){
        Sum += array[i][i];
    }
    printf("%d\n",Sum);

    
    //Secondary diagonal

    
    int Sumu;
    for(int i = 0; i < 4; i++){
        for(int k = 0; k < 4; k++){
            if(i == k){
                Sum += array[i][k];
            }
        }
    }
    printf("%d\n",Sumu);
    return 0;
}