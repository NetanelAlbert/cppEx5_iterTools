#!make -f

CXX=clang++-9 
CXXFLAGS=-std=c++2a

HEADERS= accumulate.hpp filterfalse.hpp range.hpp compress.hpp
OBJECTS= accumulate.o filterfalse.o range.o compress.o

run: demo
	./$^

demo: Demo.o $(OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o demo

test: TestCounter.o Test.o $(OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o test

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) --compile $< -o $@

clean:
	rm -f *.o demo test
