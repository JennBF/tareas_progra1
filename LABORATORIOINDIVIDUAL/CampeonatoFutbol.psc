Algoritmo CampeonatoFutbol
	Dimensionar equipos(7), tabla(7,7), partidos(7,6)
	Definir i, j, golesLocal, golesVisita Como Entero
	Definir opcion Como Cadena
	Escribir 'Ingrese los nombres de los 6 equipos:'
	Para i<-1 Hasta 6 Hacer
		Escribir 'Equipo ', i, ': 'Sin Saltar
		Leer equipos[i]
	FinPara
	Repetir
		// Generar resultados aleatorios
		Para i<-1 Hasta 6 Hacer
			Para j<-1 Hasta 6 Hacer
				Si i<>j Entonces
					golesLocal <- Aleatorio(0,10)
					golesVisita <- Aleatorio(0,10)
					tabla[i,j]<-golesLocal
					tabla[j,i]<-golesVisita
				FinSi
			FinPara
		FinPara
		// Calcular estadísticas
		Para i<-1 Hasta 6 Hacer
			partidos[i,1]<-0
			partidos[i,2]<-0 // Jugados
			partidos[i,3]<-0 // Ganados
			partidos[i,4]<-0 // Empatados
			partidos[i,5]<-0 // Perdidos
			Para j<-1 Hasta 6 Hacer // Puntos
				Si i<>j Entonces
					partidos[i,1]<-partidos[i,1]+2
					Si tabla[i,j]>tabla[j,i] Entonces
						partidos[i,2]<-partidos[i,2]+1
						partidos[i,5]<-partidos[i,5]+3
					SiNo
						Si tabla[i,j]<tabla[j,i] Entonces
							partidos[i,4]<-partidos[i,4]+1
						SiNo
							partidos[i,3]<-partidos[i,3]+1
							partidos[i,5]<-partidos[i,5]+1
						FinSi
					FinSi
				FinSi
			FinPara
		FinPara
		// Mostrar tabla de posiciones
		Escribir '============================== TABLA DE POSICIONES =============================='
		Escribir '|   Equipo   | Jugados | Ganados | Empatados | Perdidos | Puntos |'
		Escribir '----------------------------------------------------------------------------'
		mejorEquipo <- 1
		peorEquipo <- 1
		Para i<-1 Hasta 6 Hacer
			Escribir '| ', equipos[i], ' | ', partidos[i,1], ' | ', partidos[i,2], ' | ', partidos[i,3], ' | ', partidos[i,4], ' | ', partidos[i,5], ' |'
			Escribir '----------------------------------------------------------------------------'
			Si partidos[i,5]>partidos[mejorEquipo,5] Entonces
				mejorEquipo <- i
			FinSi
			Si partidos[i,5]<partidos[peorEquipo,5] Entonces
				peorEquipo <- i
			FinSi
		FinPara
		Escribir '\nEl equipo campeón es: ', equipos[mejorEquipo]
		Escribir 'El equipo que desciende es: ', equipos[peorEquipo]
		Escribir '\nDesea generar otro campeonato? (s/n): 'Sin Saltar
		Leer opcion
	Hasta Que opcion='n' O opcion='N'
FinAlgoritmo
