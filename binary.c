#include<stdio.h>
#include<math.h>
int size(double x){
    
    return (int)floor((log(x)/log(2))+1);
}
int main(){
    double ip;
    printf("enter a number to convert ");
    scanf("%lf",&ip);
    
    int val=(int)ip;
    int s=size(ip);
    int bin[s];
    
    for(int i=s-1;i>=0;i--){
        bin[i]=val%2;
        val/=2;
    }
    printf("the binary number is ");
    for(int q=0;q<s;q++){
        printf("%d",bin[q]);
    }
    return 0;
}
