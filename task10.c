#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    srand(time(0));
    int numbers[20];

    for(int i = 0; i < 20; i++){ // random 20tta raqam bn toldi.
        numbers[i] = rand() % 10;
    }

    for (int i = 0; i < 20; i++){
        printf("%d,", numbers[i]);
    }
    printf("\n");
    
    for(int i = 0; i < 20; i++){
        int count = 0;
        for(int j = 0; j < 20; j++){
            if(numbers[i] == numbers[j])
            count++;
        }
        if(count == 1)
            printf("%d, ", numbers[i]);
    }


    return 0;
}