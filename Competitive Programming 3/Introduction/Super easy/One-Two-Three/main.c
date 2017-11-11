#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char n[10];
    int t, i, j;
    scanf("%d", &t);
    for(i = 0; i < t; i++){
        scanf("%s", n);
        if(strlen(n) == 5) printf("3\n");
        else {
            if(n[0] == 'o' && n[1] == 'n' || n[1] == 'o' && n[2] == 'n') printf("1\n");
            else if(n[0] == 'o' && n[1] == 'e' || n[1] == 'o' && n[2] == 'e') printf("1\n");
            else if(n[0] == 'n' && n[1] == 'e' || n[1] == 'n' && n[2] == 'e') printf("1\n");
            else if(n[0] == 'o' && n[2] == 'e' || n[0] == 'e' && n[2] == 'o') printf("1\n");
            else printf("2\n");
        }
    }
    return 0;
}
