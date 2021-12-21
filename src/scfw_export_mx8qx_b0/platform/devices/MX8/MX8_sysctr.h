/*
** ###################################################################
**     Processors:          MX8
**
**     Compilers:           GNU C Compiler
**
**     Abstract:
**         CMSIS Peripheral Access Layer for MX8
**
**     Copyright 2017-2021 NXP
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
#ifndef HW_SYSCTR_REGISTERS_H
#define HW_SYSCTR_REGISTERS_H

/* ----------------------------------------------------------------------------
   -- SYSCTR Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SYSCTR_Peripheral_Access_Layer SYSCTR Peripheral Access Layer
 * @{
 */

/** SYSCTR_CTRL - Register Layout Typedef */
typedef struct {
    __IO uint32_t CNTCR;                                /**< Counter Control Register, offset: 0x0 */
    __IO uint32_t CNTSR;                                /**< Counter Status Register, offset: 0x4 */
    __IO uint32_t CNTCVL;                               /**< Counter Count Value Low, offset: 0x8 */
    __IO uint32_t CNTCVH;                               /**< Counter Count Value High, offset: 0xC */
    uint32_t RESERVED_0[4];
    __IO uint32_t CNTFID0;                              /**< Frequency Mode Table, Base Frequency, offset: 0x20 */
    __IO uint32_t CNTFID1;                              /**< Frequency Mode Table, Alternate Frequency, offset: 0x24 */
    __IO uint32_t CNTFID2;                              /**< Frequency Mode Table, End Marker, offset: 0x28 */
} SYSCTR_CTRL_Type, *SYSCTR_CTRL_MemMapPtr;

/** SYSCTR_RD - Register Layout Typedef */
typedef struct {
    uint32_t RESERVED_0[2];
  __IO uint32_t CNTCVL;                                 /**< Counter Count Value Low, offset: 0x8 */
  __IO uint32_t CNTCVH;                                 /**< Counter Count Value High, offset: 0xC */
} SYSCTR_RD_Type, *SYSCTR_RD_MemMapPtr;

/** SYSCTR_CMP - Register Layout Typedef */
typedef struct {
    uint32_t RESERVED_0[8];
    __IO uint32_t CMPCVL;                               /**< Counter Compare Value Low, offset: 0x20 */
    __IO uint32_t CMPCVH;                               /**< Counter Compare Value Low, offset: 0x24 */
    uint32_t RESERVED_1[1];
    __IO uint32_t CMPCR;                               /**< Counter Compare Control Register, offset: 0x2C */
} SYSCTR_CMP_Type, *SYSCTR_CMP_MemMapPtr;

/* ----------------------------------------------------------------------------
   -- SYSCTR_CTRL Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SYSCTR_CTRL_Register_Masks SYSCTR_CTRL Register Masks
 * @{
 */

/* CNTCR Bit Fields */
#define SYSCTR_CTRL_CNTCR_EN_SHIFT                      0U
#define SYSCTR_CTRL_CNTCR_EN_WIDTH                      1U
#define SYSCTR_CTRL_CNTCR_EN_MASK                       (1UL << SYSCTR_CTRL_CNTCR_EN_SHIFT)
#define SYSCTR_CTRL_CNTCR_HDBG_SHIFT                    1U
#define SYSCTR_CTRL_CNTCR_HDBG_WIDTH                    1U
#define SYSCTR_CTRL_CNTCR_HDBG_MASK                     (1UL << SYSCTR_CTRL_CNTCR_HDBG_SHIFT)
#define SYSCTR_CTRL_CNTCR_FCR0_SHIFT                    8U
#define SYSCTR_CTRL_CNTCR_FCR0_WIDTH                    1U
#define SYSCTR_CTRL_CNTCR_FCR0_MASK                     (1UL << SYSCTR_CTRL_CNTCR_FCR0_SHIFT)
#define SYSCTR_CTRL_CNTCR_FCR1_SHIFT                    9U
#define SYSCTR_CTRL_CNTCR_FCR1_WIDTH                    1U
#define SYSCTR_CTRL_CNTCR_FCR1_MASK                     (1UL << SYSCTR_CTRL_CNTCR_FCR1_SHIFT)
/* CNTSR Bit Fields */
#define SYSCTR_CTRL_CNTSR_DBGH_SHIFT                    0U
#define SYSCTR_CTRL_CNTSR_DBGH_WIDTH                    1U
#define SYSCTR_CTRL_CNTSR_DBGH_MASK                     (1UL << SYSCTR_CTRL_CNTSR_DBGH_SHIFT)
#define SYSCTR_CTRL_CNTSR_FCA0_SHIFT                    8U
#define SYSCTR_CTRL_CNTSR_FCA0_WIDTH                    1U
#define SYSCTR_CTRL_CNTSR_FCA0_MASK                     (1UL << SYSCTR_CTRL_CNTSR_FCA0_SHIFT)
#define SYSCTR_CTRL_CNTSR_FCA1_SHIFT                    9U
#define SYSCTR_CTRL_CNTSR_FCA1_WIDTH                    1U
#define SYSCTR_CTRL_CNTSR_FCA1_MASK                     (1UL << SYSCTR_CTRL_CNTSR_FCA1_SHIFT)
/* CNTCVL Bit Fields */
#define SYSCTR_CTRL_CNTCVL_CNTCV_SHIFT                  0U
#define SYSCTR_CTRL_CNTCVL_CNTCV_WIDTH                  32U
/* CNTCVH Bit Fields */
#define SYSCTR_CTRL_CNTCVH_CNTCV_SHIFT                  0U
#define SYSCTR_CTRL_CNTCVH_CNTCV_WIDTH                  24U
/* CNTFID0 Bit Fields */
#define SYSCTR_CTRL_CNTFID0_CNTFID_SHIFT                0U
#define SYSCTR_CTRL_CNTFID0_CNTFID_WIDTH                32U
/* CNTFID1 Bit Fields */
#define SYSCTR_CTRL_CNTFID1_CNTFID_SHIFT                0U
#define SYSCTR_CTRL_CNTFID1_CNTFID_WIDTH                32U
/* CNTFID1 Bit Fields */
#define SYSCTR_CTRL_CNTFID2_CNTFID_SHIFT                0U
#define SYSCTR_CTRL_CNTFID2_CNTFID_WIDTH                32U

