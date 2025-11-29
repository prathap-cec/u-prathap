#include <stdio.h>
int main() {
    int marks[5] = {90,85,80,70,95};
    char name[] = "Alice";

    printf("Name: %s\n",name);
    printf("First mark: %d\n", marks[2]);
    printf("Last mark: %d\n", marks[3]);
    
    
   int arr[] = {4,2,8,6,9,5,98,99};
   int max = arr[0];
   for(int i=1; i<8; i++)
       if(arr[i] > max)
           max = arr[i];
   printf("Maximum = %d\n", max);
   
 
   int min = arr[0];
   for(int i=1; i<8; i++)
       if(arr[i] > min)
           min = arr[i];
   printf("Minimum = %d\n", min);
   return 0;
}
   
   