CPP_FILES := $(wildcard src/*.cpp)
OBJ_FILES := $(addprefix obj/,$(notdir $(CPP_FILES:.cpp=.o)))
CC_FLAGS := -g -std=c++11 -Wall -pedantic

main: $(OBJ_FILES) ; g++ -o $@ $^

obj/%.o: src/%.cpp ; g++ $(CC_FLAGS) -c -o $@ $<

.PHONE: clean
clean: ; rm -rf obj/* main

CC_FLAGS += -MMD
-include $(OBJFILES:.o=.d)
