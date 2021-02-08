// Martin Kersner, m.kersner@gmail.com
// 2017/04/22 

#ifndef UTILS_HH_
#define UTILS_HH_

#include <vector>
#include <string>
#include <sstream>
#include <sys/stat.h>
#include <wordexp.h>

enum jetson_version {TK1, TX1, TX2};

struct tegrastats {
  int mem_usage = 0;
  int mem_max = 0;

  std::vector<int> cpu_usage;
  std::vector<int> cpu_freq;

  int gpu_usage = 0;
  int gpu_freq = 0;

  int emc_usage = 0;
  int emc_freq;

  float gpu_temp = 0;
  float cpu_temp = 0;

  jetson_version version;
};

typedef std::vector<std::string> vec_str;

vec_str tokenize(const std::string &, const char);

bool file_exists(const std::string &);

#endif // UTILS_HH_
