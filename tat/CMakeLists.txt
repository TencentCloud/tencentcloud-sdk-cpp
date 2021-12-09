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

set(tat_public_header
  include/tencentcloud/tat/v20201028/TatClient.h
  )

set(tat_public_header_model
  include/tencentcloud/tat/v20201028/model/ScheduleSettings.h
  include/tencentcloud/tat/v20201028/model/InvocationTaskBasicInfo.h
  include/tencentcloud/tat/v20201028/model/PreviewReplacedCommandContentResponse.h
  include/tencentcloud/tat/v20201028/model/CreateCommandResponse.h
  include/tencentcloud/tat/v20201028/model/DisableInvokerRequest.h
  include/tencentcloud/tat/v20201028/model/AutomationAgentInfo.h
  include/tencentcloud/tat/v20201028/model/RunCommandRequest.h
  include/tencentcloud/tat/v20201028/model/Invoker.h
  include/tencentcloud/tat/v20201028/model/DescribeInvocationTasksRequest.h
  include/tencentcloud/tat/v20201028/model/Invocation.h
  include/tencentcloud/tat/v20201028/model/DescribeRegionsRequest.h
  include/tencentcloud/tat/v20201028/model/CommandDocument.h
  include/tencentcloud/tat/v20201028/model/DescribeInvokerRecordsResponse.h
  include/tencentcloud/tat/v20201028/model/TaskResult.h
  include/tencentcloud/tat/v20201028/model/ModifyInvokerRequest.h
  include/tencentcloud/tat/v20201028/model/EnableInvokerResponse.h
  include/tencentcloud/tat/v20201028/model/EnableInvokerRequest.h
  include/tencentcloud/tat/v20201028/model/ModifyCommandResponse.h
  include/tencentcloud/tat/v20201028/model/RegionInfo.h
  include/tencentcloud/tat/v20201028/model/DescribeInvokersResponse.h
  include/tencentcloud/tat/v20201028/model/CancelInvocationResponse.h
  include/tencentcloud/tat/v20201028/model/DeleteCommandResponse.h
  include/tencentcloud/tat/v20201028/model/DisableInvokerResponse.h
  include/tencentcloud/tat/v20201028/model/DescribeCommandsResponse.h
  include/tencentcloud/tat/v20201028/model/CreateInvokerRequest.h
  include/tencentcloud/tat/v20201028/model/DescribeAutomationAgentStatusRequest.h
  include/tencentcloud/tat/v20201028/model/InvokeCommandResponse.h
  include/tencentcloud/tat/v20201028/model/ModifyCommandRequest.h
  include/tencentcloud/tat/v20201028/model/DescribeInvokersRequest.h
  include/tencentcloud/tat/v20201028/model/DescribeCommandsRequest.h
  include/tencentcloud/tat/v20201028/model/DeleteInvokerResponse.h
  include/tencentcloud/tat/v20201028/model/DescribeInvocationsRequest.h
  include/tencentcloud/tat/v20201028/model/Filter.h
  include/tencentcloud/tat/v20201028/model/DescribeInvocationsResponse.h
  include/tencentcloud/tat/v20201028/model/DescribeInvocationTasksResponse.h
  include/tencentcloud/tat/v20201028/model/Command.h
  include/tencentcloud/tat/v20201028/model/PreviewReplacedCommandContentRequest.h
  include/tencentcloud/tat/v20201028/model/InvocationTask.h
  include/tencentcloud/tat/v20201028/model/ModifyInvokerResponse.h
  include/tencentcloud/tat/v20201028/model/InvokerRecord.h
  include/tencentcloud/tat/v20201028/model/DescribeAutomationAgentStatusResponse.h
  include/tencentcloud/tat/v20201028/model/CreateInvokerResponse.h
  include/tencentcloud/tat/v20201028/model/CancelInvocationRequest.h
  include/tencentcloud/tat/v20201028/model/DeleteCommandRequest.h
  include/tencentcloud/tat/v20201028/model/DeleteInvokerRequest.h
  include/tencentcloud/tat/v20201028/model/InvokeCommandRequest.h
  include/tencentcloud/tat/v20201028/model/DescribeInvokerRecordsRequest.h
  include/tencentcloud/tat/v20201028/model/Tag.h
  include/tencentcloud/tat/v20201028/model/RunCommandResponse.h
  include/tencentcloud/tat/v20201028/model/DescribeRegionsResponse.h
  include/tencentcloud/tat/v20201028/model/CreateCommandRequest.h
  )

