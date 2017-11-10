#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int a, b;
    long long int x, t = 0;
    char dd[20];
    scanf("%d", &a);
    for(b = 0; b < a; b++){
        scanf("%s", dd);
        if(dd[0] == 'd') {
            scanf("%lld", &x);
            t += x;
        }
        else printf("%lld\n", t);
    }
    return 0;
}
