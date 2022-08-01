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

set(btoe_public_header
  include/tencentcloud/btoe/v20210303/BtoeClient.h
  include/tencentcloud/btoe/v20210514/BtoeClient.h
  )

set(btoe_public_header_model
  include/tencentcloud/btoe/v20210303/model/GetDepositFileResponse.h
  include/tencentcloud/btoe/v20210303/model/CreateImageDepositRequest.h
  include/tencentcloud/btoe/v20210303/model/CreateVideoDepositRequest.h
  include/tencentcloud/btoe/v20210303/model/CreateDocDepositRequest.h
  include/tencentcloud/btoe/v20210303/model/CreateHashDepositNoSealRequest.h
  include/tencentcloud/btoe/v20210303/model/CreateHashDepositRequest.h
  include/tencentcloud/btoe/v20210303/model/CreateDataDepositResponse.h
  include/tencentcloud/btoe/v20210303/model/GetDepositCertRequest.h
  include/tencentcloud/btoe/v20210303/model/CreateWebpageDepositResponse.h
  include/tencentcloud/btoe/v20210303/model/GetDepositFileRequest.h
  include/tencentcloud/btoe/v20210303/model/CreateWebpageDepositRequest.h
  include/tencentcloud/btoe/v20210303/model/CreateHashDepositNoCertResponse.h
  include/tencentcloud/btoe/v20210303/model/CreateAudioDepositResponse.h
  include/tencentcloud/btoe/v20210303/model/GetDepositInfoResponse.h
  include/tencentcloud/btoe/v20210303/model/CreateHashDepositNoCertRequest.h
  include/tencentcloud/btoe/v20210303/model/CreateHashDepositNoSealResponse.h
  include/tencentcloud/btoe/v20210303/model/CreateDocDepositResponse.h
  include/tencentcloud/btoe/v20210303/model/GetDepositInfoRequest.h
  include/tencentcloud/btoe/v20210303/model/CreateVideoDepositResponse.h
  include/tencentcloud/btoe/v20210303/model/CreateDataDepositRequest.h
  include/tencentcloud/btoe/v20210303/model/GetDepositCertResponse.h
  include/tencentcloud/btoe/v20210303/model/CreateAudioDepositRequest.h
  include/tencentcloud/btoe/v20210303/model/CreateImageDepositResponse.h
  include/tencentcloud/btoe/v20210303/model/CreateHashDepositResponse.h
  include/tencentcloud/btoe/v20210514/model/GetDepositFileResponse.h
  include/tencentcloud/btoe/v20210514/model/CreateImageDepositRequest.h
  include/tencentcloud/btoe/v20210514/model/CreateVideoDepositRequest.h
  include/tencentcloud/btoe/v20210514/model/CreateDocDepositRequest.h
  include/tencentcloud/btoe/v20210514/model/CreateHashDepositNoSealRequest.h
  include/tencentcloud/btoe/v20210514/model/CreateHashDepositRequest.h
  include/tencentcloud/btoe/v20210514/model/VerifyEvidenceHashResponse.h
  include/tencentcloud/btoe/v20210514/model/CreateDataDepositResponse.h
  include/tencentcloud/btoe/v20210514/model/GetDepositCertRequest.h
  include/tencentcloud/btoe/v20210514/model/CreateAudioDepositRequest.h
  include/tencentcloud/btoe/v20210514/model/GetDepositFileRequest.h
  include/tencentcloud/btoe/v20210514/model/VerifyEvidenceBlockChainTxHashRequest.h
  include/tencentcloud/btoe/v20210514/model/VerifyEvidenceHashRequest.h
  include/tencentcloud/btoe/v20210514/model/CreateHashDepositNoCertResponse.h
  include/tencentcloud/btoe/v20210514/model/VerifyEvidenceBlockChainTxHashResponse.h
  include/tencentcloud/btoe/v20210514/model/CreateAudioDepositResponse.h
  include/tencentcloud/btoe/v20210514/model/GetDepositInfoResponse.h
  include/tencentcloud/btoe/v20210514/model/CreateHashDepositNoCertRequest.h
  include/tencentcloud/btoe/v20210514/model/CreateHashDepositNoSealResponse.h
  include/tencentcloud/btoe/v20210514/model/CreateDocDepositResponse.h
  include/tencentcloud/btoe/v20210514/model/GetDepositInfoRequest.h
  include/tencentcloud/btoe/v20210514/model/CreateVideoDepositResponse.h
  include/tencentcloud/btoe/v20210514/model/CreateDataDepositRequest.h
  include/tencentcloud/btoe/v20210514/model/GetDepositCertResponse.h
  include/tencentcloud/btoe/v20210514/model/CreateImageDepositResponse.h
  include/tencentcloud/btoe/v20210514/model/CreateHashDepositResponse.h
  )

