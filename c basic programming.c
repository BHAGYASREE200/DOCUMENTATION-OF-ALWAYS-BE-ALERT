  SIMPLE INTEREST 
 #include<stdio.h>
 int main ()
  {
    int p,t;
     float r,si;
     printf("enter p,t,r");
     scanf("%d%d%f",&p,&t,&r);
     si=p*t*r/100;
     printf("%f\n",si);
     return 0;
 }
