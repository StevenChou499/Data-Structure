name = array.h array.c

check: $(name) usearray.c
	@gcc -o usearray $(name) usearray.c
	@./usearray

debug: $(name) usearray.c
	@gcc -g -o usearray $(name) usearray.c
	gdb ./usearray

clean:
	@rm -f usearray