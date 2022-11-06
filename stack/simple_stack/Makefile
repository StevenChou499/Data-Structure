file = simple_stack.h simple_stack.c

check: $(file)
	@gcc -o use_simple_stack $(file) use_simple_stack.c
	@./use_simple_stack

debug: $(file)
	@gcc -g -o use_simple_stack $(file) use_simple_stack.c
	gdb ./use_simple_stack

clean:
	@rm -f use_simple_stack