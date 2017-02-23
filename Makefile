CXX = clang++

CXXFLAGS = -Wall -Wno-uninitialized

BINARIES= arrayToLinkedListTest 

all: ${BINARIES}

tests: ${BINARIES}
	./arrayToLinkedListTest

arrayToLinkedListTest: arrayToLinkedListTest.o linkedListFuncs.o tddFuncs.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

clean:
	/bin/rm -f ${BINARIES} *.o
