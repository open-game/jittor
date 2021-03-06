// ***************************************************************
// Copyright (c) 2020 Jittor. Authors: Dun Liang <randonlang@gmail.com>. All Rights Reserved.
// This file is subject to the terms and conditions defined in
// file 'LICENSE.txt', which is part of this source code package.
// ***************************************************************
#pragma once
#include "op.h"

namespace jittor {

struct RandomOp : Op {
    Var* output;
    RandomOp(NanoVector shape, NanoString dtype=ns_float32);
    
    const char* name() const override { return "random"; }
    DECLARE_jit_run;
};

} // jittor