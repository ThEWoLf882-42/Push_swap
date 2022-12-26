NAME_PS = push_swap
NAME_CH = checker

CC = cc
FLAGS = -Wall -Werror -Wextra -O3
LIBRARIES = -L$(LIBFT_DIRECTORY)
INCLUDES = -I$(HEADERS_DIRECTORY) -I$(LIBFT_HEADERS)

LIBFT = $(LIBFT_DIRECTORY)libft.a
LIBFT_DIRECTORY = ./libft/
LIBFT_HEADERS = $(LIBFT_DIRECTORY)includes/

HEADERS_LIST = push_swap.h
HEADERS_DIRECTORY = ./includes/
HEADERS = $(addprefix $(HEADERS_DIRECTORY), $(HEADERS_LIST))

SOURCES_DIRECTORY = ./sources/
SOURCES_DIRECTORY_CH = ./sources/checker
SOURCES_LIST =	apply.c \
				cases_ab.c \
				cases_ba.c \
				free_them_all.c \
				get_rank.c \
				inita.c \
				its_ok.c \
				one_arg.c \
				pa.c \
				pb.c \
				ra.c \
				rb.c \
				reset_rank.c \
				rpos.c \
				rr.c \
				rra.c \
				rrb.c \
				rrr.c \
				sa.c \
				sb.c \
				sort_3.c \
				sort_them_all.c \
				sort.c \
				sort2.c \
				sort3.c \
				sort4.c \
				sort5.c \
				ss.c \
				type.c \
				only_one.c \

SOURCES_LIST_PS = push_swap.c
SOURCES_LIST_CH =	checker.c \
					.c \

SOURCES = $(addprefix $(SOURCES_DIRECTORY), $(SOURCES_LIST))
SOURCES_PS = $(addprefix $(SOURCES_DIRECTORY), $(SOURCES_LIST_PS))
SOURCES_CH = $(addprefix $(SOURCES_DIRECTORY_CH), $(SOURCES_LIST_CH))

OBJECTS_DIRECTORY = objects/
OBJECTS_LIST = $(patsubst %.c, %.o, $(SOURCES_LIST))
OBJECTS_LIST_PS = $(patsubst %.c, %.o, $(SOURCES_LIST_PS))
OBJECTS_LIST_CH = $(patsubst %.c, %.o, $(SOURCES_LIST_CH))
OBJECTS	= $(addprefix $(OBJECTS_DIRECTORY), $(OBJECTS_LIST))
OBJECTS_PS = $(addprefix $(OBJECTS_DIRECTORY), $(OBJECTS_LIST_PS))
OBJECTS_CH = $(addprefix $(OBJECTS_DIRECTORY), $(OBJECTS_LIST_CH))

# COLORS

GREEN = \033[0;32m
RED = \033[0;31m
RESET = \033[0m

.PHONY: all clean fclean re

all: $(NAME_PS) 

$(NAME_PS): $(LIBFT) $(OBJECTS_DIRECTORY) $(OBJECTS) $(OBJECTS_PS)
	@$(CC) $(FLAGS) $(LIBRARIES) $(INCLUDES) $(LIBFT) $(OBJECTS) $(OBJECTS_PS) -o $(NAME_PS)
	@echo "\n$(NAME_PS): $(GREEN)$(NAME_PS) object files were created$(RESET)"
	@echo "$(NAME_PS): $(GREEN)$(NAME_PS) was created$(RESET)"

$(NAME_CH): $(LIBFT) $(OBJECTS_DIRECTORY) $(OBJECTS) $(OBJECTS_CH)
	@$(CC) $(FLAGS) $(LIBRARIES) $(INCLUDES) $(OBJECTS) $(OBJECTS_CH) -o $(NAME_CH)
	@echo "\n$(NAME_PS): $(GREEN)$(NAME_CH) object files were created$(RESET)"
	@echo "$(NAME_PS): $(GREEN)$(NAME_CH) was created$(RESET)"

$(OBJECTS_DIRECTORY):
	@mkdir -p $(OBJECTS_DIRECTORY)
	@echo "$(NAME_PS): $(GREEN)$(OBJECTS_DIRECTORY) was created$(RESET)"

$(OBJECTS_DIRECTORY)%.o : $(SOURCES_DIRECTORY)%.c $(HEADERS)
	@$(CC) $(FLAGS) -c $(INCLUDES) $< -o $@
	@echo "$(GREEN).$(RESET)\c"

$(LIBFT):
	@echo "$(NAME_PS): $(GREEN)creating $(LIBFT)...$(RESET)"
	@$(MAKE) -sC $(LIBFT_DIRECTORY)

clean:
	@$(MAKE) -sC $(LIBFT_DIRECTORY) clean
	@rm -rf $(OBJECTS_DIRECTORY)
	@echo "$(NAME_PS): $(RED)$(OBJECTS_DIRECTORY) was deleted$(RESET)"
	@echo "$(NAME_PS): $(RED)object files were deleted$(RESET)"

fclean: clean
	@rm -f $(LIBFT)
	@echo "$(NAME_PS): $(RED)$(LIBFT) was deleted$(RESET)"
	@rm -f $(NAME_PS)
	@echo "$(NAME_PS): $(RED)$(NAME_PS) was deleted$(RESET)"
	@rm -f $(NAME_CH)
	@echo "$(NAME_PS): $(RED)$(NAME_CH) was deleted$(RESET)"

re:
	@$(MAKE) fclean
	@$(MAKE) all
