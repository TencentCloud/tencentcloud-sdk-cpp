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
  include/tencentcloud/cii/v20201210/CiiClient.h
  include/tencentcloud/cii/v20210408/CiiClient.h
  )

set(cii_public_header_model
  include/tencentcloud/cii/v20201210/model/DescribeStructCompareDataResponse.h
  include/tencentcloud/cii/v20201210/model/DescribeStructureTaskResultRequest.h
  include/tencentcloud/cii/v20201210/model/CreateStructureTaskRequest.h
  include/tencentcloud/cii/v20201210/model/CompareMetricsData.h
  include/tencentcloud/cii/v20201210/model/ResultObject.h
  include/tencentcloud/cii/v20201210/model/DescribeStructCompareDataRequest.h
  include/tencentcloud/cii/v20201210/model/CreateStructureTaskResponse.h
  include/tencentcloud/cii/v20201210/model/DescribeStructureTaskResultResponse.h
  include/tencentcloud/cii/v20210408/model/ClassifyInfo.h
  include/tencentcloud/cii/v20210408/model/DescribeStructureTaskResultRequest.h
  include/tencentcloud/cii/v20210408/model/MachineUnderwriteOutput.h
  include/tencentcloud/cii/v20210408/model/CreateStructureTaskRequest.h
  include/tencentcloud/cii/v20210408/model/UnderwriteOutput.h
  include/tencentcloud/cii/v20210408/model/DescribeStructCompareDataRequest.h
  include/tencentcloud/cii/v20210408/model/Location.h
  include/tencentcloud/cii/v20210408/model/AddSubStructureTasksResponse.h
  include/tencentcloud/cii/v20210408/model/InsuranceResult.h
  include/tencentcloud/cii/v20210408/model/UnderwriteConclusion.h
  include/tencentcloud/cii/v20210408/model/DescribeStructureDifferenceResponse.h
  include/tencentcloud/cii/v20210408/model/CreateUnderwriteTaskByIdRequest.h
  include/tencentcloud/cii/v20210408/model/UploadMedicalFileResponse.h
  include/tencentcloud/cii/v20210408/model/PerStructDifference.h
  include/tencentcloud/cii/v20210408/model/UploadMedicalFileRequest.h
  include/tencentcloud/cii/v20210408/model/CompareMetricsData.h
  include/tencentcloud/cii/v20210408/model/StructureOneItem.h
  include/tencentcloud/cii/v20210408/model/CreateAutoClassifyStructureTaskRequest.h
  include/tencentcloud/cii/v20210408/model/DescribeMachineUnderwriteRequest.h
  include/tencentcloud/cii/v20210408/model/DescribeQualityScoreRequest.h
  include/tencentcloud/cii/v20210408/model/ReviewDataTaskInfo.h
  include/tencentcloud/cii/v20210408/model/DescribeUnderwriteTaskResponse.h
  include/tencentcloud/cii/v20210408/model/DescribeStructureResultRequest.h
  include/tencentcloud/cii/v20210408/model/DescribeReportClassifyRequest.h
  include/tencentcloud/cii/v20210408/model/UnderwriteItem.h
  include/tencentcloud/cii/v20210408/model/DescribeStructCompareDataResponse.h
  include/tencentcloud/cii/v20210408/model/MachinePredict.h
  include/tencentcloud/cii/v20210408/model/DescribeQualityScoreResponse.h
  include/tencentcloud/cii/v20210408/model/DescribeUnderwriteTaskRequest.h
  include/tencentcloud/cii/v20210408/model/ResultObject.h
  include/tencentcloud/cii/v20210408/model/DescribeStructureResultResponse.h
  include/tencentcloud/cii/v20210408/model/DescribeStructureDifferenceRequest.h
  include/tencentcloud/cii/v20210408/model/CreateStructureTaskResponse.h
  include/tencentcloud/cii/v20210408/model/DescribeStructureTaskResultResponse.h
  include/tencentcloud/cii/v20210408/model/ClassifiedReports.h
  include/tencentcloud/cii/v20210408/model/DescribeMachineUnderwriteResponse.h
  include/tencentcloud/cii/v20210408/model/OcrRecognise.h
  include/tencentcloud/cii/v20210408/model/CreateAutoClassifyStructureTaskResponse.h
  include/tencentcloud/cii/v20210408/model/Point.h
  include/tencentcloud/cii/v20210408/model/DescribeReportClassifyResponse.h
  include/tencentcloud/cii/v20210408/model/CreateUnderwriteTaskByIdResponse.h
  include/tencentcloud/cii/v20210408/model/StructureResultObject.h
  include/tencentcloud/cii/v20210408/model/CreateStructureTaskInfo.h
  include/tencentcloud/cii/v20210408/model/AddSubStructureTasksRequest.h
  include/tencentcloud/cii/v20210408/model/CreateAutoClassifyStructureTaskInfo.h
  include/tencentcloud/cii/v20210408/model/StructureModifyItem.h
  )

