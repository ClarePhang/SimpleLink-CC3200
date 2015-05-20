#ifndef __PLATFORM_H_
#define __PLATFORM_H_
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>          /* See NOTES */
#include <sys/stat.h>
#include <fcntl.h>
#include <inttypes.h>
#include <sys/time.h>
#include <time.h>
#include <math.h>
#include <errno.h>
#include <signal.h>

#define _POSIX_C_SOURCE 200809L
#include "hal_uart.h"

#define WIFI_SOFTVAR    "04010003"
#define WIFI_HARDVER    "00-LINUX"

#define UART_NAME       "/dev/ttyUSB0"
#define NET_ADAPTHER    "eth0"


extern void msleep(int m_seconds);

#define sockaddr_t sockaddr_in

#endif

