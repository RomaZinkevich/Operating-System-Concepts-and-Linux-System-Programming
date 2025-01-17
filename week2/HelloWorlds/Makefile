all: hello_c hello_cpp run_all

hello_c: hello.c
	gcc -o hello_c hello.c

hello_cpp: hello.cpp
	g++ -o hello_cpp hello.cpp

run_all: hello_c hello_cpp
	./hello_c
	./hello_cpp

clean: rm -f hello_c hello_cpp
