CC=gcc
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=hello_world.c
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=hello_world

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.c.o:
	$(CC) $(CFLAGS) $< -o $@

clean: 
	rm $(EXECUTABLE) $(EXECUTABLE).o

