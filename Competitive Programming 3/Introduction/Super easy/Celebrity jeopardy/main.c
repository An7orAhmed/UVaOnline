#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char s[1000001], c;
    int x = 0;
    while(1){
        do {
            if(scanf("%c", &c) == EOF) exit(0);
            s[x++] = c;
        } while(c != '\n');
        s[x - 1] = 0;
        printf("%s\n", s);
        memset(s, 0, sizeof(s));
        x = 0;
    }
    return 0;
}
