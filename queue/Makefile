name = queue.h queue.c use_queue.c

all: $(name)
	@gcc -o use_queue $(name)
	@./use_queue

debug: $(name)
	@gcc -g -o use_queue $(name)
	gdb ./use_queue

clean:
	@rm -f use_queue