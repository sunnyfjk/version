/**
 * @Author: fjk
 * @Date:   2021-07-04T20:08:03+08:00
 * @Email:  sunnyfjk@gmail.com
 * @Filename: main.c
 * @Last modified by:   fjk
 * @Last modified time: 2021-07-04T20:11:11+08:00
 * @License: GPL
 */
#include <command.h>

int main(int argc, char const *argv[])
{
	PERR("%s\n", get_version_info());
	PINFO("%s\n", get_build_version_info());
	PDBUG("test\n");
	return 0;
}
