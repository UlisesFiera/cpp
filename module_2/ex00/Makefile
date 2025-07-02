NAME 					= fixed_test

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
						rm -f fixed_test
						
re:						fclean all

.PHONY:					all clean fclean re