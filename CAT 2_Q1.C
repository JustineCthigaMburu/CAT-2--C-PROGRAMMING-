// PROGRAM FOR C STRUCTURE QUESTION ONE
/* AUTHOR: MBURU C JUSTINE THIGA
   REGISTRATION NUMBER: CT101/G/21512/24
   DATE: 07/11/2024
*/
//PROGRAM FOR C STRUCTURE QUESTION ONE
//preprocessing directives:scanf (), printf ()
#include<stdio.h>
#include<string.h>

struct employee {
  char name [25];
  int ID;
  char department [25];
  float salary ;
  char email [50];
  
  }employee1;
  int main () {
       strcpy(employee1. name,"John Doe");
       employee1.ID=12345;
       strcpy (employee1.department,"Human Resource");
       employee1.salary=55000.50;
       strcpy(employee1.email,"john.doe@company.com");
       
printf("name:%s\n",employee1. name);       
printf("ID:%d\n",employee1.ID);
printf("department:%s\n",employee1.department);
printf("salary:%2f\n",employee1. salary);
printf("email:%s\n",employee1. email);

return 0;
}
