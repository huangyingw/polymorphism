run : polymorphism.o
	g++ -o run polymorphism.o
polymorphism.o : polymorphism.cpp
	g++ -c polymorphism.cpp
clean :
	rm run polymorphism.o
