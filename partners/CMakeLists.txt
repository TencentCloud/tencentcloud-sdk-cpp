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

set(partners_public_header
  include/tencentcloud/partners/v20180321/PartnersClient.h
  )

set(partners_public_header_model
  include/tencentcloud/partners/v20180321/model/AgentClientElem.h
  include/tencentcloud/partners/v20180321/model/DescribeAgentDealsCacheRequest.h
  include/tencentcloud/partners/v20180321/model/DescribeClientBaseInfoResponse.h
  include/tencentcloud/partners/v20180321/model/DescribeAgentAuditedClientsRequest.h
  include/tencentcloud/partners/v20180321/model/RemovePayRelationForClientRequest.h
  include/tencentcloud/partners/v20180321/model/AgentPayDealsRequest.h
  include/tencentcloud/partners/v20180321/model/DescribeAgentClientGradeResponse.h
  include/tencentcloud/partners/v20180321/model/DescribeAgentDealsByCacheResponse.h
  include/tencentcloud/partners/v20180321/model/RebateInfoElem.h
  include/tencentcloud/partners/v20180321/model/DescribeClientBalanceResponse.h
  include/tencentcloud/partners/v20180321/model/DescribeAgentSelfPayDealsResponse.h
  include/tencentcloud/partners/v20180321/model/DescribeAgentPayDealsV2Response.h
  include/tencentcloud/partners/v20180321/model/AgentTransferMoneyRequest.h
  include/tencentcloud/partners/v20180321/model/DescribeClientBalanceRequest.h
  include/tencentcloud/partners/v20180321/model/DescribeAgentPayDealsV2Request.h
  include/tencentcloud/partners/v20180321/model/ProductInfoElem.h
  include/tencentcloud/partners/v20180321/model/UnbindClientElem.h
  include/tencentcloud/partners/v20180321/model/RemovePayRelationForClientResponse.h
  include/tencentcloud/partners/v20180321/model/DescribeSalesmansRequest.h
  include/tencentcloud/partners/v20180321/model/DescribeClientBaseInfoRequest.h
  include/tencentcloud/partners/v20180321/model/DescribeRebateInfosRequest.h
  include/tencentcloud/partners/v20180321/model/CreatePayRelationForClientResponse.h
  include/tencentcloud/partners/v20180321/model/DescribeAgentAuditedClientsResponse.h
  include/tencentcloud/partners/v20180321/model/DescribeAgentBillsResponse.h
  include/tencentcloud/partners/v20180321/model/DescribeAgentPayDealsRequest.h
  include/tencentcloud/partners/v20180321/model/AuditApplyClientRequest.h
  include/tencentcloud/partners/v20180321/model/ModifyClientRemarkResponse.h
  include/tencentcloud/partners/v20180321/model/DescribeAgentClientsResponse.h
  include/tencentcloud/partners/v20180321/model/AgentDealNewElem.h
  include/tencentcloud/partners/v20180321/model/DescribeAgentClientsRequest.h
  include/tencentcloud/partners/v20180321/model/DescribeAgentSelfPayDealsV2Request.h
  include/tencentcloud/partners/v20180321/model/DescribeSalesmansResponse.h
  include/tencentcloud/partners/v20180321/model/AgentAuditedClient.h
  include/tencentcloud/partners/v20180321/model/DescribeUnbindClientListRequest.h
  include/tencentcloud/partners/v20180321/model/DescribeRebateInfosResponse.h
  include/tencentcloud/partners/v20180321/model/DescribeAgentPayDealsResponse.h
  include/tencentcloud/partners/v20180321/model/DealGoodsPriceElem.h
  include/tencentcloud/partners/v20180321/model/DescribeAgentDealsByCacheRequest.h
  include/tencentcloud/partners/v20180321/model/DescribeAgentSelfPayDealsRequest.h
  include/tencentcloud/partners/v20180321/model/ModifyClientRemarkRequest.h
  include/tencentcloud/partners/v20180321/model/CreatePayRelationForClientRequest.h
  include/tencentcloud/partners/v20180321/model/AgentTransferMoneyResponse.h
  include/tencentcloud/partners/v20180321/model/DescribeUnbindClientListResponse.h
  include/tencentcloud/partners/v20180321/model/DescribeAgentSelfPayDealsV2Response.h
  include/tencentcloud/partners/v20180321/model/AgentBillElem.h
  include/tencentcloud/partners/v20180321/model/AuditApplyClientResponse.h
  include/tencentcloud/partners/v20180321/model/ClientBaseElem.h
  include/tencentcloud/partners/v20180321/model/DescribeAgentBillsRequest.h
  include/tencentcloud/partners/v20180321/model/AgentPayDealsResponse.h
  include/tencentcloud/partners/v20180321/model/AgentDealElem.h
  include/tencentcloud/partners/v20180321/model/AgentSalesmanElem.h
  include/tencentcloud/partners/v20180321/model/DealGoodsPriceNewElem.h
  include/tencentcloud/partners/v20180321/model/DescribeAgentDealsCacheResponse.h
  include/tencentcloud/partners/v20180321/model/DescribeAgentClientGradeRequest.h
  )

