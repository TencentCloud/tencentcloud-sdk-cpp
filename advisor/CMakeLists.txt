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

set(advisor_public_header
  include/tencentcloud/advisor/v20200721/AdvisorClient.h
  )

set(advisor_public_header_model
  include/tencentcloud/advisor/v20200721/model/DescribeStrategiesResponse.h
  include/tencentcloud/advisor/v20200721/model/DescribeTaskStrategyRisksRequest.h
  include/tencentcloud/advisor/v20200721/model/DescribeTaskStrategyRisksResponse.h
  include/tencentcloud/advisor/v20200721/model/KeyValue.h
  include/tencentcloud/advisor/v20200721/model/RiskFieldsDesc.h
  include/tencentcloud/advisor/v20200721/model/Strategies.h
  include/tencentcloud/advisor/v20200721/model/Conditions.h
  include/tencentcloud/advisor/v20200721/model/DescribeStrategiesRequest.h
  )

set(advisor_src
  src/v20200721/AdvisorClient.cpp
  src/v20200721/model/DescribeStrategiesResponse.cpp
  src/v20200721/model/DescribeTaskStrategyRisksRequest.cpp
  src/v20200721/model/DescribeTaskStrategyRisksResponse.cpp
  src/v20200721/model/KeyValue.cpp
  src/v20200721/model/RiskFieldsDesc.cpp
  src/v20200721/model/Strategies.cpp
  src/v20200721/model/Conditions.cpp
  src/v20200721/model/DescribeStrategiesRequest.cpp
  )

set(advisor_include
    include/tencentcloud/advisor
  )

add_library(advisor ${LIB_TYPE}
  ${advisor_public_header}
  ${advisor_public_header_model}
  ${advisor_src})

set_target_properties(advisor
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}advisor
  )

target_include_directories(advisor
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(advisor
  core)

#install(FILES ${advisor_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/advisor/v20200721)
#install(FILES ${advisor_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/advisor/v20200721/model)
install(DIRECTORY ${advisor_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS advisor
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
