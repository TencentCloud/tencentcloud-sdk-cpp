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

set(bmeip_public_header
  include/tencentcloud/bmeip/v20180625/BmeipClient.h
  )

set(bmeip_public_header_model
  include/tencentcloud/bmeip/v20180625/model/UnbindEipAclsRequest.h
  include/tencentcloud/bmeip/v20180625/model/EipAclMap.h
  include/tencentcloud/bmeip/v20180625/model/ModifyEipChargeResponse.h
  include/tencentcloud/bmeip/v20180625/model/ModifyEipAclResponse.h
  include/tencentcloud/bmeip/v20180625/model/DescribeEipsResponse.h
  include/tencentcloud/bmeip/v20180625/model/ModifyEipAclRequest.h
  include/tencentcloud/bmeip/v20180625/model/UnbindVpcIpRequest.h
  include/tencentcloud/bmeip/v20180625/model/BindRsResponse.h
  include/tencentcloud/bmeip/v20180625/model/BindEipAclsResponse.h
  include/tencentcloud/bmeip/v20180625/model/CreateEipRequest.h
  include/tencentcloud/bmeip/v20180625/model/EipAclRule.h
  include/tencentcloud/bmeip/v20180625/model/UnbindHostedResponse.h
  include/tencentcloud/bmeip/v20180625/model/DeleteEipAclRequest.h
  include/tencentcloud/bmeip/v20180625/model/EipInfo.h
  include/tencentcloud/bmeip/v20180625/model/UnbindEipAclsResponse.h
  include/tencentcloud/bmeip/v20180625/model/DescribeEipAclsResponse.h
  include/tencentcloud/bmeip/v20180625/model/ModifyEipNameResponse.h
  include/tencentcloud/bmeip/v20180625/model/DescribeEipQuotaResponse.h
  include/tencentcloud/bmeip/v20180625/model/UnbindRsResponse.h
  include/tencentcloud/bmeip/v20180625/model/BindRsRequest.h
  include/tencentcloud/bmeip/v20180625/model/UnbindHostedRequest.h
  include/tencentcloud/bmeip/v20180625/model/UnbindRsListResponse.h
  include/tencentcloud/bmeip/v20180625/model/BindVpcIpResponse.h
  include/tencentcloud/bmeip/v20180625/model/DescribeEipsRequest.h
  include/tencentcloud/bmeip/v20180625/model/ModifyEipNameRequest.h
  include/tencentcloud/bmeip/v20180625/model/DeleteEipResponse.h
  include/tencentcloud/bmeip/v20180625/model/BindHostedResponse.h
  include/tencentcloud/bmeip/v20180625/model/BindVpcIpRequest.h
  include/tencentcloud/bmeip/v20180625/model/CreateEipAclRequest.h
  include/tencentcloud/bmeip/v20180625/model/EipAcl.h
  include/tencentcloud/bmeip/v20180625/model/CreateEipResponse.h
  include/tencentcloud/bmeip/v20180625/model/BindHostedRequest.h
  include/tencentcloud/bmeip/v20180625/model/DescribeEipTaskResponse.h
  include/tencentcloud/bmeip/v20180625/model/ModifyEipChargeRequest.h
  include/tencentcloud/bmeip/v20180625/model/DescribeEipQuotaRequest.h
  include/tencentcloud/bmeip/v20180625/model/DeleteEipRequest.h
  include/tencentcloud/bmeip/v20180625/model/EipRsMap.h
  include/tencentcloud/bmeip/v20180625/model/UnbindRsListRequest.h
  include/tencentcloud/bmeip/v20180625/model/DeleteEipAclResponse.h
  include/tencentcloud/bmeip/v20180625/model/DescribeEipAclsRequest.h
  include/tencentcloud/bmeip/v20180625/model/BindEipAclsRequest.h
  include/tencentcloud/bmeip/v20180625/model/DescribeEipTaskRequest.h
  include/tencentcloud/bmeip/v20180625/model/UnbindRsRequest.h
  include/tencentcloud/bmeip/v20180625/model/UnbindVpcIpResponse.h
  include/tencentcloud/bmeip/v20180625/model/CreateEipAclResponse.h
  )

set(bmeip_src
  src/v20180625/BmeipClient.cpp
  src/v20180625/model/UnbindEipAclsRequest.cpp
  src/v20180625/model/EipAclMap.cpp
  src/v20180625/model/ModifyEipChargeResponse.cpp
  src/v20180625/model/ModifyEipAclResponse.cpp
  src/v20180625/model/DescribeEipsResponse.cpp
  src/v20180625/model/ModifyEipAclRequest.cpp
  src/v20180625/model/UnbindVpcIpRequest.cpp
  src/v20180625/model/BindRsResponse.cpp
  src/v20180625/model/BindEipAclsResponse.cpp
  src/v20180625/model/CreateEipRequest.cpp
  src/v20180625/model/EipAclRule.cpp
  src/v20180625/model/UnbindHostedResponse.cpp
  src/v20180625/model/DeleteEipAclRequest.cpp
  src/v20180625/model/EipInfo.cpp
  src/v20180625/model/UnbindEipAclsResponse.cpp
  src/v20180625/model/DescribeEipAclsResponse.cpp
  src/v20180625/model/ModifyEipNameResponse.cpp
  src/v20180625/model/DescribeEipQuotaResponse.cpp
  src/v20180625/model/UnbindRsResponse.cpp
  src/v20180625/model/BindRsRequest.cpp
  src/v20180625/model/UnbindHostedRequest.cpp
  src/v20180625/model/UnbindRsListResponse.cpp
  src/v20180625/model/BindVpcIpResponse.cpp
  src/v20180625/model/DescribeEipsRequest.cpp
  src/v20180625/model/ModifyEipNameRequest.cpp
  src/v20180625/model/DeleteEipResponse.cpp
  src/v20180625/model/BindHostedResponse.cpp
  src/v20180625/model/BindVpcIpRequest.cpp
  src/v20180625/model/CreateEipAclRequest.cpp
  src/v20180625/model/EipAcl.cpp
  src/v20180625/model/CreateEipResponse.cpp
  src/v20180625/model/BindHostedRequest.cpp
  src/v20180625/model/DescribeEipTaskResponse.cpp
  src/v20180625/model/ModifyEipChargeRequest.cpp
  src/v20180625/model/DescribeEipQuotaRequest.cpp
  src/v20180625/model/DeleteEipRequest.cpp
  src/v20180625/model/EipRsMap.cpp
  src/v20180625/model/UnbindRsListRequest.cpp
  src/v20180625/model/DeleteEipAclResponse.cpp
  src/v20180625/model/DescribeEipAclsRequest.cpp
  src/v20180625/model/BindEipAclsRequest.cpp
  src/v20180625/model/DescribeEipTaskRequest.cpp
  src/v20180625/model/UnbindRsRequest.cpp
  src/v20180625/model/UnbindVpcIpResponse.cpp
  src/v20180625/model/CreateEipAclResponse.cpp
  )

set(bmeip_include
    include/tencentcloud/bmeip
  )

add_library(bmeip ${LIB_TYPE}
  ${bmeip_public_header}
  ${bmeip_public_header_model}
  ${bmeip_src})

set_target_properties(bmeip
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}bmeip
  )

target_include_directories(bmeip
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(bmeip
  core)

#install(FILES ${bmeip_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/bmeip/v20180625)
#install(FILES ${bmeip_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/bmeip/v20180625/model)
install(DIRECTORY ${bmeip_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS bmeip
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
