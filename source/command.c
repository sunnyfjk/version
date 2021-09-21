/**
 * @Author: fjk
 * @Date:   2021-07-04T19:54:41+08:00
 * @Email:  sunnyfjk@gmail.com
 * @Filename: command.c
 * @Last modified by:   fjk
 * @Last modified time: 2021-09-21T23:04:36+08:00
 * @License: GPL
 */

#include <command.h>
const char *get_build_datetime(void) { return BUILD_DATETIME; }

const char *get_build_version(void) { return BUILD_VERSION; }
