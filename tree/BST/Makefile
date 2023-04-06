file = BST.h BST.c

check: $(file)
	@gcc -o use_BST $(file) use_BST.c
	@./use_BST

debug: $(file)
	@gcc -g -o use_BST $(file) use_BST.c
	gdb ./use_BST

clean:
	rm -f use_BST