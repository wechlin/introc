CPPFLAGS+=-Wall -Wextra -Wpedantic

CFLAGS+=-std=c11

# CC=gcc

# target: dependecies...
# 	rules/
# 	commands
# Commands are only run
# if any dependency
# is NEWER than the target (modified_time)
# target is stored $@
# dependencies are stored in $^
# first dependency is stored in $<
# rest of them is stored in $>

driver: driver.o calendar.o
	# compile (cc) into a binary program
	# naming the output (-o) driver
	# using the inputs driver.o and calendar.o
	$(CC) -o $@ $^

# This will pattern-match, using the most explicit rule first
%.o: %.c
	# compile (cc) up to the point of object files (-c)
	# naming the output (-o) whatever.o
	# using the input whatever.c
	$(CC) $(CPPFLAGS) $(CFLAGS) -c -o $@ $^

elmo: children
	touch elmo
