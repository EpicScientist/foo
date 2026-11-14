#include <stdio.h>
#include <stdlib.h> 

struct student_t {
	int stdid;
	char* name;
	char* last_name;
};


typedef struct {
	char* name;
	char* prenom;
} employee_t;


int main(void){
   
   struct student_t s; 

   employee_t e;

   s.stdid = 112;
   
   e.name = "HELLO";

   int *p = &s.stdid; // p points to x address where 10 is stored

   *p = 127; // p changes the value of x address where 10 is stored
   
   printf("(*) Student id is %d\n(*) Address is : %p\n", s.stdid, &s.stdid);
   puts(e.name);

}
