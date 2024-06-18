// Copyright 2024 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file utils.hpp
 */

#ifndef _FASTDDS_DDS_XTYPES_UTILS_HPP_
#define _FASTDDS_DDS_XTYPES_UTILS_HPP_

#include <string>

#include <fastdds/dds/xtypes/dynamic_types/DynamicType.hpp>

namespace eprosima {
namespace fastdds {
namespace dds {

// TODO
ReturnCode_t generate_idl_schema(
        const traits<DynamicType>::ref_type& dynamic_type,
        std::string& idl_schema) noexcept;

} // dds
} // fastdds
} // eprosima

#endif // _FASTDDS_DDS_XTYPES_UTILS_HPP_
