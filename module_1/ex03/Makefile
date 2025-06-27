NAME 					= weapons

C++						= c++

STD_FLAGS 				= -Wall -Wextra -Werror

SRCS					= main.cpp \
						  Weapon.cpp \
						  HumanA.cpp \
						  HumanB.cpp \
						  
OBJS					= ${SRCS:.cpp=.o}

REMOVE					= rm -f ${OBJS}

all:					${NAME}

${NAME}:
						${C++} ${SRCS} ${STD_FLAGS} -o ${NAME}

clean:					
						${REMOVE}

fclean:					clean
						rm -f weapons
						
re:						fclean all

.PHONY:					all clean fclean re