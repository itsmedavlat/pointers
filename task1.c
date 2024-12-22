#include <stdio.h>

int change_value(int n){
    int result = n * n;
    int *ptr;

    ptr = &result;
    printf("Javob : %d\n", *ptr);

    return *ptr;
}

int main(){

    change_value(4);

return 0;
}   