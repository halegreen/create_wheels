CXX=g++
EXEC=TextQuery
SOURCES=main.cpp Query.cpp AndQuery.cpp BinaryQuery.cpp OrQuery.cpp Query_base.cpp \
        QueryResult.cpp TextQuery.cpp WordQuery.cpp

all:
		$(CXX) -std=c++11 $(SOURCES)  -o $(EXEC)

clean:
		rm -f $(EXEC) *.(gdb) *.o
