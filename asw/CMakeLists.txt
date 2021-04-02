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

set(asw_public_header
  include/tencentcloud/asw/v20200722/AswClient.h
  )

set(asw_public_header_model
  include/tencentcloud/asw/v20200722/model/DescribeExecutionHistoryResponse.h
  include/tencentcloud/asw/v20200722/model/DescribeExecutionsRequest.h
  include/tencentcloud/asw/v20200722/model/DescribeFlowServicesResponse.h
  include/tencentcloud/asw/v20200722/model/StateMachine.h
  include/tencentcloud/asw/v20200722/model/DescribeFlowServiceDetailResponse.h
  include/tencentcloud/asw/v20200722/model/DescribeExecutionResponse.h
  include/tencentcloud/asw/v20200722/model/DescribeFlowServicesRequest.h
  include/tencentcloud/asw/v20200722/model/DescribeExecutionRequest.h
  include/tencentcloud/asw/v20200722/model/DescribeExecutionHistoryRequest.h
  include/tencentcloud/asw/v20200722/model/CreateFlowServiceResponse.h
  include/tencentcloud/asw/v20200722/model/StartExecutionRequest.h
  include/tencentcloud/asw/v20200722/model/Filter.h
  include/tencentcloud/asw/v20200722/model/ExecutionEvent.h
  include/tencentcloud/asw/v20200722/model/ModifyFlowServiceResponse.h
  include/tencentcloud/asw/v20200722/model/StartExecutionResponse.h
  include/tencentcloud/asw/v20200722/model/CreateFlowServiceRequest.h
  include/tencentcloud/asw/v20200722/model/DescribeExecutionsResponse.h
  include/tencentcloud/asw/v20200722/model/ModifyFlowServiceRequest.h
  include/tencentcloud/asw/v20200722/model/DescribeFlowServiceDetailRequest.h
  include/tencentcloud/asw/v20200722/model/StopExecutionResponse.h
  include/tencentcloud/asw/v20200722/model/StopExecutionRequest.h
  )

set(asw_src
  src/v20200722/AswClient.cpp
  src/v20200722/model/DescribeExecutionHistoryResponse.cpp
  src/v20200722/model/DescribeExecutionsRequest.cpp
  src/v20200722/model/DescribeFlowServicesResponse.cpp
  src/v20200722/model/StateMachine.cpp
  src/v20200722/model/DescribeFlowServiceDetailResponse.cpp
  src/v20200722/model/DescribeExecutionResponse.cpp
  src/v20200722/model/DescribeFlowServicesRequest.cpp
  src/v20200722/model/DescribeExecutionRequest.cpp
  src/v20200722/model/DescribeExecutionHistoryRequest.cpp
  src/v20200722/model/CreateFlowServiceResponse.cpp
  src/v20200722/model/StartExecutionRequest.cpp
  src/v20200722/model/Filter.cpp
  src/v20200722/model/ExecutionEvent.cpp
  src/v20200722/model/ModifyFlowServiceResponse.cpp
  src/v20200722/model/StartExecutionResponse.cpp
  src/v20200722/model/CreateFlowServiceRequest.cpp
  src/v20200722/model/DescribeExecutionsResponse.cpp
  src/v20200722/model/ModifyFlowServiceRequest.cpp
  src/v20200722/model/DescribeFlowServiceDetailRequest.cpp
  src/v20200722/model/StopExecutionResponse.cpp
  src/v20200722/model/StopExecutionRequest.cpp
  )

set(asw_include
    include/tencentcloud/asw
  )

add_library(asw ${LIB_TYPE}
  ${asw_public_header}
  ${asw_public_header_model}
  ${asw_src})

set_target_properties(asw
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}asw
  )

target_include_directories(asw
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(asw
  core)

#install(FILES ${asw_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/asw/v20200722)
#install(FILES ${asw_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/asw/v20200722/model)
install(DIRECTORY ${asw_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS asw
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
