NAME 					= sed

C++						= c++

STD_FLAGS 				= -Wall -Wextra -Werror

SRCS					= main.cpp \
						  
OBJS					= ${SRCS:.cpp=.o}

REMOVE					= rm -f ${OBJS}

all:					${NAME}

${NAME}:
						${C++} ${SRCS} ${STD_FLAGS} -o ${NAME}

clean:					
						${REMOVE}

fclean:					clean
						rm -f sed
						
re:						fclean all

.PHONY:					all clean fclean re