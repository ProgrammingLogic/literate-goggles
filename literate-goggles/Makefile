OS = Linux

VERSION = 0.0.1
CC = /usr/bin/g++
CFLAGS = -std=c++17 -O2
LDFLAGS = -lglfw -lGL -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -lXi -lm -lpthread -lXrandr -ldl

BUILDDIR = build
SOURCEDIR = src
HEADERDIR = src

SOURCES := $(shell find $(SOURCEDIR) -name '*.cpp')
HEADERS := $(shell find $(SOURCEDIR) -name '*.h')

NAME = LiterateGoggles
BINARY = $(NAME).bin

.PHONY: all clean setup

all: $(BINARY)

$(BINARY): $(BUILDDIR) 
	$(CC) $(HEADERS) $(SOURCES) $(CFLAGS) $(LDFLAGS) -o $(NAME) 

$(BUILDDIR):
	mkdir $(BUILDDIR)

clean:
	rm -f $(BINARY)
	rm -f $(NAME)
	rm -rf $(BUILDDIR)


