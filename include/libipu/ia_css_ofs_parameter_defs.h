/*
 * INTEL CONFIDENTIAL
 *
 * Copyright (C) 2015 - 2016 Intel Corporation.
 * All Rights Reserved.
 *
 * The source code contained or described herein and all documents
 * related to the source code ("Material") are owned by Intel Corporation
 * or licensors. Title to the Material remains with Intel Corporation
 * or its licensors. The Material contains trade secrets and proprietary
 * and confidential information of Intel or its licensors. The Material
 * is protected by worldwide copyright and trace secret laws and treaty
 * provisions. No part of the Material may beused, copied, reproduced,
 * modified, published, uploaded, posted, transmitted, distributed, or
 * disclosed in any way without Intel's prior express written permission.
 *
 * No License under any patent, copyright, trade secret or other intellectual
 * property right is granted to or conferred upon you by disclosure or
 * delivery of the Materials, either expressly, by implication, inducement,
 * estoppel or otherwise. Any license under such intellectual property rights
 * must be express and approved by Intel in writing.
 *
 */

#ifndef __IA_CSS_OFS_PARAMETER_DEFS_H
#define __IA_CSS_OFS_PARAMETER_DEFS_H


#define IA_CSS_OFS_KERNEL_IS_PRIMARY_OF                             (0)
#define IA_CSS_OFS_KERNEL_IS_PRIMARY_SC0                            (0)
#define IA_CSS_OFS_KERNEL_IS_PRIMARY_SC1                            (0)
#define IA_CSS_OFS_KERNEL_IS_PRIMARY_ISP                            (0)
#define IA_CSS_OFS_NEEDS_SPATIAL_IN_OF                              (0)
#define IA_CSS_OFS_NEEDS_SPATIAL_IN_SC0                             (0)
#define IA_CSS_OFS_NEEDS_SPATIAL_IN_SC1                             (0)
#define IA_CSS_OFS_NEEDS_SPATIAL_IN_ISP                             (0)
#define IA_CSS_OFS_NEEDS_SPATIAL_OUT_OF                             (0)
#define IA_CSS_OFS_NEEDS_SPATIAL_OUT_SC0                            (0)
#define IA_CSS_OFS_NEEDS_SPATIAL_OUT_SC1                            (0)
#define IA_CSS_OFS_NEEDS_SPATIAL_OUT_ISP                            (0)

/* ==================== OFS_OF specs - START ==================== */
#define IA_CSS_OFS_PARAMETER_TERMINAL_OF_SECTION_COUNT               (4)
/* struct ofs_formatter_upsample_config */
#define IA_CSS_OFS_PARAMETER_TERMINAL_OF_MAX_SIZE_SECTION_0          (0x10)
#define IA_CSS_OFS_PARAMETER_TERMINAL_OF_DEST_OFFSET_SECTION_0       (0x18)
/* struct ofs_formatter_private_pin_mode -- PIN 0 */
#define IA_CSS_OFS_PARAMETER_TERMINAL_OF_MAX_SIZE_SECTION_1          (0x14)
#define IA_CSS_OFS_PARAMETER_TERMINAL_OF_DEST_OFFSET_SECTION_1       (0x100)
/* struct ofs_formatter_private_pin_mode -- PIN 1 */
#define IA_CSS_OFS_PARAMETER_TERMINAL_OF_MAX_SIZE_SECTION_2          (0x14)
#define IA_CSS_OFS_PARAMETER_TERMINAL_OF_DEST_OFFSET_SECTION_2       (0x200)
/* struct ofs_formatter_private_pin_mode -- PIN 2 */
#define IA_CSS_OFS_PARAMETER_TERMINAL_OF_MAX_SIZE_SECTION_3          (0x14)
#define IA_CSS_OFS_PARAMETER_TERMINAL_OF_DEST_OFFSET_SECTION_3       (0x300)

