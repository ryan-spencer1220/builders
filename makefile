CC=g++
CPPFLAGS = -std=c++11 -I. -g
DEPS = dlist.h
OBJ = linkedlist.o request.o structuretype.o main.o

%.o: %.cpp $(DEPS)
		$(CC) $(CPPFLAGS) -c -o $@ $<

main: $(OBJ)
		$(CC) $(CPPFLAGS) -o $@ $^

clean:
		rm	-f *.o main