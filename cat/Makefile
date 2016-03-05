CC=gcc
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=cat.c
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=cat

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.c.o:
	$(CC) $(CFLAGS) $< -o $@

clean: 
	rm $(EXECUTABLE) $(EXECUTABLE).o

