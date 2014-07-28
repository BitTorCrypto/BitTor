/* Copyright (c) 2014, BitTor Developers */
/* See LICENSE for licensing information */

/**
 * \file bittor.h
 * \brief Headers for bittor.cpp
 **/

#ifndef TOR_BITTOR_H
#define TOR_BITTOR_H

#ifdef __cplusplus
extern "C" {
#endif

    char const* bittor_tor_data_directory(
    );

    char const* bittor_service_directory(
    );

    int check_interrupted(
    );

    void set_initialized(
    );

    void wait_initialized(
    );

#ifdef __cplusplus
}
#endif

#endif

