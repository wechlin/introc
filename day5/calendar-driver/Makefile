CPPFLAGS+=-Wall -Wextra -Wpedantic

CFLAGS+=-std=c11

TARGET=driver
DEPS=driver.o calendar.o

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

$(TARGET): $(DEPS)

.PHONY: clean

# make rules REQUIRE tabs, NEVER spaces
clean:
	$(RM) $(DEPS) $(TARGET)
