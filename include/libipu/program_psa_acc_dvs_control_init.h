/*
 * INTEL CONFIDENTIAL
 *
 * Copyright (C) 2017 - 2018 Intel Corporation.
 * All Rights Reserved.
 *
 * The source code contained or described herein and all documents
 * related to the source code ("Material") are owned by Intel Corporation
 * or licensors. Title to the Material remains with Intel
 * Corporation or its licensors. The Material contains trade
 * secrets and proprietary and confidential information of Intel or its
 * licensors. The Material is protected by worldwide copyright
 * and trade secret laws and treaty provisions. No part of the Material may
 * be used, copied, reproduced, modified, published, uploaded, posted,
 * transmitted, distributed, or disclosed in any way without Intel's prior
 * express written permission.
 *
 * No License under any patent, copyright, trade secret or other intellectual
 * property right is granted to or conferred upon you by disclosure or
 * delivery of the Materials, either expressly, by implication, inducement,
 * estoppel or otherwise. Any license under such intellectual property rights
 * must be express and approved by Intel in writing.
 */

#ifndef __PROGRAM_PSA_ACC_DVS_CONTROL_INIT_H
#define __PROGRAM_PSA_ACC_DVS_CONTROL_INIT_H

#include "type_support.h"
#include "ia_css_psys_process_types.h"
#include "ia_css_terminal_types.h"
#include "ipu_spatial_terminal_descriptor.h"
#include "ia_css_kernel_user_param_instance_types.h"
#include "nci_dvs_controller_types.h"
#include "pg_control_init_support.h"

/**
 * @brief       Fill ctrlinit payload of the program
 * @param[in]   process_group           Process group
 * @param[in]   load_sec_desc           Progctrlinit terminal section descriptor list
 * @param[in]   payload_base_address    Program's ctrlinit terminal payload start address
 * @retval 0    Successful.
 * @retval 1    Error.
 */
int
program_psa_acc_dvs_payload_fill(enum nci_dvs_controller_levels dvs_stats_level,
	int mv_terminal_id,
	bool level_enabled,
	const struct ia_css_kup_frag_seq_info *kup_cfg,
	uint8_t y_bin_mode,
	const ia_css_process_group_t *process_group,
	load_section_desc_list_t load_sec_desc_list,
	void *payload_base_address,
	uint16_t frag_idx);

/**
 * @brief       Get ctrlinit payload size of the program
 * @retval	Size of the program payload
 */
int
program_psa_acc_dvs_get_payload_size(enum nci_dvs_controller_levels dvs_stats_level, bool level_enabled);

/**
 * @brief       Fill load section descriptor of the program
 * @param[in]   prog_ctrl_init_prog_desc Pointer to the program descriptor in which the section descriptor has to be filled
 *
 * @retval 0    Successful.
 * @retval 1    Error.
 */
int
program_psa_acc_dvs_fill_load_section_descriptor(
	ia_css_program_control_init_program_desc_t *prog_ctrl_init_prog_desc,
	enum nci_dvs_controller_levels dvs_stats_level,
	bool level_enabled);

/**
 * @brief       Fill connect section descriptor of the program
 * @param[in]   connect_sec_desc        Pointer to the section descriptor to fill
 * @param[in]   connect_sec_count       Number of objects in connect_sec_desc
 * @retval 0    Successful.
 * @retval 1    Error.
 */
int
program_psa_acc_dvs_fill_connect_section_descriptor(
	enum nci_dvs_controller_levels dvs_stats_level,
	int connect_terminal,
	bool level_enabled,
	ia_css_program_control_init_connect_section_desc_t *connect_sec_desc,
	unsigned int connect_sec_count);

void
program_psa_acc_dvs_set_desc_sid_pid(
	enum nci_dvs_controller_levels dvs_stats_level,
	ia_css_program_control_init_program_desc_t *prog_ctrl_init_prog_desc);

#endif /* __PROGRAM_PSA_ACC_DVS_CONTROL_INIT_H */