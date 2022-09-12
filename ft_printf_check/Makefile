NAME	=	libftprintf.a

LIBFT_PATH	=	./Libft
LIBFT	=	$(LIBFT_PATH)/libft.a

CC	=	clang
CFLAGS =	-Wall -Wextra -Werror

RM	=	rm -f

AR	=	ar
ARFLAGS	=	rcs

SRCS	=		./srcs/ft_printf.c \
				./srcs/ft_conv_char.c \
				./srcs/ft_conv_string.c \
				./srcs/ft_conv_pointer.c \
				./srcs/ft_conv_decimal.c \
				./srcs/ft_conv_unsigned.c \
				./srcs/ft_conv_hexa_lower.c \
				./srcs/ft_conv_hexa_upper.c \
				./srcs/ft_conv_percent.c \

OBJS	=	$(SRCS:.c=.o)

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I $(LIBFT_PATH)

all:	$(LIBFT) $(NAME)

$(LIBFT):
			make -C $(LIBFT_PATH)

$(NAME):	$(OBJS)
				cp $(LIBFT) $(NAME)
				$(AR) $(ARFLAGS) $(NAME) $(OBJS)

clean:
			make clean -C $(LIBFT_PATH)
			$(RM) $(OBJS)

fclean:	clean
			make fclean -C $(LIBFT_PATH)
			$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re libft
