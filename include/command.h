/**
 * @Author: fjk
 * @Date:   2021-07-04T19:54:30+08:00
 * @Email:  sunnyfjk@gmail.com
 * @Filename: command.h
 * @Last modified by:   fjk
 * @Last modified time: 2021-07-04T21:31:29+08:00
 * @License: GPL
 */
#ifndef __COMMAND_H__
#define __COMMAND_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PERR(fmt, args...)                                                     \
	do {                                                                   \
		fprintf(stderr, "\033[31m[%s:%d]" fmt "\033[0m", __FUNCTION__, \
			__LINE__, ##args);                                     \
	} while (0)

#define PINFO(fmt, args...)                                                    \
	do {                                                                   \
		fprintf(stderr, "\033[32m[%s:%d]" fmt "\033[0m", __FUNCTION__, \
			__LINE__, ##args);                                     \
	} while (0)

#define PDBUG(fmt, args...)                                                    \
	do {                                                                   \
		fprintf(stderr, "\033[33m[%s:%d]" fmt "\033[0m", __FUNCTION__, \
			__LINE__, ##args);                                     \
	} while (0)

const char *get_version_info(void);

const char *get_build_version_info(void);

#endif
