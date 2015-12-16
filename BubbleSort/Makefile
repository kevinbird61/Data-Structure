OBJ = main.o bubblesort.o Random_generate.o
EXECUTE = bubblesort

$(EXECUTE):$(OBJ)
	gcc -o $(EXECUTE) $(OBJ)
main.o : main.c bubblesort.h Random_generate.h
	gcc -c main.c
bubblesort.o : bubblesort.c bubblesort.h
	gcc -c bubblesort.c
Random_generate.o : Random_generate.c Random_generate.h
	gcc -c Random_generate.c

run : 
	./$(EXECUTE) 20
clean:
	rm $(EXECUTE) $(OBJ)
