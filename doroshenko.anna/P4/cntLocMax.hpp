#ifndef CNT_LOC_MAX_HPP
#define CNT_LOC_MAX_HPP
#include <iosfwd>

namespace doroshenko
{
  int readingArguments(int, char**);
  struct Matrix
  {
  public:
    void inputArray(std::ifstream&, int*, size_t);
    size_t findingLocMax(int*, size_t, size_t);
  private:
    size_t rows_;
    size_t cols_;
    int* Matrix;
  };
}

#endif
