#include<stdio.h> 
int main() 
{ 
  char a[9]; 
  scanf(" %[^\n]s",&a); 
   
  printf("%c%c%c",a[3],a[4],a[5]); 
  printf("%c%c%c",a[0],a[1],a[2]); 
  printf("%c%c\n",a[6],a[7]); 
 
  printf("%c%c",a[6],a[7]); 
  printf("%c%c%c",a[2],a[3],a[4]); 
  printf("%c%c%c\n",a[5],a[0],a[1]); 
 
  printf("%c%c-",a[0],a[1]); 
  printf("%c%c-",a[3],a[4]); 
  printf("%c%c\n",a[6],a[7]); 
    return 0; 
}
