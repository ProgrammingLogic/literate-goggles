CFLAGS = -std=c++17 -O2
LDFLAGS = -lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -lXi

LiterateGogglesTest: main.cpp
	g++ $(CFLAGS) -o LiterateGogglesTest main.cpp $(LDFLAGS)

.PHONY: test clean

test: LiterateGogglesTest
	./LiterateGogglesTest

clean:
	rm -f LiterateGogglesTest
