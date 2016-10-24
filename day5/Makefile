CPPFLAGS+=-Wall -Wextra -Wpedantic

CFLAGS+=-std=c11

# target: dependecies...
# 	rules/
# 	commands
# Commands are only run
# if any dependency
# is NEWER than the target (modified_time)

driver: driver.o calendar.o
	# compile (cc) into a binary program
	# naming the output (-o) driver
	# using the inputs driver.o and calendar.o
	cc -o driver driver.o calendar.o

driver.o: driver.c
	# compile (cc) up to the point of object files (-c)
	# naming the output (-o) driver.o
	# using the input driver.c
	cc -c -o driver.o driver.c

# In theory, we could put calendar.h as a dependency
# here, but tracking every single header we control
# is a bit too much work
calendar.o: calendar.c
	# compile (cc) up to the point of object files (-c)
	# naming the output (-o) calendar.o
	# using the input calendar.c
	cc -c -o calendar.o calendar.c

elmo: children
	touch elmo
