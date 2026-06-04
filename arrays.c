#include <stdio.h>

int main() {
    // int array[100];
    // int sum[100];
    // int n;

    // printf("Enter the number of elements in the array: ");
    // scanf("%d", &n);

    // for(int i = 0; i < n; i++) {
    //     printf("Enter array element [%d]: ", i + 1);
    //     scanf("%d", &array[i]);
    // }

    // sum[0] = array[0] + array[1];
    // sum[n - 1] = array[n - 1] + array[n - 2];

    // for(int i = 1; i < n - 1; i++) {
    //     sum[i] = array[i - 1] + array[i + 1];
    // }

   
    // printf("Final array is:\n");
    // for(int i = 0; i < n; i++) {
    //     printf("%d\n", sum[i]);
    // }


    //Printing upper triangle product


    int array[100];
    int n;
    int m;
    
    printf("Enter the number of rows: ");
    scanf("%d",&m);
    printf("Enter the number of columns: ");
    scanf("%d",&n);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("Enter the array components [%d][%d]: ",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    int Product = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(i > j){
                Product *= array[i][j];
            }
        }}
        printf("%d",Product);
    return 0;
}
