/*
 * timer.h
 *
 *  Created on: May 09, 2013
 *      Author: NGUYEN
 */

#ifndef __TIMER_H
#define __TIMER_H
#include "types.h"
#ifndef TMR_0_REGS
#define TMR_0_REGS                      (0x01C20000u)
#endif
#ifndef TMR_1_REGS
#define TMR_1_REGS                      (0x01C21000u)
#endif

#define TIMER_0_REVID					*(Uint32)(TMR_0_REGS+0x000u)
#define TIMER_0_EMUMGT					*(Uint32)(TMR_0_REGS+0x004u)
#define TIMER_0_GPINTGPEN				*(Uint32)(TMR_0_REGS+0x008u)
#define TIMER_0_GPDATGPDIR				*(Uint32)(TMR_0_REGS+0x00Cu)
#define TIMER_0_TIM12					*(Uint32)(TMR_0_REGS+0x010u)
#define TIMER_0_TIM34					*(Uint32)(TMR_0_REGS+0x014u)
#define TIMER_0_PRD12					*(Uint32)(TMR_0_REGS+0x018u)
#define TIMER_0_PRD34					*(Uint32)(TMR_0_REGS+0x01Cu)
#define TIMER_0_TCR						*(Uint32)(TMR_0_REGS+0x020u)
#define TIMER_0_TGCR					*(Uint32)(TMR_0_REGS+0x024u)
#define TIMER_0_WDTCR					*(Uint32)(TMR_0_REGS+0x028u)
#define TIMER_0_REL12					*(Uint32)(TMR_0_REGS+0x034u)
#define TIMER_0_REL34					*(Uint32)(TMR_0_REGS+0x038u)
#define TIMER_0_CAP12					*(Uint32)(TMR_0_REGS+0x03Cu)
#define TIMER_0_CAP34					*(Uint32)(TMR_0_REGS+0x040u)
#define TIMER_0_INTCTLSTAT				*(Uint32)(TMR_0_REGS+0x044u)
#define TIMER_0_CMP0					*(Uint32)(TMR_0_REGS+0x060u)
#define TIMER_0_CMP1					*(Uint32)(TMR_0_REGS+0x064u)
#define TIMER_0_CMP2					*(Uint32)(TMR_0_REGS+0x068u)
#define TIMER_0_CMP3					*(Uint32)(TMR_0_REGS+0x06Cu)
#define TIMER_0_CMP4					*(Uint32)(TMR_0_REGS+0x070u)
#define TIMER_0_CMP5					*(Uint32)(TMR_0_REGS+0x074u)
#define TIMER_0_CMP6					*(Uint32)(TMR_0_REGS+0x078u)
#define TIMER_0_CMP7					*(Uint32)(TMR_0_REGS+0x07Cu)

#define TIMER_1_REVID					*(Uint32)(TMR_1_REGS+0x000u)
#define TIMER_1_EMUMGT					*(Uint32)(TMR_1_REGS+0x004u)
#define TIMER_1_GPINTGPEN				*(Uint32)(TMR_1_REGS+0x008u)
#define TIMER_1_GPDATGPDIR				*(Uint32)(TMR_1_REGS+0x00Cu)
#define TIMER_1_TIM12					*(Uint32)(TMR_1_REGS+0x010u)
#define TIMER_1_TIM34					*(Uint32)(TMR_1_REGS+0x014u)
#define TIMER_1_PRD12					*(Uint32)(TMR_1_REGS+0x018u)
#define TIMER_1_PRD34					*(Uint32)(TMR_1_REGS+0x01Cu)
#define TIMER_1_TCR						*(Uint32)(TMR_1_REGS+0x020u)
#define TIMER_1_TGCR					*(Uint32)(TMR_1_REGS+0x024u)
#define TIMER_1_WDTCR					*(Uint32)(TMR_1_REGS+0x028u)
#define TIMER_1_REL12					*(Uint32)(TMR_1_REGS+0x034u)
#define TIMER_1_REL34					*(Uint32)(TMR_1_REGS+0x038u)
#define TIMER_1_CAP12					*(Uint32)(TMR_1_REGS+0x03Cu)
#define TIMER_1_CAP34					*(Uint32)(TMR_1_REGS+0x040u)
#define TIMER_1_INTCTLSTAT				*(Uint32)(TMR_1_REGS+0x044u)
#define TIMER_1_CMP0					*(Uint32)(TMR_1_REGS+0x060u)
#define TIMER_1_CMP1					*(Uint32)(TMR_1_REGS+0x064u)
#define TIMER_1_CMP2					*(Uint32)(TMR_1_REGS+0x068u)
#define TIMER_1_CMP3					*(Uint32)(TMR_1_REGS+0x06Cu)
#define TIMER_1_CMP4					*(Uint32)(TMR_1_REGS+0x070u)
#define TIMER_1_CMP5					*(Uint32)(TMR_1_REGS+0x074u)
#define TIMER_1_CMP6					*(Uint32)(TMR_1_REGS+0x078u)
#define TIMER_1_CMP7					*(Uint32)(TMR_1_REGS+0x07Cu)

typedef struct Timer_t{
	 Int32 (*callback)(void * data);
	 Uint8 id;
	 Uint8 mode;
}Timer_t;
/*
* Define some macros command
*/

#define ENABLE_TIMER(tmr)				

/**************************************************************************\
* Overlay structure typedef definition
\**************************************************************************/


/**************************************************************************\
* Field Definition Macros
\**************************************************************************/

/* REVID */

#define TMR_REVID_REV_MASK           (0xFFFFFFFFu)
#define TMR_REVID_REV_SHIFT          (0x00000000u)
#define TMR_REVID_REV_RESETVAL       (0x44720211u)

#define TMR_REVID_RESETVAL           (0x44720211u)

/* EMUMGT */




#define TMR_EMUMGT_SOFT_MASK         (0x00000002u)
#define TMR_EMUMGT_SOFT_SHIFT        (0x00000001u)
#define TMR_EMUMGT_SOFT_RESETVAL     (0x00000000u)
/*----SOFT Tokens----*/
#define TMR_EMUMGT_SOFT_IMMEDIATE    (0x00000000u)
#define TMR_EMUMGT_SOFT_INCREMENT    (0x00000001u)

