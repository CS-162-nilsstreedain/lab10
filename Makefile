# Lab 10 Makefile
CC = g++ -std=c++11
exe_file = application
$(exe_file): dog.o pet.o driver.o
	$(CC) dog.o pet.o driver.o -o $(exe_file)
dog.o: dog.cpp
	$(CC) -c dog.cpp
pet.o: pet.cpp
	$(CC) -c pet.cpp
driver.o: driver.cpp
	$(CC) -c driver.cpp

clean:
	rm -f *.out *.o $(exe_file)

