/*3. Write a program to change the value of a variable to ten times of its current
value.
*/




#include<stdio.h>
    int *increment(int *a);
int main(){
int i = 5 ;
int* j = &i ;
printf("Ten times %d is %d \n ",i , increment(j));
  
return 0;
}
int* increment(int *a){
int p = (*a)*10 ;
return p ;


}