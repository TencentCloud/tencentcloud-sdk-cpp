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

set(cds_public_header
  include/tencentcloud/cds/v20180420/CdsClient.h
  )

set(cds_public_header_model
  include/tencentcloud/cds/v20180420/model/ModifyDbauditInstancesRenewFlagResponse.h
  include/tencentcloud/cds/v20180420/model/DescribeDbauditInstanceTypeResponse.h
  include/tencentcloud/cds/v20180420/model/InquiryPriceDbauditInstanceResponse.h
  include/tencentcloud/cds/v20180420/model/CdsAuditInstance.h
  include/tencentcloud/cds/v20180420/model/ModifyDbauditInstancesRenewFlagRequest.h
  include/tencentcloud/cds/v20180420/model/DescribeDbauditUsedRegionsResponse.h
  include/tencentcloud/cds/v20180420/model/DescribeDbauditInstancesRequest.h
  include/tencentcloud/cds/v20180420/model/DescribeDbauditInstanceTypeRequest.h
  include/tencentcloud/cds/v20180420/model/RegionInfo.h
  include/tencentcloud/cds/v20180420/model/DescribeDbauditInstancesResponse.h
  include/tencentcloud/cds/v20180420/model/DbauditTypesInfo.h
  include/tencentcloud/cds/v20180420/model/DescribeDbauditUsedRegionsRequest.h
  include/tencentcloud/cds/v20180420/model/InquiryPriceDbauditInstanceRequest.h
  )

set(cds_src
  src/v20180420/CdsClient.cpp
  src/v20180420/model/ModifyDbauditInstancesRenewFlagResponse.cpp
  src/v20180420/model/DescribeDbauditInstanceTypeResponse.cpp
  src/v20180420/model/InquiryPriceDbauditInstanceResponse.cpp
  src/v20180420/model/CdsAuditInstance.cpp
  src/v20180420/model/ModifyDbauditInstancesRenewFlagRequest.cpp
  src/v20180420/model/DescribeDbauditUsedRegionsResponse.cpp
  src/v20180420/model/DescribeDbauditInstancesRequest.cpp
  src/v20180420/model/DescribeDbauditInstanceTypeRequest.cpp
  src/v20180420/model/RegionInfo.cpp
  src/v20180420/model/DescribeDbauditInstancesResponse.cpp
  src/v20180420/model/DbauditTypesInfo.cpp
  src/v20180420/model/DescribeDbauditUsedRegionsRequest.cpp
  src/v20180420/model/InquiryPriceDbauditInstanceRequest.cpp
  )

set(cds_include
    include/tencentcloud/cds
  )

add_library(cds ${LIB_TYPE}
  ${cds_public_header}
  ${cds_public_header_model}
  ${cds_src})

set_target_properties(cds
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cds
  )

target_include_directories(cds
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(cds
  core)

#install(FILES ${cds_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cds/v20180420)
#install(FILES ${cds_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cds/v20180420/model)
install(DIRECTORY ${cds_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS cds
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
