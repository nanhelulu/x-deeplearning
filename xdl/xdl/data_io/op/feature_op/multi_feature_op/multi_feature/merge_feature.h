/* Copyright (C) 2016-2018 Alibaba Group Holding Limited

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

/*
 * Copyright 1999-2018 Alibaba Group.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
*/

#pragma once

#include "xdl/data_io/op/feature_op/multi_feature_op/multi_feature/multi_feature.h"

namespace xdl {
namespace io {

class MergeFeature : public MultiFeature {
 public:
  virtual bool Combine(std::vector<const ExprNode *> &source_nodes, ExprNode *result_node) override;

 protected:
  bool CombineOne(const ExprNode *node0, const ExprNode *node1, ExprNode *result_node);
};

}  // namespace io
}  // namespace xdl