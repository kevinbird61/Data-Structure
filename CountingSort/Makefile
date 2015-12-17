OBJ = main.o countingsort.o Random_generate.o
EXECUTE = countingsort
SRCO = countingsort.o
SRC = countingsort.c 
SRCH = countingsort.h

$(EXECUTE):$(OBJ)
	gcc -g -Wall -o $(EXECUTE) $(OBJ)
main.o : main.c $(SRCH) Random_generate.h
	gcc -c main.c
$(SRCO) : $(SRC) $(SRCH)
	gcc -c $(SRC)
Random_generate.o : Random_generate.c Random_generate.h
	gcc -c Random_generate.c
run : 
	./$(EXECUTE) 20
clean:
	rm $(EXECUTE) $(OBJ)
