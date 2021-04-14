PROJECT_NAME = MyString
SRC = mystring.cpp
TEST_SRC = test_mystring.cpp

INC = -I.

all:
	g++ $(SRC) $(TEST_SRC) $(INC) -o $(PROJECT_NAME).out -lgtest -lgtest_main -lpthread 

test: all
	./$(PROJECT_NAME).out

analyze: all memcheck staticcheck coverage codesize sanitize_check

staticcheck:
	cppcheck --enable=all .

memcheck:
	valgrind ./$(PROJECT_NAME).out

sanitize_check:
	g++ -fsanitize=address -fno-omit-frame-pointer $(SRC) $(TEST_SRC) -o $(PROJECT_NAME).out
	./$(PROJECT_NAME).out

coverage:$(SRC) $(TEST_SRC)
	gcc -fprofile-arcs -ftest-coverage $< -o $(PROJECT_NAME).out
	./$(PROJECT_NAME).out
	gcov -a $(SRC)

codesize:$(PROJECT_NAME).out
	size $^

clean:
	rm -rf $(PROJECT_NAME).out *.gcov *.gcda *.gcno