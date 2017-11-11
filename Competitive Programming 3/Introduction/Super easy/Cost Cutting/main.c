#include <stdio.h>
#include <stdlib.h>

int main(){
    int t, i, a, b, c;
    scanf("%d", &t);
    for(i = 0; i < t; i++){
        scanf("%d %d %d", &a, &b, &c);
        if((a > b && a < c) || (a < b && a > c))
            printf("Case %d: %d\n", i+1, a);
        else if((b > a && b < c) || (b < a && b > c))
            printf("Case %d: %d\n", i+1, b);
        else
            printf("Case %d: %d\n", i+1, c);
    }
    return 0;
}
