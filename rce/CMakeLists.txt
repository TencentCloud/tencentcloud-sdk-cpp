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

set(rce_public_header
  include/tencentcloud/rce/v20201103/RceClient.h
  )

set(rce_public_header_model
  include/tencentcloud/rce/v20201103/model/DataContentInfo.h
  include/tencentcloud/rce/v20201103/model/OutputDescribeNameListFrontFix.h
  include/tencentcloud/rce/v20201103/model/DescribeNameListResponse.h
  include/tencentcloud/rce/v20201103/model/OutputDescribeDataListFront.h
  include/tencentcloud/rce/v20201103/model/InputCreateNameListFront.h
  include/tencentcloud/rce/v20201103/model/ManageMarketingRiskRequest.h
  include/tencentcloud/rce/v20201103/model/InputDeleteNameListFront.h
  include/tencentcloud/rce/v20201103/model/WeChatAccountInfo.h
  include/tencentcloud/rce/v20201103/model/InputDescribeNameListFront.h
  include/tencentcloud/rce/v20201103/model/AccountInfo.h
  include/tencentcloud/rce/v20201103/model/ModifyNameListDataRequest.h
  include/tencentcloud/rce/v20201103/model/OuntputDescribeDataListInfo.h
  include/tencentcloud/rce/v20201103/model/InputDescribeNameListDetail.h
  include/tencentcloud/rce/v20201103/model/OutputManageMarketingRiskValue.h
  include/tencentcloud/rce/v20201103/model/CreateNameListRequest.h
  include/tencentcloud/rce/v20201103/model/DeleteNameListDataResponse.h
  include/tencentcloud/rce/v20201103/model/DescribeUserUsageCntRequest.h
  include/tencentcloud/rce/v20201103/model/ImportNameListDataResponse.h
  include/tencentcloud/rce/v20201103/model/DeleteNameListRequest.h
  include/tencentcloud/rce/v20201103/model/OutputDescribeUserUsageCnt.h
  include/tencentcloud/rce/v20201103/model/DescribeNameListDetailResponse.h
  include/tencentcloud/rce/v20201103/model/OutputDescribeNameListInfo.h
  include/tencentcloud/rce/v20201103/model/ManageMarketingRiskResponse.h
  include/tencentcloud/rce/v20201103/model/OutputDescribeNameListFrontFixListData.h
  include/tencentcloud/rce/v20201103/model/OutputDeleteNameListData.h
  include/tencentcloud/rce/v20201103/model/OutputModifyNameFront.h
  include/tencentcloud/rce/v20201103/model/InputDetails.h
  include/tencentcloud/rce/v20201103/model/ModifyNameListRequest.h
  include/tencentcloud/rce/v20201103/model/OutputModifyNameListFront.h
  include/tencentcloud/rce/v20201103/model/DescribeNameListDetailRequest.h
  include/tencentcloud/rce/v20201103/model/DescribeNameListDataListResponse.h
  include/tencentcloud/rce/v20201103/model/DeleteNameListDataRequest.h
  include/tencentcloud/rce/v20201103/model/InputModifyNameListDataFront.h
  include/tencentcloud/rce/v20201103/model/OutputManageMarketingRisk.h
  include/tencentcloud/rce/v20201103/model/InputDescribeDataListFront.h
  include/tencentcloud/rce/v20201103/model/InputImportNameListDataFront.h
  include/tencentcloud/rce/v20201103/model/DescribeNameListDataListRequest.h
  include/tencentcloud/rce/v20201103/model/InputCryptoManageMarketingRisk.h
  include/tencentcloud/rce/v20201103/model/DescribeNameListRequest.h
  include/tencentcloud/rce/v20201103/model/OutputImportNameListDataFront.h
  include/tencentcloud/rce/v20201103/model/InputModifyNameFront.h
  include/tencentcloud/rce/v20201103/model/SponsorInfo.h
  include/tencentcloud/rce/v20201103/model/CreateNameListResponse.h
  include/tencentcloud/rce/v20201103/model/OtherAccountInfo.h
  include/tencentcloud/rce/v20201103/model/OutputDescribeDataListFrontData.h
  include/tencentcloud/rce/v20201103/model/OutputDescribeNameListDetailFront.h
  include/tencentcloud/rce/v20201103/model/OutputDescribeNameListDetail.h
  include/tencentcloud/rce/v20201103/model/OnlineScamInfo.h
  include/tencentcloud/rce/v20201103/model/QQAccountInfo.h
  include/tencentcloud/rce/v20201103/model/ModifyNameListDataResponse.h
  include/tencentcloud/rce/v20201103/model/InputManageMarketingRisk.h
  include/tencentcloud/rce/v20201103/model/OutputCreateNameListFront.h
  include/tencentcloud/rce/v20201103/model/OutputDescribeUserUsageCntData.h
  include/tencentcloud/rce/v20201103/model/ModifyNameListResponse.h
  include/tencentcloud/rce/v20201103/model/OutputDeleteNameListFront.h
  include/tencentcloud/rce/v20201103/model/InputDeleteNameListData.h
  include/tencentcloud/rce/v20201103/model/ImportNameListDataRequest.h
  include/tencentcloud/rce/v20201103/model/DataAuthorizationInfo.h
  include/tencentcloud/rce/v20201103/model/DeleteNameListResponse.h
  include/tencentcloud/rce/v20201103/model/InputModifyNameListDataFrontListData.h
  include/tencentcloud/rce/v20201103/model/DescribeUserUsageCntResponse.h
  )