#define TMR_EMUMGT_FREE_MASK         (0x00000001u)
#define TMR_EMUMGT_FREE_SHIFT        (0x00000000u)
#define TMR_EMUMGT_FREE_RESETVAL     (0x00000000u)
/*----FREE Tokens----*/
#define TMR_EMUMGT_FREE_SOFT         (0x00000000u)
#define TMR_EMUMGT_FREE_FREE         (0x00000001u)

#define TMR_EMUMGT_RESETVAL          (0x00000000u)

/* GPINTGPEN */


#define TMR_GPINTGPEN_GPENO34_MASK   (0x02000000u)
#define TMR_GPINTGPEN_GPENO34_SHIFT  (0x00000019u)
#define TMR_GPINTGPEN_GPENO34_RESETVAL (0x00000000u)
/*----GPENO34 Tokens----*/
#define TMR_GPINTGPEN_GPENO34_TIMER  (0x00000000u)
#define TMR_GPINTGPEN_GPENO34_GPIO   (0x00000001u)

#define TMR_GPINTGPEN_GPENI34_MASK   (0x01000000u)
#define TMR_GPINTGPEN_GPENI34_SHIFT  (0x00000018u)
#define TMR_GPINTGPEN_GPENI34_RESETVAL (0x00000000u)
/*----GPENI34 Tokens----*/
#define TMR_GPINTGPEN_GPENI34_TIMER  (0x00000000u)
#define TMR_GPINTGPEN_GPENI34_GPIO   (0x00000001u)


#define TMR_GPINTGPEN_GPENO12_MASK   (0x00020000u)
#define TMR_GPINTGPEN_GPENO12_SHIFT  (0x00000011u)
#define TMR_GPINTGPEN_GPENO12_RESETVAL (0x00000000u)
/*----GPENO12 Tokens----*/
#define TMR_GPINTGPEN_GPENO12_TIMER  (0x00000000u)
#define TMR_GPINTGPEN_GPENO12_GPIO   (0x00000001u)

#define TMR_GPINTGPEN_GPENI12_MASK   (0x00010000u)
#define TMR_GPINTGPEN_GPENI12_SHIFT  (0x00000010u)
#define TMR_GPINTGPEN_GPENI12_RESETVAL (0x00000000u)
/*----GPENI12 Tokens----*/
#define TMR_GPINTGPEN_GPENI12_TIMER  (0x00000000u)
#define TMR_GPINTGPEN_GPENI12_GPIO   (0x00000001u)


#define TMR_GPINTGPEN_GPINT34INVO_MASK (0x00002000u)
#define TMR_GPINTGPEN_GPINT34INVO_SHIFT (0x0000000Du)
#define TMR_GPINTGPEN_GPINT34INVO_RESETVAL (0x00000000u)
/*----GPINT34INVO Tokens----*/
#define TMR_GPINTGPEN_GPINT34INVO_DISABLE (0x00000000u)
#define TMR_GPINTGPEN_GPINT34INVO_ENABLE (0x00000001u)

#define TMR_GPINTGPEN_GPINT34INVI_MASK (0x00001000u)
#define TMR_GPINTGPEN_GPINT34INVI_SHIFT (0x0000000Cu)
#define TMR_GPINTGPEN_GPINT34INVI_RESETVAL (0x00000000u)
/*----GPINT34INVI Tokens----*/
#define TMR_GPINTGPEN_GPINT34INVI_DISABLE (0x00000000u)
#define TMR_GPINTGPEN_GPINT34INVI_ENABLE (0x00000001u)


#define TMR_GPINTGPEN_GPINT34ENO_MASK (0x00000200u)
#define TMR_GPINTGPEN_GPINT34ENO_SHIFT (0x00000009u)
#define TMR_GPINTGPEN_GPINT34ENO_RESETVAL (0x00000000u)
/*----GPINT34ENO Tokens----*/
#define TMR_GPINTGPEN_GPINT34ENO_DISABLE (0x00000000u)
#define TMR_GPINTGPEN_GPINT34ENO_ENABLE (0x00000001u)

#define TMR_GPINTGPEN_GPINT34ENI_MASK (0x00000100u)
#define TMR_GPINTGPEN_GPINT34ENI_SHIFT (0x00000008u)
#define TMR_GPINTGPEN_GPINT34ENI_RESETVAL (0x00000000u)
/*----GPINT34ENI Tokens----*/
#define TMR_GPINTGPEN_GPINT34ENI_DISABLE (0x00000000u)
#define TMR_GPINTGPEN_GPINT34ENI_ENABLE (0x00000001u)


#define TMR_GPINTGPEN_GPINT12INVO_MASK (0x00000020u)
#define TMR_GPINTGPEN_GPINT12INVO_SHIFT (0x00000005u)
#define TMR_GPINTGPEN_GPINT12INVO_RESETVAL (0x00000000u)
/*----GPINT12INVO Tokens----*/
#define TMR_GPINTGPEN_GPINT12INVO_DISABLE (0x00000000u)
#define TMR_GPINTGPEN_GPINT12INVO_ENABLE (0x00000001u)

#define TMR_GPINTGPEN_GPINT12INVI_MASK (0x00000010u)
#define TMR_GPINTGPEN_GPINT12INVI_SHIFT (0x00000004u)
#define TMR_GPINTGPEN_GPINT12INVI_RESETVAL (0x00000000u)
/*----GPINT12INVI Tokens----*/
#define TMR_GPINTGPEN_GPINT12INVI_DISABLE (0x00000000u)
#define TMR_GPINTGPEN_GPINT12INVI_ENABLE (0x00000001u)


#define TMR_GPINTGPEN_GPINT12ENO_MASK (0x00000002u)
#define TMR_GPINTGPEN_GPINT12ENO_SHIFT (0x00000001u)
#define TMR_GPINTGPEN_GPINT12ENO_RESETVAL (0x00000000u)
/*----GPINT12ENO Tokens----*/
#define TMR_GPINTGPEN_GPINT12ENO_DISABLE (0x00000000u)
#define TMR_GPINTGPEN_GPINT12ENO_ENABLE (0x00000001u)

#define TMR_GPINTGPEN_GPINT12ENI_MASK (0x00000001u)
#define TMR_GPINTGPEN_GPINT12ENI_SHIFT (0x00000000u)
#define TMR_GPINTGPEN_GPINT12ENI_RESETVAL (0x00000000u)
/*----GPINT12ENI Tokens----*/
#define TMR_GPINTGPEN_GPINT12ENI_DISABLE (0x00000000u)
#define TMR_GPINTGPEN_GPINT12ENI_ENABLE (0x00000001u)

