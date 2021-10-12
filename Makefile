#	Includes
-include includes.mk
-include common-sources.mk
-include checker-sources.mk
-include push_swap-sources.mk

#	Names
NAME_CHECKER	=	checker
NAME_PUSH_SWAP	=	push_swap

#	Colors
BLACK			=	\033[0;30m
RED				=	\033[0;31m
GREEN			=	\033[0;32m
ORANGE			=	\033[0;33m
BLUE			=	\033[0;34m
PURPLE			=	\033[0;35m
CYAN			=	\033[0;36m
LIGHT_GRAY		=	\033[0;37m
DARK_GRAY		=	\033[1;30m
LIGHT_RED		=	\033[1;31m
LIGHT_GREEN		=	\033[1;32m
YELLOW			=	\033[1;33m
LIGHT_BLUE		=	\033[1;34m
LIGHT_PURPLE	=	\033[1;35m
LIGHT_CYAN		=	\033[1;36m
WHITE			=	\033[1;37m
NO_COLOR		=	\033[0m

#	Compilation
GCC				=	gcc
FLAGS			=	-Wall -Wextra -Werror -O3 -Ofast -flto -march=native -ffast-math

LIBFT_PATH		=	./libft
INCLUDES_PATH	=	./includes

COMMON_OBJS		=	$(COMMON_SOURCES:.c=.o)
CHECKER_OBJS	=	$(CHECKER_SOURCES:.c=.o)
PUSH_SWAP_OBJS	=	$(PUSH_SWAP_SOURCES:.c=.o)

#	Delete
RM				=	rm -f

#	Rules
#	Default rule
all:	$(NAME_CHECKER) $(NAME_PUSH_SWAP)

#	How to convert .c in .o
%.o:	%.c $(LIBFT_PATH)/libft.a $(INCLUDES)
	@$(GCC) $(FLAGS) -I $(INCLUDES_PATH) -c $< -o $@
	@printf "\033[2K\r$(BLUE)$(NAME_CHECKER)/$(NAME_PUSH_SWAP)$(RESET)$(BLUE): $(PURPLE)$<$(RESET)"

#	Compile libft.a
$(LIBFT_PATH)/libft.a:
	$(MAKE) -C $(LIBFT_PATH)

#	Compile checker program
$(NAME_CHECKER):	$(LIBFT_PATH)/libft.a $(INCLUDES) $(COMMON_OBJS) $(CHECKER_OBJS)
	@$(GCC) $(LIBFT_PATH)/libft.a $(FLAGS) -I $(INCLUDES_PATH) $(COMMON_OBJS) $(CHECKER_OBJS) -o $(NAME_CHECKER)
	@printf "\033[2K\r$(BLUE)$(NAME_CHECKER)$(RESET)$(BLUEE): $(GREEN)Compiled [√]$(RESET)\n"

#	Compile pushswap program
$(NAME_PUSH_SWAP):	$(LIBFT_PATH)/libft.a $(INCLUDES) $(COMMON_OBJS) $(PUSH_SWAP_OBJS)
	@$(GCC) $(LIBFT_PATH)/libft.a $(FLAGS) -I $(INCLUDES_PATH) $(COMMON_OBJS) $(PUSH_SWAP_OBJS) -o $(NAME_PUSH_SWAP)
	@printf "\033[2K\r$(BLUE)$(NAME_PUSH_SWAP)$(RESET)$(BLUEE): $(GREEN)Compiled [√]$(RESET)\n"

#	Clean project
#	Clean
clean:
	$(MAKE) -C $(LIBFT_PATH) clean
	@$(RM) $(COMMON_OBJS) $(CHECKER_OBJS) $(PUSH_SWAP_OBJS)
	@printf "$(BLUE)$(NAME_CHECKER)/$(NAME_PUSH_SWAP): $(LIGHT_RED)Cleaning all .o in project.\n$(RESET)"
#	Full clean
fclean:		clean
	$(MAKE) -C $(LIBFT_PATH) fclean
	@$(RM) $(NAME_CHECKER) $(NAME_PUSH_SWAP)
	@printf "$(BLUE)$(NAME_CHECKER)/$(NAME_PUSH_SWAP): $(RED)Cleaning compiled programs $(NAME_CHECKER)/$(NAME_PUSH_SWAP).\n$(RESET)"

#	Recompile all
re:		fclean all

#	Check norminette
norminette: clean
	@printf "$(BLUE)$(NAME_CHECKER)/$(NAME_PUSH_SWAP): $(GREEN)norminette -> sources\n$(RESET)"
	@norminette sources
	@echo " "
	@printf "$(BLUE)$(NAME_CHECKER)/$(NAME_PUSH_SWAP): $(GREEN)norminette -> includes\n$(RESET)"
	@norminette includes

#	Prepare to push project
end:
	@make fclean
	@make gmk
	@make all
	@make norminette
	@make fclean
	@printf "$(BLUE)$(NAME_CHECKER)/$(NAME_PUSH_SWAP): $(LIGHT_CYAN)Prepared to be pushed.\n$(RESET)"

#	Generate .mk (Makefile includes)
gmk:
	@find includes -name '*.h' | sed 's/^/INCLUDES += /' > includes.mk
	@find sources/common -name '*.c' | sed 's/^/COMMON_SOURCES += /' > common-sources.mk
	@find sources/checker -name '*.c' | sed 's/^/CHECKER_SOURCES += /' > checker-sources.mk
	@find sources/push_swap -name '*.c' | sed 's/^/PUSH_SWAP_SOURCES += /' > push_swap-sources.mk

PHONY: all %.o clean fclean re norminette end gmk