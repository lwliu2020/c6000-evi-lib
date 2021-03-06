/*
 * mdio.h
 *
 *  Created on: Jun 22, 2013
 *      Author: My Life
 */

#ifndef MDIO_H_
#define MDIO_H_
#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif


#define MDIO_REVID		(0x0)
#define MDIO_CONTROL		(0x4)
#define MDIO_ALIVE		(0x8)
#define MDIO_LINK		(0xC)
#define MDIO_LINKINTRAW		(0x10)
#define MDIO_LINKINTMASKED	(0x14)
#define MDIO_USERINTRAW		(0x20)
#define MDIO_USERINTMASKED	(0x24)
#define MDIO_USERINTMASKSET	(0x28)
#define MDIO_USERINTMASKCLEAR	(0x2C)
#define MDIO_USERACCESS0	(0x80)
#define MDIO_USERPHYSEL0	(0x84)
#define MDIO_USERACCESS1	(0x88)
#define MDIO_USERPHYSEL1	(0x8C)

/**************************************************************************\
* Field Definition Macros
\**************************************************************************/

/* REVID */

#define MDIO_REVID_REV (0xFFFFFFFFu)
#define MDIO_REVID_REV_SHIFT (0x00000000u)


/* CONTROL */

#define MDIO_CONTROL_IDLE (0x80000000u)
#define MDIO_CONTROL_IDLE_SHIFT (0x0000001Fu)
/*----IDLE Tokens----*/
#define MDIO_CONTROL_IDLE_NO (0x00000000u)
#define MDIO_CONTROL_IDLE_YES (0x00000001u)

#define MDIO_CONTROL_ENABLE (0x40000000u)
#define MDIO_CONTROL_ENABLE_SHIFT (0x0000001Eu)

#define MDIO_CONTROL_HIGHEST_USER_CHANNEL (0x1F000000u)
#define MDIO_CONTROL_HIGHEST_USER_CHANNEL_SHIFT (0x00000018u)


#define MDIO_CONTROL_PREAMBLE (0x00100000u)
#define MDIO_CONTROL_PREAMBLE_SHIFT (0x00000014u)
/*----PREAMBLE Tokens----*/

#define MDIO_CONTROL_FAULT (0x00080000u)
#define MDIO_CONTROL_FAULT_SHIFT (0x00000013u)

#define MDIO_CONTROL_FAULTENB (0x00040000u)
#define MDIO_CONTROL_FAULTENB_SHIFT (0x00000012u)
/*----FAULTENB Tokens----*/



#define MDIO_CONTROL_CLKDIV (0x0000FFFFu)
#define MDIO_CONTROL_CLKDIV_SHIFT (0x00000000u)
/*----CLKDIV Tokens----*/


/* ALIVE */

#define MDIO_ALIVE_REGVAL (0xFFFFFFFFu)
#define MDIO_ALIVE_REGVAL_SHIFT (0x00000000u)


/* LINK */

#define MDIO_LINK_REGVAL (0xFFFFFFFFu)
#define MDIO_LINK_REGVAL_SHIFT (0x00000000u)


/* LINKINTRAW */


#define MDIO_LINKINTRAW_USERPHY1 (0x00000002u)
#define MDIO_LINKINTRAW_USERPHY1_SHIFT (0x00000001u)

#define MDIO_LINKINTRAW_USERPHY0 (0x00000001u)
#define MDIO_LINKINTRAW_USERPHY0_SHIFT (0x00000000u)


/* LINKINTMASKED */


#define MDIO_LINKINTMASKED_USERPHY1 (0x00000002u)
#define MDIO_LINKINTMASKED_USERPHY1_SHIFT (0x00000001u)

#define MDIO_LINKINTMASKED_USERPHY0 (0x00000001u)
#define MDIO_LINKINTMASKED_USERPHY0_SHIFT (0x00000000u)


/* USERINTRAW */


#define MDIO_USERINTRAW_USERACCESS1 (0x00000002u)
#define MDIO_USERINTRAW_USERACCESS1_SHIFT (0x00000001u)

#define MDIO_USERINTRAW_USERACCESS0 (0x00000001u)
#define MDIO_USERINTRAW_USERACCESS0_SHIFT (0x00000000u)


/* USERINTMASKED */


#define MDIO_USERINTMASKED_USERACCESS1 (0x00000002u)
#define MDIO_USERINTMASKED_USERACCESS1_SHIFT (0x00000001u)

#define MDIO_USERINTMASKED_USERACCESS0 (0x00000001u)
#define MDIO_USERINTMASKED_USERACCESS0_SHIFT (0x00000000u)


/* USERINTMASKSET */


#define MDIO_USERINTMASKSET_USERACCESS1 (0x00000002u)
#define MDIO_USERINTMASKSET_USERACCESS1_SHIFT (0x00000001u)