#define TMR_GPINTGPEN_RESETVAL       (0x00000000u)

/* GPDATGPDIR */


#define TMR_GPDATGPDIR_GPDIRO34_MASK (0x02000000u)
#define TMR_GPDATGPDIR_GPDIRO34_SHIFT (0x00000019u)
#define TMR_GPDATGPDIR_GPDIRO34_RESETVAL (0x00000000u)
/*----GPDIRO34 Tokens----*/
#define TMR_GPDATGPDIR_GPDIRO34_INPUT (0x00000000u)
#define TMR_GPDATGPDIR_GPDIRO34_OUTPUT (0x00000001u)

#define TMR_GPDATGPDIR_GPDIRI34_MASK (0x01000000u)
#define TMR_GPDATGPDIR_GPDIRI34_SHIFT (0x00000018u)
#define TMR_GPDATGPDIR_GPDIRI34_RESETVAL (0x00000000u)
/*----GPDIRI34 Tokens----*/
#define TMR_GPDATGPDIR_GPDIRI34_INPUT (0x00000000u)
#define TMR_GPDATGPDIR_GPDIRI34_OUTPUT (0x00000001u)


#define TMR_GPDATGPDIR_GPDIRO12_MASK (0x00020000u)
#define TMR_GPDATGPDIR_GPDIRO12_SHIFT (0x00000011u)
#define TMR_GPDATGPDIR_GPDIRO12_RESETVAL (0x00000000u)
/*----GPDIRO12 Tokens----*/
#define TMR_GPDATGPDIR_GPDIRO12_INPUT (0x00000000u)
#define TMR_GPDATGPDIR_GPDIRO12_OUTPUT (0x00000001u)

#define TMR_GPDATGPDIR_GPDIRI12_MASK (0x00010000u)
#define TMR_GPDATGPDIR_GPDIRI12_SHIFT (0x00000010u)
#define TMR_GPDATGPDIR_GPDIRI12_RESETVAL (0x00000000u)
/*----GPDIRI12 Tokens----*/
#define TMR_GPDATGPDIR_GPDIRI12_INPUT (0x00000000u)
#define TMR_GPDATGPDIR_GPDIRI12_OUTPUT (0x00000001u)


#define TMR_GPDATGPDIR_GPDATO34_MASK (0x00000200u)
#define TMR_GPDATGPDIR_GPDATO34_SHIFT (0x00000009u)
#define TMR_GPDATGPDIR_GPDATO34_RESETVAL (0x00000000u)
/*----GPDATO34 Tokens----*/
#define TMR_GPDATGPDIR_GPDATO34_CLR  (0x00000000u)
#define TMR_GPDATGPDIR_GPDATO34_SET  (0x00000001u)

#define TMR_GPDATGPDIR_GPDATI34_MASK (0x00000100u)
#define TMR_GPDATGPDIR_GPDATI34_SHIFT (0x00000008u)
#define TMR_GPDATGPDIR_GPDATI34_RESETVAL (0x00000000u)
/*----GPDATI34 Tokens----*/
#define TMR_GPDATGPDIR_GPDATI34_CLR  (0x00000000u)
#define TMR_GPDATGPDIR_GPDATI34_SET  (0x00000001u)


#define TMR_GPDATGPDIR_GPDATO12_MASK (0x00000002u)
#define TMR_GPDATGPDIR_GPDATO12_SHIFT (0x00000001u)
#define TMR_GPDATGPDIR_GPDATO12_RESETVAL (0x00000000u)
/*----GPDATO12 Tokens----*/
#define TMR_GPDATGPDIR_GPDATO12_CLR  (0x00000000u)
#define TMR_GPDATGPDIR_GPDATO12_SET  (0x00000001u)

#define TMR_GPDATGPDIR_GPDATI12_MASK (0x00000001u)
#define TMR_GPDATGPDIR_GPDATI12_SHIFT (0x00000000u)
#define TMR_GPDATGPDIR_GPDATI12_RESETVAL (0x00000000u)
/*----GPDATI12 Tokens----*/
#define TMR_GPDATGPDIR_GPDATI12_CLR  (0x00000000u)
#define TMR_GPDATGPDIR_GPDATI12_SET  (0x00000001u)

#define TMR_GPDATGPDIR_RESETVAL      (0x00000000u)

/* TIM12 */

#define TMR_TIM12_TIM12_MASK         (0xFFFFFFFFu)
#define TMR_TIM12_TIM12_SHIFT        (0x00000000u)
#define TMR_TIM12_TIM12_RESETVAL     (0x00000000u)

#define TMR_TIM12_RESETVAL           (0x00000000u)

/* TIM34 */

#define TMR_TIM34_TIM34_MASK         (0xFFFFFFFFu)
#define TMR_TIM34_TIM34_SHIFT        (0x00000000u)
#define TMR_TIM34_TIM34_RESETVAL     (0x00000000u)

#define TMR_TIM34_RESETVAL           (0x00000000u)

/* PRD12 */

#define TMR_PRD12_PRD12_MASK         (0xFFFFFFFFu)
#define TMR_PRD12_PRD12_SHIFT        (0x00000000u)
#define TMR_PRD12_PRD12_RESETVAL     (0x00000000u)

#define TMR_PRD12_RESETVAL           (0x00000000u)

/* PRD34 */

#define TMR_PRD34_PRD34_MASK         (0xFFFFFFFFu)
#define TMR_PRD34_PRD34_SHIFT        (0x00000000u)
#define TMR_PRD34_PRD34_RESETVAL     (0x00000000u)

#define TMR_PRD34_RESETVAL           (0x00000000u)

/* TCR */


#define TMR_TCR_CAPEVTMODE34_MASK    (0x30000000u)
#define TMR_TCR_CAPEVTMODE34_SHIFT   (0x0000001Cu)
#define TMR_TCR_CAPEVTMODE34_RESETVAL (0x00000000u)
/*----CAPEVTMODE34 Tokens----*/
#define TMR_TCR_CAPEVTMODE34_RISE    (0x00000000u)
#define TMR_TCR_CAPEVTMODE34_FALL    (0x00000001u)
#define TMR_TCR_CAPEVTMODE34_BOTH    (0x00000002u)

