#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: igerasim <igerasim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/30 16:14:54 by igerasim          #+#    #+#              #
#    Updated: 2025/11/14 03:15:55 by igerasim         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_atoi.c\
	   ft_itoa.c\
	   ft_bzero.c\
	   ft_calloc.c\
\
	   ft_isalpha.c\
	   ft_isalnum.c\
	   ft_isascii.c\
	   ft_isdigit.c\
	   ft_isprint.c\
\
	   ft_memchr.c\
	   ft_memcmp.c\
	   ft_memcpy.c\
	   ft_memmove.c\
	   ft_memset.c\
\
	   ft_strchr.c\
	   ft_strrchr.c\
	   ft_strnstr.c\
	   ft_strncmp.c\
	   ft_strlen.c\
	   ft_strlcpy.c\
	   ft_strdup.c\
	   ft_strjoin.c\
	   ft_strlcat.c\
	   ft_substr.c\
	   ft_split.c\
	   ft_strtrim.c\
	   ft_striteri.c\
	   ft_strmapi.c\
\
	   ft_tolower.c\
	   ft_toupper.c\
\
	   ft_putchar_fd.c\
	   ft_putnbr_fd.c\
	   ft_putstr_fd.c\
	   ft_putendl_fd.c

SRCS_BONUS = ft_lstnew_bonus.c\
			 ft_lstlast_bonus.c\
			 ft_lstmap_bonus.c\
			 ft_lstsize_bonus.c\
			 ft_lstiter_bonus.c\
			 ft_lstadd_front_bonus.c\
			 ft_lstadd_back_bonus.c\
			 ft_lstdelone_bonus.c\
			 ft_lstclear_bonus.c

OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $^

all: $(OBJS) $(OBJS_BONUS)
	ar -rcs $(NAME) $^

bonus: all

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus