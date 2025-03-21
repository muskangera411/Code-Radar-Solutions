#include <stdio.h>
#include <string.h>
int main(){
    char a[15],b[15];
    fgets(a,sizeof(a),stdin);
    fgets(b,sizeof(b),stdin);
    a[strcspn(a, "\n")] = 0;
    b[strcspn(b, "\n")] = 0;
    printf("%s%s",a,b);
    return 0;

}