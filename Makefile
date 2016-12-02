all:
	cd sortalgo && $(MAKE)
	cd generation && $(MAKE)

clean:
	cd sortalgo && $(MAKE) clean
	cd generation && $(MAKE)
