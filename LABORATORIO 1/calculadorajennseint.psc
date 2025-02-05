Algoritmo calculadorajennseint
	//definir variables
	definir num1,num2,opc, res Como Entero;
	
	//pedir datos de entrada
	Escribir "Ingrese número 1";
	leer num1;
	Escribir "Ingrese número 2";
	leer num2;
	
	//opciones
	Escribir "Ingrese una opción";
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
			Escribir "La multiplicación es: ", res;
			
		4: 
			res=num1/num2;
			Escribir "La división es: ", res;
		De Otro Modo:
			Escribir "Opción incorrecta";
	FinSegun
	
	
FinAlgoritmo
