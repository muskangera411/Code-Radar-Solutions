#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){scanf("%d",&arr[i]);}
    int even=0;int odd=0;
    for(int i=0;i<a;i++){
        if(arr[i]%2==0){even++;}
        if(arr[i]%2!=0){odd++;}
    }printf("%d %d",even,odd);
    return 0;
}