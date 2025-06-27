NAME 					= harl_2.0

C++						= c++

STD_FLAGS 				= -Wall -Wextra -Werror

SRCS					= main.cpp Harl.cpp
						  
OBJS					= ${SRCS:.cpp=.o}

REMOVE					= rm -f ${OBJS}

all:					${NAME}

${NAME}:
						${C++} ${SRCS} ${STD_FLAGS} -o ${NAME}

clean:					
						${REMOVE}

fclean:					clean
						rm -f harl_2.0
						
re:						fclean all

.PHONY:					all clean fclean re