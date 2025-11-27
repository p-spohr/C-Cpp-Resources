#include <stdio.h>

void reverse_count(int name) {
    for (int i=name; i == 0; i--) {
        printf("%d\n", i);
    }
}

int main(int argc, char* argv[]) {
    char input[100];
    printf("Please input name: ");
    scanf("%[^\n]100s", input);
    printf("Original: %s\n", input);
    printf("%llu\n", sizeof(input));
    reverse_count(10);
    return 0;
}

