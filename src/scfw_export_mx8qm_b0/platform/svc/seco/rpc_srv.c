/*
** ###################################################################
**
**     Copyright (c) 2016 Freescale Semiconductor, Inc.
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

/*==========================================================================*/
/*!
 * @file
 *
 * File containing server-side RPC functions for the SECO service.
 *
 * @addtogroup SECO_SVC
 * @{
 */
/*==========================================================================*/

/* DO NOT EDIT - This file auto generated by bin/perl/rpc_srv_c.pl */

/* Includes */

#include "main/scfw.h"
#include "main/types.h"
#include "main/main.h"
#include "main/rpc.h"
#include "svc/seco/svc.h"
#include "svc/seco/rpc.h"

/* Local Defines */

/* Local Types */

/*--------------------------------------------------------------------------*/
/* Dispatch incoming RPC function call                                      */
/*--------------------------------------------------------------------------*/
void seco_dispatch(sc_rm_pt_t caller_pt, sc_rsrc_t mu, sc_rpc_msg_t *msg)
{
    uint8_t func = RPC_FUNC(msg);
    sc_err_t err = SC_ERR_NONE;

    switch (func)
    {
        /* Handle unknown function */
        case SECO_FUNC_UNKNOWN :
            {
                RPC_SIZE(msg) = 1;
                err = SC_ERR_NOTFOUND;
                RPC_R8(msg) = (uint8_t) err;
            }
            break;
        /* Dispatch image_load() */
        case SECO_FUNC_IMAGE_LOAD :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_faddr_t addr_src = ((sc_faddr_t) RPC_U64(msg, 0U));
                sc_faddr_t addr_dst = ((sc_faddr_t) RPC_U64(msg, 8U));
                uint32_t len = ((uint32_t) RPC_U32(msg, 16U));
                sc_bool_t fw = U2B(RPC_U8(msg, 20U));

                /* Call function */
                err = seco_image_load(caller_pt, addr_src, addr_dst, len, fw);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
        /* Dispatch authenticate() */
        case SECO_FUNC_AUTHENTICATE :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_seco_auth_cmd_t cmd = ((sc_seco_auth_cmd_t) RPC_U8(msg, 8U));
                sc_faddr_t addr = ((sc_faddr_t) RPC_U64(msg, 0U));

                /* Call function */
                err = seco_authenticate(caller_pt, cmd, addr);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
        /* Dispatch enh_authenticate() */
        case SECO_FUNC_ENH_AUTHENTICATE :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_seco_auth_cmd_t cmd = ((sc_seco_auth_cmd_t) RPC_U8(msg, 16U));
                sc_faddr_t addr = ((sc_faddr_t) RPC_U64(msg, 0U));
                uint32_t mask1 = ((uint32_t) RPC_U32(msg, 8U));
                uint32_t mask2 = ((uint32_t) RPC_U32(msg, 12U));

                /* Call function */
                err = seco_enh_authenticate(caller_pt, cmd, addr, mask1, mask2);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
        /* Dispatch forward_lifecycle() */
        case SECO_FUNC_FORWARD_LIFECYCLE :
            {
                /* Declare return and parameters */
                sc_err_t result;
                uint32_t change = ((uint32_t) RPC_U32(msg, 0U));

                /* Call function */
                err = seco_forward_lifecycle(caller_pt, change);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
        /* Dispatch return_lifecycle() */
        case SECO_FUNC_RETURN_LIFECYCLE :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_faddr_t addr = ((sc_faddr_t) RPC_U64(msg, 0U));

                /* Call function */
                err = seco_return_lifecycle(caller_pt, addr);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
        /* Dispatch commit() */
        case SECO_FUNC_COMMIT :
            {
                /* Declare return and parameters */
                sc_err_t result;
                uint32_t info = ((uint32_t) RPC_U32(msg, 0U));

                /* Call function */
                err = seco_commit(caller_pt, &info);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_U32(msg, 0U) = U32(info);
                RPC_SIZE(msg) = 2U;
                break;
            }
        /* Dispatch attest_mode() */
        case SECO_FUNC_ATTEST_MODE :
            {
                /* Declare return and parameters */
                sc_err_t result;
                uint32_t mode = ((uint32_t) RPC_U32(msg, 0U));

                /* Call function */
                err = seco_attest_mode(caller_pt, mode);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
        /* Dispatch attest() */
        case SECO_FUNC_ATTEST :
            {
                /* Declare return and parameters */
                sc_err_t result;
                uint64_t nonce = ((uint64_t) RPC_U64(msg, 0U));

                /* Call function */
                err = seco_attest(caller_pt, nonce);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
        /* Dispatch get_attest_pkey() */
        case SECO_FUNC_GET_ATTEST_PKEY :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_faddr_t addr = ((sc_faddr_t) RPC_U64(msg, 0U));

                /* Call function */
                err = seco_get_attest_pkey(caller_pt, addr);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
        /* Dispatch get_attest_sign() */
        case SECO_FUNC_GET_ATTEST_SIGN :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_faddr_t addr = ((sc_faddr_t) RPC_U64(msg, 0U));

                /* Call function */
                err = seco_get_attest_sign(caller_pt, addr);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
        /* Dispatch attest_verify() */
        case SECO_FUNC_ATTEST_VERIFY :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_faddr_t addr = ((sc_faddr_t) RPC_U64(msg, 0U));

                /* Call function */
                err = seco_attest_verify(caller_pt, addr);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
        /* Dispatch gen_key_blob() */
        case SECO_FUNC_GEN_KEY_BLOB :
            {
                /* Declare return and parameters */
                sc_err_t result;
                uint32_t id = ((uint32_t) RPC_U32(msg, 16U));
                sc_faddr_t load_addr = ((sc_faddr_t) RPC_U64(msg, 0U));
                sc_faddr_t export_addr = ((sc_faddr_t) RPC_U64(msg, 8U));
                uint16_t max_size = ((uint16_t) RPC_U16(msg, 20U));

                /* Call function */
                err = seco_gen_key_blob(caller_pt, id, load_addr, export_addr,
                    max_size);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
        /* Dispatch load_key() */
        case SECO_FUNC_LOAD_KEY :
            {
                /* Declare return and parameters */
                sc_err_t result;
                uint32_t id = ((uint32_t) RPC_U32(msg, 8U));
                sc_faddr_t addr = ((sc_faddr_t) RPC_U64(msg, 0U));

                /* Call function */
                err = seco_load_key(caller_pt, id, addr);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
        /* Dispatch get_mp_key() */
        case SECO_FUNC_GET_MP_KEY :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_faddr_t dst_addr = ((sc_faddr_t) RPC_U64(msg, 0U));
                uint16_t dst_size = ((uint16_t) RPC_U16(msg, 8U));

                /* Call function */
                err = seco_get_mp_key(caller_pt, dst_addr, dst_size);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
        /* Dispatch update_mpmr() */
        case SECO_FUNC_UPDATE_MPMR :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_faddr_t addr = ((sc_faddr_t) RPC_U64(msg, 0U));
                uint8_t size = ((uint8_t) RPC_U8(msg, 8U));
                uint8_t lock = ((uint8_t) RPC_U8(msg, 9U));

                /* Call function */
                err = seco_update_mpmr(caller_pt, addr, size, lock);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
        /* Dispatch get_mp_sign() */
        case SECO_FUNC_GET_MP_SIGN :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_faddr_t msg_addr = ((sc_faddr_t) RPC_U64(msg, 0U));
                uint16_t msg_size = ((uint16_t) RPC_U16(msg, 16U));
                sc_faddr_t dst_addr = ((sc_faddr_t) RPC_U64(msg, 8U));
                uint16_t dst_size = ((uint16_t) RPC_U16(msg, 18U));

                /* Call function */
                err = seco_get_mp_sign(caller_pt, msg_addr, msg_size, dst_addr,
                    dst_size);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
#ifdef API_HAS_V2X
        /* Dispatch v2x_build_info() */
        case SECO_FUNC_V2X_BUILD_INFO :
            {
                /* Declare return and parameters */
                sc_err_t result;
                uint32_t version = ((uint32_t) 0U);
                uint32_t commit = ((uint32_t) 0U);

                /* Call function */
                err = seco_v2x_build_info(caller_pt, &version, &commit);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_U32(msg, 0U) = U32(version);
                RPC_U32(msg, 4U) = U32(commit);
                RPC_SIZE(msg) = 3U;
                break;
            }
#endif
#ifdef API_HAS_V2X
        /* Dispatch set_mono_counter_partition_hsm() */
        case SECO_FUNC_SET_MONO_COUNTER_PARTITION_HSM :
            {
                /* Declare return and parameters */
                sc_err_t result;
                uint16_t she = ((uint16_t) RPC_U16(msg, 0U));
                uint16_t hsm = ((uint16_t) RPC_U16(msg, 2U));

                /* Call function */
                err = seco_set_mono_counter_partition_hsm(caller_pt, &she,
                    &hsm);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_U16(msg, 0U) = U16(she);
                RPC_U16(msg, 2U) = U16(hsm);
                RPC_SIZE(msg) = 2U;
                break;
            }
#endif
#ifdef API_HAS_FIPS
        /* Dispatch fips_info() */
        case SECO_FUNC_FIPS_INFO :
            {
                /* Declare return and parameters */
                sc_err_t result;
                seco_fips_info_t cert = ((seco_fips_info_t) 0U);
                seco_fips_info_t mode = ((seco_fips_info_t) 0U);

                /* Call function */
                err = seco_fips_info(caller_pt, &cert, &mode);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_U8(msg, 0U) = U8(cert);
                RPC_U8(msg, 1U) = U8(mode);
                RPC_SIZE(msg) = 2U;
                break;
            }
#endif
#ifdef API_HAS_FIPS
        /* Dispatch set_fips_mode() */
        case SECO_FUNC_SET_FIPS_MODE :
            {
                /* Declare return and parameters */
                sc_err_t result;
                uint8_t mode = ((uint8_t) RPC_U8(msg, 0U));
                uint32_t reason = ((uint32_t) 0U);

                /* Call function */
                err = seco_set_fips_mode(caller_pt, mode, &reason);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_U32(msg, 0U) = U32(reason);
                RPC_SIZE(msg) = 2U;
                break;
            }
#endif
#ifdef API_HAS_FIPS
        /* Dispatch fips_degrade() */
        case SECO_FUNC_FIPS_DEGRADE :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_faddr_t addr = ((sc_faddr_t) RPC_U64(msg, 0U));
                uint32_t status = ((uint32_t) 0U);

                /* Call function */
                err = seco_fips_degrade(caller_pt, addr, &status);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_U32(msg, 0U) = U32(status);
                RPC_SIZE(msg) = 2U;
                break;
            }
#endif
#ifdef API_HAS_FIPS
        /* Dispatch fips_key_zero() */
        case SECO_FUNC_FIPS_KEY_ZERO :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_faddr_t addr = ((sc_faddr_t) RPC_U64(msg, 0U));

                /* Call function */
                err = seco_fips_key_zero(caller_pt, addr);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
#endif
        /* Dispatch build_info() */
        case SECO_FUNC_BUILD_INFO :
            {
                /* Declare return and parameters */
                uint32_t version = ((uint32_t) 0U);
                uint32_t commit = ((uint32_t) 0U);

                /* Call function */
                seco_build_info(caller_pt, &version, &commit);

                /* Copy in return parameters */
                RPC_U32(msg, 0U) = U32(version);
                RPC_U32(msg, 4U) = U32(commit);
                RPC_SIZE(msg) = 3U;
                break;
            }
        /* Dispatch chip_info() */
        case SECO_FUNC_CHIP_INFO :
            {
                /* Declare return and parameters */
                sc_err_t result;
                uint16_t lc = ((uint16_t) 0U);
                uint16_t monotonic = ((uint16_t) 0U);
                uint32_t uid_l = ((uint32_t) 0U);
                uint32_t uid_h = ((uint32_t) 0U);

                /* Call function */
                err = seco_chip_info(caller_pt, &lc, &monotonic, &uid_l,
                    &uid_h);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_U16(msg, 8U) = U16(lc);
                RPC_U16(msg, 10U) = U16(monotonic);
                RPC_U32(msg, 0U) = U32(uid_l);
                RPC_U32(msg, 4U) = U32(uid_h);
                RPC_SIZE(msg) = 4U;
                break;
            }
        /* Dispatch enable_debug() */
        case SECO_FUNC_ENABLE_DEBUG :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_faddr_t addr = ((sc_faddr_t) RPC_U64(msg, 0U));

                /* Call function */
                err = seco_enable_debug(caller_pt, addr);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
        /* Dispatch get_event() */
        case SECO_FUNC_GET_EVENT :
            {
                /* Declare return and parameters */
                sc_err_t result;
                uint8_t idx = ((uint8_t) RPC_U8(msg, 0U));
                uint32_t event = ((uint32_t) 0U);

                /* Call function */
                err = seco_get_event(caller_pt, idx, &event);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_U32(msg, 0U) = U32(event);
                RPC_SIZE(msg) = 2U;
                break;
            }
        /* Dispatch fuse_write() */
        case SECO_FUNC_FUSE_WRITE :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_faddr_t addr = ((sc_faddr_t) RPC_U64(msg, 0U));

                /* Call function */
                err = seco_fuse_write(caller_pt, addr);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
        /* Dispatch patch() */
        case SECO_FUNC_PATCH :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_faddr_t addr = ((sc_faddr_t) RPC_U64(msg, 0U));

                /* Call function */
                err = seco_patch(caller_pt, addr);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
#ifdef API_HAS_NO_V2X
        /* Dispatch set_mono_counter_partition() */
        case SECO_FUNC_SET_MONO_COUNTER_PARTITION :
            {
                /* Declare return and parameters */
                sc_err_t result;
                uint16_t she = ((uint16_t) RPC_U16(msg, 0U));

                /* Call function */
                err = seco_set_mono_counter_partition(caller_pt, &she);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_U16(msg, 0U) = U16(she);
                RPC_SIZE(msg) = 2U;
                break;
            }
#endif
        /* Dispatch start_rng() */
        case SECO_FUNC_START_RNG :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_seco_rng_stat_t status = ((sc_seco_rng_stat_t) 0U);

                /* Call function */
                err = seco_start_rng(caller_pt, &status);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_U32(msg, 0U) = U32(status);
                RPC_SIZE(msg) = 2U;
                break;
            }
        /* Dispatch sab_msg() */
        case SECO_FUNC_SAB_MSG :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_faddr_t addr = ((sc_faddr_t) RPC_U64(msg, 0U));

                /* Call function */
                err = seco_sab_msg(caller_pt, addr);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
        /* Dispatch caam_td_config() */
        case SECO_FUNC_CAAM_TD_CONFIG :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_rsrc_t resource = ((sc_rsrc_t) RPC_U16(msg, 0U));
                sc_bool_t allow = U2B(RPC_U8(msg, 2U));
                sc_bool_t lock = U2B(RPC_U8(msg, 3U));

                /* Call function */
                err = seco_caam_td_config(caller_pt, resource, allow, lock);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
        /* Dispatch secvio_enable() */
        case SECO_FUNC_SECVIO_ENABLE :
            {
                /* Declare return and parameters */
                sc_err_t result;

                /* Call function */
                err = seco_secvio_enable(caller_pt);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
        /* Dispatch secvio_config() */
        case SECO_FUNC_SECVIO_CONFIG :
            {
                /* Declare return and parameters */
                sc_err_t result;
                uint8_t id = ((uint8_t) RPC_U8(msg, 20U));
                uint8_t access = ((uint8_t) RPC_U8(msg, 21U));
                uint32_t data0 = ((uint32_t) RPC_U32(msg, 0U));
                uint32_t data1 = ((uint32_t) RPC_U32(msg, 4U));
                uint32_t data2 = ((uint32_t) RPC_U32(msg, 8U));
                uint32_t data3 = ((uint32_t) RPC_U32(msg, 12U));
                uint32_t data4 = ((uint32_t) RPC_U32(msg, 16U));
                uint8_t size = ((uint8_t) RPC_U8(msg, 22U));

                /* Call function */
                err = seco_secvio_config(caller_pt, id, access, &data0, &data1,
                    &data2, &data3, &data4, size);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_U32(msg, 0U) = U32(data0);
                RPC_U32(msg, 4U) = U32(data1);
                RPC_U32(msg, 8U) = U32(data2);
                RPC_U32(msg, 12U) = U32(data3);
                RPC_U32(msg, 16U) = U32(data4);
                RPC_SIZE(msg) = 6U;
                break;
            }
        /* Dispatch secvio_dgo_config() */
        case SECO_FUNC_SECVIO_DGO_CONFIG :
            {
                /* Declare return and parameters */
                sc_err_t result;
                uint8_t id = ((uint8_t) RPC_U8(msg, 4U));
                uint8_t access = ((uint8_t) RPC_U8(msg, 5U));
                uint32_t data = ((uint32_t) RPC_U32(msg, 0U));

                /* Call function */
                err = seco_secvio_dgo_config(caller_pt, id, access, &data);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_U32(msg, 0U) = U32(data);
                RPC_SIZE(msg) = 2U;
                break;
            }
        /* Handle default */
        default :
            {
                RPC_SIZE(msg) = 1;
                err = SC_ERR_NOTFOUND;
                RPC_R8(msg) = (uint8_t) err;
            }
            break;
    }

    /* Fill in header */
    RPC_VER(msg) = SC_RPC_VERSION;
    RPC_SVC(msg) = (uint8_t) SC_RPC_SVC_RETURN;

    /* Handle error debug */
    if (err != SC_ERR_NONE)
    {
        if (rpc_debug)
        {
            always_print("ipc_err: api=seco, func=%d, err=%d\n", func, err);
        }
        else
        {
            rpc_print(0, "ipc_err: api=seco, func=%d, err=%d\n", func, err);
        }
    }
}

/** @} */

