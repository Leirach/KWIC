CC = g++
OBJS = main.o WordShuffler.o SortList.o Handler.o

all: clean kwic

kwic: $(OBJS)
	$(CC) $(OBJS) -o kwic

main.o:
	$(CC) -c main.cpp

Handler.o:
	$(CC) -c Handler.cpp

SortList.o:
	$(CC) -c SortList.cpp

WordShuffler.o:
	$(CC) -c WordShuffler.cpp

clean:
	rm -f *~ *.o kwic