/*!
 * @}
 */ /* end of group SYSCTR_CTRL_Register_Masks */

/*!
 * @addtogroup SYSCTR_RD_Register_Masks SYSCTR_RD Register Masks
 * @{
 */

/* CNTCVL Bit Fields */
#define SYSCTR_RD_CNTCVL_CNTCV_SHIFT                    0U
#define SYSCTR_RD_CNTCVL_CNTCV_WIDTH                    32U
/* CNTCVH Bit Fields */
#define SYSCTR_RD_CNTCVH_CNTCV_SHIFT                    0U
#define SYSCTR_RD_CNTCVH_CNTCV_WIDTH                    24U

/*!
 * @}
 */ /* end of group SYSCTR_RD_Register_Masks */

/*!
 * @addtogroup SYSCTR_CMP_Register_Masks SYSCTR_CMP Register Masks
 * @{
 */

/* CMPCVL Bit Fields */
#define SYSCTR_CMP_CMPCVL_CMPCV_SHIFT                   0U
#define SYSCTR_CMP_CMPCVL_CMPCV_WIDTH                   32U
/* CMPCVH Bit Fields */
#define SYSCTR_CMP_CMPCVH_CMPCV_SHIFT                   0U
#define SYSCTR_CMP_CMPCVH_CMPCV_WIDTH                   24U
/* CMPCR Bit Fields */
#define SYSCTR_CMP_CMPCR_EN_SHIFT                       0U
#define SYSCTR_CMP_CMPCR_EN_WIDTH                       1U
#define SYSCTR_CMP_CMPCR_EN_MASK                        (1UL << SYSCTR_CMP_CMPCR_EN_SHIFT)
#define SYSCTR_CMP_CMPCR_IMASK_SHIFT                    1U
#define SYSCTR_CMP_CMPCR_IMASK_WIDTH                    1U
#define SYSCTR_CMP_CMPCR_IMASK_MASK                     (1UL << SYSCTR_CMP_CMPCR_IMASK_SHIFT)
#define SYSCTR_CMP_CMPCR_ISTAT_SHIFT                    2U
#define SYSCTR_CMP_CMPCR_ISTAT_WIDTH                    1U
#define SYSCTR_CMP_CMPCR_ISTAT_MASK                     (1UL << SYSCTR_CMP_CMPCR_ISTAT_SHIFT)

/*!
 * @}
 */ /* end of group SYSCTR_CMP_Register_Masks */


/* SYSCTR - Peripheral instance base addresses */
/** Peripheral SYSCTR base pointer */
#define SYSCTR_CTRL                                     ((SYSCTR_CTRL_Type *)SYSCTR_CTRL_BASE)
#define SYSCTR_CTRL_BASE_PTR                            (SYSCTR_CTRL_BASE)
#define SYSCTR_RD                                       ((SYSCTR_RD_Type *)SYSCTR_RD_BASE)
#define SYSCTR_RD_BASE_PTR                              (SYSCTR_RD_BASE)
#define SYSCTR_CMP                                      ((SYSCTR_CMP_Type *)SYSCTR_CMP_BASE)
#define SYSCTR_CMP_BASE_PTR                             (SYSCTR_CMP_BASE)
#define SYSCTR_CMP1                                      ((SYSCTR_CMP_Type *)SYSCTR_CMP1_BASE)
#define SYSCTR_CMP1_BASE_PTR                            (SYSCTR_CMP1_BASE)
/** Interrupt vectors for the SYSCTR peripheral type */
#define SYSCTR_IRQS                                     { SYSCTR_CMP0_IRQn, SYSCTR_CMP1_IRQn, SYSCTR_CMP2_IRQn, SYSCTR_CMP3_IRQn }


/* ----------------------------------------------------------------------------
   -- SYSCTR - Register accessor macros
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SYSCTR_Register_Accessor_Macros SYSCTR - Register accessor macros
 * @{
 */




/*!
 * @}
 */ /* end of group SYSCTR_Peripheral_Access_Layer */

#endif /* HW_SYSCTR_REGISTERS_H */

/* EOF */