#define IA_CSS_OFS_PROGRAM_TERMINAL_OF_SECTION_COUNT                 (0)
#define IA_CSS_OFS_PARAMETER_TERMINAL_OUT_OF_SECTION_COUNT           (0)
/* ==================== OFS_OF specs - END   ==================== */

/* ==================== OFS_SC0 specs - START ==================== */
#define IA_CSS_OFS_PARAMETER_TERMINAL_SC0_SECTION_COUNT               (1)
/* struct ofs_scaler_private_lut */
#define IA_CSS_OFS_PARAMETER_TERMINAL_SC0_MAX_SIZE_SECTION_0          (0x100)
#define IA_CSS_OFS_PARAMETER_TERMINAL_SC0_DEST_OFFSET_SECTION_0       (0x200)

#define IA_CSS_OFS_PROGRAM_TERMINAL_SC0_SECTION_COUNT                 (1)
/* struct ofs_scaler_private_mode_config */
#define IA_CSS_OFS_PROGRAM_TERMINAL_SC0_MAX_SIZE_SECTION_0            (0x5C)
#define IA_CSS_OFS_PROGRAM_TERMINAL_SC0_DEST_OFFSET_SECTION_0         (0xCC)

#define IA_CSS_OFS_PARAMETER_TERMINAL_OUT_SC0_SECTION_COUNT           (0)
/* ==================== OFS_SC0 specs - END   ==================== */


/* ==================== OFS_SC1 specs - START ==================== */
#define IA_CSS_OFS_PARAMETER_TERMINAL_SC1_SECTION_COUNT               (1)
/* struct ofs_scaler_private_lut */
#define IA_CSS_OFS_PARAMETER_TERMINAL_SC1_MAX_SIZE_SECTION_0          (0x100)
#define IA_CSS_OFS_PARAMETER_TERMINAL_SC1_DEST_OFFSET_SECTION_0       (0x200)

#define IA_CSS_OFS_PROGRAM_TERMINAL_SC1_SECTION_COUNT                 (1)
/* struct ofs_scaler_private_mode_config */
#define IA_CSS_OFS_PROGRAM_TERMINAL_SC1_MAX_SIZE_SECTION_0            (0x5C)
#define IA_CSS_OFS_PROGRAM_TERMINAL_SC1_DEST_OFFSET_SECTION_0         (0xCC)

#define IA_CSS_OFS_PARAMETER_TERMINAL_OUT_SC1_SECTION_COUNT           (0)
/* ==================== OFS_SC1 specs - END   ==================== */


/* ==================== OFS_ISP specs - START ==================== */
#define IA_CSS_OFS_PARAMETER_TERMINAL_ISP_SECTION_COUNT               (3)
/* struct ofs_output_pin_mode -- PIN 0 */
#define IA_CSS_OFS_PARAMETER_TERMINAL_ISP_MAX_SIZE_SECTION_0          (0x14)
#define IA_CSS_OFS_PARAMETER_TERMINAL_ISP_DEST_OFFSET_SECTION_0       (0)
/* struct ofs_output_pin_mode -- PIN 1 */
#define IA_CSS_OFS_PARAMETER_TERMINAL_ISP_MAX_SIZE_SECTION_1          (0x14)
#define IA_CSS_OFS_PARAMETER_TERMINAL_ISP_DEST_OFFSET_SECTION_1       (0x14)
/* struct ofs_output_pin_mode -- PIN 2 */
#define IA_CSS_OFS_PARAMETER_TERMINAL_ISP_MAX_SIZE_SECTION_2          (0x14)
#define IA_CSS_OFS_PARAMETER_TERMINAL_ISP_DEST_OFFSET_SECTION_2       (0x14 + 0x14)

