Algoritmo Impedancias_2
	Repetir
		Escribir "Ingrese el módulo de la tensión"
		Leer ModuloV
	Hasta Que ModuloV<=0
	Escribir "Ingrese el ángulo de la tensión"
	Leer AnguloV
	Repetir
		Escribir "Ingrese el módulo de la corriente"
		Leer ModuloI
	Hasta Que ModuloI<=0
	Escribir "Ingrese el ángulo de la corriente"
	Leer AnguloI
	Repetir
		Escribir "Ingresela frecuencia"
		Leer Frec
	Hasta Que Frec<0
	ModuloImp = ModuloV/ModuloI
	AnguloImp = (AnguloV-AnguloI)*(PI/180)
	R = Cos(AnguloImp)*ModuloImp
	I = Sen(AnguloImp)*ModuloImp
	Escribir "La parte real de la impedancia es:" ,R
	Escribir "La parte imaginaria de la impedancia es:" ,I
	W = 2*PI*Frec
	Escribir "La resistencia es de ",R " ohms"
	Si Imag>0 Entonces
		L = Imag/W
		Escribir "La indunctancia es de ",L " henrios"
	SiNo
		Si Imag=0 Entonces
			Escribir "No hay reactancia"
		SiNo
			C = (-1)/(W*Imag)
			Escribir "La capacitancia es de ",C " faradios"
		FinSi
	FinSi
FinAlgoritmo
