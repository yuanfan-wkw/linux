/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Support for Intel Camera Imaging ISP subsystem.
 * Copyright (c) 2015, Intel Corporation.
 */

#ifndef __DMA_PUBLIC_H_INCLUDED__
#define __DMA_PUBLIC_H_INCLUDED__

#include "system_local.h"

/*! Write to a control register of DMA[ID]

 \param	ID[in]				DMA identifier
 \param	reg[in]				register index
 \param value[in]			The data to be written

 \return none, DMA[ID].ctrl[reg] = value
 */
STORAGE_CLASS_DMA_H void dma_reg_store(
    const dma_ID_t		ID,
    const unsigned int	reg,
    const hrt_data		value);

/*! Read from a control register of DMA[ID]

 \param	ID[in]				DMA identifier
 \param	reg[in]				register index
 \param value[in]			The data to be written

 \return DMA[ID].ctrl[reg]
 */
STORAGE_CLASS_DMA_H hrt_data dma_reg_load(
    const dma_ID_t		ID,
    const unsigned int	reg);

/*! Set maximum burst size of DMA[ID]

 \param ID[in]				DMA identifier
 \param conn[in]			Connection to set max burst size for
 \param max_burst_size[in]		Maximum burst size in words

 \return none
*/
void
dma_set_max_burst_size(
    dma_ID_t		ID,
    dma_connection		conn,
    uint32_t		max_burst_size);

#endif /* __DMA_PUBLIC_H_INCLUDED__ */