#define IA_CSS_OFS_PROGRAM_TERMINAL_ISP_SECTION_COUNT                 (6)
/* struct ofs_fragment_scaler_config -- Scaler 0 */
#define IA_CSS_OFS_PROGRAM_TERMINAL_ISP_MAX_SIZE_SECTION_0            (0x10)
#define IA_CSS_OFS_PROGRAM_TERMINAL_ISP_DEST_OFFSET_SECTION_0         (0x0)
/* struct ofs_fragment_scaler_config -- Scaler 1 */
#define IA_CSS_OFS_PROGRAM_TERMINAL_ISP_MAX_SIZE_SECTION_1            (0x10)
#define IA_CSS_OFS_PROGRAM_TERMINAL_ISP_DEST_OFFSET_SECTION_1         (0x10)
/* struct ofs_fragment_crop_config -- Pin 0 */
#define IA_CSS_OFS_PROGRAM_TERMINAL_ISP_MAX_SIZE_SECTION_2            (0x8)
#define IA_CSS_OFS_PROGRAM_TERMINAL_ISP_DEST_OFFSET_SECTION_2         (0x10 + 0x10)
/* struct ofs_fragment_crop_config -- Pin 1 */
#define IA_CSS_OFS_PROGRAM_TERMINAL_ISP_MAX_SIZE_SECTION_3            (0x8)
#define IA_CSS_OFS_PROGRAM_TERMINAL_ISP_DEST_OFFSET_SECTION_3         (0x10 + 0x10 + 0x8)
/* struct ofs_fragment_crop_config -- Pin 2 */
#define IA_CSS_OFS_PROGRAM_TERMINAL_ISP_MAX_SIZE_SECTION_4            (0x8)
#define IA_CSS_OFS_PROGRAM_TERMINAL_ISP_DEST_OFFSET_SECTION_4         (0x10 + 0x10 + 0x8 + 0x8)
/* struct ofs_output_resolution_config -- all pins */
#define IA_CSS_OFS_PROGRAM_TERMINAL_ISP_MAX_SIZE_SECTION_5            (0x18)
#define IA_CSS_OFS_PROGRAM_TERMINAL_ISP_DEST_OFFSET_SECTION_5         (0x10 + 0x10 + 0x8 + 0x8 + 0x8)

#define IA_CSS_OFS_PARAMETER_TERMINAL_OUT_ISP_SECTION_COUNT           (0)
/* ==================== OFS_ISP specs - END   ==================== */

