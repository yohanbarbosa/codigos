
#include <stdio.h>
#include <math.h>

using namespace std;
int main() {
    
    printf("codigo___________operacion""\f");
    printf(" 1___________suma""\f");
    printf(" 2___________resta""\f");
    printf(" 3___________multiplicacion""\f");
    printf(" 4___________divicion""\f");
    printf(" 5___________raiz""\f");
    
    float raiz,n1,n2,result;
    int codigo;
    printf("ingrese el codigo""\f");
    scanf("%i",& codigo);
    
	switch(codigo){
		
		case 1:  printf("ingrese el primer valor""\f");
   				 scanf("%f",& n1);
    			 printf("ingrese el segundo valor""\f");
   				 scanf("%f", & n2);
				 result=n1+n2;
				 printf("%.2f + %.2f = %.2f", n1, n2, result);break;
				 
				 
	  case 2 :   printf("ingrese el primer valor""\f");
   				 scanf("%f", & n1);
   				 printf("ingrese el segundo valor""\f");
   				 scanf("%f", & n2);
				 result=n1-n2;
				 printf("%.2f + %.2f = %.2f", n1, n2, result);break;		 
				  
	 	case 3:  printf("ingrese el primer valor""\f");
   				 scanf("%f",& n1);
    			 printf("ingrese el segundo valor""\f");
   				 scanf("%f", & n2);
				 result=n1*n2;
				 printf("%.2f x  %.2f = %.2f", n1, n2, result);break;
				 
				 
		case 4:  printf("ingrese el primer valor""\f");
   				 scanf("%f",& n1);
    			 printf("ingrese el segundo valor""\f");
   				 scanf("%f", & n2);
				 result=n1/n2;
				 printf("%.2f /  %.2f = %.2f", n1, n2, result);break;				  
				  
	 	 case 5:  printf("ingrese el numero ""\f");
   				 scanf("%f",& n1);
    			 result=sqrt(n1);
				 printf("el resultado es : %.2f = %.2f", n1, result);break;
		
	}
	
      return 0;
    

}
