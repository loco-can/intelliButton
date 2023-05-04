/*
 * intellibutton class header file
 * 
 * @author: Thomas H Winkler
 * @copyright: 2023
 * @lizence: GG0
 */

#ifndef INTELLIBUTTON_H
#define INTELLIBUTTON_H

#include <Arduino.h>
#include "intelliTimeout.h"

// default value for long push detection = 1000ms
#define INTELLIBUTTON_DEFAULT_LONG 1000


class INTELLIBUTTON {

    public:
        void begin(uint8_t port);
        void begin(uint8_t port, uint16_t long);
        
        void set_long(uint16_t long);

        void update(void);
        uint8_t check(void);

    private:
        uint8_t _port;
        INTELLITIMEOUT _long_push;

};

#endif