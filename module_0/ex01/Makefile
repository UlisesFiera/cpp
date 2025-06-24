NAME 					= very_usefull_contact_list

C++						= c++

STD_FLAGS 				= -Wall -Wextra -Werror

SRCS					= main.cpp \
						  PhoneBook.cpp \
						  Contact.cpp \
						  utils.cpp \
						  
OBJS					= ${SRCS:.cpp=.o}

REMOVE					= rm -f ${OBJS}

all:					${NAME}

${NAME}:
						${C++} ${SRCS} ${STD_FLAGS} -o ${NAME}

clean:					
						${REMOVE}

fclean:					clean
						rm -f very_usefull_contact_list
						
re:						fclean all

.PHONY:					all clean fclean re