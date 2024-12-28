SRC = ./src
INCLUDE = ./include
BIN = ./bin
FLAGS = -std=c++11
all:
	g++ $(FLAGS) $(SRC)/*.cpp -o $(BIN)/main -I $(INCLUDE)
run:
	$(BIN)/main
clean:
	rm $(BIN)/*