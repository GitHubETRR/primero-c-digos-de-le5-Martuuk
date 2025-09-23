#include <stdio.h>
#define Salida 3
void Calcular_Edad (void);
void Signo_Sodiacal (void);

int main()
{
	int OpcionMenu;
	do {
		printf("\nBienvenido, seleccione una de las siguientes opciones\n");
		printf("1 para calcular su edad\n");
		printf("2 para averiguar su signo sodiacal\n");
		printf("3 para salir\n");
		scanf ("%d",&OpcionMenu);
		switch (OpcionMenu) {
		case 1:
			Calcular_Edad();
			break;
		case 2:
			Signo_Sodiacal();
			break;
		case 3:
			printf ("Saliendo del sistema...");
			break;
		default:
			printf ("opcion invalida, ingrese uno de los valores pedidos\n");
			break;
		}
	} while (OpcionMenu != Salida);
}

void Calcular_Edad (void) {
	int AnioActual,AnioNac,MesActual,MesNac,DiaActual,DiaNac,Edad,Salir;
	do {
		printf("Ingrese el año actual:\n");
		scanf("%d", &AnioActual);
		printf("Ingrese su año de nacimiento:\n");
		scanf("%d", &AnioNac);
	} while((AnioNac>AnioActual)||(AnioNac<0)||(AnioActual<0));
	do {
		printf("Ingrese el mes actual:\n");
		scanf("%d", &MesActual);
		printf("Ingrese su mes de nacimiento:\n");
		scanf("%d", &MesNac);
	} while((MesActual<1 || MesActual>12)||(MesNac<1 || MesNac>12));
	do {
		printf("Ingrese el dia actual:\n");
		scanf("%d", &DiaActual);
		printf("Ingrese su dia de nacimiento:\n");
		scanf("%d", &DiaNac);
	} while((DiaActual<1 || DiaActual>31)||(DiaNac<1 || DiaNac>31));
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
}

void Signo_Sodiacal (void) {
	int Mes,Dia;
	for ( ; ; ) {
		printf("Ingrese su mes de nacimiento\n");
		scanf("%d", &Mes);
		printf("Ingrese su dia de nacimiento\n");
		scanf("%d", &Dia);
		if ((Mes >= 1 && Mes <= 12) && (Dia >= 1 && Dia <= 31)) {
			break;
		}
		printf("Alguno de los datos no es valido, intente de nuevo\n");
	}
	if ((Mes==12 && Dia>=22) || (Mes==1 && Dia<=19)) {
		printf("Tu signo sodiacal es Capricornio\n");
	}
	if ((Mes==1 && Dia>=20) || (Mes==2 && Dia<=18)) {
		printf("Tu signo sodiacal es Acuario\n");
	}
	if ((Mes==2 && Dia>=19) || (Mes==3 && Dia<=20)) {
		printf("Tu signo sodiacal es Piscis\n");
	}
	if ((Mes==3 && Dia>=21) || (Mes==4 && Dia<=19)) {
		printf("Tu signo sodiacal es Aries\n");
	}
	if ((Mes==4 && Dia>=20) || (Mes==5 && Dia<=20)) {
		printf("Tu signo sodiacal es Tauro\n");
	}
	if ((Mes==5 && Dia>=21) || (Mes==6 && Dia<=20)) {
		printf("Tu signo sodiacal es Geminis\n");
	}
	if ((Mes==6 && Dia>=21) || (Mes==7 && Dia<=22)) {
		printf("Tu signo sodiacal es Cancer\n");
	}
	if ((Mes==7 && Dia>=23) || (Mes==8 && Dia<=22)) {
		printf("Tu signo sodiacal es Leo\n");
	}
	if ((Mes==8 && Dia>=23) || (Mes==9 && Dia<=22)) {
		printf("Tu signo sodiacal es Virgo\n");
	}
	if ((Mes==9 && Dia>=23) || (Mes==10 && Dia<=22)) {
		printf("Tu signo sodiacal es Libra\n");
	}
	if ((Mes==10 && Dia>=23) || (Mes==11 && Dia<=21)) {
		printf("Tu signo sodiacal es Escorpio\n");
	}
	if ((Mes==11 && Dia>=22) || (Mes==12 && Dia<=21)) {
		printf("Tu signo sodiacal es Sagitario\n");
	}
}

