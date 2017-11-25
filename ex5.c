#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void count_string_b_a(char *a, char *b){
   int i,j,k=0,size_a,size_b,equal=0,cont=0;
   size_a = strlen(a);
   size_b = strlen(b);
   j=0;
   for(i = 0; i < size_b; i++){
     for(j = 0; j < size_a; j++){
        k=0;
        equal=0;
        for(k=0; k<size_b; k++){
           if(a[j+k] == b[i+k]) equal++;
           if(equal==size_b) cont++;
        }
      }
   }
   printf("B %s appears %d times in A %s",b,cont,a);
}

int main(){
   int i;
   char a[40], b[10];
   scanf("%[^\n]s",&a); getchar();
   scanf("%[^\n]s",&b);
   count_string_b_a(a,b);
   getch();
 }
