# Esse arquivo foi configurado para:
# compilador: gcc
# flag: -Wall
# arquivos objetos: main.o pocketpy.o levenshtein.o

all: main

# construição o executável
main: main.o pocketpy.o levenshtein.o
	gcc main.o pocketpy.o levenshtein.o -o main -static

# compilação dos arquivos .c individualmente
main.o: main.c
	gcc -Wall -c main.c

pocketpy.o: pocketpy.c include/pocketpy.h
	gcc -Wall -c pocketpy.c

levenshtein.o: levenshtein.c include/levenshtein.h
	gcc -Wall -c levenshtein.c

# executação do programa
run: main
	./main

# verificação das dependências/bibliotecas do executável
ldd: main
	ldd main

# limpeza de arquivos gerados
clean:
	rm -f main *.o
