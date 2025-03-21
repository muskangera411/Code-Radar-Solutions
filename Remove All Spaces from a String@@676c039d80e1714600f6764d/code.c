#include <stdio.h>
int main(){
    char str[50],result[50];
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!=' '&&str[i]!='\n' && str[i]!='\t'){
            result[j]=str[i];
            j++;
        }
    }
    result[j]='\0';
    printf("%s",result);
    return 0;
}