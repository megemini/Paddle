/* Copyright (c) 2023 PaddlePaddle Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License. */

#pragma once

#include <vector>

#include "paddle/phi/common/int_array.h"
#include "paddle/phi/core/distributed/auto_parallel/dist_meta_tensor.h"
#include "paddle/phi/core/distributed/type_defs.h"

namespace phi {
namespace distributed {
SpmdInfo FusedLinearParamGradAddInferSpmd(const DistMetaTensor& x,
                                          const DistMetaTensor& dout,
                                          const DistMetaTensor& dweight,
                                          const DistMetaTensor& dbias,
                                          bool multi_precision,
                                          bool has_bias);

SpmdInfo FusedLinearParamGradAddInferSpmdFakeReverse();
}  // namespace distributed
}  // namespace phi
