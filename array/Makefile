name = array

check: $(name).h $(name).c usearray.c
	@gcc -o usearray $(name).h $(name).c usearray.c
	@./usearray

clean:
	@rm -f usearray