set(partners_src
  src/v20180321/PartnersClient.cpp
  src/v20180321/model/AgentClientElem.cpp
  src/v20180321/model/DescribeAgentDealsCacheRequest.cpp
  src/v20180321/model/DescribeClientBaseInfoResponse.cpp
  src/v20180321/model/DescribeAgentAuditedClientsRequest.cpp
  src/v20180321/model/RemovePayRelationForClientRequest.cpp
  src/v20180321/model/AgentPayDealsRequest.cpp
  src/v20180321/model/DescribeAgentClientGradeResponse.cpp
  src/v20180321/model/DescribeAgentDealsByCacheResponse.cpp
  src/v20180321/model/RebateInfoElem.cpp
  src/v20180321/model/DescribeClientBalanceResponse.cpp
  src/v20180321/model/DescribeAgentSelfPayDealsResponse.cpp
  src/v20180321/model/DescribeAgentPayDealsV2Response.cpp
  src/v20180321/model/AgentTransferMoneyRequest.cpp
  src/v20180321/model/DescribeClientBalanceRequest.cpp
  src/v20180321/model/DescribeAgentPayDealsV2Request.cpp
  src/v20180321/model/ProductInfoElem.cpp
  src/v20180321/model/UnbindClientElem.cpp
  src/v20180321/model/RemovePayRelationForClientResponse.cpp
  src/v20180321/model/DescribeSalesmansRequest.cpp
  src/v20180321/model/DescribeClientBaseInfoRequest.cpp
  src/v20180321/model/DescribeRebateInfosRequest.cpp
  src/v20180321/model/CreatePayRelationForClientResponse.cpp
  src/v20180321/model/DescribeAgentAuditedClientsResponse.cpp
  src/v20180321/model/DescribeAgentBillsResponse.cpp
  src/v20180321/model/DescribeAgentPayDealsRequest.cpp
  src/v20180321/model/AuditApplyClientRequest.cpp
  src/v20180321/model/ModifyClientRemarkResponse.cpp
  src/v20180321/model/DescribeAgentClientsResponse.cpp
  src/v20180321/model/AgentDealNewElem.cpp
  src/v20180321/model/DescribeAgentClientsRequest.cpp
  src/v20180321/model/DescribeAgentSelfPayDealsV2Request.cpp
  src/v20180321/model/DescribeSalesmansResponse.cpp
  src/v20180321/model/AgentAuditedClient.cpp
  src/v20180321/model/DescribeUnbindClientListRequest.cpp
  src/v20180321/model/DescribeRebateInfosResponse.cpp
  src/v20180321/model/DescribeAgentPayDealsResponse.cpp
  src/v20180321/model/DealGoodsPriceElem.cpp
  src/v20180321/model/DescribeAgentDealsByCacheRequest.cpp
  src/v20180321/model/DescribeAgentSelfPayDealsRequest.cpp
  src/v20180321/model/ModifyClientRemarkRequest.cpp
  src/v20180321/model/CreatePayRelationForClientRequest.cpp
  src/v20180321/model/AgentTransferMoneyResponse.cpp
  src/v20180321/model/DescribeUnbindClientListResponse.cpp
  src/v20180321/model/DescribeAgentSelfPayDealsV2Response.cpp
  src/v20180321/model/AgentBillElem.cpp
  src/v20180321/model/AuditApplyClientResponse.cpp
  src/v20180321/model/ClientBaseElem.cpp
  src/v20180321/model/DescribeAgentBillsRequest.cpp
  src/v20180321/model/AgentPayDealsResponse.cpp
  src/v20180321/model/AgentDealElem.cpp
  src/v20180321/model/AgentSalesmanElem.cpp
  src/v20180321/model/DealGoodsPriceNewElem.cpp
  src/v20180321/model/DescribeAgentDealsCacheResponse.cpp
  src/v20180321/model/DescribeAgentClientGradeRequest.cpp
  )

set(partners_include
    include/tencentcloud/partners
  )

add_library(partners ${LIB_TYPE}
  ${partners_public_header}
  ${partners_public_header_model}
  ${partners_src})

set_target_properties(partners
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}partners
  )

target_include_directories(partners
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(partners
  core)

#install(FILES ${partners_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/partners/v20180321)
#install(FILES ${partners_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/partners/v20180321/model)
install(DIRECTORY ${partners_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS partners
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
