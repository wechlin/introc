CPPFLAGS+=-Wall -Wextra -Wpedantic

CFLAGS+=-std=c11

# target: dependecies...
# 	rules/
# 	commands
# Commands are only run
# if any dependency
# is NEWER than the target (modified_time)

driver.o: driver.c
	# compile (cc) up to the point of object files (-c)
	# naming the output (-o) driver.o
	# using the input driver.c
	cc -c -o driver.o driver.c

elmo: children
	touch elmo
