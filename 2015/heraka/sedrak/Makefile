##CXX=g++
##CXXFLAGS=-Wall -fPIC -std=c++11
##LD_FLAGS=-shared
include ../Makefile.inc
CXXFLAGS+=
LD_FLAGS+=
INCLUDE=-Iinc/

CPP_FILES := src/methods.cpp \
			 src/main.cpp

CPP_FILES1 := $(CPP_FILES) \
			  src/test1.cpp

CPP_FILES2 := $(CPP_FILES) \
			  src/test2.cpp

CPP_FILES3 := $(CPP_FILES) \
			  src/test3.cpp

OBJ_FILES1 := $(addprefix obj/,$(notdir $(CPP_FILES1:.cpp=.o)))
OBJ_FILES2 := $(addprefix obj/,$(notdir $(CPP_FILES2:.cpp=.o)))
OBJ_FILES3 := $(addprefix obj/,$(notdir $(CPP_FILES3:.cpp=.o)))

TEST1:= bin/test1
TEST2:= bin/test2
TEST3:= bin/test3

test1: $(TEST1)
test2: $(TEST2)
test3: $(TEST3)

.PHONY: directories

$(TEST1): directories $(OBJ_FILES1)
	$(CXX) $(LD_FLAGS)  -o $@ $(OBJ_FILES1)

$(TEST2): directories $(OBJ_FILES2)
	$(CXX) $(LD_FLAGS)  -o $@ $(OBJ_FILES2)

$(TEST3): directories $(OBJ_FILES3)
	$(CXX) $(LD_FLAGS)  -o $@ $(OBJ_FILES3)

obj/%.o: src/%.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDE) -c -o $@ $<

directories: bin obj

bin:
	mkdir -p bin

obj:
	mkdir -p obj

clean:
	rm -rf bin	\
	rm -rf obj

CXXFLAGS += -MMD
-include $(OBJ_FILES:.o=.d)
