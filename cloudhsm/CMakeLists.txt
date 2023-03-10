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

set(cloudhsm_public_header
  include/tencentcloud/cloudhsm/v20191112/CloudhsmClient.h
  )

set(cloudhsm_public_header_model
  include/tencentcloud/cloudhsm/v20191112/model/Subnet.h
  include/tencentcloud/cloudhsm/v20191112/model/DescribeSubnetRequest.h
  include/tencentcloud/cloudhsm/v20191112/model/DescribeVsmsResponse.h
  include/tencentcloud/cloudhsm/v20191112/model/DescribeSupportedHsmResponse.h
  include/tencentcloud/cloudhsm/v20191112/model/InquiryPriceBuyVsmRequest.h
  include/tencentcloud/cloudhsm/v20191112/model/DescribeVpcResponse.h
  include/tencentcloud/cloudhsm/v20191112/model/ModifyVsmAttributesRequest.h
  include/tencentcloud/cloudhsm/v20191112/model/GetAlarmEventResponse.h
  include/tencentcloud/cloudhsm/v20191112/model/ModifyAlarmEventRequest.h
  include/tencentcloud/cloudhsm/v20191112/model/DescribeSubnetResponse.h
  include/tencentcloud/cloudhsm/v20191112/model/GetVsmMonitorInfoResponse.h
  include/tencentcloud/cloudhsm/v20191112/model/VsmInfo.h
  include/tencentcloud/cloudhsm/v20191112/model/DescribeSupportedHsmRequest.h
  include/tencentcloud/cloudhsm/v20191112/model/GetAlarmEventRequest.h
  include/tencentcloud/cloudhsm/v20191112/model/DescribeHSMByVpcIdResponse.h
  include/tencentcloud/cloudhsm/v20191112/model/DescribeUsgRuleResponse.h
  include/tencentcloud/cloudhsm/v20191112/model/Tag.h
  include/tencentcloud/cloudhsm/v20191112/model/ResourceInfo.h
  include/tencentcloud/cloudhsm/v20191112/model/DescribeVpcRequest.h
  include/tencentcloud/cloudhsm/v20191112/model/AlarmPolicy.h
  include/tencentcloud/cloudhsm/v20191112/model/DescribeUsgRequest.h
  include/tencentcloud/cloudhsm/v20191112/model/HsmInfo.h
  include/tencentcloud/cloudhsm/v20191112/model/Vpc.h
  include/tencentcloud/cloudhsm/v20191112/model/DescribeVsmAttributesResponse.h
  include/tencentcloud/cloudhsm/v20191112/model/TagFilter.h
  include/tencentcloud/cloudhsm/v20191112/model/DescribeHSMByVpcIdRequest.h
  include/tencentcloud/cloudhsm/v20191112/model/ModifyAlarmEventResponse.h
  include/tencentcloud/cloudhsm/v20191112/model/UsgRuleDetail.h
  include/tencentcloud/cloudhsm/v20191112/model/InquiryPriceBuyVsmResponse.h
  include/tencentcloud/cloudhsm/v20191112/model/SgUnit.h
  include/tencentcloud/cloudhsm/v20191112/model/DescribeHSMBySubnetIdResponse.h
  include/tencentcloud/cloudhsm/v20191112/model/GetVsmMonitorInfoRequest.h
  include/tencentcloud/cloudhsm/v20191112/model/DescribeUsgResponse.h
  include/tencentcloud/cloudhsm/v20191112/model/DescribeHSMBySubnetIdRequest.h
  include/tencentcloud/cloudhsm/v20191112/model/DescribeVsmsRequest.h
  include/tencentcloud/cloudhsm/v20191112/model/DeviceInfo.h
  include/tencentcloud/cloudhsm/v20191112/model/DescribeUsgRuleRequest.h
  include/tencentcloud/cloudhsm/v20191112/model/ModifyVsmAttributesResponse.h
  include/tencentcloud/cloudhsm/v20191112/model/DescribeVsmAttributesRequest.h
  include/tencentcloud/cloudhsm/v20191112/model/UsgPolicy.h
  )

set(cloudhsm_src
  src/v20191112/CloudhsmClient.cpp
  src/v20191112/model/Subnet.cpp
  src/v20191112/model/DescribeSubnetRequest.cpp
  src/v20191112/model/DescribeVsmsResponse.cpp
  src/v20191112/model/DescribeSupportedHsmResponse.cpp
  src/v20191112/model/InquiryPriceBuyVsmRequest.cpp
  src/v20191112/model/DescribeVpcResponse.cpp
  src/v20191112/model/ModifyVsmAttributesRequest.cpp
  src/v20191112/model/GetAlarmEventResponse.cpp
  src/v20191112/model/ModifyAlarmEventRequest.cpp
  src/v20191112/model/DescribeSubnetResponse.cpp
  src/v20191112/model/GetVsmMonitorInfoResponse.cpp
  src/v20191112/model/VsmInfo.cpp
  src/v20191112/model/DescribeSupportedHsmRequest.cpp
  src/v20191112/model/GetAlarmEventRequest.cpp
  src/v20191112/model/DescribeHSMByVpcIdResponse.cpp
  src/v20191112/model/DescribeUsgRuleResponse.cpp
  src/v20191112/model/Tag.cpp
  src/v20191112/model/ResourceInfo.cpp
  src/v20191112/model/DescribeVpcRequest.cpp
  src/v20191112/model/AlarmPolicy.cpp
  src/v20191112/model/DescribeUsgRequest.cpp
  src/v20191112/model/HsmInfo.cpp
  src/v20191112/model/Vpc.cpp
  src/v20191112/model/DescribeVsmAttributesResponse.cpp
  src/v20191112/model/TagFilter.cpp
  src/v20191112/model/DescribeHSMByVpcIdRequest.cpp
  src/v20191112/model/ModifyAlarmEventResponse.cpp
  src/v20191112/model/UsgRuleDetail.cpp
  src/v20191112/model/InquiryPriceBuyVsmResponse.cpp
  src/v20191112/model/SgUnit.cpp
  src/v20191112/model/DescribeHSMBySubnetIdResponse.cpp
  src/v20191112/model/GetVsmMonitorInfoRequest.cpp
  src/v20191112/model/DescribeUsgResponse.cpp
  src/v20191112/model/DescribeHSMBySubnetIdRequest.cpp
  src/v20191112/model/DescribeVsmsRequest.cpp
  src/v20191112/model/DeviceInfo.cpp
  src/v20191112/model/DescribeUsgRuleRequest.cpp
  src/v20191112/model/ModifyVsmAttributesResponse.cpp
  src/v20191112/model/DescribeVsmAttributesRequest.cpp
  src/v20191112/model/UsgPolicy.cpp
  )

set(cloudhsm_include
    include/tencentcloud/cloudhsm
  )

add_library(cloudhsm ${LIB_TYPE}
  ${cloudhsm_public_header}
  ${cloudhsm_public_header_model}
  ${cloudhsm_src})

set_target_properties(cloudhsm
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cloudhsm
  )

target_include_directories(cloudhsm
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(cloudhsm
  core)

#install(FILES ${cloudhsm_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cloudhsm/v20191112)
#install(FILES ${cloudhsm_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cloudhsm/v20191112/model)
install(DIRECTORY ${cloudhsm_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS cloudhsm
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
