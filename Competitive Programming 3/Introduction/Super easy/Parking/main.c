#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int t, i, j, k, n, min, max, mid;
    scanf("%d", &t);
    for(i = 0; i < t; i++){
        min = 100, max = 0, mid = 0;
        scanf("%d", &n);
        int ar[n];
        for(j = 0; j < n; j++){
            scanf("%d", &ar[j]);
            if(ar[j] < min) min = ar[j];
            if(ar[j] > max) max = ar[j];
        }
        mid = (min + max) / 2;
        int mid_n, mid_r = 100, park;
        for(k = 0; k < n; k++) {
            mid_n = abs(mid - ar[k]);
            if(mid_n < mid_r) {
                park = ar[k];
                mid_r = mid_n;
            }
        }
        int z = (abs(park - min) * 2) + (abs(park - max) * 2);
        printf("%d\n", z);
    }
    return 0;
}
