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

#ifndef __DFM_STR2MMIO_INIT_SHARED_H
#define __DFM_STR2MMIO_INIT_SHARED_H

#include "storage_class.h"
#include "resource_types.h"
#include "dev_api_dfm_types.h"
#include "dfm_resource_types.h"
#include "bufqueue.shared.h"
#include "common_io.shared.h"


STORAGE_CLASS_INLINE void dfm_str2mmio_port_open(s_resolution_t term_res,
					bufqueue_t q_in,
					unsigned ack_addr,
					unsigned ack_data,
					dfm_port_resource_t dfm_str2mmio_port,
					unsigned gather_multi_mask,
					unsigned agent_type,
					unsigned int active,
					void *payload_address,
					unsigned hor_interl,
					unsigned ver_interl);

#ifndef PIPE_GENERATION
#include "dfm_str2mmio_init.shared.c"
#endif

#endif /* __DFM_STR2MMIO_INIT_SHARED_H */