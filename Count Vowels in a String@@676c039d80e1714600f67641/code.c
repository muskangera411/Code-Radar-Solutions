#include <stdio.h>
#include <string.h>
int main(){
    char a[10];
    scanf("%s",&a);
    int vowels=0;
    int length=strlen(a);
    for(int i=0;i<length;i++){
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
            vowels+=1;
        }
        printf("%d",vowels);
    }
    return 0;
}