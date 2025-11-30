#include <stdio.h>
#include <stdlib.h>

void my_print_1(char p_string[]) {
    printf("From %s (%p):\n", __FUNCTION__, p_string);
    for (int i = 0; p_string[i] != '\0'; i++) {
        printf("%c", p_string[i]);
    }
    printf("\n");
}

// char *p_string is the same as char p_string[] because array variables always point to an address
void my_print_2(char *p_string) {
    printf("From %s (%p):\n", __FUNCTION__, p_string);
    // p_string[i] is shorthand for *(p_string + i) where the pointer needs to be dereferenced to get value
    for (int i = 0; *(p_string + i) != '\0'; i++) {
        printf("%c", *(p_string + i));
    }
    printf("\n");
}

void my_print_3(char *p_string) {
    printf("From %s (%p):\n", __FUNCTION__, p_string);
    // p_string + 1 points to the next address and can be shortened to p_string++
    while (*p_string != '\0') {
        printf("%c", *(p_string++));
    }
    printf("\n");
}

int main(int argc, char* argv[]) {
    
    char name[] = "Timmy";
    printf("From %s (%p):\n%s\n", __FUNCTION__, name, name);
    my_print_1(name);
    my_print_2(name);
    my_print_3(name);

    return 0;

}
