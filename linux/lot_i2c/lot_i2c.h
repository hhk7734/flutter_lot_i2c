/*
 * MIT License
 * Copyright (c) 2021 Hyeonki Hong <hhk7734@gmail.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

const char kChannelName[] = "lot_i2c";

const char kRuntimeError[] = "Runtime Error";

const char kInitMethod[]       = "init";
const char kDisposeMethod[]    = "dispose";
const char kTransmitMethod[]   = "transmit";
const char kReceiveMethod[]    = "receive";
const char kTransceiveMethod[] = "transceive";

int lot_i2c_init(const char *device);

void lot_i2c_dispose(int fd);

void lot_i2c_transmit(int fd, int slaveAddress, uint8_t *tx_buf, int tx_size);

void lot_i2c_receive(int fd, int slaveAddress, uint8_t *rx_buf, int rx_size);

void lot_i2c_transceive(int      fd,
                        int      slaveAddress,
                        uint8_t *tx_buf,
                        int      tx_size,
                        uint8_t *rx_buf,
                        int      rx_size);

#ifdef __cplusplus
}
#endif