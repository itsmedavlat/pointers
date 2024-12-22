#include <stdio.h>

int main() {
    int nums[] = {1, 2, 3, 4, 5};
    int *ptr = nums; 
    int min = *ptr; 

    for (int i = 1; i < sizeof(nums)/sizeof(nums[0]); i++) {
        if (*(ptr + i) < min) {
            min = *(ptr + i); 
        }
    }

    printf("Minimal qiymat: %d\n", min);

    return 0;
}
