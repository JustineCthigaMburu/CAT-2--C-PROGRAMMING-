//PROGRAM TO FIND :GROSS PAY,TAXES AND NET  PAY
/* AUTHOR: MBURU C JUSTINE THIGA
   REGISTRATION NUMBER: CT101/G/21512/24
   DATE: 07/11/2024
*/
//preprocessing directives ;scanf (),printf ()
#include <stdio.h>
int main () {
  float hours_worked;
  float hourly_wages;
  float gross_pay;
  float taxes;
  float net_pay;
  
  printf("enter hours_worked in week");
  scanf("%f",&hours_worked);
  printf("enter hourly_wages");
  scanf("%f",&hourly_wages);
  
  if(hours_worked<=400){
         gross_pay =(hours_worked*hourly_wages);
}else{
        gross_pay =(40*hourly_wages)+(hours_worked-40)*hourly_wages *0.15;
}
if(gross_pay<=600){
     taxes =gross_pay*0.15;
}else {
taxes =600*0.15 + (gross_pay-600)*0.20;
net_pay =gross_pay-taxes;
}
     
     printf("gross_pay:%2f\n",gross_pay);
     printf("taxes:%2f\n",taxes);
     printf("net pay:%2f\n",net_pay);
     
return  0;
}
