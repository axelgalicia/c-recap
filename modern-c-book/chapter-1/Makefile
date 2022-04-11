#---------------------------------------------------------------------
# Names, Files
#---------------------------------------------------------------------
OUTPUT_DIRECTORY := bin/
BINARY := print
#---------------------------------------------------------------------
# Executables
#---------------------------------------------------------------------
MD := mkdir
CC := clang
RR := rm -rf
EXEC := .

all: clean create_bin compile execute

clean:
	$(RR) $(OUTPUT_DIRECTORY)


create_bin:
	$(MD) -p $(OUTPUT_DIRECTORY)

compile: main.c 01_print.c
	clang -o $(OUTPUT_DIRECTORY)/$(BINARY) main.c 01_print.c

execute:
	$(EXEC)/$(OUTPUT_DIRECTORY)/$(BINARY)
