OBJ = main.o mergesort.o Random_generate.o
EXECUTE = mergesort

$(EXECUTE):$(OBJ)
	gcc -o $(EXECUTE) $(OBJ)
main.o : main.c mergesort.h Random_generate.h
	gcc -c main.c
mergesort.o : mergesort.c mergesort.h
	gcc -c mergesort.c
Random_generate.o : Random_generate.c Random_generate.h
	gcc -c Random_generate.c

run : 
	./$(EXECUTE) 20
clean:
	rm $(EXECUTE) $(OBJ)
