Algoritmo Complejos_1
	Escribir 'Ingrese la parte real del número complejo'
	Leer R
	Escribir 'Ingrese la parte imaginaria del número complejo (sin la j)'
	Leer Imag
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
FinAlgoritmo
