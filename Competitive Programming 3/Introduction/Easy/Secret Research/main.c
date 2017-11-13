#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int t, i, l;
    char d[1000];
    scanf("%d" , &t);
    for(i = 0; i < t; i++){
       scanf("%s", d);
       l = strlen(d);
       if(strcmp(d, "1") == 0 || strcmp(d, "4") == 0 || strcmp(d, "78") == 0)
          printf("+\n");
       else if(d[l - 1] == '5' && d[l - 2] == '3')
          printf("-\n");
       else if(d[0] == '9' && d[l - 1] == '4')
          printf("*\n");
       else
          printf("?\n");
    }
    return 0;
}
