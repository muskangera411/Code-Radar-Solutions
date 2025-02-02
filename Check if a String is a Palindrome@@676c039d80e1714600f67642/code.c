#include <stdio.h>
#include <string.h>
int main(){
    char str[100],temp;
    int i,length,ispalindrome=1;
    scanf("%d",&str);
    length=strlen(str);
    for(int i=0;i<length/2;i++){
        if(str[i]!=str[length-i-1]){
            ispalindrome=0;break;}}
    if(ispalindrome){printf("Yes");}
    else{printf("No");}
    return 0;
}