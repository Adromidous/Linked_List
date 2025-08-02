CC = g++
OUTPUT ?= ll 
SRC = Linked_List.cpp Node.cpp
HEADERS = Linked_List.hpp Node.hpp 

run: main.cpp $(SRC) $(HEADERS) 
	$(CC) $^  

clean:
	rm *.out *.pch
