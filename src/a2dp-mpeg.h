/*
 * BlueALSA - a2dp-mpeg.h
 * Copyright (c) 2016-2021 Arkadiusz Bokowy
 *
 * This file is a part of bluez-alsa.
 *
 * This project is licensed under the terms of the MIT license.
 *
 */

#pragma once
#ifndef BLUEALSA_A2DPMPEG_H_
#define BLUEALSA_A2DPMPEG_H_

#if HAVE_CONFIG_H
# include <config.h>
#endif

#include "a2dp.h"
#include "ba-transport.h"

extern struct a2dp_codec a2dp_mpeg_sink;
extern struct a2dp_codec a2dp_mpeg_source;

void a2dp_mpeg_init(void);
void a2dp_mpeg_transport_init(struct ba_transport *t);
int a2dp_mpeg_transport_start(struct ba_transport *t);

#endif
