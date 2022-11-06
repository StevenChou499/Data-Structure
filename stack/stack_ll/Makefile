file = stack.h stack.c

check: $(file)
	@gcc -o use_stack $(file) use_stack.c
	@./use_stack

debug: $(file)
	@gcc -g -o use_stack $(file) use_stack.c
	gdb ./use_stack

clean:
	rm -f use_stack