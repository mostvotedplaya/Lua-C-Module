CFLAGS  = -g -Os -Wall -fPIC -shared
TARGET  = example

all:
	$(CC) $(CFLAGS) -o $(TARGET).so $(TARGET).c
clean:
	$(RM) $(TARGET).so
install:
	mv $(TARGET).so /usr/lib64/lua/5.1
