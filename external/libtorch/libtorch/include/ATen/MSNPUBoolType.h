#pragma once
#include <ATen/MSNPUType.h>

namespace at {

struct CAFFE2_API MSNPUBoolType : public MSNPUType {
  explicit MSNPUBoolType();

  virtual ScalarType scalarType() const override;
  virtual caffe2::TypeMeta typeMeta() const override;
  virtual const char * toString() const override;
  virtual TypeID ID() const override;
};

} // namespace at
