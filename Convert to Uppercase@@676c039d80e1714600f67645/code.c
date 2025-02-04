#include <stdio.h>
#include <ctype.h>
int main(){
    char a[20];
    scanf("%s",&a);
    printf("%[^\n]%*X",a);
    return 0;

}