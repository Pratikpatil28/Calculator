#include <stdio.h>
#include <math.h>

int main()
{
  float a,b,c,x,y;
  int ans, i, u, l;
  printf("\n Enter 1st N0.-");
  scanf("%f",&a);
  printf("\n Enter 2nd No.-");
  scanf("%f",&b);
  int select;
  printf("\n Select 1 for Add");
  printf("\n Select 2 for Sub");
  printf("\n Select 3 for Multiplication");
  printf("\n Select 4 for Divsion");
  printf("\n Select 5 for Power of X");
  printf("\n Select 6 for fractorial ");
  printf("\n Enter:");
  scanf("%d",&select);
  switch(select){
    case(1):{
      printf("Addition of %0.2f + %.2f = %.2f",a,b,a+b);
      break;
    }
    case(2):{
      printf("Suntraction of %0.2f - %0.2f = %.2f",a,b,a-b);
      break;
    }
    case(3):{
      printf("Multiplication of %0.2f * %.2f = %0.2f",a,b,a*b);
      break;
    }
    case(4):{
      printf("Divsion of %0.2f / %0.2f = %0.2f",a,b,a/b);
      break;
    }
    case(5):{
      printf("\na to the power b is:%.2f",pow(a,b));

      break;

    }
    case(6):{
      int i,fac=1,fact=1;    

        
      for(i=1;i<=a;i++){    
        fac=fac*i;    
      }    
      for(i=1;i<=b;i++){    
        fact=fact*i; 
      }
      printf("\nFactorial of %.2f is: %d",a,fac); 
      printf("\nFactorial of %.2f is: %d",b,fact);  

    }
    default:{
    printf("\nInvalid input.");
    break;
    }

  }
}