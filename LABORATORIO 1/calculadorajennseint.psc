Algoritmo calculadorajennseint
	//definir variables
	definir num1,num2,opc, res Como Entero;
	
	//pedir datos de entrada
	Escribir "Ingrese n�mero 1";
	leer num1;
	Escribir "Ingrese n�mero 2";
	leer num2;
	
	//opciones
	Escribir "Ingrese una opci�n";
	Escribir "1. Sumar";
	Escribir "2. Restar";
	Escribir "3. Multiplicar";
	Escribir "4. Dividir";
	Leer opc;
	
	//proceso 
	
	Segun opc Hacer 
		1: 
			res=num1+num2; 
			Escribir "La suma es ", res;
		2:
			res=num1-num2;
			Escribir "La resta es: ", res;
		3:
			res=num1*num2;
			Escribir "La multiplicaci�n es: ", res;
			
		4: 
			res=num1/num2;
			Escribir "La divisi�n es: ", res;
		De Otro Modo:
			Escribir "Opci�n incorrecta";
	FinSegun
	
	
FinAlgoritmo