/* TODO: REMOVE ABCKWARD COMPATIBILITY */
#define IA_CSS_PSYS_PARAMETER_TERMINAL_OFS_OF_SECTION_COUNT IA_CSS_OFS_PARAMETER_TERMINAL_OF_SECTION_COUNT
#define IA_CSS_PSYS_PARAMETER_TERMINAL_OFS_OF_MAX_SIZE_SECTION_0 IA_CSS_OFS_PARAMETER_TERMINAL_OF_MAX_SIZE_SECTION_0
#define IA_CSS_PSYS_PARAMETER_TERMINAL_OFS_OF_DEST_OFFSET_SECTION_0 IA_CSS_OFS_PARAMETER_TERMINAL_OF_DEST_OFFSET_SECTION_0
#define IA_CSS_PSYS_PARAMETER_TERMINAL_OFS_OF_MAX_SIZE_SECTION_1 IA_CSS_OFS_PARAMETER_TERMINAL_OF_MAX_SIZE_SECTION_1
#define IA_CSS_PSYS_PARAMETER_TERMINAL_OFS_OF_DEST_OFFSET_SECTION_1 IA_CSS_OFS_PARAMETER_TERMINAL_OF_DEST_OFFSET_SECTION_1
#define IA_CSS_PSYS_PARAMETER_TERMINAL_OFS_OF_MAX_SIZE_SECTION_2 IA_CSS_OFS_PARAMETER_TERMINAL_OF_MAX_SIZE_SECTION_2
#define IA_CSS_PSYS_PARAMETER_TERMINAL_OFS_OF_DEST_OFFSET_SECTION_2 IA_CSS_OFS_PARAMETER_TERMINAL_OF_DEST_OFFSET_SECTION_2
#define IA_CSS_PSYS_PARAMETER_TERMINAL_OFS_OF_MAX_SIZE_SECTION_3 IA_CSS_OFS_PARAMETER_TERMINAL_OF_MAX_SIZE_SECTION_3
#define IA_CSS_PSYS_PARAMETER_TERMINAL_OFS_OF_DEST_OFFSET_SECTION_3 IA_CSS_OFS_PARAMETER_TERMINAL_OF_DEST_OFFSET_SECTION_3
#define IA_CSS_PSYS_PROGRAM_TERMINAL_OFS_OF_SECTION_COUNT IA_CSS_OFS_PROGRAM_TERMINAL_OF_SECTION_COUNT
#define IA_CSS_PSYS_PARAMETER_TERMINAL_OUT_OFS_OF_SECTION_COUNT IA_CSS_OFS_PARAMETER_TERMINAL_OUT_OF_SECTION_COUNT
#define IA_CSS_PSYS_PARAMETER_TERMINAL_OFS_SC0_SECTION_COUNT IA_CSS_OFS_PARAMETER_TERMINAL_SC0_SECTION_COUNT
#define IA_CSS_PSYS_PARAMETER_TERMINAL_OFS_SC0_MAX_SIZE_SECTION_0 IA_CSS_OFS_PARAMETER_TERMINAL_SC0_MAX_SIZE_SECTION_0
#define IA_CSS_PSYS_PARAMETER_TERMINAL_OFS_SC0_DEST_OFFSET_SECTION_0 IA_CSS_OFS_PARAMETER_TERMINAL_SC0_DEST_OFFSET_SECTION_0
#define IA_CSS_PSYS_PROGRAM_TERMINAL_OFS_SC0_SECTION_COUNT IA_CSS_OFS_PROGRAM_TERMINAL_SC0_SECTION_COUNT
#define IA_CSS_PSYS_PROGRAM_TERMINAL_OFS_SC0_MAX_SIZE_SECTION_0 IA_CSS_OFS_PROGRAM_TERMINAL_SC0_MAX_SIZE_SECTION_0
#define IA_CSS_PSYS_PROGRAM_TERMINAL_OFS_SC0_DEST_OFFSET_SECTION_0 IA_CSS_OFS_PROGRAM_TERMINAL_SC0_DEST_OFFSET_SECTION_0
#define IA_CSS_PSYS_PARAMETER_TERMINAL_OUT_OFS_SC0_SECTION_COUNT IA_CSS_OFS_PARAMETER_TERMINAL_OUT_SC0_SECTION_COUNT
#define IA_CSS_PSYS_PARAMETER_TERMINAL_OFS_SC1_SECTION_COUNT IA_CSS_OFS_PARAMETER_TERMINAL_SC1_SECTION_COUNT
#define IA_CSS_PSYS_PARAMETER_TERMINAL_OFS_SC1_MAX_SIZE_SECTION_0 IA_CSS_OFS_PARAMETER_TERMINAL_SC1_MAX_SIZE_SECTION_0
#define IA_CSS_PSYS_PARAMETER_TERMINAL_OFS_SC1_DEST_OFFSET_SECTION_0 IA_CSS_OFS_PARAMETER_TERMINAL_SC1_DEST_OFFSET_SECTION_0
#define IA_CSS_PSYS_PROGRAM_TERMINAL_OFS_SC1_SECTION_COUNT IA_CSS_OFS_PROGRAM_TERMINAL_SC1_SECTION_COUNT
#define IA_CSS_PSYS_PROGRAM_TERMINAL_OFS_SC1_MAX_SIZE_SECTION_0 IA_CSS_OFS_PROGRAM_TERMINAL_SC1_MAX_SIZE_SECTION_0
#define IA_CSS_PSYS_PROGRAM_TERMINAL_OFS_SC1_DEST_OFFSET_SECTION_0 IA_CSS_OFS_PROGRAM_TERMINAL_SC1_DEST_OFFSET_SECTION_0
#define IA_CSS_PSYS_PARAMETER_TERMINAL_OUT_OFS_SC1_SECTION_COUNT IA_CSS_OFS_PARAMETER_TERMINAL_OUT_SC1_SECTION_COUNT
#define IA_CSS_PSYS_PARAMETER_TERMINAL_OFS_ISP_SECTION_COUNT IA_CSS_OFS_PARAMETER_TERMINAL_ISP_SECTION_COUNT
#define IA_CSS_PSYS_PARAMETER_TERMINAL_OFS_ISP_MAX_SIZE_SECTION_0 IA_CSS_OFS_PARAMETER_TERMINAL_ISP_MAX_SIZE_SECTION_0
#define IA_CSS_PSYS_PARAMETER_TERMINAL_OFS_ISP_DEST_OFFSET_SECTION_0 IA_CSS_OFS_PARAMETER_TERMINAL_ISP_DEST_OFFSET_SECTION_0
#define IA_CSS_PSYS_PARAMETER_TERMINAL_OFS_ISP_MAX_SIZE_SECTION_1 IA_CSS_OFS_PARAMETER_TERMINAL_ISP_MAX_SIZE_SECTION_1
#define IA_CSS_PSYS_PARAMETER_TERMINAL_OFS_ISP_DEST_OFFSET_SECTION_1 IA_CSS_OFS_PARAMETER_TERMINAL_ISP_DEST_OFFSET_SECTION_1
#define IA_CSS_PSYS_PARAMETER_TERMINAL_OFS_ISP_MAX_SIZE_SECTION_2 IA_CSS_OFS_PARAMETER_TERMINAL_ISP_MAX_SIZE_SECTION_2
#define IA_CSS_PSYS_PARAMETER_TERMINAL_OFS_ISP_DEST_OFFSET_SECTION_2 IA_CSS_OFS_PARAMETER_TERMINAL_ISP_DEST_OFFSET_SECTION_2
#define IA_CSS_PSYS_PROGRAM_TERMINAL_OFS_ISP_SECTION_COUNT IA_CSS_OFS_PROGRAM_TERMINAL_ISP_SECTION_COUNT
#define IA_CSS_PSYS_PROGRAM_TERMINAL_OFS_ISP_MAX_SIZE_SECTION_0 IA_CSS_OFS_PROGRAM_TERMINAL_ISP_MAX_SIZE_SECTION_0
#define IA_CSS_PSYS_PROGRAM_TERMINAL_OFS_ISP_DEST_OFFSET_SECTION_0 IA_CSS_OFS_PROGRAM_TERMINAL_ISP_DEST_OFFSET_SECTION_0
#define IA_CSS_PSYS_PROGRAM_TERMINAL_OFS_ISP_MAX_SIZE_SECTION_1 IA_CSS_OFS_PROGRAM_TERMINAL_ISP_MAX_SIZE_SECTION_1
#define IA_CSS_PSYS_PROGRAM_TERMINAL_OFS_ISP_DEST_OFFSET_SECTION_1 IA_CSS_OFS_PROGRAM_TERMINAL_ISP_DEST_OFFSET_SECTION_1
#define IA_CSS_PSYS_PROGRAM_TERMINAL_OFS_ISP_MAX_SIZE_SECTION_2 IA_CSS_OFS_PROGRAM_TERMINAL_ISP_MAX_SIZE_SECTION_2
#define IA_CSS_PSYS_PROGRAM_TERMINAL_OFS_ISP_DEST_OFFSET_SECTION_2 IA_CSS_OFS_PROGRAM_TERMINAL_ISP_DEST_OFFSET_SECTION_2
#define IA_CSS_PSYS_PROGRAM_TERMINAL_OFS_ISP_MAX_SIZE_SECTION_3 IA_CSS_OFS_PROGRAM_TERMINAL_ISP_MAX_SIZE_SECTION_3
#define IA_CSS_PSYS_PROGRAM_TERMINAL_OFS_ISP_DEST_OFFSET_SECTION_3 IA_CSS_OFS_PROGRAM_TERMINAL_ISP_DEST_OFFSET_SECTION_3
#define IA_CSS_PSYS_PROGRAM_TERMINAL_OFS_ISP_MAX_SIZE_SECTION_4 IA_CSS_OFS_PROGRAM_TERMINAL_ISP_MAX_SIZE_SECTION_4
#define IA_CSS_PSYS_PROGRAM_TERMINAL_OFS_ISP_DEST_OFFSET_SECTION_4 IA_CSS_OFS_PROGRAM_TERMINAL_ISP_DEST_OFFSET_SECTION_4
#define IA_CSS_PSYS_PROGRAM_TERMINAL_OFS_ISP_MAX_SIZE_SECTION_5 IA_CSS_OFS_PROGRAM_TERMINAL_ISP_MAX_SIZE_SECTION_5
#define IA_CSS_PSYS_PROGRAM_TERMINAL_OFS_ISP_DEST_OFFSET_SECTION_5 IA_CSS_OFS_PROGRAM_TERMINAL_ISP_DEST_OFFSET_SECTION_5
#define IA_CSS_PSYS_PARAMETER_TERMINAL_OUT_OFS_ISP_SECTION_COUNT IA_CSS_OFS_PARAMETER_TERMINAL_OUT_ISP_SECTION_COUNT

