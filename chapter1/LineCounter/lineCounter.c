#include <stdio.h>

/* count lines in input */
int main(){
        int counter = 0;
        int c;
        while((c = getchar()) != EOF) {
                if (c == '\n') {
                        ++counter;
                }
                printf("%d\n", counter);
        }
}