#define TMR_TCR_CAPMODE34_MASK       (0x08000000u)
#define TMR_TCR_CAPMODE34_SHIFT      (0x0000001Bu)
#define TMR_TCR_CAPMODE34_RESETVAL   (0x00000000u)
/*----CAPMODE34 Tokens----*/
#define TMR_TCR_CAPMODE34_DISABLE    (0x00000000u)
#define TMR_TCR_CAPMODE34_ENABLE     (0x00000001u)

#define TMR_TCR_READRSTMODE34_MASK   (0x04000000u)
#define TMR_TCR_READRSTMODE34_SHIFT  (0x0000001Au)
#define TMR_TCR_READRSTMODE34_RESETVAL (0x00000000u)
/*----READRSTMODE34 Tokens----*/
#define TMR_TCR_READRSTMODE34_CONTINUE (0x00000000u)
#define TMR_TCR_READRSTMODE34_RESET  (0x00000001u)

#define TMR_TCR_TIEN34_MASK          (0x02000000u)
#define TMR_TCR_TIEN34_SHIFT         (0x00000019u)
#define TMR_TCR_TIEN34_RESETVAL      (0x00000000u)
/*----TIEN34 Tokens----*/
#define TMR_TCR_TIEN34_NOTGATED      (0x00000000u)
#define TMR_TCR_TIEN34_GATED         (0x00000001u)

#define TMR_TCR_CLKSRC34_MASK        (0x01000000u)
#define TMR_TCR_CLKSRC34_SHIFT       (0x00000018u)
#define TMR_TCR_CLKSRC34_RESETVAL    (0x00000000u)
/*----CLKSRC34 Tokens----*/
#define TMR_TCR_CLKSRC34_INTERNAL    (0x00000000u)
#define TMR_TCR_CLKSRC34_TIMER       (0x00000001u)

#define TMR_TCR_ENAMODE34_MASK       (0x00C00000u)
#define TMR_TCR_ENAMODE34_SHIFT      (0x00000016u)
#define TMR_TCR_ENAMODE34_RESETVAL   (0x00000000u)
/*----ENAMODE34 Tokens----*/
#define TMR_TCR_ENAMODE34_DISABLE    (0x00000000u)
#define TMR_TCR_ENAMODE34_EN_ONCE    (0x00000001u)
#define TMR_TCR_ENAMODE34_EN_CONT    (0x00000002u)
#define TMR_TCR_ENAMODE34_EN_CONTRELOAD (0x00000003u)

#define TMR_TCR_PWID34_MASK          (0x00300000u)
#define TMR_TCR_PWID34_SHIFT         (0x00000014u)
#define TMR_TCR_PWID34_RESETVAL      (0x00000000u)
/*----PWID34 Tokens----*/
#define TMR_TCR_PWID34_ONE_CLK       (0x00000000u)
#define TMR_TCR_PWID34_TWO_CLK       (0x00000001u)
#define TMR_TCR_PWID34_THREE_CLK     (0x00000002u)
#define TMR_TCR_PWID34_FOUR_CLK      (0x00000003u)

#define TMR_TCR_CP34_MASK            (0x00080000u)
#define TMR_TCR_CP34_SHIFT           (0x00000013u)
#define TMR_TCR_CP34_RESETVAL        (0x00000000u)
/*----CP34 Tokens----*/
#define TMR_TCR_CP34_PULSE           (0x00000000u)
#define TMR_TCR_CP34_CLOCK           (0x00000001u)

#define TMR_TCR_INVINP34_MASK        (0x00040000u)
#define TMR_TCR_INVINP34_SHIFT       (0x00000012u)
#define TMR_TCR_INVINP34_RESETVAL    (0x00000000u)
/*----INVINP34 Tokens----*/
#define TMR_TCR_INVINP34_NON_INVERTED (0x00000000u)
#define TMR_TCR_INVINP34_INVERTED    (0x00000001u)

#define TMR_TCR_INVOUTP34_MASK       (0x00020000u)
#define TMR_TCR_INVOUTP34_SHIFT      (0x00000011u)
#define TMR_TCR_INVOUTP34_RESETVAL   (0x00000000u)
/*----INVOUTP34 Tokens----*/
#define TMR_TCR_INVOUTP34_NON_INVERTED (0x00000000u)
#define TMR_TCR_INVOUTP34_INVERTED   (0x00000001u)

#define TMR_TCR_TSTAT34_MASK         (0x00010000u)
#define TMR_TCR_TSTAT34_SHIFT        (0x00000010u)
#define TMR_TCR_TSTAT34_RESETVAL     (0x00000000u)
/*----TSTAT34 Tokens----*/
#define TMR_TCR_TSTAT34_LOW          (0x00000000u)
#define TMR_TCR_TSTAT34_HIGH         (0x00000001u)


#define TMR_TCR_CAPEVTMODE12_MASK    (0x00003000u)
#define TMR_TCR_CAPEVTMODE12_SHIFT   (0x0000000Cu)
#define TMR_TCR_CAPEVTMODE12_RESETVAL (0x00000000u)
/*----CAPEVTMODE12 Tokens----*/
#define TMR_TCR_CAPEVTMODE12_RISE    (0x00000000u)
#define TMR_TCR_CAPEVTMODE12_FALL    (0x00000001u)
#define TMR_TCR_CAPEVTMODE12_BOTH    (0x00000002u)

#define TMR_TCR_CAPMODE12_MASK       (0x00000800u)
#define TMR_TCR_CAPMODE12_SHIFT      (0x0000000Bu)
#define TMR_TCR_CAPMODE12_RESETVAL   (0x00000000u)
/*----CAPMODE12 Tokens----*/
#define TMR_TCR_CAPMODE12_DISABLE    (0x00000000u)
#define TMR_TCR_CAPMODE12_ENABLE     (0x00000001u)

#define TMR_TCR_READRSTMODE12_MASK   (0x00000400u)
#define TMR_TCR_READRSTMODE12_SHIFT  (0x0000000Au)
#define TMR_TCR_READRSTMODE12_RESETVAL (0x00000000u)
/*----READRSTMODE12 Tokens----*/
#define TMR_TCR_READRSTMODE12_CONTINUE (0x00000000u)
#define TMR_TCR_READRSTMODE12_RESET  (0x00000001u)