#define MDIO_USERINTMASKSET_USERACCESS0 (0x00000001u)
#define MDIO_USERINTMASKSET_USERACCESS0_SHIFT (0x00000000u)


/* USERINTMASKCLEAR */


#define MDIO_USERINTMASKCLEAR_USERACCESS1 (0x00000002u)
#define MDIO_USERINTMASKCLEAR_USERACCESS1_SHIFT (0x00000001u)

#define MDIO_USERINTMASKCLEAR_USERACCESS0 (0x00000001u)
#define MDIO_USERINTMASKCLEAR_USERACCESS0_SHIFT (0x00000000u)


/* USERACCESS0 */

#define MDIO_USERACCESS0_GO (0x80000000u)
#define MDIO_USERACCESS0_GO_SHIFT (0x0000001Fu)

#define MDIO_USERACCESS0_WRITE (0x40000000u)
#define MDIO_USERACCESS0_READ  (0x00000000u)
#define MDIO_USERACCESS0_WRITE_SHIFT (0x0000001Eu)

#define MDIO_USERACCESS0_ACK (0x20000000u)
#define MDIO_USERACCESS0_ACK_SHIFT (0x0000001Du)


#define MDIO_USERACCESS0_REGADR (0x03E00000u)
#define MDIO_USERACCESS0_REGADR_SHIFT (0x00000015u)

#define MDIO_USERACCESS0_PHYADR (0x001F0000u)
#define MDIO_USERACCESS0_PHYADR_SHIFT (0x00000010u)

#define MDIO_USERACCESS0_DATA (0x0000FFFFu)
#define MDIO_USERACCESS0_DATA_SHIFT (0x00000000u)


/* USERPHYSEL0 */


#define MDIO_USERPHYSEL0_LINKSEL (0x00000080u)
#define MDIO_USERPHYSEL0_LINKSEL_SHIFT (0x00000007u)

#define MDIO_USERPHYSEL0_LINKINTENB (0x00000040u)
#define MDIO_USERPHYSEL0_LINKINTENB_SHIFT (0x00000006u)


#define MDIO_USERPHYSEL0_PHYADRMON (0x0000001Fu)
#define MDIO_USERPHYSEL0_PHYADRMON_SHIFT (0x00000000u)


/* USERACCESS1 */

#define MDIO_USERACCESS1_GO (0x80000000u)
#define MDIO_USERACCESS1_GO_SHIFT (0x0000001Fu)

#define MDIO_USERACCESS1_WRITE (0x40000000u)
#define MDIO_USERACCESS1_WRITE_SHIFT (0x0000001Eu)

#define MDIO_USERACCESS1_ACK (0x20000000u)
#define MDIO_USERACCESS1_ACK_SHIFT (0x0000001Du)


#define MDIO_USERACCESS1_REGADR (0x03E00000u)
#define MDIO_USERACCESS1_REGADR_SHIFT (0x00000015u)

#define MDIO_USERACCESS1_PHYADR (0x001F0000u)
#define MDIO_USERACCESS1_PHYADR_SHIFT (0x00000010u)

#define MDIO_USERACCESS1_DATA (0x0000FFFFu)
#define MDIO_USERACCESS1_DATA_SHIFT (0x00000000u)


/* USERPHYSEL1 */


#define MDIO_USERPHYSEL1_LINKSEL (0x00000080u)
#define MDIO_USERPHYSEL1_LINKSEL_SHIFT (0x00000007u)

#define MDIO_USERPHYSEL1_LINKINTENB (0x00000040u)
#define MDIO_USERPHYSEL1_LINKINTENB_SHIFT (0x00000006u)


#define MDIO_USERPHYSEL1_PHYADRMON (0x0000001Fu)
#define MDIO_USERPHYSEL1_PHYADRMON_SHIFT (0x00000000u)

/*****************************************************************************/
/*
** Structure to save CPSW context
*/
typedef struct mdioContext {
    unsigned int mdioCtrl;
}MDIOCONTEXT;

/*
** Prototypes for the APIs
*/
extern unsigned int MDIOPhyAliveStatusGet(unsigned int baseAddr);
extern unsigned int MDIOPhyLinkStatusGet(unsigned int baseAddr);
extern void MDIOInit(unsigned int baseAddr, unsigned int mdioInputFreq,
                     unsigned int mdioOutputFreq);
extern unsigned int MDIOPhyRegRead(unsigned int baseAddr, unsigned int phyAddr,
                                   unsigned int regNum, volatile unsigned short *dataPtr);
extern void MDIOPhyRegWrite(unsigned int baseAddr, unsigned int phyAddr,
                            unsigned int regNum, unsigned short RegVal);
extern void MDIOContextSave(unsigned int baseAddr, MDIOCONTEXT *contextPtr);
extern void MDIOContextRestore(unsigned int baseAddr, MDIOCONTEXT *contextPtr);
#ifdef __cplusplus
}
#endif



#endif /* MDIO_H_ */
