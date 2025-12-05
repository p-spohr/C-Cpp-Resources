#include <stdio.h>
#include <stdlib.h>

// function pointer
// int (*Func)(int, int);

// function that returns a pointer to an integer
// int *Func(int, int);

int my_add(int a, int b) {
    // __func__ is a predefined identifier (__FUNCTION__ is GCC specific)
    // __LINE__ is a preprocessor macro
    printf("Function Name (line %d): %s(%d, %d)\n", __LINE__ , __func__, a, b);
    return a + b;
}

struct my_struct {
    int (*p_add)(int, int);
};

int main(int argc, char* argv[]) {
    
    printf("%s\n", __FILE__);
    printf("%s %s %s\n", __func__, __DATE__, __TIME__);
    
    // pointer to function (memory of set of instructions)
    // (*p_name)(arg types) = &function
    // can be &function or just function
    int (*p_func)(int, int) = my_add;
    printf("p_func %p\n", p_func);
    printf("my_add %p\n", my_add);

    // can use (*p_func) or just p_func to call function
    printf("Function Pointer (line %d): %d\n", __LINE__, p_func(2, 3));

    // initialization by individual members
    // struct my_struct add_struct;
    // add_struct.p_add = &my_add;

    // initialization using designed initializers
    struct my_struct add_struct = {
        .p_add = my_add,
    };

    printf("Struct Function Pointer (line %d): %d\n", __LINE__, add_struct.p_add(10,15));


    return 0;

}
