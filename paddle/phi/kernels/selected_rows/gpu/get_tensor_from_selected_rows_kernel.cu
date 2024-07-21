// Copyright (c) 2024 PaddlePaddle Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "paddle/phi/kernels/selected_rows/impl/get_tensor_from_selected_rows_kernel_impl.h"

PD_REGISTER_KERNEL(get_tensor_from_selected_rows,
                   GPU,
                   ALL_LAYOUT,
                   phi::sr::GetTensorFromSelectedRowsKernel,
                   float,
                   double,
                   int,
                   int64_t) {}
