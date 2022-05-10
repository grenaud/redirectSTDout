
CXX      = g++   
LIBGAB   = /home/gabriel/lib/libgab/

CXXFLAGS = -Wall -lm -O3 -lz -I${LIBGAB} -I${LIBGAB}/gzstream/ -c
LDFLAGS  = -lz


all: redirectSTDout 

redirectSTDout.o:	redirectSTDout.cpp
	${CXX} ${CXXFLAGS} redirectSTDout.cpp


redirectSTDout:	redirectSTDout.o ${LIBGAB}utils.o  
	${CXX} -o $@ $^ $(LDLIBS) $(LDFLAGS)

clean :
	rm -f redirectSTDout.o redirectSTDout

