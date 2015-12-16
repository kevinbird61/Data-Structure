OBJ = qsort_Implement.o Qsort.o Random_generate.o
EXECUTE = qsort

$(EXECUTE):$(OBJ)
	gcc -o $(EXECUTE) $(OBJ)
qsort_Implement.o : qsort_Implement.c Qsort.h Random_generate.h
	gcc -c qsort_Implement.c
Qsort.o : Qsort.c Qsort.h
	gcc -c Qsort.c
Random_generate.o : Random_generate.c Random_generate.h
	gcc -c Random_generate.c

run : 
	./$(EXECUTE) 20
clean:
	rm $(EXECUTE) $(OBJ)
