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

set(tcex_public_header
  include/tencentcloud/tcex/v20200727/TcexClient.h
  )

set(tcex_public_header_model
  include/tencentcloud/tcex/v20200727/model/InvokeServiceRequest.h
  include/tencentcloud/tcex/v20200727/model/DescribeInvocationResultResponse.h
  include/tencentcloud/tcex/v20200727/model/AlgorithmResult.h
  include/tencentcloud/tcex/v20200727/model/InvokeServiceResponse.h
  include/tencentcloud/tcex/v20200727/model/DescribeInvocationResultRequest.h
  )

set(tcex_src
  src/v20200727/TcexClient.cpp
  src/v20200727/model/InvokeServiceRequest.cpp
  src/v20200727/model/DescribeInvocationResultResponse.cpp
  src/v20200727/model/AlgorithmResult.cpp
  src/v20200727/model/InvokeServiceResponse.cpp
  src/v20200727/model/DescribeInvocationResultRequest.cpp
  )

set(tcex_include
    include/tencentcloud/tcex
  )

add_library(tcex ${LIB_TYPE}
  ${tcex_public_header}
  ${tcex_public_header_model}
  ${tcex_src})

set_target_properties(tcex
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tcex
  )

target_include_directories(tcex
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tcex
  core)

#install(FILES ${tcex_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tcex/v20200727)
#install(FILES ${tcex_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tcex/v20200727/model)
install(DIRECTORY ${tcex_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tcex
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
