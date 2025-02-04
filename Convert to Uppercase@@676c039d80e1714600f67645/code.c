#include <stdio.h>
#include <ctype.h>
int main(){
    char a[20];
    scanf("%s",&a);
    for(i=0,a[i]!='0',i++){
        a[i]=toupper(a[i]);
    }
    printf("%X",a);
    return 0;

}