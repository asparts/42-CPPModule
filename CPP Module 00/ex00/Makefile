CXX	= g++
NAME	= megaphone
SRCS	= megaphone.cpp
CC_FLAGS = -Wall -Wextra -Werror -std=c++98
RM 	= rm -f
OBJS	= $(SRCS:.cpp=.o)

.PHONY: all clean fclean re

all:	$(NAME)

$(NAME):	$(OBJS) 
	$(CXX) $(CC_FLAGS) -o $(NAME) $(SRCS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM)	$(NAME)

re: clean all
