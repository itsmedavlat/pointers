#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int numbers[20];
    int count[10] = {0}; 

    srand(time(0));

    for (int i = 0; i < 20; i++) {
        numbers[i] = rand() % 10;
    }

    for (int i = 0; i < 20; i++){ 
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Har bir raqamni nechi martaligini sanash 
    for (int i = 0; i < 20; i++) {
        count[numbers[i]]++;
    }

    // Nechi marta ishtitok etganligini aniqlash
 
    for (int i = 0; i < 10; i++) {
        if (count[i] > 0) {
            printf("%d soni %d marta ishtirok etgan.\n", i, count[i]);
        }
    }

    return 0;
}
