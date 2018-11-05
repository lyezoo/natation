C_FILES = *.c

EXE = ft_display_file

all : $(C_FILES)

$(C_FILES) :
	@gcc -o $(EXE) $(C_FILES)

clean :
	@/bin rm 

fclean : clean
	@/bin rm 

re : fclean all
