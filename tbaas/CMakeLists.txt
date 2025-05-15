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
  include/tencentcloud/tbaas/v20180416/model/QueryChainMakerDemoBlockTransactionResponse.h
  include/tencentcloud/tbaas/v20180416/model/DescribeFabricTransactionResponse.h
  include/tencentcloud/tbaas/v20180416/model/QueryChainMakerBlockTransactionRequest.h
  include/tencentcloud/tbaas/v20180416/model/GetBlockTransactionListForUserResponse.h
  include/tencentcloud/tbaas/v20180416/model/ApplyChainMakerBatchUserCertResponse.h
  include/tencentcloud/tbaas/v20180416/model/ApplyUserCertRequest.h
  include/tencentcloud/tbaas/v20180416/model/GetTransactionDetailForUserResponse.h
  include/tencentcloud/tbaas/v20180416/model/SrvInvokeRequest.h
  include/tencentcloud/tbaas/v20180416/model/ApplyUserCertResponse.h
  include/tencentcloud/tbaas/v20180416/model/GetInvokeTxRequest.h
  include/tencentcloud/tbaas/v20180416/model/InvokeFabricChaincodeResponse.h
  include/tencentcloud/tbaas/v20180416/model/SignCertCsr.h
  include/tencentcloud/tbaas/v20180416/model/DownloadUserCertResponse.h
  include/tencentcloud/tbaas/v20180416/model/InvokeResponse.h
  include/tencentcloud/tbaas/v20180416/model/QueryFabricChaincodeResponse.h
  include/tencentcloud/tbaas/v20180416/model/GetTransactionDetailForUserRequest.h
  include/tencentcloud/tbaas/v20180416/model/GetBlockListResponse.h
  include/tencentcloud/tbaas/v20180416/model/GetBlockTransactionListForUserRequest.h
  include/tencentcloud/tbaas/v20180416/model/TransactionItem.h
  include/tencentcloud/tbaas/v20180416/model/InvokeChainMakerDemoContractRequest.h
  include/tencentcloud/tbaas/v20180416/model/InvokeChainMakerContractResponse.h
  include/tencentcloud/tbaas/v20180416/model/SrvInvokeResponse.h
  include/tencentcloud/tbaas/v20180416/model/GetLatestTransactionListResponse.h
  include/tencentcloud/tbaas/v20180416/model/QueryChainMakerTransactionResponse.h
  include/tencentcloud/tbaas/v20180416/model/DownloadUserCertRequest.h
  include/tencentcloud/tbaas/v20180416/model/GetClusterSummaryResponse.h
  include/tencentcloud/tbaas/v20180416/model/QueryChainMakerDemoContractResponse.h
  include/tencentcloud/tbaas/v20180416/model/PeerSet.h
  include/tencentcloud/tbaas/v20180416/model/ChainMakerTransactionResult.h
  include/tencentcloud/tbaas/v20180416/model/GetLatestTransactionListRequest.h
  include/tencentcloud/tbaas/v20180416/model/DescribeFabricBlockResponse.h
  include/tencentcloud/tbaas/v20180416/model/QueryChainMakerDemoContractRequest.h
  include/tencentcloud/tbaas/v20180416/model/QueryChainMakerDemoTransactionResponse.h
  include/tencentcloud/tbaas/v20180416/model/ApplyChainMakerBatchUserCertRequest.h
  include/tencentcloud/tbaas/v20180416/model/QueryChainMakerDemoTransactionRequest.h
  include/tencentcloud/tbaas/v20180416/model/DescribeFabricTransactionRequest.h
  include/tencentcloud/tbaas/v20180416/model/ChainMakerContractResult.h
  include/tencentcloud/tbaas/v20180416/model/GetClusterSummaryRequest.h
  include/tencentcloud/tbaas/v20180416/model/Block.h
  include/tencentcloud/tbaas/v20180416/model/DescribeFabricBlockRequest.h
  include/tencentcloud/tbaas/v20180416/model/GetBlockListRequest.h
  include/tencentcloud/tbaas/v20180416/model/QueryFabricChaincodeRequest.h
  include/tencentcloud/tbaas/v20180416/model/InvokeFabricChaincodeRequest.h
  include/tencentcloud/tbaas/v20180416/model/InvokeRequest.h
  include/tencentcloud/tbaas/v20180416/model/GetInvokeTxResponse.h
  include/tencentcloud/tbaas/v20180416/model/QueryChainMakerContractResponse.h
  include/tencentcloud/tbaas/v20180416/model/InvokeChainMakerContractRequest.h
  include/tencentcloud/tbaas/v20180416/model/QueryChainMakerContractRequest.h
  include/tencentcloud/tbaas/v20180416/model/QueryChainMakerTransactionRequest.h
  include/tencentcloud/tbaas/v20180416/model/QueryChainMakerDemoBlockTransactionRequest.h
  include/tencentcloud/tbaas/v20180416/model/Transaction.h
  include/tencentcloud/tbaas/v20180416/model/QueryRequest.h
  include/tencentcloud/tbaas/v20180416/model/QueryChainMakerBlockTransactionResponse.h
  include/tencentcloud/tbaas/v20180416/model/InvokeChainMakerDemoContractResponse.h
  include/tencentcloud/tbaas/v20180416/model/QueryResponse.h
  include/tencentcloud/tbaas/v20180416/model/EndorserGroup.h
  )

