NAME 					= ideas

C++						= c++

STD_FLAGS 				= -Wall -Wextra -Werror

SRCS					= main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp
						  
OBJS					= ${SRCS:.cpp=.o}

REMOVE					= rm -f ${OBJS}

all:					${NAME}

${NAME}:
						${C++} ${SRCS} ${STD_FLAGS} -o ${NAME}

clean:					
						${REMOVE}

fclean:					clean
						rm -f ideas
						
re:						fclean all

.PHONY:					all clean fclean re