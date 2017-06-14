CXX=clang++
#CXX=g++

# We have -Wno-unused-parameter so that the compiler
# doesn't complain too much about our stubs.

#CXXFLAGS = -std=c++11 -Wall -Wextra -Wno-unused-parameter -Wno-unused-private-field

# Change to this before final submission:

CXXFLAGS = -std=c++11 -Wall -Wextra -Werror

BINARIES=testWordCount00 testWordCount01 testWordCount02 testWordCount03 \
	testWordCount04 testWordCount05 testWordCount06 testWordCount07 \
	testWordCountHelper01

all: ${BINARIES}

testWordCount00: testWordCount00.o WordCount.o WordCountHelper.o tddFuncs.o
	${CXX} $^ -o $@

testWordCount01: testWordCount01.o WordCount.o WordCountHelper.o tddFuncs.o
	${CXX} $^ -o $@

testWordCount02: testWordCount02.o WordCount.o WordCountHelper.o tddFuncs.o
	${CXX} $^ -o $@

testWordCount03: testWordCount03.o WordCount.o WordCountHelper.o tddFuncs.o
	${CXX} $^ -o $@

testWordCount04: testWordCount04.o WordCount.o WordCountHelper.o tddFuncs.o
	${CXX} $^ -o $@

testWordCount05: testWordCount05.o WordCount.o WordCountHelper.o tddFuncs.o
	${CXX} $^ -o $@

testWordCount06: testWordCount06.o WordCount.o WordCountHelper.o tddFuncs.o
	${CXX} $^ -o $@

testWordCount07: testWordCount07.o WordCount.o WordCountHelper.o tddFuncs.o
	${CXX} $^ -o $@

testWordCountHelper01: testWordCountHelper01.o WordCountHelper.o WordCount.o tddFuncs.o
	${CXX} $^ -o $@

tests: ${BINARIES}
	./testWordCountHelper01
	./testWordCount00
	./testWordCount01
	./testWordCount02
	./testWordCount03
	./testWordCount04
	./testWordCount05
	./testWordCount06
	./testWordCount07



clean:
	/bin/rm -f ${BINARIES} *.o
