#
# Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#    http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set(cdwpg_public_header
  include/tencentcloud/cdwpg/v20201230/CdwpgClient.h
  )

set(cdwpg_public_header_model
  include/tencentcloud/cdwpg/v20201230/model/ModifyInstanceResponse.h
  include/tencentcloud/cdwpg/v20201230/model/DescribeInstanceStateRequest.h
  include/tencentcloud/cdwpg/v20201230/model/ChargeProperties.h
  include/tencentcloud/cdwpg/v20201230/model/DestroyInstanceByApiRequest.h
  include/tencentcloud/cdwpg/v20201230/model/InstanceNodeGroup.h
  include/tencentcloud/cdwpg/v20201230/model/CBSSpec.h
  include/tencentcloud/cdwpg/v20201230/model/ModifyInstanceRequest.h
  include/tencentcloud/cdwpg/v20201230/model/InstanceStateInfo.h
  include/tencentcloud/cdwpg/v20201230/model/InstanceInfo.h
  include/tencentcloud/cdwpg/v20201230/model/DescribeInstancesResponse.h
  include/tencentcloud/cdwpg/v20201230/model/ResourceSpecNew.h
  include/tencentcloud/cdwpg/v20201230/model/DescribeInstancesRequest.h
  include/tencentcloud/cdwpg/v20201230/model/CreateInstanceByApiResponse.h
  include/tencentcloud/cdwpg/v20201230/model/DescribeSimpleInstancesResponse.h
  include/tencentcloud/cdwpg/v20201230/model/DescribeInstanceResponse.h
  include/tencentcloud/cdwpg/v20201230/model/DestroyInstanceByApiResponse.h
  include/tencentcloud/cdwpg/v20201230/model/CreateInstanceByApiRequest.h
  include/tencentcloud/cdwpg/v20201230/model/SearchTags.h
  include/tencentcloud/cdwpg/v20201230/model/DescribeInstanceRequest.h
  include/tencentcloud/cdwpg/v20201230/model/Tag.h
  include/tencentcloud/cdwpg/v20201230/model/DescribeInstanceStateResponse.h
  include/tencentcloud/cdwpg/v20201230/model/InstanceSimpleInfoNew.h
  include/tencentcloud/cdwpg/v20201230/model/DescribeSimpleInstancesRequest.h
  )

set(cdwpg_src
  src/v20201230/CdwpgClient.cpp
  src/v20201230/model/ModifyInstanceResponse.cpp
  src/v20201230/model/DescribeInstanceStateRequest.cpp
  src/v20201230/model/ChargeProperties.cpp
  src/v20201230/model/DestroyInstanceByApiRequest.cpp
  src/v20201230/model/InstanceNodeGroup.cpp
  src/v20201230/model/CBSSpec.cpp
  src/v20201230/model/ModifyInstanceRequest.cpp
  src/v20201230/model/InstanceStateInfo.cpp
  src/v20201230/model/InstanceInfo.cpp
  src/v20201230/model/DescribeInstancesResponse.cpp
  src/v20201230/model/ResourceSpecNew.cpp
  src/v20201230/model/DescribeInstancesRequest.cpp
  src/v20201230/model/CreateInstanceByApiResponse.cpp
  src/v20201230/model/DescribeSimpleInstancesResponse.cpp
  src/v20201230/model/DescribeInstanceResponse.cpp
  src/v20201230/model/DestroyInstanceByApiResponse.cpp
  src/v20201230/model/CreateInstanceByApiRequest.cpp
  src/v20201230/model/SearchTags.cpp
  src/v20201230/model/DescribeInstanceRequest.cpp
  src/v20201230/model/Tag.cpp
  src/v20201230/model/DescribeInstanceStateResponse.cpp
  src/v20201230/model/InstanceSimpleInfoNew.cpp
  src/v20201230/model/DescribeSimpleInstancesRequest.cpp
  )

set(cdwpg_include
    include/tencentcloud/cdwpg
  )

add_library(cdwpg ${LIB_TYPE}
  ${cdwpg_public_header}
  ${cdwpg_public_header_model}
  ${cdwpg_src})

set_target_properties(cdwpg
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cdwpg
  )

target_include_directories(cdwpg
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(cdwpg
  core)

#install(FILES ${cdwpg_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cdwpg/v20201230)
#install(FILES ${cdwpg_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cdwpg/v20201230/model)
install(DIRECTORY ${cdwpg_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS cdwpg
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
