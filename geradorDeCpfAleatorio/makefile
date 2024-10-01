CPPFLAGS=-std=c++17 -Wall -Wextra
IPATH=-Iinc/
SRC=src/
OBJ=obj/

all: app

app: main.gch gerar.gch
	g++ $(OBJ)main.gch $(OBJ)gerar.gch -o app

main.gch: $(SRC)main.cpp
	$(CHAIN)-gcc $(CPPFLAGS) $(IPATH) -c $(SRC)main.cpp -o $(OBJ)main.gch
                                        
gerar.gch: $(SRC)gerar.cpp                         
	g++ $(CPPFLAGS) $(IPATH) -c $(SRC)gerar.cpp -o $(OBJ)gerar.gch

clean:
	rm -rf $(OBJ)*.gch

