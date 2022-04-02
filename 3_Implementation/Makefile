
PROJECT_NAME = XO-GAME
BUILD_DIR= build

SRC = src/Board.c\
src/Display.c\
src/Decision.c\
src/CheckForWin.c

TEST_SRC = test/test.c\
unity/unity.c\

INC =-Iunity

#To check if the os is windows or linux and set the excutable file extension and delete command accordingly
ifdef OS
      RM = rm -rf
      FixPath = $(subst /,\.$1)
	  EXEC = exe
else 
   ifeq($(shell uname),Linux)  
      RM = del /q
      FixPath = $1
       EXEC = out

   endif
endif

# Run the target even if the matching name exists
.PHONY: all test run clean

all:$(BUILD_DIR)
	gcc main.c $(SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

run: all
	$(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

test: $(SRC) $(TEST_SRC)
	gcc $^ $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))

coverage:${PROJECT_NAME} $(BUILD_DIR)
	gcc -fprofile-arcs -ftest-coverage $(SRC) $(TEST_SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))

valgrind:
	valgrind $(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC)

$(BUILD_DIR):
	mkdir $(BUILD_DIR)

clean:
	$(RM) $(BUILD_DIR)/*


