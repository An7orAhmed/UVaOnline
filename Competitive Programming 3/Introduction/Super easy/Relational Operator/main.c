#include <stdio.h>
#include <stdlib.h>

int main(){
    int t, i;
    long long int n, m;
    scanf("%d", &t);
    for(i = 0; i < t; i++){
        scanf("%lld %lld", &n, &m);
        if(n > m) printf(">\n");
        else if(n < m) printf("<\n");
        else printf("=\n");
    }
    return 0;
}
