#include <stdio.h>
int main(){
    int A,B;
    int a,b,c;
    int result1,result2,result3,result;
    scanf("%d",&A);
    scanf("%d",&B);
    
    a=B%10;
    b=(B%100)/10;
    c=B/100;
    
    result1=A*a;
    result2=A*b;
    result3=A*c;
    
    result=result1+result2*10+result3*100;
    
    printf("%d\n%d\n%d\n%d",result1,result2,result3,result);
    
    
}