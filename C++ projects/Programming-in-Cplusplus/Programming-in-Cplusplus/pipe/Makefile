PROJECT_NAME = Mypipe

SRC = mypipe.cpp

INC = -I.

TEST_SRC = test_mypipe.cpp

all:
	g++ $(SRC) $(TEST_SRC) $(INC) -o $(PROJECT_NAME).out -lgtest -lgtest_main -lpthread 

test: all
	./$(PROJECT_NAME).out

clean:
	rm $(PROJECT_NAME).out