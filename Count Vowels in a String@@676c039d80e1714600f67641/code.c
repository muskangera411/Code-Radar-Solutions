#include <stdio.h>
int main(){
    char a[10];
    scanf("%s",&a);
    vowels=0;
    length=sizeof(a)/sizeof(a[0]);
    for(char i=0;i<length;i++){
        if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u'){
            vowels+=1;
        }
    }
    printf("%d",vowels);
    return 0;
}