#include <stdio.h> 
#define MAX_LEN 1000

int main() 
{ 
 int n,i,count=0,sum=0, new_number; 
 char str[MAX_LEN];
 FILE *fptr; 
 printf("Enter value of n: ");
 scanf("%d",&n);
 fptr = fopen("numbers.txt","w"); 
  
 if(fptr == NULL) 
 { 
 printf("Error!");  
 return(1);  
 } 
 while(fgets(str, MAX_LEN, fptr))
 { 
    sscanf(str,"%d\n", &new_number);
    sum += new_number;

 }
  
 for(i=0;i<=n;i++)
{ 
 fprintf(fptr,"%d\n",i);
 count++; 
} 
 fclose(fptr); 
  printf("count = %d \n", count);
  printf("sum = %d \n", sum);

  
 return 0; 
} 
