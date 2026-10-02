conway: implementation.c main.c
	cc main.c implementation.c -o conway
clean:
	rm -f conway
install: conway
	sudo cp conway /usr/local/bin/
