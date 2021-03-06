/*
Copyright 2020 The OneFlow Authors. All rights reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/
#ifndef ONEFLOW_CUSTOMIZED_SUMMARY_HISTOGRAM_H_
#define ONEFLOW_CUSTOMIZED_SUMMARY_HISTOGRAM_H_

#include <vector>
#include "oneflow/core/summary/summary.pb.h"

namespace oneflow {

namespace summary {

class Histogram {
 public:
  Histogram();
  ~Histogram() {}

  void AppendValue(double value);
  void AppendToProto(HistogramProto* proto);

 private:
  double value_count_;
  double value_sum_;
  double sum_value_squares_;
  double min_value_;
  double max_value_;

  std::vector<double> max_constainers_;
  std::vector<double> containers_;
};

}  // namespace summary

}  // namespace oneflow

#endif
