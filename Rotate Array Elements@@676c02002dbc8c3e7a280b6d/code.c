#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
    scanf("%d",arr[i]);
}
int d;
scanf("%d",&d);
for(int i=0;i<d;i++){
    last=arr[a-1];
    for(int i=a-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=last;
}
for(int i=0;i<a;i++){
    printf("%d",arr[i]);
}
return 0;
}
