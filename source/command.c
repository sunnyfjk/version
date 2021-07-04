/**
 * @Author: fjk
 * @Date:   2021-07-04T19:54:41+08:00
 * @Email:  sunnyfjk@gmail.com
 * @Filename: command.c
 * @Last modified by:   fjk
 * @Last modified time: 2021-07-04T21:34:44+08:00
 * @License: GPL
 */

#include <command.h>
#include <version.h>
const char *get_build_version_info(void)
{
	return BUILD_VERSION_INFO;
}

const char *get_version_info(void)
{
	return VERSION_INFO;
}
