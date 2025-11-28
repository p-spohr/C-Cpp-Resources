#include <stdio.h>
#include <stdlib.h>

// returns the index position of x in v (find x in v[0] ... v[n-1]) where elements in v are sorted

int binary(int x, int v[], int n) {
    
    int low, high, mid;

    low = 0;
    high = n - 1;

    while (low <= high) {
        // start search in the middle of array
        mid = (low + high) / 2;
        if (x < v[mid]) {
            high = mid - 1;
        } else if (x > v[mid]) {
            low = mid + 1;
        } else {
            // match was found
            return mid;
        }
    }
    
    return 0;

}

int main(int argc, char* argv[]) {
    
    int sorted_array[] = {0, 1, 2, 3, 4, 5, 6, 7, 9, 10};
    int len = sizeof(sorted_array) / sizeof(int);
    int target = atoi(argv[1]);
    int position = binary(target, sorted_array, len);

    if (!position) {
        printf("Number does not exist in array.");
        return 0;
    }

    for (int i = 0; i < len; i++) {
        // print out array in cell format (if last number then close the cell with |)
        printf((i != (len - 1)) ? "|%3d" : "|%3d|", sorted_array[i]);
    }

    printf("\n");
    
    for (int i = 0; i < len; i++) {
        if (i == position) {
            printf((i != (len - 1)) ? "|%3c" : "|%3c|", 'X');
        } else {
            printf((i != (len - 1)) ? "|%3c" : "|%3c|", ' ');
        }
    }
    
    return 0;

}
