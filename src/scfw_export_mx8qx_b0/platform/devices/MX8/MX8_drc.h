/*
** ###################################################################
**     Processors:          MX8
**
**     Compilers:           GNU C Compiler
**
**     Abstract:
**         CMSIS Peripheral Access Layer for MX8
**
**     Copyright (c) 1997 - 2018 Freescale Semiconductor, Inc.
**
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**
**     o Neither the name of the copyright holder nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**
**
** ###################################################################
*/

/*
 * WARNING! DO NOT EDIT THIS FILE DIRECTLY!
 *
 * This file was generated automatically and any changes may be lost.
 */
#ifndef HW_DRC_REGISTERS_H
#define HW_DRC_REGISTERS_H

/* ----------------------------------------------------------------------------
   -- DRC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup DRC_Peripheral_Access_Layer DRC Peripheral Access Layer
 * @{
 */
typedef struct {
    uint32_t mstr;
    uint32_t derateen;
    uint32_t derateint;
    uint32_t rfshctl0;
    uint32_t rfshtmg;
    uint32_t init0;
    uint32_t init1;
    uint32_t init3;
    uint32_t init4;
    uint32_t init5;
    uint32_t init6;
    uint32_t init7;    
    uint32_t rankctl;
    uint32_t dramtmg0;
    uint32_t dramtmg1;
    uint32_t dramtmg2;
    uint32_t dramtmg3;
    uint32_t dramtmg4;
    uint32_t dramtmg5;
    uint32_t dramtmg6;
    uint32_t dramtmg7;
    uint32_t dramtmg8;
    uint32_t dramtmg9;
    uint32_t dramtmg11;
    uint32_t dramtmg12;
    uint32_t dramtmg13;
    uint32_t dramtmg14;
    uint32_t zqctl0;
    uint32_t zqctl1;
    uint32_t dfitmg0;
    uint32_t dfitmg1;
    uint32_t dfitmg2;
    uint32_t dfitmg3;
    uint32_t dfimisc;
    uint32_t dfiupd0;
    uint32_t dfiupd1;
    uint32_t dfiupd2;
    uint32_t addrmap0;
    uint32_t addrmap1;
    uint32_t addrmap3;
    uint32_t addrmap4;
    uint32_t addrmap5;
    uint32_t addrmap6;
    uint32_t addrmap7;
    uint32_t addrmap8;
    uint32_t ecccfg0;
    uint32_t dbictl;
    uint32_t odtcfg;
    uint32_t odtmap;
    uint32_t sched;
    uint32_t pctrl_0;
    uint32_t hwlpctl;
    uint32_t dfilpcfg0;
    uint32_t dfitmg0_shadow;
    uint32_t pwrctl;
    uint32_t pwrtmg;
    uint32_t gpr_qchan;
} ddrc;

typedef struct{
    uint32_t dx0gcr0;
    uint32_t dx1gcr0;
    uint32_t dx2gcr0;
    uint32_t dx3gcr0;
    uint32_t dx4gcr0;
    uint32_t dx0gcr1;
    uint32_t dx1gcr1;
    uint32_t dx2gcr1;
    uint32_t dx3gcr1;
    uint32_t dx4gcr1;
    uint32_t dx2gcr2;
    uint32_t dx3gcr2;
    uint32_t dx4gcr2;
    uint32_t dx2gcr3;
    uint32_t dx3gcr3;
    uint32_t dx4gcr3;
    uint32_t dcr;
    uint32_t pgcr8;
    uint32_t dx0dqmap0;
    uint32_t dx0dqmap1;
    uint32_t dx1dqmap0;
    uint32_t dx1dqmap1;
    uint32_t dx2dqmap0;
    uint32_t dx2dqmap1;
    uint32_t dx3dqmap0;
    uint32_t dx3dqmap1;
    uint32_t dx4dqmap0;
    uint32_t dx4dqmap1;
    uint32_t catr0;
    uint32_t catr1;
    uint32_t pgcr0;
    uint32_t pgcr1;
    uint32_t pgcr2;
    uint32_t pgcr3;
    uint32_t pgcr4;
    uint32_t pgcr5;
    uint32_t pgcr6;
    uint32_t ptr0;
    uint32_t ptr1;
    uint32_t pllcr0;
    uint32_t dxccr;
    uint32_t dx8sl0pllcr0;
    uint32_t dx8sl1pllcr0;
    uint32_t dx8sl2pllcr0;
    uint32_t zqcr;
    uint32_t zq0pr0;
    uint32_t zq1pr0;
    uint32_t zq0dr0;
    uint32_t zq0dr1;
    uint32_t zq1dr0;
    uint32_t zq1dr1;
    uint32_t mr0;
    uint32_t mr1;
    uint32_t mr2;
    uint32_t mr3;
    uint32_t mr4;
    uint32_t mr5;
    uint32_t mr6;
    uint32_t mr11;
    uint32_t mr13;
    uint32_t mr22;
    uint32_t mr12;
    uint32_t mr14;
    uint32_t dtpr0;
    uint32_t dtpr1;
    uint32_t dtpr2;
    uint32_t dtpr3;
    uint32_t dtpr4;
    uint32_t dtpr5;
    uint32_t ptr2;
    uint32_t ptr3;
    uint32_t ptr4;
    uint32_t ptr5;
    uint32_t ptr6;
    uint32_t rankidr;
    uint32_t odtcr;
    uint32_t aciocr0;
    uint32_t aciocr1;
    uint32_t aciocr2;
    uint32_t aciocr3;
    uint32_t aciocr5;
    uint32_t riocr2;
    uint32_t riocr5;
    uint32_t iovcr0;
    uint32_t vtcr0;
    uint32_t vtcr1;
    uint32_t dx0gcr5;
    uint32_t dx1gcr5;
    uint32_t dx2gcr5;
    uint32_t dx3gcr5;
    uint32_t dx4gcr5;
    uint32_t dx0gcr4;
    uint32_t dx1gcr4;
    uint32_t dx2gcr4;
    uint32_t dx3gcr4;
    uint32_t dx4gcr4;
    uint32_t dqsdr0;
    uint32_t dqsdr1;
    uint32_t dqsdr2;
    uint32_t bistar1;
    uint32_t bistar2;
    uint32_t bistar4;
    uint32_t dtcr0;
    uint32_t dtcr1;
    uint32_t dx8slbdxctl2;
    uint32_t dx8slbiocr;
    uint32_t aclcdlr;
    uint32_t acbdlr3;
    uint32_t acbdlr6;
    uint32_t acbdlr7;
    uint32_t acbdlr8;
    uint32_t acbdlr9;
} ddr_phy;

#define MR11_ADDR   0xB

/*!
 * @}
 */ /* end of group DRC_Peripheral_Access_Layer */

#endif /* HW_DRC_REGISTERS_H */

/* EOF */

