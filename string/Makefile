name = string.h string.c use_string.c

all: $(name)
	@gcc -o use_string $(name)
	@./use_string

debug: $(name)
	@gcc -g -o use_string $(name)
	gdb ./use_string

clean:
	rm -f use_string