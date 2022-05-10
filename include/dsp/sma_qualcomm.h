/*
 * APS(Advanced Protection Solution) Support
 * Qualcomm Platform Support File
 *
 * Author: Gyuhwa Park
 * Date: 21-05-20
 */

#ifndef __APS_QUALCOMM__
#define __APS_QUALCOMM__

#include <dsp/apr_audio-v2.h>

#define APS_PAYLOAD_SIZE        14
#define SMA_GET_PARAM			1
#define SMA_SET_PARAM			0

struct afe_id_aps_get_set_params_t {
	uint32_t payload[APS_PAYLOAD_SIZE];
} __packed;

#ifdef INSTANCE_ID_0
struct afe_id_aps_get_calib {
	struct apr_hdr hdr;
	struct mem_mapping_hdr mem_hdr;
	struct param_hdr_v3 pdata;
	struct afe_id_aps_get_set_params_t res_cfg;
} __packed;

struct afe_id_aps_calib_get_resp {
	uint32_t status;
	struct param_hdr_v3 pdata;
	struct afe_id_aps_get_set_params_t res_cfg;
} __packed;
#else
struct afe_id_aps_config_command {
	struct apr_hdr                      hdr;
	struct afe_port_cmd_set_param_v2    param;
	struct afe_port_param_data_v2       pdata;
	struct afe_id_aps_get_set_params_t  prot_config;
} __packed;

struct afe_id_aps_get_calib {
	struct apr_hdr hdr;
	struct afe_port_cmd_get_param_v2   get_param;
	struct afe_port_param_data_v2      pdata;
	struct afe_id_aps_get_set_params_t   res_cfg;
} __packed;

struct afe_id_aps_calib_get_resp {
	uint32_t status;
	struct afe_port_param_data_v2 pdata;
	struct afe_id_aps_get_set_params_t res_cfg;
} __packed;
#endif /*APR_VERSION_V3*/

void afe_sma_aps_init(uint32_t rx_module_id);
int afe_sma_aps_get_calib_data(uint32_t module_id, uint32_t param_id,
		int32_t length, uint8_t *data, uint16_t port_id);
int afe_sma_aps_set_calib_data(uint32_t module_id, uint32_t param_id,
		int32_t length, uint8_t *data, uint16_t port_id);

#endif /*__APS_QUALCOMM__*/