#define TMR_TCR_TIEN12_MASK          (0x00000200u)
#define TMR_TCR_TIEN12_SHIFT         (0x00000009u)
#define TMR_TCR_TIEN12_RESETVAL      (0x00000000u)
/*----TIEN12 Tokens----*/
#define TMR_TCR_TIEN12_NOTGATED      (0x00000000u)
#define TMR_TCR_TIEN12_GATED         (0x00000001u)

#define TMR_TCR_CLKSRC12_MASK        (0x00000100u)
#define TMR_TCR_CLKSRC12_SHIFT       (0x00000008u)
#define TMR_TCR_CLKSRC12_RESETVAL    (0x00000000u)
/*----CLKSRC12 Tokens----*/
#define TMR_TCR_CLKSRC12_INTERNAL    (0x00000000u)
#define TMR_TCR_CLKSRC12_TIMER       (0x00000001u)

#define TMR_TCR_ENAMODE12_MASK       (0x000000C0u)
#define TMR_TCR_ENAMODE12_SHIFT      (0x00000006u)
#define TMR_TCR_ENAMODE12_RESETVAL   (0x00000000u)
/*----ENAMODE12 Tokens----*/
#define TMR_TCR_ENAMODE12_DISABLE    (0x00000000u)
#define TMR_TCR_ENAMODE12_EN_ONCE    (0x00000001u)
#define TMR_TCR_ENAMODE12_EN_CONT    (0x00000002u)
#define TMR_TCR_ENAMODE12_EN_CONTRELOAD (0x00000003u)

#define TMR_TCR_PWID12_MASK          (0x00000030u)
#define TMR_TCR_PWID12_SHIFT         (0x00000004u)
#define TMR_TCR_PWID12_RESETVAL      (0x00000000u)
/*----PWID12 Tokens----*/
#define TMR_TCR_PWID12_ONE_CLK       (0x00000000u)
#define TMR_TCR_PWID12_TWO_CLK       (0x00000001u)
#define TMR_TCR_PWID12_THREE_CLK     (0x00000002u)
#define TMR_TCR_PWID12_FOUR_CLK      (0x00000003u)

#define TMR_TCR_CP12_MASK            (0x00000008u)
#define TMR_TCR_CP12_SHIFT           (0x00000003u)
#define TMR_TCR_CP12_RESETVAL        (0x00000000u)
/*----CP12 Tokens----*/
#define TMR_TCR_CP12_PULSE           (0x00000000u)
#define TMR_TCR_CP12_CLOCK           (0x00000001u)

#define TMR_TCR_INVINP12_MASK        (0x00000004u)
#define TMR_TCR_INVINP12_SHIFT       (0x00000002u)
#define TMR_TCR_INVINP12_RESETVAL    (0x00000000u)
/*----INVINP12 Tokens----*/
#define TMR_TCR_INVINP12_NON_INVERTED (0x00000000u)
#define TMR_TCR_INVINP12_INVERTED    (0x00000001u)

#define TMR_TCR_INVOUTP12_MASK       (0x00000002u)
#define TMR_TCR_INVOUTP12_SHIFT      (0x00000001u)
#define TMR_TCR_INVOUTP12_RESETVAL   (0x00000000u)
/*----INVOUTP12 Tokens----*/
#define TMR_TCR_INVOUTP12_NON_INVERTED (0x00000000u)
#define TMR_TCR_INVOUTP12_INVERTED   (0x00000001u)

#define TMR_TCR_TSTAT12_MASK         (0x00000001u)
#define TMR_TCR_TSTAT12_SHIFT        (0x00000000u)
#define TMR_TCR_TSTAT12_RESETVAL     (0x00000000u)
/*----TSTAT12 Tokens----*/
#define TMR_TCR_TSTAT12_LOW          (0x00000000u)
#define TMR_TCR_TSTAT12_HIGH         (0x00000001u)

#define TMR_TCR_RESETVAL             (0x00000000u)

/* TGCR */


#define TMR_TGCR_TDDR34_MASK         (0x0000F000u)
#define TMR_TGCR_TDDR34_SHIFT        (0x0000000Cu)
#define TMR_TGCR_TDDR34_RESETVAL     (0x00000000u)

#define TMR_TGCR_PSC34_MASK          (0x00000F00u)
#define TMR_TGCR_PSC34_SHIFT         (0x00000008u)
#define TMR_TGCR_PSC34_RESETVAL      (0x00000000u)


#define TMR_TGCR_PLUSEN_MASK         (0x00000010u)
#define TMR_TGCR_PLUSEN_SHIFT        (0x00000004u)
#define TMR_TGCR_PLUSEN_RESETVAL     (0x00000000u)
/*----PLUSEN Tokens----*/
#define TMR_TGCR_PLUSEN_DISABLE      (0x00000000u)
#define TMR_TGCR_PLUSEN_ENABLE       (0x00000001u)

#define TMR_TGCR_TIMMODE_MASK        (0x0000000Cu)
#define TMR_TGCR_TIMMODE_SHIFT       (0x00000002u)
#define TMR_TGCR_TIMMODE_RESETVAL    (0x00000000u)
/*----TIMMODE Tokens----*/
#define TMR_TGCR_TIMMODE_64BIT_GPT   (0x00000000u)
#define TMR_TGCR_TIMMODE_32BIT_UNCHAIN (0x00000001u)
#define TMR_TGCR_TIMMODE_64BIT_WDT   (0x00000002u)
#define TMR_TGCR_TIMMODE_32_CHAIN    (0x00000003u)

#define TMR_TGCR_TIM34RS_MASK        (0x00000002u)
#define TMR_TGCR_TIM34RS_SHIFT       (0x00000001u)
#define TMR_TGCR_TIM34RS_RESETVAL    (0x00000000u)
/*----TIM34RS Tokens----*/
#define TMR_TGCR_TIM34RS_RESET       (0x00000000u)
#define TMR_TGCR_TIM34RS_NO_RESET    (0x00000001u)

#define TMR_TGCR_TIM12RS_MASK        (0x00000001u)
#define TMR_TGCR_TIM12RS_SHIFT       (0x00000000u)
#define TMR_TGCR_TIM12RS_RESETVAL    (0x00000000u)
/*----TIM12RS Tokens----*/
#define TMR_TGCR_TIM12RS_RESET       (0x00000000u)
#define TMR_TGCR_TIM12RS_NO_RESET    (0x00000001u)

