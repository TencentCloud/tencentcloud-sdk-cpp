#
# Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

set(cloudapp_public_header
  include/tencentcloud/cloudapp/v20220530/CloudappClient.h
  )

set(cloudapp_public_header_model
  include/tencentcloud/cloudapp/v20220530/model/SaleParam.h
  include/tencentcloud/cloudapp/v20220530/model/VerifyLicenseRequest.h
  include/tencentcloud/cloudapp/v20220530/model/VerifyLicenseResponse.h
  include/tencentcloud/cloudapp/v20220530/model/License.h
  )

set(cloudapp_src
  src/v20220530/CloudappClient.cpp
  src/v20220530/model/SaleParam.cpp
  src/v20220530/model/VerifyLicenseRequest.cpp
  src/v20220530/model/VerifyLicenseResponse.cpp
  src/v20220530/model/License.cpp
  )

set(cloudapp_include
    include/tencentcloud/cloudapp
  )

add_library(cloudapp ${LIB_TYPE}
  ${cloudapp_public_header}
  ${cloudapp_public_header_model}
  ${cloudapp_src})

set_target_properties(cloudapp
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cloudapp
  )

target_include_directories(cloudapp
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(cloudapp
  core)

#install(FILES ${cloudapp_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cloudapp/v20220530)
#install(FILES ${cloudapp_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cloudapp/v20220530/model)
install(DIRECTORY ${cloudapp_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS cloudapp
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
