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

set(dtf_public_header
  include/tencentcloud/dtf/v20200506/DtfClient.h
  )

set(dtf_public_header_model
  include/tencentcloud/dtf/v20200506/model/PagedTransaction.h
  include/tencentcloud/dtf/v20200506/model/Transaction.h
  include/tencentcloud/dtf/v20200506/model/DescribeTransactionsRequest.h
  include/tencentcloud/dtf/v20200506/model/DescribeTransactionsResponse.h
  )

set(dtf_src
  src/v20200506/DtfClient.cpp
  src/v20200506/model/PagedTransaction.cpp
  src/v20200506/model/Transaction.cpp
  src/v20200506/model/DescribeTransactionsRequest.cpp
  src/v20200506/model/DescribeTransactionsResponse.cpp
  )

set(dtf_include
    include/tencentcloud/dtf
  )

add_library(dtf ${LIB_TYPE}
  ${dtf_public_header}
  ${dtf_public_header_model}
  ${dtf_src})

set_target_properties(dtf
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}dtf
  )

target_include_directories(dtf
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(dtf
  core)

#install(FILES ${dtf_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/dtf/v20200506)
#install(FILES ${dtf_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/dtf/v20200506/model)
install(DIRECTORY ${dtf_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS dtf
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
