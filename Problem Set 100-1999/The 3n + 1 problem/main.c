#include <stdio.h>
#include <stdlib.h>

int main(){
    long long int i,ii, t, x, j, jj, n, s = 0, max = 0;
    while(scanf("%lld %lld", &i, &j) != EOF){
        ii = i; jj = j;
        if(ii > jj){
            t = ii;
            ii = jj;
            jj = t;
        }
        for(x = ii; x <= jj; x++){
            n = x;
            while(1){
                s++;
                if(n == 1) break;
                if(n % 2 != 0) n = (3 * n) + 1;
                else n = n / 2;
            }
            if(s > max) max = s;
            s = 0;
        }
        printf("%lld %lld %lld\n", i, j, max);
        max = 0;
    }
    return 0;
}
