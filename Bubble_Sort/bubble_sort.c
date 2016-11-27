#include <stdio.h>
#include <stdlib.h>

int main(){

    int arr[10];

    for( int i = 0 ; i < 10 ; i++ ) 
    {
        arr[i] = (rand() % 100) + 1;
        printf("%d\n", arr[i]);
    }
printf("-----------------------------------------\n");
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 9; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for( int i = 0 ; i < 10 ; i++ ) 
    {
        printf("%d\n", arr[i]);
    }

    getchar();

    return 0;
}