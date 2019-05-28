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

set(cis_public_header
  include/tencentcloud/cis/v20180408/CisClient.h
  )

set(cis_public_header_model
  include/tencentcloud/cis/v20180408/model/Container.h
  include/tencentcloud/cis/v20180408/model/InquiryPriceCreateCisResponse.h
  include/tencentcloud/cis/v20180408/model/DescribeContainerLogRequest.h
  include/tencentcloud/cis/v20180408/model/CreateContainerInstanceRequest.h
  include/tencentcloud/cis/v20180408/model/ContainerState.h
  include/tencentcloud/cis/v20180408/model/InquiryPriceCreateCisRequest.h
  include/tencentcloud/cis/v20180408/model/EnvironmentVar.h
  include/tencentcloud/cis/v20180408/model/Price.h
  include/tencentcloud/cis/v20180408/model/DescribeContainerInstancesResponse.h
  include/tencentcloud/cis/v20180408/model/DeleteContainerInstanceResponse.h
  include/tencentcloud/cis/v20180408/model/DescribeContainerInstancesRequest.h
  include/tencentcloud/cis/v20180408/model/Filter.h
  include/tencentcloud/cis/v20180408/model/CreateContainerInstanceResponse.h
  include/tencentcloud/cis/v20180408/model/DescribeContainerInstanceRequest.h
  include/tencentcloud/cis/v20180408/model/DescribeContainerInstanceResponse.h
  include/tencentcloud/cis/v20180408/model/ContainerLog.h
  include/tencentcloud/cis/v20180408/model/DescribeContainerInstanceEventsResponse.h
  include/tencentcloud/cis/v20180408/model/Event.h
  include/tencentcloud/cis/v20180408/model/DescribeContainerInstanceEventsRequest.h
  include/tencentcloud/cis/v20180408/model/DescribeContainerLogResponse.h
  include/tencentcloud/cis/v20180408/model/DeleteContainerInstanceRequest.h
  include/tencentcloud/cis/v20180408/model/ContainerInstance.h
  )

set(cis_src
  src/v20180408/CisClient.cpp
  src/v20180408/model/Container.cpp
  src/v20180408/model/InquiryPriceCreateCisResponse.cpp
  src/v20180408/model/DescribeContainerLogRequest.cpp
  src/v20180408/model/CreateContainerInstanceRequest.cpp
  src/v20180408/model/ContainerState.cpp
  src/v20180408/model/InquiryPriceCreateCisRequest.cpp
  src/v20180408/model/EnvironmentVar.cpp
  src/v20180408/model/Price.cpp
  src/v20180408/model/DescribeContainerInstancesResponse.cpp
  src/v20180408/model/DeleteContainerInstanceResponse.cpp
  src/v20180408/model/DescribeContainerInstancesRequest.cpp
  src/v20180408/model/Filter.cpp
  src/v20180408/model/CreateContainerInstanceResponse.cpp
  src/v20180408/model/DescribeContainerInstanceRequest.cpp
  src/v20180408/model/DescribeContainerInstanceResponse.cpp
  src/v20180408/model/ContainerLog.cpp
  src/v20180408/model/DescribeContainerInstanceEventsResponse.cpp
  src/v20180408/model/Event.cpp
  src/v20180408/model/DescribeContainerInstanceEventsRequest.cpp
  src/v20180408/model/DescribeContainerLogResponse.cpp
  src/v20180408/model/DeleteContainerInstanceRequest.cpp
  src/v20180408/model/ContainerInstance.cpp
  )

set(cis_include
    include/tencentcloud/cis
  )

add_library(cis ${LIB_TYPE}
  ${cis_public_header}
  ${cis_public_header_model}
  ${cis_src})

set_target_properties(cis
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cis
  )

target_include_directories(cis
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(cis
  core)

#install(FILES ${cis_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cis/v20180408)
#install(FILES ${cis_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cis/v20180408/model)
install(DIRECTORY ${cis_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS cis
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
