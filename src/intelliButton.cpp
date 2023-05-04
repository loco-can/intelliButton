/*
 * intellibutton class file
 * 
 * @author: Thomas H Winkler
 * @copyright: 2023
 * @lizence: GG0
 */

#include "intelliButton.h"


void INTELLIBUTTON::begin(uint8_t port) {
    begin(port, INTELLIBUTTON_DEFAULT_LONG);
}


void INTELLIBUTTON::begin(uint8_t port, uint16_t long) {
    _port = port;

    set_long(long);
    pinMode(port, INPUT_PULLUP);
}


void INTELLIBUTTON::set_long(uint16_t long) {
    _long_push.begin(long);
}