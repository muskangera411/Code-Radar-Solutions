#include <stdio.h>
int msin(){
    char a[20];
    scanf("%s",&a);
    vowels=0;
    length=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<length;i++){
        if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u'){
            vowels+=1;
        }
    }
    printf("%d",vowels);
    return 0;
}