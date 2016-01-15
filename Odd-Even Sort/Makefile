OBJ = main.o odd_even_sort.o Random_generate.o
EXECUTE = odevsort
SRCO = odd_even_sort.o
SRC = odd_even_sort.c
SRCH = odd_even_sort.h

$(EXECUTE):$(OBJ)
	gcc -g -Wall -o $(EXECUTE) $(OBJ)
main.o : main.c $(SRCH) Random_generate.h
	gcc -c main.c
$(SRCO) : $(SRC) $(SRCH)
	gcc -c $(SRC)
Random_generate.o : Random_generate.c Random_generate.h
	gcc -c Random_generate.c

run: 
	./$(EXECUTE) 20 20

clean:
	rm $(EXECUTE) $(OBJ)
