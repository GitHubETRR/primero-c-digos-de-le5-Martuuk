Algoritmo Complejos_3
	Escribir 'Ingrese la parte real del primer n�mero complejo'
	Leer R1
	Escribir 'Ingrese la parte imaginaria del primer n�mero complejo (sin la j)'
	Leer Imag1
	Escribir 'Ingrese la parte real del segundo n�mero complejo'
	Leer R2
	Escribir 'Ingrese la parte imaginaria del segundo n�mero complejo (sin la j)'
	Leer Imag2
	R <- R1+R2
	Imag <- Imag1+Imag2
	Repetir
		Escribir 'Para obtener el resultado en formato rectangular ingrese 1, para obtenerlo en polar ingrese 0'
		Leer Resultado
	Hasta Que Resultado=0 O Resultado=1
	Si Resultado=0 Entonces
		Modulo <- raiz((R*R)+(Imag*Imag))
		Escribir 'El m�dulo del n�mero complejo es ', Modulo
		Si R=0 Entonces
			Si Imag=0 Entonces
				Escribir 'El �ngulo no existe'
			SiNo
				Si Imag<0 Entonces
					Escribir 'Angulo es 270�'
				SiNo
					Escribir 'Angulo es 90�'
				FinSi
			FinSi
		SiNo
			Si Imag=0 Entonces
				Si R<0 Entonces
					Escribir 'angulo 180'
				SiNo
					Escribir 'angulo 0'
				FinSi
			SiNo
				AnguloA <- (Atan(Imag/R))*(180/PI)
				Si R>0 Entonces
					Si Imag>0 Entonces
						Escribir 'El �ngulo del n�mero complejo es ', AnguloA
					SiNo
						Angulo2 <- AnguloA+360
						Escribir 'El �ngulo del n�mero complejo es ', Angulo2
					FinSi
				SiNo
					Si Imag>0 Entonces
						Angulo3 <- AnguloA+180
						Escribir 'El �ngulo del numero complejo es ', Angulo3
					SiNo
						Angulo4 <- AnguloA+180
						Escribir 'El �ngulo del n�mero complejo es ', Angulo4
					FinSi
				FinSi
			FinSi
	FinSi
	SiNo
		Escribir 'El resultado de la suma de los n�meros complejos es:'
		Escribir 'Parte real: ', R, ' y parte imaginaria: j', Imag
	FinSi
FinAlgoritmo
