#ifndef PARASOLE_INCLUDED_JOIN_H
#define PARASOLE_INCLUDED_JOIN_H

#define PARASOLE_JOIN_(A, B) \
    A ## B

#define PARASOLE_JOIN(A, B) \
    PARASOLE_JOIN_(A, B)

#endif
