#include <stdio.h>
#include <string.h>
int main(){
    char a[15],b[15];
    fgets(a,sizeof(a),stdin);
    fgets(b,sizeof(b),stdin);
    printf("%s%s",a,b);
    return 0;

}