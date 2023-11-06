#include <stdio.h>

int number_of_scenarios(int n) {
    if (n==1)
        return 1;
    if (n==2)
        return 2;
    int s=0;
    if (n>2){
    s=s+number_of_scenarios(n-2)+ number_of_scenarios(n-1);
    return s;}
}
int main(){
    int n;
    scanf("%d",&n);
    int e= number_of_scenarios(n);
    printf("%d",e);
}