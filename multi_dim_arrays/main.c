#include <stdio.h>
#include <stdlib.h>
#include <stdint.h> // uintptr_t guarantees portability of casting ptr to int

void print_22_array(int (*X)[2]) {
    int row, col;
    for (row = 0; row < 2; row++) {
        for (col = 0; col < 2; col++) {
            printf("(%d, %d): %d\n", row, col, X[row][col]);
        }
    }
}

void print_222_array(int (*X)[2][2]) {
    int batch, row, col;
    for (batch = 0; batch < 2; batch++) {
        for (row = 0; row < 2; row++) {
            for (col = 0; col < 2; col++) {
                printf("(%d, %d, %d): %d\n", batch, row, col, X[batch][row][col]);
            }
        }
    }
}

int main(int argc, char* argv[]) {
    
    int arr_22[2][2] = {{1,2}, {3,4}};
    arr_22[0][0] = 0;
    // create a pointer to one dimensional array of two ints
    // this pointer can now traverse the memory of arr_22 since it is an array of an array
    int (*p_arr_22)[2] = arr_22;
    
    printf("arr_22           %p\n", arr_22);
    printf("p_arr_22         %p\n", p_arr_22);

    printf("arr_22 + 1       %p\n", arr_22 + 1);
    printf("*(arr_22 + 1)    %p\n", *(arr_22 + 1));

    printf("**(arr_22 + 1)   %d\n", **(arr_22 + 1));
    printf("*(*(arr_22 + 1)) %d\n", *(*(arr_22 + 1)));
    
    printf("arr_22[0]        %p\n", arr_22[0]);
    printf("p_arr_22[0]      %p\n", p_arr_22[0]);
    
    printf("arr_22[1]        %p\n", arr_22[1]);
    printf("p_arr_22[1]      %p\n", p_arr_22[1]);

    printf("arr_22[0][0]     %d\n", arr_22[0][0]);
    printf("p_arr_22[0][0]   %d\n", p_arr_22[0][0]);
    printf("**arr_22         %d\n", **arr_22);

    printf("&arr_22[0][0]    %p\n", &arr_22[0][0]);
    printf("&p_arr_22[0][0]  %p\n", &p_arr_22[0][0]);

    int x = 0;
    int *p_x = &x;
    printf("%llu\n", (uintptr_t)p_x);
    printf("%llu\n", (long long unsigned)p_x);
    printf("%d\n", *p_x);

    print_22_array(arr_22);

    int arr_222[2][2][2] = {
        {
            {2, 4}, 
            {6, 8}
        }, 
        {
            {10, 12}, 
            {14, 16}
        }
    };

    print_222_array(arr_222);

    return 0;
}
