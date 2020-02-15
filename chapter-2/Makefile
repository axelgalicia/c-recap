#---------------------------------------------------------------------
# Names, Files
#---------------------------------------------------------------------
OUTPUT_DIRECTORY := bin/
BINARY := sum
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

compile: main.c sum.c
	clang -o $(OUTPUT_DIRECTORY)/$(BINARY) main.c sum.c

execute:
	$(EXEC)/$(OUTPUT_DIRECTORY)/$(BINARY)
