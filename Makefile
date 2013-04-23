SOURCE = bandymai.cpp gyvunas.cpp katinas.cpp suo.cpp
HEADERS = gyvunas.h katinas.h suo.h

all: programa

OBJECTS= $(SOURCE:%.cpp=%.o)

$(OBJECTS): $(SOURCE) $(HEADERS)

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $<

programa: $(OBJECTS)
	$(CXX) $(OBJECTS) -o programa

debug : $(SOURCE) $(HEADERS)
	$(CXX) -g -Wall -pedantic $(SOURCE) -o programa

clean:
	$(RM) programa
	$(RM) $(OBJECTS)
