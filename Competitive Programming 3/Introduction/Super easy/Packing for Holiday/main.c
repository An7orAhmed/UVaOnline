#include <stdio.h>
#include <stdlib.h>

int main(){
    int t, l, h, w, x;
    scanf("%d" , &t);
    for(x = 0; x < t; x++){
        scanf("%d %d %d", &l, &w, &h);
        if(l > 20 || w > 20 || h > 20) printf("Case %d: bad\n", x + 1);
        else printf("Case %d: good\n", x + 1);
    }
    return 0;
}
