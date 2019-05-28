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

set(ds_public_header
  include/tencentcloud/ds/v20180523/DsClient.h
  )

set(ds_public_header_model
  include/tencentcloud/ds/v20180523/model/SendVcodeResponse.h
  include/tencentcloud/ds/v20180523/model/DeleteAccountRequest.h
  include/tencentcloud/ds/v20180523/model/CreateSealRequest.h
  include/tencentcloud/ds/v20180523/model/CreateSealResponse.h
  include/tencentcloud/ds/v20180523/model/SignKeyword.h
  include/tencentcloud/ds/v20180523/model/DescribeTaskStatusResponse.h
  include/tencentcloud/ds/v20180523/model/CheckVcodeRequest.h
  include/tencentcloud/ds/v20180523/model/CheckVcodeResponse.h
  include/tencentcloud/ds/v20180523/model/DownloadContractResponse.h
  include/tencentcloud/ds/v20180523/model/SignLocation.h
  include/tencentcloud/ds/v20180523/model/SignContractByKeywordResponse.h
  include/tencentcloud/ds/v20180523/model/SignInfo.h
  include/tencentcloud/ds/v20180523/model/DeleteSealRequest.h
  include/tencentcloud/ds/v20180523/model/DownloadContractRequest.h
  include/tencentcloud/ds/v20180523/model/CreateEnterpriseAccountResponse.h
  include/tencentcloud/ds/v20180523/model/CreatePersonalAccountResponse.h
  include/tencentcloud/ds/v20180523/model/CreateEnterpriseAccountRequest.h
  include/tencentcloud/ds/v20180523/model/CreateContractByUploadRequest.h
  include/tencentcloud/ds/v20180523/model/CreateContractByUploadResponse.h
  include/tencentcloud/ds/v20180523/model/DeleteSealResponse.h
  include/tencentcloud/ds/v20180523/model/CreatePersonalAccountRequest.h
  include/tencentcloud/ds/v20180523/model/DescribeTaskStatusRequest.h
  include/tencentcloud/ds/v20180523/model/SignContractByKeywordRequest.h
  include/tencentcloud/ds/v20180523/model/SendVcodeRequest.h
  include/tencentcloud/ds/v20180523/model/SignContractByCoordinateRequest.h
  include/tencentcloud/ds/v20180523/model/SignContractByCoordinateResponse.h
  include/tencentcloud/ds/v20180523/model/DeleteAccountResponse.h
  )

set(ds_src
  src/v20180523/DsClient.cpp
  src/v20180523/model/SendVcodeResponse.cpp
  src/v20180523/model/DeleteAccountRequest.cpp
  src/v20180523/model/CreateSealRequest.cpp
  src/v20180523/model/CreateSealResponse.cpp
  src/v20180523/model/SignKeyword.cpp
  src/v20180523/model/DescribeTaskStatusResponse.cpp
  src/v20180523/model/CheckVcodeRequest.cpp
  src/v20180523/model/CheckVcodeResponse.cpp
  src/v20180523/model/DownloadContractResponse.cpp
  src/v20180523/model/SignLocation.cpp
  src/v20180523/model/SignContractByKeywordResponse.cpp
  src/v20180523/model/SignInfo.cpp
  src/v20180523/model/DeleteSealRequest.cpp
  src/v20180523/model/DownloadContractRequest.cpp
  src/v20180523/model/CreateEnterpriseAccountResponse.cpp
  src/v20180523/model/CreatePersonalAccountResponse.cpp
  src/v20180523/model/CreateEnterpriseAccountRequest.cpp
  src/v20180523/model/CreateContractByUploadRequest.cpp
  src/v20180523/model/CreateContractByUploadResponse.cpp
  src/v20180523/model/DeleteSealResponse.cpp
  src/v20180523/model/CreatePersonalAccountRequest.cpp
  src/v20180523/model/DescribeTaskStatusRequest.cpp
  src/v20180523/model/SignContractByKeywordRequest.cpp
  src/v20180523/model/SendVcodeRequest.cpp
  src/v20180523/model/SignContractByCoordinateRequest.cpp
  src/v20180523/model/SignContractByCoordinateResponse.cpp
  src/v20180523/model/DeleteAccountResponse.cpp
  )

set(ds_include
    include/tencentcloud/ds
  )

add_library(ds ${LIB_TYPE}
  ${ds_public_header}
  ${ds_public_header_model}
  ${ds_src})

set_target_properties(ds
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ds
  )

target_include_directories(ds
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(ds
  core)

#install(FILES ${ds_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ds/v20180523)
#install(FILES ${ds_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ds/v20180523/model)
install(DIRECTORY ${ds_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS ds
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
