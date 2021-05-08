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

set(cii_public_header
  include/tencentcloud/cii/v20210408/CiiClient.h
  include/tencentcloud/cii/v20201210/CiiClient.h
  )

set(cii_public_header_model
  include/tencentcloud/cii/v20210408/model/DescribeStructCompareDataResponse.h
  include/tencentcloud/cii/v20210408/model/DescribeStructureTaskResultRequest.h
  include/tencentcloud/cii/v20210408/model/CreateStructureTaskRequest.h
  include/tencentcloud/cii/v20210408/model/CompareMetricsData.h
  include/tencentcloud/cii/v20210408/model/ResultObject.h
  include/tencentcloud/cii/v20210408/model/DescribeStructCompareDataRequest.h
  include/tencentcloud/cii/v20210408/model/CreateStructureTaskResponse.h
  include/tencentcloud/cii/v20210408/model/ReviewDataTaskInfo.h
  include/tencentcloud/cii/v20210408/model/DescribeStructureTaskResultResponse.h
  include/tencentcloud/cii/v20210408/model/CreateStructureTaskInfo.h
  include/tencentcloud/cii/v20201210/model/DescribeStructCompareDataResponse.h
  include/tencentcloud/cii/v20201210/model/DescribeStructureTaskResultRequest.h
  include/tencentcloud/cii/v20201210/model/CreateStructureTaskRequest.h
  include/tencentcloud/cii/v20201210/model/CompareMetricsData.h
  include/tencentcloud/cii/v20201210/model/ResultObject.h
  include/tencentcloud/cii/v20201210/model/DescribeStructCompareDataRequest.h
  include/tencentcloud/cii/v20201210/model/CreateStructureTaskResponse.h
  include/tencentcloud/cii/v20201210/model/DescribeStructureTaskResultResponse.h
  )

set(cii_src
  src/v20210408/CiiClient.cpp
  src/v20201210/CiiClient.cpp
  src/v20210408/model/DescribeStructCompareDataResponse.cpp
  src/v20210408/model/DescribeStructureTaskResultRequest.cpp
  src/v20210408/model/CreateStructureTaskRequest.cpp
  src/v20210408/model/CompareMetricsData.cpp
  src/v20210408/model/ResultObject.cpp
  src/v20210408/model/DescribeStructCompareDataRequest.cpp
  src/v20210408/model/CreateStructureTaskResponse.cpp
  src/v20210408/model/ReviewDataTaskInfo.cpp
  src/v20210408/model/DescribeStructureTaskResultResponse.cpp
  src/v20210408/model/CreateStructureTaskInfo.cpp
  src/v20201210/model/DescribeStructCompareDataResponse.cpp
  src/v20201210/model/DescribeStructureTaskResultRequest.cpp
  src/v20201210/model/CreateStructureTaskRequest.cpp
  src/v20201210/model/CompareMetricsData.cpp
  src/v20201210/model/ResultObject.cpp
  src/v20201210/model/DescribeStructCompareDataRequest.cpp
  src/v20201210/model/CreateStructureTaskResponse.cpp
  src/v20201210/model/DescribeStructureTaskResultResponse.cpp
  )

set(cii_include
    include/tencentcloud/cii
  )

add_library(cii ${LIB_TYPE}
  ${cii_public_header}
  ${cii_public_header_model}
  ${cii_src})

set_target_properties(cii
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cii
  )

target_include_directories(cii
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(cii
  core)

#install(FILES ${cii_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cii/v20201210)
#install(FILES ${cii_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cii/v20201210/model)
install(DIRECTORY ${cii_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS cii
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
