//
//  mov.h
//  This is the extension of mov container
//  Created by Jun Lin on 2020/1/17.
//  Copyright © 2020 Jun Lin. All rights reserved.
//

#ifndef mov_h
#define mov_h

#include "isom.h"

typedef struct MOVBoxs {
    MOVAtom**   boxs;
    int32_t     count;
} MOVAtom;



#endif /* mov_h */
