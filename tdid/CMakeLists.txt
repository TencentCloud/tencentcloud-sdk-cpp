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

set(tdid_public_header
  include/tencentcloud/tdid/v20210519/TdidClient.h
  )

set(tdid_public_header_model
  include/tencentcloud/tdid/v20210519/model/VerifyFunctionArg.h
  include/tencentcloud/tdid/v20210519/model/CreateCredentialRequest.h
  include/tencentcloud/tdid/v20210519/model/TransactionArg.h
  include/tencentcloud/tdid/v20210519/model/CreateTDidRequest.h
  include/tencentcloud/tdid/v20210519/model/FunctionArg.h
  include/tencentcloud/tdid/v20210519/model/CreateSelectiveCredentialRequest.h
  include/tencentcloud/tdid/v20210519/model/CreateTDidResponse.h
  include/tencentcloud/tdid/v20210519/model/CreateSelectiveCredentialResponse.h
  include/tencentcloud/tdid/v20210519/model/VerifyCredentialResponse.h
  include/tencentcloud/tdid/v20210519/model/CreateCredentialResponse.h
  include/tencentcloud/tdid/v20210519/model/VerifyCredentialRequest.h
  include/tencentcloud/tdid/v20210519/model/Proof.h
  )

set(tdid_src
  src/v20210519/TdidClient.cpp
  src/v20210519/model/VerifyFunctionArg.cpp
  src/v20210519/model/CreateCredentialRequest.cpp
  src/v20210519/model/TransactionArg.cpp
  src/v20210519/model/CreateTDidRequest.cpp
  src/v20210519/model/FunctionArg.cpp
  src/v20210519/model/CreateSelectiveCredentialRequest.cpp
  src/v20210519/model/CreateTDidResponse.cpp
  src/v20210519/model/CreateSelectiveCredentialResponse.cpp
  src/v20210519/model/VerifyCredentialResponse.cpp
  src/v20210519/model/CreateCredentialResponse.cpp
  src/v20210519/model/VerifyCredentialRequest.cpp
  src/v20210519/model/Proof.cpp
  )

set(tdid_include
    include/tencentcloud/tdid
  )

add_library(tdid ${LIB_TYPE}
  ${tdid_public_header}
  ${tdid_public_header_model}
  ${tdid_src})

set_target_properties(tdid
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tdid
  )

target_include_directories(tdid
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tdid
  core)

#install(FILES ${tdid_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tdid/v20210519)
#install(FILES ${tdid_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tdid/v20210519/model)
install(DIRECTORY ${tdid_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tdid
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
