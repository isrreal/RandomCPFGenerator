CPPFLAGS=-std=c++17 -Wall -Wextra
IPATH=-Iinc/
SRC=src/
OBJ=obj/

all: app

app: main.gch generate.gch
	g++ $(OBJ)main.gch $(OBJ)generate.gch -o app

main.gch: $(SRC)main.cpp
	$(CHAIN)-gcc $(CPPFLAGS) $(IPATH) -c $(SRC)main.cpp -o $(OBJ)main.gch
                                        
generate.gch: $(SRC)generate.cpp                         
	g++ $(CPPFLAGS) $(IPATH) -c $(SRC)generate.cpp -o $(OBJ)generate.gch

clean:
	rm -rf $(OBJ)*.gch

