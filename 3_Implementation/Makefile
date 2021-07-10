# Name of the project
PROJECT_NAME = Tictactoe

ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

# Output directory
BUILD = build

# All source code files
SRC = main.c\
src/Board_outline.c\
src/Values_board.c\
src/Win_Lose_CHECK.c\

# All test source files
TEST_SRC = src/Board_outline.c\
src/Values_board.c\
src/Win_Lose_CHECK.c\
test/test_TIC-TAC-TOE.c\
unity/unity.c\

<<<<<<< HEAD
TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out
=======

TEST_OUTPUT = $(BUILD)/$(call FixPath,Test_$(PROJECT_NAME).EXEC)
>>>>>>> 7eacdb0848f55d6f8a6258ef31426203f1a87352

# All include folders with header files
INC	= -Iinc\
-Iunity\

#Library Inlcudes
#INCLUDE_LIBS = 
INCLUDE_LIBS = -lcunit

# Project Output name
PROJECT_OUTPUT = $(BUILD)/$(call FixPath,$(PROJECT_NAME).EXEC)

# Document files
DOCUMENTATION_OUTPUT = documentation/html

# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(call FixPath,$(PROJECT_OUTPUT).EXEC)



# Document the code using Doxygen
doc:
	make -C ./documentation

# Build and run the unit tests
test:$(BUILD)
<<<<<<< HEAD
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) $(INCLUDE_LIBS)
	./$(TEST_OUTPUT)
=======
	gcc $(TEST_SRC) $(INC) -o $(call FixPath,$(TEST_OUTPUT).EXEC)
	./$(TEST_OUTPUT).EXEC

# Call `make run` to run the application
run:$(PROJECT_NAME)
	$(call FixPath,./$(PROJECT_OUTPUT).EXEC)
>>>>>>> 7eacdb0848f55d6f8a6258ef31426203f1a87352

analyze: test memcheck staticcheck coverage sanitize_check

staticcheck:
	cppcheck --enable=all -iunity .

memcheck:
	valgrind ./$(TEST_OUTPUT)

sanitize_check:
	gcc -fsanitize=address -fno-omit-frame-pointer $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) $(INCLUDE_LIBS)
	./$(TEST_OUTPUT)

coverage:$(TEST_SRC)
	gcc -fprofile-arcs -ftest-coverage $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) $(INCLUDE_LIBS)
	./$(TEST_OUTPUT)
	gcov -a createboard.c

# Remove all the built files, invoke by `make clean`
clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT) *.gcda *.gcno *.gcov

# Create new build folder if not present
$(BUILD):
	mkdir build
