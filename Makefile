cc := gcc -o
cFlags += -g
cSwitch += -Wall

OBJ := $(patsubst %.c , %.o ,$(wildcard *.c))

default: all

all: op.exe run

op.exe: $(OBJ)
	$(cc) $@ $^ $(cFlags) $(cSwitch)
run:
	./op.exe
clean:
	rm *.o *.exe