#define TMR_TGCR_RESETVAL            (0x00000000u)

/* WDTCR */

#define TMR_WDTCR_WDKEY_MASK         (0xFFFF0000u)
#define TMR_WDTCR_WDKEY_SHIFT        (0x00000010u)
#define TMR_WDTCR_WDKEY_RESETVAL     (0x00000000u)
/*----WDKEY Tokens----*/
#define TMR_WDTCR_WDKEY_CMD1         (0x0000A5C6u)
#define TMR_WDTCR_WDKEY_CMD2         (0x0000DA7Eu)

#define TMR_WDTCR_WDFLAG_MASK        (0x00008000u)
#define TMR_WDTCR_WDFLAG_SHIFT       (0x0000000Fu)
#define TMR_WDTCR_WDFLAG_RESETVAL    (0x00000000u)
/*----WDFLAG Tokens----*/
#define TMR_WDTCR_WDFLAG_NO_TIMEOUT  (0x00000000u)
#define TMR_WDTCR_WDFLAG_TIMEOUT     (0x00000001u)

#define TMR_WDTCR_WDEN_MASK          (0x00004000u)
#define TMR_WDTCR_WDEN_SHIFT         (0x0000000Eu)
#define TMR_WDTCR_WDEN_RESETVAL      (0x00000000u)
/*----WDEN Tokens----*/
#define TMR_WDTCR_WDEN_DISABLE       (0x00000000u)
#define TMR_WDTCR_WDEN_ENABLE        (0x00000001u)



#define TMR_WDTCR_RESETVAL           (0x00000000u)

/* REL12 */

#define TMR_REL12_REL12_MASK         (0xFFFFFFFFu)
#define TMR_REL12_REL12_SHIFT        (0x00000000u)
#define TMR_REL12_REL12_RESETVAL     (0x00000000u)

#define TMR_REL12_RESETVAL           (0x00000000u)

/* REL34 */

#define TMR_REL34_REL34_MASK         (0xFFFFFFFFu)
#define TMR_REL34_REL34_SHIFT        (0x00000000u)
#define TMR_REL34_REL34_RESETVAL     (0x00000000u)

#define TMR_REL34_RESETVAL           (0x00000000u)

/* CAP12 */

#define TMR_CAP12_CAP12_MASK         (0xFFFFFFFFu)
#define TMR_CAP12_CAP12_SHIFT        (0x00000000u)
#define TMR_CAP12_CAP12_RESETVAL     (0x00000000u)

#define TMR_CAP12_RESETVAL           (0x00000000u)

/* CAP34 */

#define TMR_CAP34_CAP34_MASK         (0xFFFFFFFFu)
#define TMR_CAP34_CAP34_SHIFT        (0x00000000u)
#define TMR_CAP34_CAP34_RESETVAL     (0x00000000u)

#define TMR_CAP34_RESETVAL           (0x00000000u)

/* INTCTLSTAT */




#define TMR_INTCTLSTAT_EVTINTSTAT34_MASK (0x00080000u)
#define TMR_INTCTLSTAT_EVTINTSTAT34_SHIFT (0x00000013u)
#define TMR_INTCTLSTAT_EVTINTSTAT34_RESETVAL (0x00000000u)
/*----EVTINTSTAT34 Tokens----*/
#define TMR_INTCTLSTAT_EVTINTSTAT34_NOPEND (0x00000000u)
#define TMR_INTCTLSTAT_EVTINTSTAT34_PEND (0x00000001u)

#define TMR_INTCTLSTAT_EVTINTEN34_MASK (0x00040000u)
#define TMR_INTCTLSTAT_EVTINTEN34_SHIFT (0x00000012u)
#define TMR_INTCTLSTAT_EVTINTEN34_RESETVAL (0x00000000u)
/*----EVTINTEN34 Tokens----*/
#define TMR_INTCTLSTAT_EVTINTEN34_DISABLE (0x00000000u)
#define TMR_INTCTLSTAT_EVTINTEN34_ENABLE (0x00000001u)

#define TMR_INTCTLSTAT_PRDINTSTAT34_MASK (0x00020000u)
#define TMR_INTCTLSTAT_PRDINTSTAT34_SHIFT (0x00000011u)
#define TMR_INTCTLSTAT_PRDINTSTAT34_RESETVAL (0x00000000u)
/*----PRDINTSTAT34 Tokens----*/
#define TMR_INTCTLSTAT_PRDINTSTAT34_NOPEND (0x00000000u)
#define TMR_INTCTLSTAT_PRDINTSTAT34_PEND (0x00000001u)

#define TMR_INTCTLSTAT_PRDINTEN34_MASK (0x00010000u)
#define TMR_INTCTLSTAT_PRDINTEN34_SHIFT (0x00000010u)
#define TMR_INTCTLSTAT_PRDINTEN34_RESETVAL (0x00000000u)
/*----PRDINTEN34 Tokens----*/
#define TMR_INTCTLSTAT_PRDINTEN34_DISABLE (0x00000000u)
#define TMR_INTCTLSTAT_PRDINTEN34_ENABLE (0x00000001u)




#define TMR_INTCTLSTAT_EVTINTSTAT12_MASK (0x00000008u)
#define TMR_INTCTLSTAT_EVTINTSTAT12_SHIFT (0x00000003u)
#define TMR_INTCTLSTAT_EVTINTSTAT12_RESETVAL (0x00000000u)
/*----EVTINTSTAT12 Tokens----*/
#define TMR_INTCTLSTAT_EVTINTSTAT12_NOPEND (0x00000000u)
#define TMR_INTCTLSTAT_EVTINTSTAT12_PEND (0x00000001u)

#define TMR_INTCTLSTAT_EVTINTEN12_MASK (0x00000004u)
#define TMR_INTCTLSTAT_EVTINTEN12_SHIFT (0x00000002u)
#define TMR_INTCTLSTAT_EVTINTEN12_RESETVAL (0x00000000u)
/*----EVTINTEN12 Tokens----*/
#define TMR_INTCTLSTAT_EVTINTEN12_DISABLE (0x00000000u)
#define TMR_INTCTLSTAT_EVTINTEN12_ENABLE (0x00000001u)

