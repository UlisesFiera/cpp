NAME 					= claptrap

C++						= c++

STD_FLAGS 				= -Wall -Wextra -Werror

SRCS					= main.cpp ClapTrap.cpp
						  
OBJS					= ${SRCS:.cpp=.o}

REMOVE					= rm -f ${OBJS}

all:					${NAME}

${NAME}:
						${C++} ${SRCS} ${STD_FLAGS} -o ${NAME}

clean:					
						${REMOVE}

fclean:					clean
						rm -f claptrap
						
re:						fclean all

.PHONY:					all clean fclean re