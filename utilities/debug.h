/**
 * @file debug.h
 * @author <b>Thanh Nguyen </b>, Email: thanhembeddedvietnam@gmail.com or thanh_bk05@yahoo.com
 * @date May 19, 2013
 * @brief Define debug macro, it is used for debug over UART.
 * @see http://www.embeddedvietnam.com
 */

#ifndef DEBUG_H_
#define DEBUG_H_

#define USE_DEBUG
#ifdef USE_DEBUG
#include "xprintf.h"
#include <stdio.h>
#include "../include/uart.h"
#define DBG(x...) xfprintf(uart1_sendchar,x);
//#define DBG(x...) xfprintf(putchar,x);
#define FDBG(x...) {DBG("[%s:%s:%d]",__FILE__, __FUNCTION__,__LINE__); DBG(x);DBG("\r\n");}
#else
#define DBG(x...)
#define FDBG(x...)
#endif


#endif /* DEBUG_H_ */
