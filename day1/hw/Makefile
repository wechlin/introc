CPPFLAGS+=-Wall -Wextra -Wpedantic

CFLAGS+=-std=c11


BINS=2-3 2-4 2-5 2-6

.PHONY: all clean

2-6: LDLIBS+=-lm

all: $(BINS)

clean:
	$(RM) $(BINS)
