#ifndef ONEFLOW_CORE_KERNEL_DECODE_OFRECORD_KERNEL_H_
#define ONEFLOW_CORE_KERNEL_DECODE_OFRECORD_KERNEL_H_

#include "oneflow/core/kernel/kernel.h"
#include "oneflow/core/register/register.h"

namespace oneflow {

struct DecodeStatus {
  Regst* in_regst_;
  int32_t cur_col_id_;
  int32_t max_col_id_;
};

class DecodeOFRecordKernel final : public KernelIf<DeviceType::kCPU> {
 public:
  OF_DISALLOW_COPY_AND_MOVE(DecodeOFRecordKernel);
  DecodeOFRecordKernel() = default;
  ~DecodeOFRecordKernel() = default;

 private:
  void Forward(
      const KernelCtx& ctx,
      std::function<Blob*(const std::string&)> BnInOp2Blob) const override;
};

}  // namespace oneflow

#endif  // ONEFLOW_CORE_KERNEL_DECODE_OFRECORD_KERNEL_H_
