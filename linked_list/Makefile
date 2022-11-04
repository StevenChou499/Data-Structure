name = linked_list.h linked_list.c

check: $(name) use_linked_list.c
	@gcc -o use_linked_list $(name) use_linked_list.c
	@./use_linked_list

debug: $(name) use_linked_list.c
	@gcc -g -o use_linked_list $(name) use_linked_list.c
	gdb ./use_linked_list

clean:
	@rm use_linked_list