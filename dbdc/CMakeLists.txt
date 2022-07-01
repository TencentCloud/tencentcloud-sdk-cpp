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

set(dbdc_public_header
  include/tencentcloud/dbdc/v20201029/DbdcClient.h
  )

set(dbdc_public_header_model
  include/tencentcloud/dbdc/v20201029/model/InstanceDetail.h
  include/tencentcloud/dbdc/v20201029/model/DescribeInstanceDetailResponse.h
  include/tencentcloud/dbdc/v20201029/model/DescribeInstanceDetail.h
  include/tencentcloud/dbdc/v20201029/model/DescribeDBInstancesRequest.h
  include/tencentcloud/dbdc/v20201029/model/DescribeInstanceDetailRequest.h
  include/tencentcloud/dbdc/v20201029/model/HostDetail.h
  include/tencentcloud/dbdc/v20201029/model/InstanceDeviceInfo.h
  include/tencentcloud/dbdc/v20201029/model/DescribeInstancesRequest.h
  include/tencentcloud/dbdc/v20201029/model/DeviceInfo.h
  include/tencentcloud/dbdc/v20201029/model/DBInstanceDetail.h
  include/tencentcloud/dbdc/v20201029/model/ModifyInstanceNameResponse.h
  include/tencentcloud/dbdc/v20201029/model/InstanceExpand.h
  include/tencentcloud/dbdc/v20201029/model/DescribeHostListResponse.h
  include/tencentcloud/dbdc/v20201029/model/DescribeInstanceListResponse.h
  include/tencentcloud/dbdc/v20201029/model/DescribeDBInstancesResponse.h
  include/tencentcloud/dbdc/v20201029/model/DescribeHostListRequest.h
  include/tencentcloud/dbdc/v20201029/model/DescribeInstancesResponse.h
  include/tencentcloud/dbdc/v20201029/model/DescribeInstanceListRequest.h
  include/tencentcloud/dbdc/v20201029/model/ModifyInstanceNameRequest.h
  )

set(dbdc_src
  src/v20201029/DbdcClient.cpp
  src/v20201029/model/InstanceDetail.cpp
  src/v20201029/model/DescribeInstanceDetailResponse.cpp
  src/v20201029/model/DescribeInstanceDetail.cpp
  src/v20201029/model/DescribeDBInstancesRequest.cpp
  src/v20201029/model/DescribeInstanceDetailRequest.cpp
  src/v20201029/model/HostDetail.cpp
  src/v20201029/model/InstanceDeviceInfo.cpp
  src/v20201029/model/DescribeInstancesRequest.cpp
  src/v20201029/model/DeviceInfo.cpp
  src/v20201029/model/DBInstanceDetail.cpp
  src/v20201029/model/ModifyInstanceNameResponse.cpp
  src/v20201029/model/InstanceExpand.cpp
  src/v20201029/model/DescribeHostListResponse.cpp
  src/v20201029/model/DescribeInstanceListResponse.cpp
  src/v20201029/model/DescribeDBInstancesResponse.cpp
  src/v20201029/model/DescribeHostListRequest.cpp
  src/v20201029/model/DescribeInstancesResponse.cpp
  src/v20201029/model/DescribeInstanceListRequest.cpp
  src/v20201029/model/ModifyInstanceNameRequest.cpp
  )

set(dbdc_include
    include/tencentcloud/dbdc
  )

add_library(dbdc ${LIB_TYPE}
  ${dbdc_public_header}
  ${dbdc_public_header_model}
  ${dbdc_src})

set_target_properties(dbdc
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}dbdc
  )

target_include_directories(dbdc
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(dbdc
  core)

#install(FILES ${dbdc_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/dbdc/v20201029)
#install(FILES ${dbdc_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/dbdc/v20201029/model)
install(DIRECTORY ${dbdc_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS dbdc
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
