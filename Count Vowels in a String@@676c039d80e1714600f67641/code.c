#include <stdio.h>
int main(){
    char a[10];
    scanf("%s",&a);
    vowels=0;
    length=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<length;i++){
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
            vowels+=1;
        }
    }
    printf("%d",vowels);
    return 0;
}