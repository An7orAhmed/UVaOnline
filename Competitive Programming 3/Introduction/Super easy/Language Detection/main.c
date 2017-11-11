#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char t[14];
    int x = 0;
    while(1){
        scanf("%s", t);
        if(t[0] == '#') exit(0);
        if(strcmp(t, "HELLO") == 0) printf("Case %d: ENGLISH\n", ++x);
        else if(strcmp(t, "HOLA") == 0) printf("Case %d: SPANISH\n", ++x);
        else if(strcmp(t, "HALLO") == 0) printf("Case %d: GERMAN\n", ++x);
        else if(strcmp(t, "BONJOUR") == 0) printf("Case %d: FRENCH\n", ++x);
        else if(strcmp(t, "CIAO") == 0) printf("Case %d: ITALIAN\n", ++x);
        else if(strcmp(t, "ZDRAVSTVUJTE") == 0) printf("Case %d: RUSSIAN\n", ++x);
        else printf("Case %d: UNKNOWN\n", ++x);
    }
    return 0;
}
