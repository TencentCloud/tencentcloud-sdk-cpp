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

set(solar_public_header
  include/tencentcloud/solar/v20181011/SolarClient.h
  )

set(solar_public_header_model
  include/tencentcloud/solar/v20181011/model/DescribeProjectResponse.h
  include/tencentcloud/solar/v20181011/model/CheckStaffChUserRequest.h
  include/tencentcloud/solar/v20181011/model/DescribeResourceTemplateHeadersResponse.h
  include/tencentcloud/solar/v20181011/model/DeleteProjectRequest.h
  include/tencentcloud/solar/v20181011/model/ReplenishProjectStockResponse.h
  include/tencentcloud/solar/v20181011/model/SendWxTouchTaskResponse.h
  include/tencentcloud/solar/v20181011/model/DescribeCustomersRequest.h
  include/tencentcloud/solar/v20181011/model/DescribeProjectsRequest.h
  include/tencentcloud/solar/v20181011/model/ModifyProjectRequest.h
  include/tencentcloud/solar/v20181011/model/OffLineProjectRequest.h
  include/tencentcloud/solar/v20181011/model/DescribeSubProjectRequest.h
  include/tencentcloud/solar/v20181011/model/ExpireFlowRequest.h
  include/tencentcloud/solar/v20181011/model/CopyActivityChannelRequest.h
  include/tencentcloud/solar/v20181011/model/CopyActivityChannelResponse.h
  include/tencentcloud/solar/v20181011/model/DescribeProjectsResponse.h
  include/tencentcloud/solar/v20181011/model/ReplenishProjectStockRequest.h
  include/tencentcloud/solar/v20181011/model/ProjectStock.h
  include/tencentcloud/solar/v20181011/model/DescribeProjectStockResponse.h
  include/tencentcloud/solar/v20181011/model/CheckStaffChUserResponse.h
  include/tencentcloud/solar/v20181011/model/DescribeCustomerRequest.h
  include/tencentcloud/solar/v20181011/model/ProductInfo.h
  include/tencentcloud/solar/v20181011/model/SubProjectInfo.h
  include/tencentcloud/solar/v20181011/model/ResourceTemplateHeader.h
  include/tencentcloud/solar/v20181011/model/CreateSubProjectResponse.h
  include/tencentcloud/solar/v20181011/model/Filters.h
  include/tencentcloud/solar/v20181011/model/ProjectInfo.h
  include/tencentcloud/solar/v20181011/model/DescribeCustomerResponse.h
  include/tencentcloud/solar/v20181011/model/DescribeCustomersResponse.h
  include/tencentcloud/solar/v20181011/model/CreateSubProjectRequest.h
  include/tencentcloud/solar/v20181011/model/ModifyProjectResponse.h
  include/tencentcloud/solar/v20181011/model/CreateProjectResponse.h
  include/tencentcloud/solar/v20181011/model/DescribeProjectStockRequest.h
  include/tencentcloud/solar/v20181011/model/DeleteProjectResponse.h
  include/tencentcloud/solar/v20181011/model/SendWxTouchTaskRequest.h
  include/tencentcloud/solar/v20181011/model/DescribeProjectRequest.h
  include/tencentcloud/solar/v20181011/model/OffLineProjectResponse.h
  include/tencentcloud/solar/v20181011/model/CustomerInfo.h
  include/tencentcloud/solar/v20181011/model/ActivityInfo.h
  include/tencentcloud/solar/v20181011/model/DescribeResourceTemplateHeadersRequest.h
  include/tencentcloud/solar/v20181011/model/ExpireFlowResponse.h
  include/tencentcloud/solar/v20181011/model/DescribeSubProjectResponse.h
  include/tencentcloud/solar/v20181011/model/CreateProjectRequest.h
  )

set(solar_src
  src/v20181011/SolarClient.cpp
  src/v20181011/model/DescribeProjectResponse.cpp
  src/v20181011/model/CheckStaffChUserRequest.cpp
  src/v20181011/model/DescribeResourceTemplateHeadersResponse.cpp
  src/v20181011/model/DeleteProjectRequest.cpp
  src/v20181011/model/ReplenishProjectStockResponse.cpp
  src/v20181011/model/SendWxTouchTaskResponse.cpp
  src/v20181011/model/DescribeCustomersRequest.cpp
  src/v20181011/model/DescribeProjectsRequest.cpp
  src/v20181011/model/ModifyProjectRequest.cpp
  src/v20181011/model/OffLineProjectRequest.cpp
  src/v20181011/model/DescribeSubProjectRequest.cpp
  src/v20181011/model/ExpireFlowRequest.cpp
  src/v20181011/model/CopyActivityChannelRequest.cpp
  src/v20181011/model/CopyActivityChannelResponse.cpp
  src/v20181011/model/DescribeProjectsResponse.cpp
  src/v20181011/model/ReplenishProjectStockRequest.cpp
  src/v20181011/model/ProjectStock.cpp
  src/v20181011/model/DescribeProjectStockResponse.cpp
  src/v20181011/model/CheckStaffChUserResponse.cpp
  src/v20181011/model/DescribeCustomerRequest.cpp
  src/v20181011/model/ProductInfo.cpp
  src/v20181011/model/SubProjectInfo.cpp
  src/v20181011/model/ResourceTemplateHeader.cpp
  src/v20181011/model/CreateSubProjectResponse.cpp
  src/v20181011/model/Filters.cpp
  src/v20181011/model/ProjectInfo.cpp
  src/v20181011/model/DescribeCustomerResponse.cpp
  src/v20181011/model/DescribeCustomersResponse.cpp
  src/v20181011/model/CreateSubProjectRequest.cpp
  src/v20181011/model/ModifyProjectResponse.cpp
  src/v20181011/model/CreateProjectResponse.cpp
  src/v20181011/model/DescribeProjectStockRequest.cpp
  src/v20181011/model/DeleteProjectResponse.cpp
  src/v20181011/model/SendWxTouchTaskRequest.cpp
  src/v20181011/model/DescribeProjectRequest.cpp
  src/v20181011/model/OffLineProjectResponse.cpp
  src/v20181011/model/CustomerInfo.cpp
  src/v20181011/model/ActivityInfo.cpp
  src/v20181011/model/DescribeResourceTemplateHeadersRequest.cpp
  src/v20181011/model/ExpireFlowResponse.cpp
  src/v20181011/model/DescribeSubProjectResponse.cpp
  src/v20181011/model/CreateProjectRequest.cpp
  )

set(solar_include
    include/tencentcloud/solar
  )

add_library(solar ${LIB_TYPE}
  ${solar_public_header}
  ${solar_public_header_model}
  ${solar_src})

set_target_properties(solar
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}solar
  )

target_include_directories(solar
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(solar
  core)

#install(FILES ${solar_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/solar/v20181011)
#install(FILES ${solar_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/solar/v20181011/model)
install(DIRECTORY ${solar_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS solar
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
