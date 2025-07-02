NAME 					= fixed

C++						= c++

STD_FLAGS 				= -Wall -Wextra -Werror

SRCS					= main.cpp Fixed.cpp
						  
OBJS					= ${SRCS:.cpp=.o}

REMOVE					= rm -f ${OBJS}

all:					${NAME}

${NAME}:
						${C++} ${SRCS} ${STD_FLAGS} -o ${NAME}

clean:					
						${REMOVE}

fclean:					clean
						rm -f fixed
						
re:						fclean all

.PHONY:					all clean fclean re