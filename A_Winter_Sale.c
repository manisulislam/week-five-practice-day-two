#include<stdio.h>
int main(){
  float X,P;
  scanf("%f %f", &X,&P);
  
  float orginal_discount=(1-(X/100));
  
  float orginal_Price=P/orginal_discount;
  printf("%0.2f", orginal_Price);
  
  return 0;
}