set(btoe_src
  src/v20210303/BtoeClient.cpp
  src/v20210514/BtoeClient.cpp
  src/v20210303/model/GetDepositFileResponse.cpp
  src/v20210303/model/CreateImageDepositRequest.cpp
  src/v20210303/model/CreateVideoDepositRequest.cpp
  src/v20210303/model/CreateDocDepositRequest.cpp
  src/v20210303/model/CreateHashDepositNoSealRequest.cpp
  src/v20210303/model/CreateHashDepositRequest.cpp
  src/v20210303/model/CreateDataDepositResponse.cpp
  src/v20210303/model/GetDepositCertRequest.cpp
  src/v20210303/model/CreateWebpageDepositResponse.cpp
  src/v20210303/model/GetDepositFileRequest.cpp
  src/v20210303/model/CreateWebpageDepositRequest.cpp
  src/v20210303/model/CreateHashDepositNoCertResponse.cpp
  src/v20210303/model/CreateAudioDepositResponse.cpp
  src/v20210303/model/GetDepositInfoResponse.cpp
  src/v20210303/model/CreateHashDepositNoCertRequest.cpp
  src/v20210303/model/CreateHashDepositNoSealResponse.cpp
  src/v20210303/model/CreateDocDepositResponse.cpp
  src/v20210303/model/GetDepositInfoRequest.cpp
  src/v20210303/model/CreateVideoDepositResponse.cpp
  src/v20210303/model/CreateDataDepositRequest.cpp
  src/v20210303/model/GetDepositCertResponse.cpp
  src/v20210303/model/CreateAudioDepositRequest.cpp
  src/v20210303/model/CreateImageDepositResponse.cpp
  src/v20210303/model/CreateHashDepositResponse.cpp
  src/v20210514/model/GetDepositFileResponse.cpp
  src/v20210514/model/CreateImageDepositRequest.cpp
  src/v20210514/model/CreateVideoDepositRequest.cpp
  src/v20210514/model/CreateDocDepositRequest.cpp
  src/v20210514/model/CreateHashDepositNoSealRequest.cpp
  src/v20210514/model/CreateHashDepositRequest.cpp
  src/v20210514/model/VerifyEvidenceHashResponse.cpp
  src/v20210514/model/CreateDataDepositResponse.cpp
  src/v20210514/model/GetDepositCertRequest.cpp
  src/v20210514/model/CreateAudioDepositRequest.cpp
  src/v20210514/model/GetDepositFileRequest.cpp
  src/v20210514/model/VerifyEvidenceBlockChainTxHashRequest.cpp
  src/v20210514/model/VerifyEvidenceHashRequest.cpp
  src/v20210514/model/CreateHashDepositNoCertResponse.cpp
  src/v20210514/model/VerifyEvidenceBlockChainTxHashResponse.cpp
  src/v20210514/model/CreateAudioDepositResponse.cpp
  src/v20210514/model/GetDepositInfoResponse.cpp
  src/v20210514/model/CreateHashDepositNoCertRequest.cpp
  src/v20210514/model/CreateHashDepositNoSealResponse.cpp
  src/v20210514/model/CreateDocDepositResponse.cpp
  src/v20210514/model/GetDepositInfoRequest.cpp
  src/v20210514/model/CreateVideoDepositResponse.cpp
  src/v20210514/model/CreateDataDepositRequest.cpp
  src/v20210514/model/GetDepositCertResponse.cpp
  src/v20210514/model/CreateImageDepositResponse.cpp
  src/v20210514/model/CreateHashDepositResponse.cpp
  )

set(btoe_include
    include/tencentcloud/btoe
  )

add_library(btoe ${LIB_TYPE}
  ${btoe_public_header}
  ${btoe_public_header_model}
  ${btoe_src})

set_target_properties(btoe
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}btoe
  )

target_include_directories(btoe
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(btoe
  core)

#install(FILES ${btoe_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/btoe/v20210514)
#install(FILES ${btoe_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/btoe/v20210514/model)
install(DIRECTORY ${btoe_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS btoe
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
