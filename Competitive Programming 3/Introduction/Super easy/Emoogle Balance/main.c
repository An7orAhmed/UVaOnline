#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, m = 1;
    while(1){
        scanf("%d", &n);
        if(n == 0) exit(0);
        int e[n], b = 0, trt = 0, ntrt = 0;
        for(i = 0; i < n; i++){
            scanf("%d", &e[i]);
            if(e[i] == 0) trt++;
            else ntrt++;
        }
        b = ntrt - trt;
        printf("Case %d: %d\n", m++, b);
    }
    return 0;
}
