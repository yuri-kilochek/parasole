#ifndef PARASOLE_INCLUDED_RULE_H
#define PARASOLE_INCLUDED_RULE_H

#include "parser.h"

#define PARASOLE_JUST(...) \
    __VA_ARGS__

#define PARASOLE_UNPACK(PACKET) \
    PARASOLE_JUST PACKET

#define PARASOLE_IGNORE(...) \
    /* ... */

#define PARASOLE_CONSUME_FIRST_PACKET(...) \
    PARASOLE_IGNORE __VA_ARGS__

#define PARASOLE_RULE(NAME, BODY) \
    (NAME, PARASOLE_PARSER_IDENTITY(BODY))

#define PARASOLE_RULE_DECLARE(NAME, BODY) \
    NAME

#define PARASOLE_RULE_DECLARATION(RULE) \
    PARASOLE_RULE_DECLARE RULE

#define PARASOLE_RULE_DECLARATIONS(...) \
    PARASOLE_EACH(PARASOLE_RULE_DECLARATION, __VA_ARGS__)

#define PARASOLE_RULE_DEFINE(NAME, BODY) \
    NAME = PARASOLE_CONSUME_FIRST_PACKET(PARASOLE_UNPACK(BODY))

#define PARASOLE_RULE_DEFINITION(RULE) \
    PARASOLE_RULE_DEFINE RULE

#define PARASOLE_RULE_DEFINITIONS(...) \
    PARASOLE_EACH(PARASOLE_RULE_DEFINITION, __VA_ARGS__)

#define PARASOLE_RULES(...) \
    static parasole_parser_t const PARASOLE_RULE_DECLARATIONS(__VA_ARGS__), PARASOLE_RULE_DEFINITIONS(__VA_ARGS__);

#endif
