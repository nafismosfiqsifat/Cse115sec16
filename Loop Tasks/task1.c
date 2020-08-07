#include <stdio.h>

int main() {
    int counter;
    printf("Even numbers between 0 to 100\n");

    for(counter = 0; counter <= 100; counter++) {

        if(counter%2 == 0) {

            printf("%d ", counter);
        }
    }

    return 0;
}
