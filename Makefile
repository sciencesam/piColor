compile = g++ -g -Wall
X11 = -I/usr/X11/include -L/usr/X11/lib -lX11 -pthread
default: main

main:
	$(compile) main.cpp -o main $(X11)

lena:
	$(compile) lena.cpp -o lena $(X11)

tes:
	$(compile) tes.cpp -o tes $(X11)

clean:
	rm lena main tes
