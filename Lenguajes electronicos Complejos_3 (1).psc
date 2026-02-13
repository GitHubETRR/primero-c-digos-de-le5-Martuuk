Algoritmo Complejos_3
	Escribir 'Ingrese la parte real del primer número complejo'
	Leer R1
	Escribir 'Ingrese la parte imaginaria del primer número complejo (sin la j)'
	Leer Imag1
	Escribir 'Ingrese la parte real del segundo número complejo'
	Leer R2
	Escribir 'Ingrese la parte imaginaria del segundo número complejo (sin la j)'
	Leer Imag2
	R <- R1+R2
	Imag <- Imag1+Imag2
	Repetir
		Escribir 'Para obtener el resultado en formato rectangular ingrese 1, para obtenerlo en polar ingrese 0'
		Leer Resultado
	Hasta Que Resultado=0 O Resultado=1
	Si Resultado=0 Entonces
		Modulo <- raiz((R*R)+(Imag*Imag))
		Escribir 'El módulo del número complejo es ', Modulo
		Si R=0 Entonces
			Si Imag=0 Entonces
				Escribir 'El ángulo no existe'
			SiNo
				Si Imag<0 Entonces
					Escribir 'Angulo es 270°'
				SiNo
					Escribir 'Angulo es 90°'
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
						Escribir 'El ángulo del número complejo es ', AnguloA
					SiNo
						Angulo2 <- AnguloA+360
						Escribir 'El ángulo del número complejo es ', Angulo2
					FinSi
				SiNo
					Si Imag>0 Entonces
						Angulo3 <- AnguloA+180
						Escribir 'El ángulo del numero complejo es ', Angulo3
					SiNo
						Angulo4 <- AnguloA+180
						Escribir 'El ángulo del número complejo es ', Angulo4
					FinSi
				FinSi
			FinSi
	FinSi
	SiNo
		Escribir 'El resultado de la suma de los números complejos es:'
		Escribir 'Parte real: ', R, ' y parte imaginaria: j', Imag
	FinSi
FinAlgoritmo
