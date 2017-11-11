#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int t, n, i, s;
    scanf("%d", &t);
    for(i = 0; i < t; i++){
        scanf("%d", &n);
        s = (((((n * 567) / 9) + 7492) * 235) / 47) - 498;
        s = abs((s % 100) / 10);
        printf("%d\n", s);
    }
    return 0;
}
