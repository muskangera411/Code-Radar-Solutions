#include <stdio.h>
int main() {
    char a;
    printf("");
    scanf("%c",&a);
    if(a=="%X"){printf("Uppercase");}
    else if(a=="%x"){printf("Lowercase");}
    else{printf("Not an alphabet");}

    return 0;
}