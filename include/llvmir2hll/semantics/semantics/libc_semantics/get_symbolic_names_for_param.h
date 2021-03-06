/**
* @file include/llvmir2hll/semantics/semantics/libc_semantics/get_symbolic_names_for_param.h
* @brief Provides function getSymbolicNamesForParam() for
*        LibcSemantics in the semantics::libc namespace.
* @copyright (c) 2017 Avast Software, licensed under the MIT license
*/

#ifndef LLVMIR2HLL_SEMANTICS_SEMANTICS_LIBC_SEMANTICS_GET_SYMBOLIC_NAMES_FOR_PARAM_H
#define LLVMIR2HLL_SEMANTICS_SEMANTICS_LIBC_SEMANTICS_GET_SYMBOLIC_NAMES_FOR_PARAM_H

#include <string>

#include "llvmir2hll/support/maybe.h"
#include "llvmir2hll/support/types.h"

namespace llvmir2hll {
namespace semantics {
namespace libc {

Maybe<IntStringMap> getSymbolicNamesForParam(const std::string &funcName,
	unsigned paramPos);

} // namespace libc
} // namespace semantics
} // namespace llvmir2hll

#endif
