# @Author: fjk
# @Date:   2021-07-04T20:05:35+08:00
# @Email:  sunnyfjk@gmail.com
# @Filename: Makefile
# @Last modified by:   fjk
# @Last modified time: 2021-07-04T21:29:00+08:00
# @License: GPL
TAGET 		=	main
SRC		=	$(shell find ./ -name "*.c")
OBJ_O 		=	${patsubst %.c,%.o,$(SRC)}
OBJ_D 		=	${patsubst %.c,%.d,$(SRC)}
PWD		=	$(shell pwd)
INCLUDE		=	-I$(PWD)/../../include/
LD_LIBRARY_PATH	= 	-L$(PWD)/../../
LD_LIBRARY	=	-ldemo

all:clean $(TAGET)

$(TAGET):$(OBJ_O)
	make -C $(PWD)/../../
	$(TOOLCHAIN)gcc  -o $@  $^ $(LD_LIBRARY) $(LD_LIBRARY_PATH)
.c.o:
	$(TOOLCHAIN)gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<" $(INCLUDE)

clean:
	make -C $(PWD)/../../ clean
	rm -rf $(OBJ_O) $(OBJ_D) $(TAGET)
.PHONY:all clean $(TAGET)
