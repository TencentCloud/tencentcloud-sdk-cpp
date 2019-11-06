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

set(tbaas_public_header
  include/tencentcloud/tbaas/v20180416/TbaasClient.h
  )

set(tbaas_public_header_model
  include/tencentcloud/tbaas/v20180416/model/QueryRequest.h
  include/tencentcloud/tbaas/v20180416/model/SendTransactionHandlerResponse.h
  include/tencentcloud/tbaas/v20180416/model/ApplyUserCertRequest.h
  include/tencentcloud/tbaas/v20180416/model/GetTransListHandlerResponse.h
  include/tencentcloud/tbaas/v20180416/model/ApplyUserCertResponse.h
  include/tencentcloud/tbaas/v20180416/model/GetLatesdTransactionListRequest.h
  include/tencentcloud/tbaas/v20180416/model/InvokeResponse.h
  include/tencentcloud/tbaas/v20180416/model/DownloadUserCertResponse.h
  include/tencentcloud/tbaas/v20180416/model/InvokeRequest.h
  include/tencentcloud/tbaas/v20180416/model/GetBlockListResponse.h
  include/tencentcloud/tbaas/v20180416/model/SrvInvokeRequest.h
  include/tencentcloud/tbaas/v20180416/model/BlockByNumberHandlerResponse.h
  include/tencentcloud/tbaas/v20180416/model/GetTransByHashHandlerResponse.h
  include/tencentcloud/tbaas/v20180416/model/GetInvokeTxRequest.h
  include/tencentcloud/tbaas/v20180416/model/GetLatesdTransactionListResponse.h
  include/tencentcloud/tbaas/v20180416/model/DownloadUserCertRequest.h
  include/tencentcloud/tbaas/v20180416/model/GetClusterSummaryResponse.h
  include/tencentcloud/tbaas/v20180416/model/PeerSet.h
  include/tencentcloud/tbaas/v20180416/model/SrvInvokeResponse.h
  include/tencentcloud/tbaas/v20180416/model/GetBlockListHandlerRequest.h
  include/tencentcloud/tbaas/v20180416/model/GetClusterSummaryRequest.h
  include/tencentcloud/tbaas/v20180416/model/Block.h
  include/tencentcloud/tbaas/v20180416/model/GetBlockListRequest.h
  include/tencentcloud/tbaas/v20180416/model/BcosTransInfo.h
  include/tencentcloud/tbaas/v20180416/model/GetInvokeTxResponse.h
  include/tencentcloud/tbaas/v20180416/model/GetBlockListHandlerResponse.h
  include/tencentcloud/tbaas/v20180416/model/SendTransactionHandlerRequest.h
  include/tencentcloud/tbaas/v20180416/model/GetTransListHandlerRequest.h
  include/tencentcloud/tbaas/v20180416/model/TransactionItem.h
  include/tencentcloud/tbaas/v20180416/model/BlockByNumberHandlerRequest.h
  include/tencentcloud/tbaas/v20180416/model/BcosBlockObj.h
  include/tencentcloud/tbaas/v20180416/model/QueryResponse.h
  include/tencentcloud/tbaas/v20180416/model/GetTransByHashHandlerRequest.h
  )

set(tbaas_src
  src/v20180416/TbaasClient.cpp
  src/v20180416/model/QueryRequest.cpp
  src/v20180416/model/SendTransactionHandlerResponse.cpp
  src/v20180416/model/ApplyUserCertRequest.cpp
  src/v20180416/model/GetTransListHandlerResponse.cpp
  src/v20180416/model/ApplyUserCertResponse.cpp
  src/v20180416/model/GetLatesdTransactionListRequest.cpp
  src/v20180416/model/InvokeResponse.cpp
  src/v20180416/model/DownloadUserCertResponse.cpp
  src/v20180416/model/InvokeRequest.cpp
  src/v20180416/model/GetBlockListResponse.cpp
  src/v20180416/model/SrvInvokeRequest.cpp
  src/v20180416/model/BlockByNumberHandlerResponse.cpp
  src/v20180416/model/GetTransByHashHandlerResponse.cpp
  src/v20180416/model/GetInvokeTxRequest.cpp
  src/v20180416/model/GetLatesdTransactionListResponse.cpp
  src/v20180416/model/DownloadUserCertRequest.cpp
  src/v20180416/model/GetClusterSummaryResponse.cpp
  src/v20180416/model/PeerSet.cpp
  src/v20180416/model/SrvInvokeResponse.cpp
  src/v20180416/model/GetBlockListHandlerRequest.cpp
  src/v20180416/model/GetClusterSummaryRequest.cpp
  src/v20180416/model/Block.cpp
  src/v20180416/model/GetBlockListRequest.cpp
  src/v20180416/model/BcosTransInfo.cpp
  src/v20180416/model/GetInvokeTxResponse.cpp
  src/v20180416/model/GetBlockListHandlerResponse.cpp
  src/v20180416/model/SendTransactionHandlerRequest.cpp
  src/v20180416/model/GetTransListHandlerRequest.cpp
  src/v20180416/model/TransactionItem.cpp
  src/v20180416/model/BlockByNumberHandlerRequest.cpp
  src/v20180416/model/BcosBlockObj.cpp
  src/v20180416/model/QueryResponse.cpp
  src/v20180416/model/GetTransByHashHandlerRequest.cpp
  )

set(tbaas_include
    include/tencentcloud/tbaas
  )

add_library(tbaas ${LIB_TYPE}
  ${tbaas_public_header}
  ${tbaas_public_header_model}
  ${tbaas_src})

set_target_properties(tbaas
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tbaas
  )

target_include_directories(tbaas
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tbaas
  core)

#install(FILES ${tbaas_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tbaas/v20180416)
#install(FILES ${tbaas_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tbaas/v20180416/model)
install(DIRECTORY ${tbaas_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tbaas
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
