CPPFLAGS+=-Wall -Wextra -Wpedantic

CFLAGS+=-std=c11

# CC=gcc

# target: dependecies...
#		rules/
#		commands
# Commands are only run
# if any dependency
# is NEWER than the target (modified_time)
# target is stored $@
# dependencies are stored in $^
# first dependency is stored in $<
# rest of them is stored in $>

driver: driver.o calendar.o

# make rules REQUIRE tabs, NEVER spaces
clean:
	rm -f driver.o calendar.o driver

elmo: children
	touch elmo
