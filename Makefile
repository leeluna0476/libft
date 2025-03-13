.DEFAULT_GOAL=all

NAME=libft.a
CC=cc
CFLAGS=-Wall -Wextra -Werror -Wpedantic
CPPFLAGS=-MMD -MP -MF $(DEPS_DIR)/$*.d
AR=ar
ARFLAGS=rc

SRCS= \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strlen.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strnstr.c \
	ft_strncmp.c \
	ft_strdup.c \
	ft_split.c \
	ft_calloc.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_atoi.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_strmapi.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \

OBJS_DIR=.objs
OBJS=$(addprefix $(OBJS_DIR)/, $(SRCS:.c=.o))

DEPS_DIR=.deps
DEPS=$(addprefix $(DEPS_DIR)/, $(SRCS:.c=.d))

-include $(DEPS)

all : $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $@ $?

$(OBJS_DIR)/%.o: %.c | $(OBJS_DIR) $(DEPS_DIR)
	$(COMPILE.c) -o $@ $<

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

$(DEPS_DIR):
	mkdir -p $(DEPS_DIR)

clean:
	rm -fr $(OBJS) $(DEPS) $(OBJS_DIR) $(DEPS_DIR)

fclean: clean
	rm -fr $(NAME)

re: fclean
	make all

.PHONY: all clean fclean re
