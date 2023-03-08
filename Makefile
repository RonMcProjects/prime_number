PROGNAME := primes
CFLAGS += -Wall -Wextra -Werror

all:
	${CC} ${PROGNAME}.c ${CFLAGS} -o ${PROGNAME}

clean:
	${RM} ${PROGNAME}.o ${PROGNAME} ${PROGNAME}.exe
