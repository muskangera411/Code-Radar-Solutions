#include <stdio.h>
int main(){
    int a,b;char c;
    scanf("%d %d %c",&a,&b,&c);
    int sum=(a+b);
    int diff=(a-b);
    int product=(a*b);
    switch(c){
        case '+' : printf("%d",sum);break;
        case '-' : printf("%d",diff);break;
        case '*' : printf("%d",product);break;
        case '/' : 
            if(b==0){printf("error");}
            else{
            int div=(a/b);
            printf("%d",div);break;}
    }   default: printf("error");
    return 0;
}