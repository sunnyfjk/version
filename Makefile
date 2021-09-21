# @Author: fjk
# @Date:   2021-07-04T19:51:57+08:00
# @Email:  sunnyfjk@gmail.com
# @Filename: Makefile
# @Last modified by:   fjk
# @Last modified time: 2021-09-21T22:50:24+08:00
# @License: GPL

TAGET 					=	demo
SRC							=	$(shell find ./source -name "*.c")
OBJ_O 					=	${patsubst %.c,%.o,$(SRC)}
OBJ_D 					=	${patsubst %.c,%.d,$(SRC)}
PWD							=	$(shell pwd)
COMPILE_TIME 		=	$(shell date +"%Y-%m-%d %H:%M:%S")
GIT_REVISION 		=	$(shell git show -s --pretty=format:%h)
INCLUDE					=	-I$(PWD)/include
LD_LIBRARY_PATH =
LD_LIBRARY			=
all: clean version lib$(TAGET).so

lib$(TAGET).so:$(OBJ_O)
	gcc -fPIC -shared  $^ -o $@ $(LD_LIBRARY_PATH) $(LD_LIBRARY)
.c.o:
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<" $(INCLUDE)
clean:
	rm -rf $(OBJ_O) $(OBJ_D) lib$(TAGET).so
version:
	@echo "update lib$(TAGET).so lib version info"
	@echo '#ifndef __VERSION_H__' > $(PWD)/include/version.h
	@echo '#define __VERSION_H__' >> $(PWD)/include/version.h
	@echo '#define BUILD_VERSION_INFO "$(COMPILE_TIME)" ' >> $(PWD)/include/version.h
	@echo '#define VERSION_INFO "$(GIT_REVISION)" ' >> $(PWD)/include/version.h
	@echo '#endif' >> $(PWD)/include/version.h

.PHONY:all clean version lib$(TAGET).so
