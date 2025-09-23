#include <stdio.h>

int main()
{
    int AnioActual,AnioNac,MesActual,MesNac,DiaActual,DiaNac,Edad,Salir;
    do{
       do{
	      printf("Ingrese el año actual:\n");
	      scanf("%d", &AnioActual);
	      printf("Ingrese su año de nacimiento:\n");
	      scanf("%d", &AnioNac);
	   }while((AnioNac>AnioActual)||(AnioNac<0)||(AnioActual<0));
	   do{
	      printf("Ingrese el mes actual:\n");
	      scanf("%d", &MesActual);
	      printf("Ingrese su mes de nacimiento:\n");
	      scanf("%d", &MesNac);
   	   }while((MesActual<1 || MesActual>12)||(MesNac<1 || MesNac>12));
       do{
          printf("Ingrese el día actual:\n");
	      scanf("%d", &DiaActual);
	      printf("Ingrese su día de nacimiento:\n");
	      scanf("%d", &DiaNac);
       }while((DiaActual<1 || DiaActual>31)||(DiaNac<1 || DiaNac>31));	
	      Edad=AnioActual-AnioNac;
       if(MesNac>MesActual) {
	      Edad=Edad-1;
	   }
       if(MesNac==MesActual) {
		   if(DiaNac>DiaActual) {
		      Edad=Edad-1;
		   }
	   }
	   printf("Su edad actual es: %d \n", Edad);
	   printf("si desea continuar calculando edades escriba 1, para salir escriba 0:\n", Salir);
	   scanf("%d", &Salir);
    }while(Salir==1);
   return 0;
}
	