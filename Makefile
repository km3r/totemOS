totem: totem.o gpio.o
	gcc -O3 -o totem totem.o gpio.o

totem.o: totem.c totem.h gpio.o
	gcc -O3 -c totem.c gpio.o

gpio.o: gpio.c gpio.h
	gcc -O3 -c gpio.c

clean:
	rm totem totem.o gpio.o
