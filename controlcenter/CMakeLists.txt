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

set(controlcenter_public_header
  include/tencentcloud/controlcenter/v20230110/ControlcenterClient.h
  )

set(controlcenter_public_header_model
  include/tencentcloud/controlcenter/v20230110/model/BaselineConfigItem.h
  include/tencentcloud/controlcenter/v20230110/model/UpdateAccountFactoryBaselineResponse.h
  include/tencentcloud/controlcenter/v20230110/model/BaselineStepTaskInfo.h
  include/tencentcloud/controlcenter/v20230110/model/ListAccountFactoryBaselineItemsRequest.h
  include/tencentcloud/controlcenter/v20230110/model/DependsOnItem.h
  include/tencentcloud/controlcenter/v20230110/model/BatchApplyAccountBaselinesResponse.h
  include/tencentcloud/controlcenter/v20230110/model/UpdateAccountFactoryBaselineRequest.h
  include/tencentcloud/controlcenter/v20230110/model/ListDeployStepTasksRequest.h
  include/tencentcloud/controlcenter/v20230110/model/AccountFactoryItem.h
  include/tencentcloud/controlcenter/v20230110/model/BatchApplyAccountBaselinesRequest.h
  include/tencentcloud/controlcenter/v20230110/model/GetAccountFactoryBaselineResponse.h
  include/tencentcloud/controlcenter/v20230110/model/ListAccountFactoryBaselineItemsResponse.h
  include/tencentcloud/controlcenter/v20230110/model/GetAccountFactoryBaselineRequest.h
  include/tencentcloud/controlcenter/v20230110/model/BaselineInfoItem.h
  include/tencentcloud/controlcenter/v20230110/model/ListDeployStepTasksResponse.h
  )

set(controlcenter_src
  src/v20230110/ControlcenterClient.cpp
  src/v20230110/model/BaselineConfigItem.cpp
  src/v20230110/model/UpdateAccountFactoryBaselineResponse.cpp
  src/v20230110/model/BaselineStepTaskInfo.cpp
  src/v20230110/model/ListAccountFactoryBaselineItemsRequest.cpp
  src/v20230110/model/DependsOnItem.cpp
  src/v20230110/model/BatchApplyAccountBaselinesResponse.cpp
  src/v20230110/model/UpdateAccountFactoryBaselineRequest.cpp
  src/v20230110/model/ListDeployStepTasksRequest.cpp
  src/v20230110/model/AccountFactoryItem.cpp
  src/v20230110/model/BatchApplyAccountBaselinesRequest.cpp
  src/v20230110/model/GetAccountFactoryBaselineResponse.cpp
  src/v20230110/model/ListAccountFactoryBaselineItemsResponse.cpp
  src/v20230110/model/GetAccountFactoryBaselineRequest.cpp
  src/v20230110/model/BaselineInfoItem.cpp
  src/v20230110/model/ListDeployStepTasksResponse.cpp
  )

set(controlcenter_include
    include/tencentcloud/controlcenter
  )

add_library(controlcenter ${LIB_TYPE}
  ${controlcenter_public_header}
  ${controlcenter_public_header_model}
  ${controlcenter_src})

set_target_properties(controlcenter
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}controlcenter
  )

target_include_directories(controlcenter
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(controlcenter
  core)

#install(FILES ${controlcenter_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/controlcenter/v20230110)
#install(FILES ${controlcenter_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/controlcenter/v20230110/model)
install(DIRECTORY ${controlcenter_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS controlcenter
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