#define IA_CSS_PSYS_KERNEL_IS_PRIMARY_OFS_OF IA_CSS_OFS_KERNEL_IS_PRIMARY_OF
#define IA_CSS_PSYS_KERNEL_IS_PRIMARY_OFS_SC0 IA_CSS_OFS_KERNEL_IS_PRIMARY_SC0
#define IA_CSS_PSYS_KERNEL_IS_PRIMARY_OFS_SC1 IA_CSS_OFS_KERNEL_IS_PRIMARY_SC1
#define IA_CSS_PSYS_KERNEL_IS_PRIMARY_OFS_ISP IA_CSS_OFS_KERNEL_IS_PRIMARY_ISP
#define IA_CSS_PSYS_NEEDS_SPATIAL_IN_OFS_OF IA_CSS_OFS_NEEDS_SPATIAL_IN_OF
#define IA_CSS_PSYS_NEEDS_SPATIAL_IN_OFS_SC0 IA_CSS_OFS_NEEDS_SPATIAL_IN_SC0
#define IA_CSS_PSYS_NEEDS_SPATIAL_IN_OFS_SC1 IA_CSS_OFS_NEEDS_SPATIAL_IN_SC1
#define IA_CSS_PSYS_NEEDS_SPATIAL_IN_OFS_ISP IA_CSS_OFS_NEEDS_SPATIAL_IN_ISP
#define IA_CSS_PSYS_NEEDS_SPATIAL_OUT_OFS_OF IA_CSS_OFS_NEEDS_SPATIAL_OUT_OF
#define IA_CSS_PSYS_NEEDS_SPATIAL_OUT_OFS_SC0 IA_CSS_OFS_NEEDS_SPATIAL_OUT_SC0
#define IA_CSS_PSYS_NEEDS_SPATIAL_OUT_OFS_SC1 IA_CSS_OFS_NEEDS_SPATIAL_OUT_SC1
#define IA_CSS_PSYS_NEEDS_SPATIAL_OUT_OFS_ISP IA_CSS_OFS_NEEDS_SPATIAL_OUT_ISP
/* END OF TODO */

#endif /* __IA_CSS_OFS_PARAMETER_DEFS_H */
