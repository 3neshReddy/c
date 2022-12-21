# include <stdio.h>
# include<string.h>
# include<stdlib.h>
  
   
   struct student
   {
      char name[30];
      int marks ;
      char grade;
   };
   
   void main() { 

  
   struct student * raju; 
   raju = malloc(sizeof(struct student));

   raju->grade = 'A';

   printf("%C",raju->grade);
   

   

   
   

   }


    
   
