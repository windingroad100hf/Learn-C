#include <stdio.h>

#define TAB "\\t"
#define SPACE " "

int main(){
        int c = getchar();
        int d;
        int numWhite = 0;
        while(c != EOF) {
                d = c;
                c = getchar();
                if ((c == '\t' || c ==  ' ' || c == '\n') && (d != '\t' && d != ' ' && d != '\n')) {
                        ++numWhite;
                        printf("%d\n", numWhite);
                }

        }
}