set(rce_src
  src/v20201103/RceClient.cpp
  src/v20201103/model/DataContentInfo.cpp
  src/v20201103/model/OutputDescribeNameListFrontFix.cpp
  src/v20201103/model/DescribeNameListResponse.cpp
  src/v20201103/model/OutputDescribeDataListFront.cpp
  src/v20201103/model/InputCreateNameListFront.cpp
  src/v20201103/model/ManageMarketingRiskRequest.cpp
  src/v20201103/model/InputDeleteNameListFront.cpp
  src/v20201103/model/WeChatAccountInfo.cpp
  src/v20201103/model/InputDescribeNameListFront.cpp
  src/v20201103/model/AccountInfo.cpp
  src/v20201103/model/ModifyNameListDataRequest.cpp
  src/v20201103/model/OuntputDescribeDataListInfo.cpp
  src/v20201103/model/InputDescribeNameListDetail.cpp
  src/v20201103/model/OutputManageMarketingRiskValue.cpp
  src/v20201103/model/CreateNameListRequest.cpp
  src/v20201103/model/DeleteNameListDataResponse.cpp
  src/v20201103/model/DescribeUserUsageCntRequest.cpp
  src/v20201103/model/ImportNameListDataResponse.cpp
  src/v20201103/model/DeleteNameListRequest.cpp
  src/v20201103/model/OutputDescribeUserUsageCnt.cpp
  src/v20201103/model/DescribeNameListDetailResponse.cpp
  src/v20201103/model/OutputDescribeNameListInfo.cpp
  src/v20201103/model/ManageMarketingRiskResponse.cpp
  src/v20201103/model/OutputDescribeNameListFrontFixListData.cpp
  src/v20201103/model/OutputDeleteNameListData.cpp
  src/v20201103/model/OutputModifyNameFront.cpp
  src/v20201103/model/InputDetails.cpp
  src/v20201103/model/ModifyNameListRequest.cpp
  src/v20201103/model/OutputModifyNameListFront.cpp
  src/v20201103/model/DescribeNameListDetailRequest.cpp
  src/v20201103/model/DescribeNameListDataListResponse.cpp
  src/v20201103/model/DeleteNameListDataRequest.cpp
  src/v20201103/model/InputModifyNameListDataFront.cpp
  src/v20201103/model/OutputManageMarketingRisk.cpp
  src/v20201103/model/InputDescribeDataListFront.cpp
  src/v20201103/model/InputImportNameListDataFront.cpp
  src/v20201103/model/DescribeNameListDataListRequest.cpp
  src/v20201103/model/InputCryptoManageMarketingRisk.cpp
  src/v20201103/model/DescribeNameListRequest.cpp
  src/v20201103/model/OutputImportNameListDataFront.cpp
  src/v20201103/model/InputModifyNameFront.cpp
  src/v20201103/model/SponsorInfo.cpp
  src/v20201103/model/CreateNameListResponse.cpp
  src/v20201103/model/OtherAccountInfo.cpp
  src/v20201103/model/OutputDescribeDataListFrontData.cpp
  src/v20201103/model/OutputDescribeNameListDetailFront.cpp
  src/v20201103/model/OutputDescribeNameListDetail.cpp
  src/v20201103/model/OnlineScamInfo.cpp
  src/v20201103/model/QQAccountInfo.cpp
  src/v20201103/model/ModifyNameListDataResponse.cpp
  src/v20201103/model/InputManageMarketingRisk.cpp
  src/v20201103/model/OutputCreateNameListFront.cpp
  src/v20201103/model/OutputDescribeUserUsageCntData.cpp
  src/v20201103/model/ModifyNameListResponse.cpp
  src/v20201103/model/OutputDeleteNameListFront.cpp
  src/v20201103/model/InputDeleteNameListData.cpp
  src/v20201103/model/ImportNameListDataRequest.cpp
  src/v20201103/model/DataAuthorizationInfo.cpp
  src/v20201103/model/DeleteNameListResponse.cpp
  src/v20201103/model/InputModifyNameListDataFrontListData.cpp
  src/v20201103/model/DescribeUserUsageCntResponse.cpp
  )

set(rce_include
    include/tencentcloud/rce
  )

add_library(rce ${LIB_TYPE}
  ${rce_public_header}
  ${rce_public_header_model}
  ${rce_src})

set_target_properties(rce
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}rce
  )

target_include_directories(rce
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(rce
  core)

#install(FILES ${rce_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/rce/v20201103)
#install(FILES ${rce_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/rce/v20201103/model)
install(DIRECTORY ${rce_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS rce
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
