/*
 * Copyright (C) 2022 BlueKitchen GmbH
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the copyright holders nor the names of
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 * 4. Any redistribution, use, or modification is done solely for
 *    personal benefit and not for any commercial purpose or for
 *    monetary gain.
 *
 * THIS SOFTWARE IS PROVIDED BY BLUEKITCHEN GMBH AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL BLUEKITCHEN
 * GMBH OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF
 * THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 * Please inquire about commercial licensing options at 
 * contact@bluekitchen-gmbh.com
 *
 */

/**
 * @title Coordinated Set Identification Service
 * 
 */

#ifndef COORDINATED_SET_IDENTIFICATION_SERVICE_UTIL_H
#define COORDINATED_SET_IDENTIFICATION_SERVICE_UTIL_H

#include <stdint.h>
#include "le-audio/le_audio.h"

#if defined __cplusplus
extern "C" {
#endif

/* API_START */

/**
 * @text This service specifies how devices can be identified and treated as part of a Coordinated Set.
 * 
 * To use with your application, add `#import <coordinated_set_identification_service.gatt>` to your .gatt file. 
 */
#define CSIS_LOCK_TIMEOUT_MS            60000

#define CSIS_LOCK_DENIED                0x80
#define CSIS_LOCK_RELEASE_NOT_ALLOWED   0x81
#define CSIS_INVALID_LOCK_VALUE         0x82
#define CSIS_OOB_SIRK_ONLY              0x83
#define CSIS_LOCK_ALREADY_GRANTED       0x84

typedef enum {
    CSIS_SIRK_CALCULATION_STATE_IDLE = 0x00,
    CSIS_SIRK_CALCULATION_W2_START,
    CSIS_SIRK_CALCULATION_ACTIVE,
    CSIS_SIRK_CALCULATION_STATE_READY
} csis_sirk_calculation_state_t;

typedef enum {
    CSIS_MEMBER_UNLOCKED = 0x01,
    CSIS_MEMBER_LOCKED,
    CSIS_MEMBER_PROHIBITED
} csis_member_lock_t;

typedef enum {
    CSIS_SIRK_TYPE_ENCRYPTED = 0x00,
    CSIS_SIRK_TYPE_PUBLIC,
    CSIS_SIRK_TYPE_PROHIBITED
} csis_sirk_type_t;

#if defined __cplusplus
}
#endif

#endif

