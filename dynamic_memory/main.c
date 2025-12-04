#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    
    int *p;
    int *p_arr;
    int *p_call;

    printf("sizeof(p)   %3lld\n", sizeof(p));
    printf("sizeof(*p)  %3lld\n", sizeof(*p));
    printf("sizeof(int) %3lld\n", sizeof(int));
    
    p = (int*)malloc(sizeof(*p)); // allocate single int on heap
    *p = 10;
    printf("*p = %d\n", *p);
    free(p); // always free up memory allocated on heap
    
    // malloc returns a void pointer, so cast to type is necessary
    p_arr = (int*)malloc(sizeof(*p_arr) * 10); // allocate int array of size 10 on heap
    printf("sizeof(p_arr) %lld\n", sizeof(p_arr));
    
    for (int i = 0; i < 10; i++) {
        p_arr[i] = i;
    }

    printf("p_arr[0] = %d\n", p_arr[0]);
    printf("p_arr[4] = %d\n", p_arr[4]);
    printf("p_arr[9] = %d\n", p_arr[9]);

    free(p_arr);

    // better to use size_t to account for OS and compiler differences
    // calloc assigns all values to 0, malloc assigns garbage values
    p_call = (int*)calloc(5, sizeof(*p_call));

    for (int i = 0; i < 10; i++) {
        printf("%d ", p_call[i]);
    }

    printf("\n");
    
    p_call = realloc(p_call, sizeof(*p_call) * 10);
    
    for (int i = 0; i < 10; i++) {
        printf("%d ", p_call[i]);
    }
    
    free(p_call);

    return 0;

}
