totem: totem.o
	gcc -O3 -o totem totem.o

totem.o: totem.c totem.h
	gcc -O3 -c totem.c

clean:
	rm totem totem.o
