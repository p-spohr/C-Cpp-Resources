#include <stdio.h>

void print_char_decimal_1(char p_word[]) {
    printf("%s\n", __FUNCTION__);
    while(*p_word != '\0') {
        printf("%d\n", *p_word);
        p_word++;
    }
}

void print_char_decimal_2(char p_word[]) {
    printf("%s\n", __FUNCTION__);
    // for does not require initialized variable, simply check expression 2 and add one to p_word after loop
    for(;*p_word != '\0'; p_word++) {
        printf("%d\n", *p_word);
    }
}

void print_char_upper(char p_word[]) {
    printf("%s\n", __FUNCTION__);
    // 'a' decimal 97, 'A' decimal 65
    int cap_diff = 'a' - 'A'; 
    static int total_char_printed;
    while(*p_word != '\0') {
        // print the capital if lower case by subtracting the decimal difference, else print unchanged character 
        if (*p_word >= 'a' && *p_word <= 'z') {
            printf("%c", *p_word - cap_diff);
        } else {
            printf("%c", *p_word);
        }
        total_char_printed++;
        p_word++;
    }
    printf("\n");
    printf("Total Char Printed (static int): %d\n", total_char_printed);
}

void print_hi(char p_word[]) {
    printf("%s\n", __FUNCTION__);
    printf("Hi, %s!\n", p_word);
}

int main(int argc, char* argv[]) {
    
    print_char_decimal_1(argv[1]);
    print_char_decimal_2(argv[1]);
    print_char_upper(argv[1]);
    print_char_upper(argv[1]);
    print_hi(argv[1]);

    char names[5][5] = {"Pat", "Tim", "Sue", "Mary", "Bill"};

    for (int i = 0; i < (int)(sizeof(names) / sizeof(names[i])); i++) {
        printf("%s\n", names[i]);
    }

    printf("sizeof(names)     %d\n", (int)(sizeof(names)));
    printf("sizeof(names[0])) %d\n", (int)(sizeof(names[0])));

    return 0;

}

