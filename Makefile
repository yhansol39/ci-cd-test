all:
	gcc -o app main.c

test: test.c
	gcc -o test test.c

clean:
	rm -f app test