set(tbaas_src
  src/v20180416/TbaasClient.cpp
  src/v20180416/model/QueryChainMakerDemoBlockTransactionResponse.cpp
  src/v20180416/model/DescribeFabricTransactionResponse.cpp
  src/v20180416/model/QueryChainMakerBlockTransactionRequest.cpp
  src/v20180416/model/GetBlockTransactionListForUserResponse.cpp
  src/v20180416/model/ApplyChainMakerBatchUserCertResponse.cpp
  src/v20180416/model/ApplyUserCertRequest.cpp
  src/v20180416/model/GetTransactionDetailForUserResponse.cpp
  src/v20180416/model/SrvInvokeRequest.cpp
  src/v20180416/model/ApplyUserCertResponse.cpp
  src/v20180416/model/GetInvokeTxRequest.cpp
  src/v20180416/model/InvokeFabricChaincodeResponse.cpp
  src/v20180416/model/SignCertCsr.cpp
  src/v20180416/model/DownloadUserCertResponse.cpp
  src/v20180416/model/InvokeResponse.cpp
  src/v20180416/model/QueryFabricChaincodeResponse.cpp
  src/v20180416/model/GetTransactionDetailForUserRequest.cpp
  src/v20180416/model/GetBlockListResponse.cpp
  src/v20180416/model/GetBlockTransactionListForUserRequest.cpp
  src/v20180416/model/TransactionItem.cpp
  src/v20180416/model/InvokeChainMakerDemoContractRequest.cpp
  src/v20180416/model/InvokeChainMakerContractResponse.cpp
  src/v20180416/model/SrvInvokeResponse.cpp
  src/v20180416/model/GetLatestTransactionListResponse.cpp
  src/v20180416/model/QueryChainMakerTransactionResponse.cpp
  src/v20180416/model/DownloadUserCertRequest.cpp
  src/v20180416/model/GetClusterSummaryResponse.cpp
  src/v20180416/model/QueryChainMakerDemoContractResponse.cpp
  src/v20180416/model/PeerSet.cpp
  src/v20180416/model/ChainMakerTransactionResult.cpp
  src/v20180416/model/GetLatestTransactionListRequest.cpp
  src/v20180416/model/DescribeFabricBlockResponse.cpp
  src/v20180416/model/QueryChainMakerDemoContractRequest.cpp
  src/v20180416/model/QueryChainMakerDemoTransactionResponse.cpp
  src/v20180416/model/ApplyChainMakerBatchUserCertRequest.cpp
  src/v20180416/model/QueryChainMakerDemoTransactionRequest.cpp
  src/v20180416/model/DescribeFabricTransactionRequest.cpp
  src/v20180416/model/ChainMakerContractResult.cpp
  src/v20180416/model/GetClusterSummaryRequest.cpp
  src/v20180416/model/Block.cpp
  src/v20180416/model/DescribeFabricBlockRequest.cpp
  src/v20180416/model/GetBlockListRequest.cpp
  src/v20180416/model/QueryFabricChaincodeRequest.cpp
  src/v20180416/model/InvokeFabricChaincodeRequest.cpp
  src/v20180416/model/InvokeRequest.cpp
  src/v20180416/model/GetInvokeTxResponse.cpp
  src/v20180416/model/QueryChainMakerContractResponse.cpp
  src/v20180416/model/InvokeChainMakerContractRequest.cpp
  src/v20180416/model/QueryChainMakerContractRequest.cpp
  src/v20180416/model/QueryChainMakerTransactionRequest.cpp
  src/v20180416/model/QueryChainMakerDemoBlockTransactionRequest.cpp
  src/v20180416/model/Transaction.cpp
  src/v20180416/model/QueryRequest.cpp
  src/v20180416/model/QueryChainMakerBlockTransactionResponse.cpp
  src/v20180416/model/InvokeChainMakerDemoContractResponse.cpp
  src/v20180416/model/QueryResponse.cpp
  src/v20180416/model/EndorserGroup.cpp
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
