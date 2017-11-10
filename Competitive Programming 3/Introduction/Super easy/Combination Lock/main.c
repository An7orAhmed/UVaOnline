#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c, d, r = 0;
    int n1, n2, n3;
    while(1){
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if(a == 0 && b == 0 && c == 0 && d == 0) exit(0);
        if(b > a) n1 = 40 - (b - a);
        else n1 = a - b;
        if(b > c) n2 = 40 - (b - c);
        else n2 = c - b;
        if(d > c) n3 = 40 - (d - c);
        else n3 = c - d;
        r = (80 + n1 + 40 + n2 + n3) * 9;
        printf("%d\n", r);
    }
    return 0;
}
