#Author: Aurelio Arango
#
#

CC = g++ #compiler used
CFLAGS = -g -Wall #compilation flags
LIB = -lm	#link libraries
LDFLAGS = -L. #link flags
PROG = client.out #main program executable
OBJ = client.o Cat.o Dog.o  #target files to link
SRC = client.cpp Cat.cpp Dog.cpp #source files

all : $(PROG)

$(PROG): $(OBJ)
	$(CC) -c $(CFLAGS) $(SRC)
	$(CC) $(CFLAGS) -o $(PROG) $(OBJ) $(LDFLAGS) $(LIB)

clean:
	rm -f *.o $(PROG)
