#include <stdio.h>

int main() {
    int nums[] = {1, 6, 3, 4, 5};
    int *ptr = nums; // Pointerni initialize qildik arrayni 0chisiga  
    int max = *ptr; // 1-chi elementni Eng katta deb faraz qilamiz

    for (int i = 1; i < sizeof(nums)/sizeof(nums[0]); i++) {
        if (*(ptr + i) > max) {
            max = *(ptr + i); 
        }
    }

    printf("Maksimal qiymat: %d\n", max);

    return 0;
}