set(cii_src
  src/v20201210/CiiClient.cpp
  src/v20210408/CiiClient.cpp
  src/v20201210/model/DescribeStructCompareDataResponse.cpp
  src/v20201210/model/DescribeStructureTaskResultRequest.cpp
  src/v20201210/model/CreateStructureTaskRequest.cpp
  src/v20201210/model/CompareMetricsData.cpp
  src/v20201210/model/ResultObject.cpp
  src/v20201210/model/DescribeStructCompareDataRequest.cpp
  src/v20201210/model/CreateStructureTaskResponse.cpp
  src/v20201210/model/DescribeStructureTaskResultResponse.cpp
  src/v20210408/model/ClassifyInfo.cpp
  src/v20210408/model/DescribeStructureTaskResultRequest.cpp
  src/v20210408/model/MachineUnderwriteOutput.cpp
  src/v20210408/model/CreateStructureTaskRequest.cpp
  src/v20210408/model/UnderwriteOutput.cpp
  src/v20210408/model/DescribeStructCompareDataRequest.cpp
  src/v20210408/model/Location.cpp
  src/v20210408/model/AddSubStructureTasksResponse.cpp
  src/v20210408/model/InsuranceResult.cpp
  src/v20210408/model/UnderwriteConclusion.cpp
  src/v20210408/model/DescribeStructureDifferenceResponse.cpp
  src/v20210408/model/CreateUnderwriteTaskByIdRequest.cpp
  src/v20210408/model/UploadMedicalFileResponse.cpp
  src/v20210408/model/PerStructDifference.cpp
  src/v20210408/model/UploadMedicalFileRequest.cpp
  src/v20210408/model/CompareMetricsData.cpp
  src/v20210408/model/StructureOneItem.cpp
  src/v20210408/model/CreateAutoClassifyStructureTaskRequest.cpp
  src/v20210408/model/DescribeMachineUnderwriteRequest.cpp
  src/v20210408/model/DescribeQualityScoreRequest.cpp
  src/v20210408/model/ReviewDataTaskInfo.cpp
  src/v20210408/model/DescribeUnderwriteTaskResponse.cpp
  src/v20210408/model/DescribeStructureResultRequest.cpp
  src/v20210408/model/DescribeReportClassifyRequest.cpp
  src/v20210408/model/UnderwriteItem.cpp
  src/v20210408/model/DescribeStructCompareDataResponse.cpp
  src/v20210408/model/MachinePredict.cpp
  src/v20210408/model/DescribeQualityScoreResponse.cpp
  src/v20210408/model/DescribeUnderwriteTaskRequest.cpp
  src/v20210408/model/ResultObject.cpp
  src/v20210408/model/DescribeStructureResultResponse.cpp
  src/v20210408/model/DescribeStructureDifferenceRequest.cpp
  src/v20210408/model/CreateStructureTaskResponse.cpp
  src/v20210408/model/DescribeStructureTaskResultResponse.cpp
  src/v20210408/model/ClassifiedReports.cpp
  src/v20210408/model/DescribeMachineUnderwriteResponse.cpp
  src/v20210408/model/OcrRecognise.cpp
  src/v20210408/model/CreateAutoClassifyStructureTaskResponse.cpp
  src/v20210408/model/Point.cpp
  src/v20210408/model/DescribeReportClassifyResponse.cpp
  src/v20210408/model/CreateUnderwriteTaskByIdResponse.cpp
  src/v20210408/model/StructureResultObject.cpp
  src/v20210408/model/CreateStructureTaskInfo.cpp
  src/v20210408/model/AddSubStructureTasksRequest.cpp
  src/v20210408/model/CreateAutoClassifyStructureTaskInfo.cpp
  src/v20210408/model/StructureModifyItem.cpp
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
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cii/v20210408)
#install(FILES ${cii_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cii/v20210408/model)
install(DIRECTORY ${cii_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS cii
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
