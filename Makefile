CC = gcc
SOURCE = main.c
EXE = twiki.exe
INSTALLATION = /usr/bin/

$(EXE): $(SOURCE)
	$(CC) $(SOURCE) -o $(EXE)

clean:
	rm $(EXE)
.PHONY: clean

install: $(EXE)
	cp $(EXE) $(INSTALLATION)
.PHONY: install

uninstall:
	rm $(INSTALLATION)$(EXE)
.PHONY: uninstall
