#Compile all
all:
	gcc -o main main.c chiffrer.c dechifrer.c verifier.c convertir.c

#Compile le main
main: main.o chiffrer.o dechifrer.o verifier.o convertir.o
	gcc -o main main.o chiffrer.o dechifrer.o verifier.o convertir.o

#Compilation des dépendances
main.o: main.c chiffrer.h dechifrer.h verifier.h convertir.h
	gcc -c main.c

chiffrer.o: chiffrer.c chiffrer.h
	gcc -c chiffrer.c

dechifrer.o: dechifrer.c dechifrer.h
	gcc -c dechifrer.c

verifier.o: verifier.c verifier.h
	gcc -c verifier.c

convertir.o: convertir.c convertir.h
	gcc -c convertir.c

#Suppresion des fichiers objects
clean:
	rm main.o chiffrer.o dechifrer.o verifier.o convertir.o