#define TMR_INTCTLSTAT_PRDINTSTAT12_MASK (0x00000002u)
#define TMR_INTCTLSTAT_PRDINTSTAT12_SHIFT (0x00000001u)
#define TMR_INTCTLSTAT_PRDINTSTAT12_RESETVAL (0x00000000u)
/*----PRDINTSTAT12 Tokens----*/
#define TMR_INTCTLSTAT_PRDINTSTAT12_NOPEND (0x00000000u)
#define TMR_INTCTLSTAT_PRDINTSTAT12_PEND (0x00000001u)

#define TMR_INTCTLSTAT_PRDINTEN12_MASK (0x00000001u)
#define TMR_INTCTLSTAT_PRDINTEN12_SHIFT (0x00000000u)
#define TMR_INTCTLSTAT_PRDINTEN12_RESETVAL (0x00000000u)
/*----PRDINTEN12 Tokens----*/
#define TMR_INTCTLSTAT_PRDINTEN12_DISABLE (0x00000000u)
#define TMR_INTCTLSTAT_PRDINTEN12_ENABLE (0x00000001u)

#define TMR_INTCTLSTAT_RESETVAL      (0x00000000u)

/* CMP0 */

#define TMR_CMP0_CMP0_MASK           (0xFFFFFFFFu)
#define TMR_CMP0_CMP0_SHIFT          (0x00000000u)
#define TMR_CMP0_CMP0_RESETVAL       (0xFFFFFFFFu)

#define TMR_CMP0_RESETVAL            (0x00000000u)

/* CMP1 */

#define TMR_CMP1_CMP1_MASK           (0xFFFFFFFFu)
#define TMR_CMP1_CMP1_SHIFT          (0x00000000u)
#define TMR_CMP1_CMP1_RESETVAL       (0xFFFFFFFFu)

#define TMR_CMP1_RESETVAL            (0x00000000u)

/* CMP2 */

#define TMR_CMP2_CMP2_MASK           (0xFFFFFFFFu)
#define TMR_CMP2_CMP2_SHIFT          (0x00000000u)
#define TMR_CMP2_CMP2_RESETVAL       (0xFFFFFFFFu)

#define TMR_CMP2_RESETVAL            (0x00000000u)

/* CMP3 */

#define TMR_CMP3_CMP3_MASK           (0xFFFFFFFFu)
#define TMR_CMP3_CMP3_SHIFT          (0x00000000u)
#define TMR_CMP3_CMP3_RESETVAL       (0xFFFFFFFFu)

#define TMR_CMP3_RESETVAL            (0x00000000u)

/* CMP4 */

#define TMR_CMP4_CMP4_MASK           (0xFFFFFFFFu)
#define TMR_CMP4_CMP4_SHIFT          (0x00000000u)
#define TMR_CMP4_CMP4_RESETVAL       (0xFFFFFFFFu)

#define TMR_CMP4_RESETVAL            (0x00000000u)

/* CMP5 */

#define TMR_CMP5_CMP5_MASK           (0xFFFFFFFFu)
#define TMR_CMP5_CMP5_SHIFT          (0x00000000u)
#define TMR_CMP5_CMP5_RESETVAL       (0xFFFFFFFFu)

#define TMR_CMP5_RESETVAL            (0x00000000u)

/* CMP6 */

#define TMR_CMP6_CMP6_MASK           (0xFFFFFFFFu)
#define TMR_CMP6_CMP6_SHIFT          (0x00000000u)
#define TMR_CMP6_CMP6_RESETVAL       (0xFFFFFFFFu)

#define TMR_CMP6_RESETVAL            (0x00000000u)

/* CMP7 */

#define TMR_CMP7_CMP7_MASK           (0xFFFFFFFFu)
#define TMR_CMP7_CMP7_SHIFT          (0x00000000u)
#define TMR_CMP7_CMP7_RESETVAL       (0xFFFFFFFFu)

#define TMR_CMP7_RESETVAL            (0x00000000u)

/*
** Values that can be passed to Timer APIs as timer
*/
#define TMR_TIMER12                        (0x00003FFEu) /* Timer12 */
#define TMR_TIMER34                        (0x3FFE0000u) /* Timer34 */
#define TMR_TIMER_BOTH                     (0x3FFE3FFEu) /* Both Timers */
/*****************************************************************************/
/*
** Values that can be passed to TimerEnable API as enaMode to select the mode
*/
/* Enable the Timer for once */
#define TMR_ENABLE_ONCE                    (0x00400040u)

/* Enable the Timer for continuous operation without period reload */
#define TMR_ENABLE_CONT                    (0x00800080u)

/* Enable the Timer for continuous operation with period reload */
#define TMR_ENABLE_CONTRELOAD              (0x00C000C0u)

/*****************************************************************************/
/*
** Values that can be passed to TimerConfigure API as config
*/
/* 64 Bit mode with internal clock source */
#define TMR_CFG_64BIT_CLK_INT              (0x00000013u)

/* 64 Bit mode with external clock source */
#define TMR_CFG_64BIT_CLK_EXT              (0x01000113u)

/* 64 Bit Watchdog timer mode */
#define TMR_CFG_64BIT_WATCHDOG             (0x0000001Bu)

/* 32 Bit chained mode with internal clock source */
#define TMR_CFG_32BIT_CH_CLK_INT           (0x0000001Fu)

/* 32 Bit chained mode with external clock source */
#define TMR_CFG_32BIT_CH_CLK_EXT           (0x0100011Fu)

/* 32 Bit unchained mode with internal clock source for both timers */
#define TMR_CFG_32BIT_UNCH_CLK_BOTH_INT    (0x00000017u)

/* 32 Bit unchained mode; clock Internal for Timer12; external for Timer34 */
#define TMR_CFG_32BIT_UNCH_CLK_12INT_34EXT (0x01000017u)

/* 32 Bit unchained mode; clock external for Timer12; internal for Timer34 */
#define TMR_CFG_32BIT_UNCH_CLK_12EXT_34INT (0x00000117u)

/* 32 Bit unchained mode with external clock source for both timers */
#define TMR_CFG_32BIT_UNCH_CLK_BOTH_EXT    (0x01000117u)
/*****************************************************************************/
/*
** Values that can be passed to TimerIntEnable/IntDisable APIs as intFlag
** Any combination is also allowed.
** Example- (TMR_INTCTLSTAT_PRDINTEN12 | TMR_INTCTLSTAT_EVTINTEN34)
*/
/* To enable/disable the interrupt for Timer12 in Capture mode */
#define TMR_INT_TMR12_CAPT_MODE            (TMR_INTCTLSTAT_EVTINTEN12)

