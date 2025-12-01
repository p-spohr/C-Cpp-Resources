#include <stdio.h>

void reverse_word_book(char word[], int len) {
    int c, i, j;
    for (i = 0, j = len; i < j; i++, j--) {
        printf("i:%d  j:%d\n", i, j);
        c = word[j];
        word[j] = word[i];
        word[i] = c;
    }
}

int main(int argc, char* argv[]) {

    char name[] = "savannah";

    printf("%lld\n", sizeof(name));
    
    printf("Original: %s\n", name);
    
    reverse_word_book(name, sizeof(name) - 2);
    printf("Reversed: %s\n", name);
    
    reverse_word_book(name, sizeof(name) - 2);
    printf("Reversed again: %s\n", name);

    return 0;
}

