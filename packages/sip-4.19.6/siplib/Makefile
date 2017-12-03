TARGET = sip.so
OFILES = siplib.o apiversions.o descriptors.o qtlib.o threads.o objmap.o voidptr.o array.o int_convertors.o bool.o
HFILES = sip.h sipint.h array.h 

CC = gcc
CXX = g++
LINK = g++
CPPFLAGS = -DNDEBUG -I. -I/usr/include/python3.4m
CFLAGS = -pipe -fPIC -O2 -Wall -W
CXXFLAGS = -pipe -fPIC -O2 -Wall -W
LFLAGS = -shared -Wl,--version-script=sip.exp
LIBS = 
.SUFFIXES: .c .o .cpp .cc .cxx .C


.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.C.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.c.o:
	$(CC) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<

all: $(TARGET)

$(OFILES): $(HFILES)

$(TARGET): $(OFILES)
	@echo '{ global: PyInit_sip; local: *; };' > sip.exp
	$(LINK) $(LFLAGS) -o $(TARGET) $(OFILES) $(LIBS)

install: $(TARGET)
	@test -d $(DESTDIR)/usr/lib/python3/dist-packages || mkdir -p $(DESTDIR)/usr/lib/python3/dist-packages
	cp -f $(TARGET) $(DESTDIR)/usr/lib/python3/dist-packages/$(TARGET)
	strip $(DESTDIR)/usr/lib/python3/dist-packages/$(TARGET)
	@test -d $(DESTDIR)/usr/include/python3.4m || mkdir -p $(DESTDIR)/usr/include/python3.4m
	cp -f /home/ubuntu/workspace/packages/sip-4.19.6/siplib/sip.h $(DESTDIR)/usr/include/python3.4m/sip.h
	@test -d $(DESTDIR)/usr/lib/python3/dist-packages || mkdir -p $(DESTDIR)/usr/lib/python3/dist-packages
	cp -f /home/ubuntu/workspace/packages/sip-4.19.6/sip.pyi $(DESTDIR)/usr/lib/python3/dist-packages/sip.pyi

clean:
	-rm -f $(TARGET)
	-rm -f siplib.o
	-rm -f apiversions.o
	-rm -f descriptors.o
	-rm -f qtlib.o
	-rm -f threads.o
	-rm -f objmap.o
	-rm -f voidptr.o
	-rm -f array.o
	-rm -f int_convertors.o
	-rm -f bool.o
	-rm -f sip.exp