set(tat_src
  src/v20201028/TatClient.cpp
  src/v20201028/model/ScheduleSettings.cpp
  src/v20201028/model/InvocationTaskBasicInfo.cpp
  src/v20201028/model/PreviewReplacedCommandContentResponse.cpp
  src/v20201028/model/CreateCommandResponse.cpp
  src/v20201028/model/DisableInvokerRequest.cpp
  src/v20201028/model/AutomationAgentInfo.cpp
  src/v20201028/model/RunCommandRequest.cpp
  src/v20201028/model/Invoker.cpp
  src/v20201028/model/DescribeInvocationTasksRequest.cpp
  src/v20201028/model/Invocation.cpp
  src/v20201028/model/DescribeRegionsRequest.cpp
  src/v20201028/model/CommandDocument.cpp
  src/v20201028/model/DescribeInvokerRecordsResponse.cpp
  src/v20201028/model/TaskResult.cpp
  src/v20201028/model/ModifyInvokerRequest.cpp
  src/v20201028/model/EnableInvokerResponse.cpp
  src/v20201028/model/EnableInvokerRequest.cpp
  src/v20201028/model/ModifyCommandResponse.cpp
  src/v20201028/model/RegionInfo.cpp
  src/v20201028/model/DescribeInvokersResponse.cpp
  src/v20201028/model/CancelInvocationResponse.cpp
  src/v20201028/model/DeleteCommandResponse.cpp
  src/v20201028/model/DisableInvokerResponse.cpp
  src/v20201028/model/DescribeCommandsResponse.cpp
  src/v20201028/model/CreateInvokerRequest.cpp
  src/v20201028/model/DescribeAutomationAgentStatusRequest.cpp
  src/v20201028/model/InvokeCommandResponse.cpp
  src/v20201028/model/ModifyCommandRequest.cpp
  src/v20201028/model/DescribeInvokersRequest.cpp
  src/v20201028/model/DescribeCommandsRequest.cpp
  src/v20201028/model/DeleteInvokerResponse.cpp
  src/v20201028/model/DescribeInvocationsRequest.cpp
  src/v20201028/model/Filter.cpp
  src/v20201028/model/DescribeInvocationsResponse.cpp
  src/v20201028/model/DescribeInvocationTasksResponse.cpp
  src/v20201028/model/Command.cpp
  src/v20201028/model/PreviewReplacedCommandContentRequest.cpp
  src/v20201028/model/InvocationTask.cpp
  src/v20201028/model/ModifyInvokerResponse.cpp
  src/v20201028/model/InvokerRecord.cpp
  src/v20201028/model/DescribeAutomationAgentStatusResponse.cpp
  src/v20201028/model/CreateInvokerResponse.cpp
  src/v20201028/model/CancelInvocationRequest.cpp
  src/v20201028/model/DeleteCommandRequest.cpp
  src/v20201028/model/DeleteInvokerRequest.cpp
  src/v20201028/model/InvokeCommandRequest.cpp
  src/v20201028/model/DescribeInvokerRecordsRequest.cpp
  src/v20201028/model/Tag.cpp
  src/v20201028/model/RunCommandResponse.cpp
  src/v20201028/model/DescribeRegionsResponse.cpp
  src/v20201028/model/CreateCommandRequest.cpp
  )

set(tat_include
    include/tencentcloud/tat
  )

add_library(tat ${LIB_TYPE}
  ${tat_public_header}
  ${tat_public_header_model}
  ${tat_src})

set_target_properties(tat
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tat
  )

target_include_directories(tat
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tat
  core)

#install(FILES ${tat_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tat/v20201028)
#install(FILES ${tat_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tat/v20201028/model)
install(DIRECTORY ${tat_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tat
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
