OBJ = main.o print_tree.o operate_tree.o Random_generate.o
EXEC = printTest

$(EXEC):$(OBJ)
	gcc -g -Wall -o $(EXEC) $(OBJ)

main.o : main.c print_tree.h tree_DS.h Random_generate.h
	gcc -c main.c
print_tree.o : print_tree.c print_tree.h tree_DS.h
	gcc -c print_tree.c
operate_tree.o : operate_tree.c operate_tree.h tree_DS.h
	gcc -c operate_tree.c
Random_generate.o : Random_generate.c Random_generate.h
	gcc -c Random_generate.c

run:
	./$(EXEC)
clean:
	rm $(EXEC) $(OBJ) *~
