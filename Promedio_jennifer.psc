// Calcula el promedio de una lista de N datos
//Jennifer Alba Dayami Barrios 9959-24-10016
Algoritmo Promedio
	
	Escribir "Ingrese la cantidad de datos:"
	Leer n
	
	acum<-0
	
	Para i<-1 Hasta n Hacer
		Escribir "Ingrese el dato ",i,":"
		Leer dato
		acum<-acum+dato
	FinPara
	
	prom<-acum/n
	
	Escribir "El promedio es: ",prom
	
FinAlgoritmo
