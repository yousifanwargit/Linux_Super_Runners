mycp: my_cp.o
	gcc -o mycp  my_cp.o

my_cp.o: my_cp.c
	gcc -c my_cp.c


install: 
	cp mycp /usr/bin

uninstall: 
	rm mycp /usr/bin

clean:
	rm my_cp.o
