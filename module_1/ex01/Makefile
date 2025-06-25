NAME 					= zombie_horde

C++						= c++

STD_FLAGS 				= -Wall -Wextra -Werror

SRCS					= main.cpp \
						  zombieHorde.cpp \
						  Zombie.cpp \
						  
OBJS					= ${SRCS:.cpp=.o}

REMOVE					= rm -f ${OBJS}

all:					${NAME}

${NAME}:
						${C++} ${SRCS} ${STD_FLAGS} -o ${NAME}

clean:					
						${REMOVE}

fclean:					clean
						rm -f zombie_horde
						
re:						fclean all

.PHONY:					all clean fclean re