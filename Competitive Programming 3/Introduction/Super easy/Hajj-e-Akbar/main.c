#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char txt[20];
    int x = 1;
    while(1){
        scanf("%s", txt);
        if(txt[0] == '*') exit(0);
        if(strcmp(txt, "Hajj") == 0) printf("Case %d: Hajj-e-Akbar\n", x);
        else printf("Case %d: Hajj-e-Asghar\n", x);
        x++;
    }
    return 0;
}
