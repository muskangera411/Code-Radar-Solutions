#include <stdio.h>
int is_palindrome(int num);
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];int count=0;
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    
    if(is_palindrome(arr[i])){
        count++;
    }}
    printf("%d",count);
    return 0;

}

int is_palindrome(int num){
    int a,rnum=0,rem,num;
   scanf("%d",&a);
     a=num;
    while(a>0){
        rem=a%10;
        rnum=rnum*10+rem;
        num/=10;
    }
        if(rnum==num){
            return 0;
        }
        else{
            return 1;
        }
    return 0;
}