NAME 					= zombies

C++						= c++

STD_FLAGS 				= -Wall -Wextra -Werror

SRCS					= main.cpp \
						  newZombie.cpp \
						  randomChump.cpp \
						  Zombie.cpp \
						  
OBJS					= ${SRCS:.cpp=.o}

REMOVE					= rm -f ${OBJS}

all:					${NAME}

${NAME}:
						${C++} ${SRCS} ${STD_FLAGS} -o ${NAME}

clean:					
						${REMOVE}

fclean:					clean
						rm -f zombies
						
re:						fclean all

.PHONY:					all clean fclean re