CFLAGS  = -g -Os -Wall 
LDFLAGS = -fPIC -shared -llua
TARGET  = example

all:
	$(CC) $(CFLAGS) $(LDFLAGS) -o $(TARGET).so $(TARGET).c
clean:
	$(RM) $(TARGET).so
install:
	mv $(TARGET).so /usr/lib64/lua/5.1
