# Makefile to compile LeapYearChecker

CXX = g++
CXXFLAGS = -Wall -std=c++11

OBJS = main.o LeapYearChecker.o
TARGET = leap

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

main.o: main.cpp LeapYearChecker.h
	$(CXX) $(CXXFLAGS) -c main.cpp

LeapYearChecker.o: LeapYearChecker.cpp LeapYearChecker.h
	$(CXX) $(CXXFLAGS) -c LeapYearChecker.cpp

clean:
	del *.o *.exe   # Use rm *.o $(TARGET) on Linux/Mac
