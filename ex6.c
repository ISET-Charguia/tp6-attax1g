#include <stdio.h>
#include <stdlib.h>

int main()
{
  double t [20];
  int i,posmin,posmax;
  double n;
posmin=0;
posmax=0;
for (i=0;i<11;i++){
printf ("t[%d]",i);
scanf ("%f",&t[i]);
}
for (i=0;i<11;i++) {
    if (t[i]<t[posmin]) {
        posmin=i;
    }
    if (t[i]>t[posmax]){
        posmax=i;
    }
}
printf ("le plus grand %f \n le plus petit %f \n leur position %d %d", t[posmax],t[posmin],posmax,posmin);
}
