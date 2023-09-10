#include "mmath.h"
namespace mmath {
namespace {
unsigned bits(float f) {
  return *((unsigned *)((void *)(&f)));
}
float from_bits(unsigned b) {
  return *((float *)((void *)(&b)));
}
} // namespace

} // namespace mmath
