Algoritmo Impedancias_1
	Escribir 'Ingrese la parte real de la impedancia:'
	Leer R
	Escribir 'Ingrese la parte imaginaria de la impedancia:'
	Leer Imag
	Repetir
		Escribir 'Ingrese el valor de la frecuencia'
		Leer Frec
	Hasta Que Frec>0
	W <- 2*PI*Frec
	Escribir 'La resistencia es de ', R, ' ohms'
	Si Imag>0 Entonces
		L <- Imag/W
		Escribir 'La indunctancia es de ', L, ' henrios'
	SiNo
		Si Imag=0 Entonces
			Escribir 'No hay reactancia'
		SiNo
			C <- (-1)/(W*Imag)
			Escribir 'La capacitancia es de ', C, ' faradios'
		FinSi
	FinSi
FinAlgoritmo
