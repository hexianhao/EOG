#ifndef CPU_VARIABLE_H
#define CPU_VARIABLE_H

#include <vector>

struct Variable 
{
  std::vector<float> data, grad;
  std::vector<int> shape;
  Variable(std::vector<int> shape, bool requires_grad=true);
  void glorot(int in_size, int out_size);
  void zero();
  void zero_grad();
  void print(int col=0x7fffffff);
  float grad_norm();
};

#endif