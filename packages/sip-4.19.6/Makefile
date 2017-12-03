
all:
	@(cd sipgen; $(MAKE))
	@(cd siplib; $(MAKE))

install:
	@(cd sipgen; $(MAKE) install)
	@(cd siplib; $(MAKE) install)
	@test -d $(DESTDIR)/usr/lib/python3/dist-packages || mkdir -p $(DESTDIR)/usr/lib/python3/dist-packages
	cp -f sipconfig.py $(DESTDIR)/usr/lib/python3/dist-packages/sipconfig.py
	cp -f /home/ubuntu/workspace/packages/sip-4.19.6/sipdistutils.py $(DESTDIR)/usr/lib/python3/dist-packages/sipdistutils.py

clean:
	@(cd sipgen; $(MAKE) clean)
	@(cd siplib; $(MAKE) clean)
