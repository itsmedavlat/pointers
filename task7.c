#include <stdio.h>

int main(){

    int nums[] = {1,2,3,4,5};
    int size = sizeof(nums) / sizeof(nums[0]);
    int *ptr = nums;
    int temp;

    temp = *ptr;
    *ptr = *(ptr + size -1);
    *(ptr + size - 1) = temp;

    printf("%d %d", nums[0], nums[size - 1]);

    


    return 0;
}