#pragma once
#include <functional>

namespace test {
bool runAndLogResult(std::function<bool()> testFunction, std::string name);

}