/* To enable/disable the interrupt for Timer12 in in 64 Bit/32 Bit/WDT mode */
#define TMR_INT_TMR12_NON_CAPT_MODE        (TMR_INTCTLSTAT_PRDINTEN12)

/* To enable/disable the interrupt for Timer34 in Capture mode */
#define TMR_INT_TMR34_CAPT_MODE            (TMR_INTCTLSTAT_EVTINTEN34)

/* To enable/disable the interrupt for Timer34 in 64 Bit/32 Bit/WDT mode */
#define TMR_INT_TMR34_NON_CAPT_MODE        (TMR_INTCTLSTAT_PRDINTEN34)

/*****************************************************************************/
/*
** Values that can be passed to TimerIntStatusGet/Clear as statFlag
** Any combination is also allowed.
*/
/* Interrupt Generated when Timer 12 in 64 Bit/32 Bit/WDT mode */
#define TMR_INTSTAT12_TIMER_NON_CAPT       (TMR_INTCTLSTAT_PRDINTSTAT12)

/* Interrupt Generated when Timer 12 in capture mode */
#define TMR_INTSTAT12_TIMER_CAPT           (TMR_INTCTLSTAT_EVTINTSTAT12)

/* Interrupt Generated when Timer 34 in 64 Bit/32 Bit/WDT mode */
#define TMR_INTSTAT34_TIMER_NON_CAPT       (TMR_INTCTLSTAT_PRDINTSTAT34)

/* Interrupt Generated when Timer 34 in capture mode */
#define TMR_INTSTAT34_TIMER_CAPT           (TMR_INTCTLSTAT_EVTINTSTAT12)

/*****************************************************************************/
/*
** Values that can be passed to TimerCaptureConfig as cfgCap
*/
/* Disable Capture Mode */
#define TMR_CAPT_DISABLE                   (0x00000000)

/* Enable Capture Mode. Event Occurs in rising edge */
#define TMR_CAPT_ENABLE_RIS_EDGE           (0x08000800)

/* Enable Capture Mode. Event Occurs in falling edge */
#define TMR_CAPT_ENABLE_FALL_EDGE          (0x18001800)

/* Enable Capture Mode. Event Occurs in both edges */
#define TMR_CAPT_ENABLE_BOTH_EDGE          (0x28002800)

/*****************************************************************************/
/*
** Values that can be passed to TimerPulseWidthSet as pulseWidth
*/
#define TMR_PULSE_WIDTH_1_CLK              (0x00000000) /* 1 clock cycle */
#define TMR_PULSE_WIDTH_2_CLK              (0x00100010) /* 2 clock cycles */
#define TMR_PULSE_WIDTH_3_CLK              (0x00200020) /* 3 clock cycles */
#define TMR_PULSE_WIDTH_4_CLK              (0x00300030) /* 4 clock cycles */

/*****************************************************************************/
/*
** Values returned by TimerOUTStatusGet API
*/
#define TMR_OUT12_ASSERTED                 (TMR_TCR_TSTAT12) /* TMR64P_OUT12 */
#define TMR_OUT34_ASSERTED                 (TMR_TCR_TSTAT34) /* TMR64P_OUT34 */

/*
** Prototypes for the APIs
*/
extern Uint32 TimerCompareGet(Uint32 module,Uint32 regIndex);
extern Uint32 TimerOUTStatusGet(Uint32 module,Uint32 timer);
extern Uint32 TimerIntStatusGet(Uint32 module,Uint32 statFlag);
extern Uint32 TimerIntStatusClear(Uint32 module,Uint32 statFlag);
extern Uint32 TimerCaptureGet(Uint32 module,Uint32 timer);
extern Uint32 TimerCounterGet(Uint32 module,Uint32 timer);
extern Uint32 TimerPeriodGet(Uint32 module,Uint32 timer);
extern Uint32 TimerReloadGet(Uint32 module,Uint32 timer);
extern Uint32 TimerPreScalarCount34Get(Uint32 module);
extern Uint32 TimerDivDwnRatio34Get(Uint32 module);

extern void TimerCounterSet(Uint32 module,Uint32 timer,Uint32 counter);
extern void TimerPeriodSet(Uint32 module,Uint32 timer,Uint32 period);
extern void TimerReloadSet(Uint32 module,Uint32 timer,Uint32 reload);
extern void TimerEnable(Uint32 module,Uint32 timer,Uint32 enaMode);
extern void TimerPreScalarCount34Set(Uint32 module,Uint32 psc34);
extern void TimerDivDwnRatio34Set(Uint32 module,Uint32 tddr34);
extern void TimerInvertOUTDisable(Uint32 module,Uint32 timer);
extern void TimerReadResetDisable(Uint32 module,Uint32 timer);
extern void TimerInputGateDisable(Uint32 module,Uint32 timer);
extern void TimerReadResetEnable(Uint32 module,Uint32 timer);
extern void TimerInvertINDisable(Uint32 module,Uint32 timer);
extern void TimerInvertOUTEnable(Uint32 module,Uint32 timer);
extern void TimerInputGateEnable(Uint32 module,Uint32 timer);
extern void TimerInvertINEnable(Uint32 module,Uint32 timer);
extern void TimerIntDisable(Uint32 module,Uint32 intFlags);
extern void TimerClockModeSet(Uint32 module,Uint32 timer);
extern void TimerPulseModeSet(Uint32 module,Uint32 timer);
extern void TimerIntEnable(Uint32 module,Uint32 intFlags);
extern void TimerConfigure(Uint32 module,Uint32 config);
extern void TimerDisable(Uint32 module,Uint32 timer);
extern void TimerWatchdogReactivate(Uint32 module,Uint32 timer);
extern void TimerWatchdogActivate(Uint32 module,Uint32 timer);
extern void TimerCaptureConfigure(Uint32 module,Uint32 timer,Uint32 cfgCap);
extern void TimerCompareSet(Uint32 module,Uint32 regIndex,Uint32 compare);
extern void TimerPulseWidthSet(Uint32 module,Uint32 timer,Uint32 pulseWidth);

#endif
