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

OBJ_FILES1 := $(addprefix obj/,$(notdir $(CPP_FILES1:.cpp=.o)))

TEST1:= bin/test1

test1: $(TEST1)

.PHONY: directories

$(TEST1): directories $(OBJ_FILES1)
	$(CXX) $(LD_FLAGS)  -o $@ $(OBJ_FILES1)

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
