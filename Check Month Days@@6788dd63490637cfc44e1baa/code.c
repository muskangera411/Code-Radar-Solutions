#include <stdio.h>
int main(){
    int a;
    int b=31,c=28,d=30;
    printf("");
    scanf("%d",&a);
    if(a==1 || a==3 || a==5 || a==7 || a==8 || a==10 || a==12){printf("%d",b);}
    else if(a==2){printf("%d",c);}
    else if(a==4 || a==6 || a==9 || a==11){printf("%d",d);}
    else{printf("Invalid month");}
}