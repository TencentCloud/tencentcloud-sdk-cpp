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

set(iap_public_header
  include/tencentcloud/iap/v20240713/IapClient.h
  )

set(iap_public_header_model
  include/tencentcloud/iap/v20240713/model/ModifyIAPLoginSessionDurationRequest.h
  include/tencentcloud/iap/v20240713/model/DescribeIAPLoginSessionDurationRequest.h
  include/tencentcloud/iap/v20240713/model/CreateIAPUserOIDCConfigResponse.h
  include/tencentcloud/iap/v20240713/model/CreateIAPUserOIDCConfigRequest.h
  include/tencentcloud/iap/v20240713/model/DisableIAPUserSSOResponse.h
  include/tencentcloud/iap/v20240713/model/DescribeIAPUserOIDCConfigRequest.h
  include/tencentcloud/iap/v20240713/model/ModifyIAPLoginSessionDurationResponse.h
  include/tencentcloud/iap/v20240713/model/DescribeIAPUserOIDCConfigResponse.h
  include/tencentcloud/iap/v20240713/model/UpdateIAPUserOIDCConfigResponse.h
  include/tencentcloud/iap/v20240713/model/UpdateIAPUserOIDCConfigRequest.h
  include/tencentcloud/iap/v20240713/model/DisableIAPUserSSORequest.h
  include/tencentcloud/iap/v20240713/model/DescribeIAPLoginSessionDurationResponse.h
  )

set(iap_src
  src/v20240713/IapClient.cpp
  src/v20240713/model/ModifyIAPLoginSessionDurationRequest.cpp
  src/v20240713/model/DescribeIAPLoginSessionDurationRequest.cpp
  src/v20240713/model/CreateIAPUserOIDCConfigResponse.cpp
  src/v20240713/model/CreateIAPUserOIDCConfigRequest.cpp
  src/v20240713/model/DisableIAPUserSSOResponse.cpp
  src/v20240713/model/DescribeIAPUserOIDCConfigRequest.cpp
  src/v20240713/model/ModifyIAPLoginSessionDurationResponse.cpp
  src/v20240713/model/DescribeIAPUserOIDCConfigResponse.cpp
  src/v20240713/model/UpdateIAPUserOIDCConfigResponse.cpp
  src/v20240713/model/UpdateIAPUserOIDCConfigRequest.cpp
  src/v20240713/model/DisableIAPUserSSORequest.cpp
  src/v20240713/model/DescribeIAPLoginSessionDurationResponse.cpp
  )

set(iap_include
    include/tencentcloud/iap
  )

add_library(iap ${LIB_TYPE}
  ${iap_public_header}
  ${iap_public_header_model}
  ${iap_src})

set_target_properties(iap
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}iap
  )

target_include_directories(iap
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(iap
  core)

#install(FILES ${iap_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/iap/v20240713)
#install(FILES ${iap_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/iap/v20240713/model)
install(DIRECTORY ${iap_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS iap
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
