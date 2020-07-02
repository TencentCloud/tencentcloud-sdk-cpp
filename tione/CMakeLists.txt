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

set(tione_public_header
  include/tencentcloud/tione/v20191022/TioneClient.h
  )

set(tione_public_header_model
  include/tencentcloud/tione/v20191022/model/OutputDataConfig.h
  include/tencentcloud/tione/v20191022/model/StopTrainingJobResponse.h
  include/tencentcloud/tione/v20191022/model/BillingLabel.h
  include/tencentcloud/tione/v20191022/model/EnvConfig.h
  include/tencentcloud/tione/v20191022/model/CreateNotebookInstanceRequest.h
  include/tencentcloud/tione/v20191022/model/DescribeNotebookSummaryRequest.h
  include/tencentcloud/tione/v20191022/model/SecondaryStatusTransition.h
  include/tencentcloud/tione/v20191022/model/DescribeNotebookInstanceRequest.h
  include/tencentcloud/tione/v20191022/model/DeleteNotebookInstanceResponse.h
  include/tencentcloud/tione/v20191022/model/NotebookInstanceSummary.h
  include/tencentcloud/tione/v20191022/model/GitConfig.h
  include/tencentcloud/tione/v20191022/model/CodeRepoSummary.h
  include/tencentcloud/tione/v20191022/model/ResourceConfig.h
  include/tencentcloud/tione/v20191022/model/DeleteNotebookLifecycleScriptResponse.h
  include/tencentcloud/tione/v20191022/model/DescribeNotebookLifecycleScriptsRequest.h
  include/tencentcloud/tione/v20191022/model/GitSecret.h
  include/tencentcloud/tione/v20191022/model/DeleteCodeRepositoryRequest.h
  include/tencentcloud/tione/v20191022/model/DescribeCodeRepositoryResponse.h
  include/tencentcloud/tione/v20191022/model/InputDataConfig.h
  include/tencentcloud/tione/v20191022/model/StartNotebookInstanceResponse.h
  include/tencentcloud/tione/v20191022/model/UpdateCodeRepositoryResponse.h
  include/tencentcloud/tione/v20191022/model/CreateNotebookInstanceResponse.h
  include/tencentcloud/tione/v20191022/model/FileSystemDataSource.h
  include/tencentcloud/tione/v20191022/model/NotebookLifecycleScriptsSummary.h
  include/tencentcloud/tione/v20191022/model/StopTrainingJobRequest.h
  include/tencentcloud/tione/v20191022/model/UpdateNotebookInstanceResponse.h
  include/tencentcloud/tione/v20191022/model/UpdateNotebookLifecycleScriptRequest.h
  include/tencentcloud/tione/v20191022/model/UpdateNotebookInstanceRequest.h
  include/tencentcloud/tione/v20191022/model/CreatePresignedNotebookInstanceUrlRequest.h
  include/tencentcloud/tione/v20191022/model/CreateNotebookLifecycleScriptRequest.h
  include/tencentcloud/tione/v20191022/model/CreateCodeRepositoryRequest.h
  include/tencentcloud/tione/v20191022/model/DescribeNotebookInstancesRequest.h
  include/tencentcloud/tione/v20191022/model/DescribeTrainingJobsResponse.h
  include/tencentcloud/tione/v20191022/model/StoppingCondition.h
  include/tencentcloud/tione/v20191022/model/DescribeCodeRepositoriesResponse.h
  include/tencentcloud/tione/v20191022/model/DescribeNotebookInstancesResponse.h
  include/tencentcloud/tione/v20191022/model/DescribeCodeRepositoryRequest.h
  include/tencentcloud/tione/v20191022/model/CreateTrainingJobResponse.h
  include/tencentcloud/tione/v20191022/model/DescribeNotebookInstanceResponse.h
  include/tencentcloud/tione/v20191022/model/DescribeTrainingJobRequest.h
  include/tencentcloud/tione/v20191022/model/TrainingJobSummary.h
  include/tencentcloud/tione/v20191022/model/AlgorithmSpecification.h
  include/tencentcloud/tione/v20191022/model/CosDataSource.h
  include/tencentcloud/tione/v20191022/model/DescribeNotebookLifecycleScriptsResponse.h
  include/tencentcloud/tione/v20191022/model/DescribeNotebookSummaryResponse.h
  include/tencentcloud/tione/v20191022/model/Filter.h
  include/tencentcloud/tione/v20191022/model/StopNotebookInstanceRequest.h
  include/tencentcloud/tione/v20191022/model/DeleteNotebookLifecycleScriptRequest.h
  include/tencentcloud/tione/v20191022/model/DescribeNotebookLifecycleScriptResponse.h
  include/tencentcloud/tione/v20191022/model/DescribeTrainingJobResponse.h
  include/tencentcloud/tione/v20191022/model/StopNotebookInstanceResponse.h
  include/tencentcloud/tione/v20191022/model/UpdateCodeRepositoryRequest.h
  include/tencentcloud/tione/v20191022/model/CreateTrainingJobRequest.h
  include/tencentcloud/tione/v20191022/model/DeleteNotebookInstanceRequest.h
  include/tencentcloud/tione/v20191022/model/DescribeNotebookLifecycleScriptRequest.h
  include/tencentcloud/tione/v20191022/model/VpcConfig.h
  include/tencentcloud/tione/v20191022/model/CreateNotebookLifecycleScriptResponse.h
  include/tencentcloud/tione/v20191022/model/CreatePresignedNotebookInstanceUrlResponse.h
  include/tencentcloud/tione/v20191022/model/UpdateNotebookLifecycleScriptResponse.h
  include/tencentcloud/tione/v20191022/model/DescribeTrainingJobsRequest.h
  include/tencentcloud/tione/v20191022/model/StartNotebookInstanceRequest.h
  include/tencentcloud/tione/v20191022/model/CreateCodeRepositoryResponse.h
  include/tencentcloud/tione/v20191022/model/DescribeCodeRepositoriesRequest.h
  include/tencentcloud/tione/v20191022/model/DataSource.h
  include/tencentcloud/tione/v20191022/model/ModelArtifacts.h
  include/tencentcloud/tione/v20191022/model/DeleteCodeRepositoryResponse.h
  )

set(tione_src
  src/v20191022/TioneClient.cpp
  src/v20191022/model/OutputDataConfig.cpp
  src/v20191022/model/StopTrainingJobResponse.cpp
  src/v20191022/model/BillingLabel.cpp
  src/v20191022/model/EnvConfig.cpp
  src/v20191022/model/CreateNotebookInstanceRequest.cpp
  src/v20191022/model/DescribeNotebookSummaryRequest.cpp
  src/v20191022/model/SecondaryStatusTransition.cpp
  src/v20191022/model/DescribeNotebookInstanceRequest.cpp
  src/v20191022/model/DeleteNotebookInstanceResponse.cpp
  src/v20191022/model/NotebookInstanceSummary.cpp
  src/v20191022/model/GitConfig.cpp
  src/v20191022/model/CodeRepoSummary.cpp
  src/v20191022/model/ResourceConfig.cpp
  src/v20191022/model/DeleteNotebookLifecycleScriptResponse.cpp
  src/v20191022/model/DescribeNotebookLifecycleScriptsRequest.cpp
  src/v20191022/model/GitSecret.cpp
  src/v20191022/model/DeleteCodeRepositoryRequest.cpp
  src/v20191022/model/DescribeCodeRepositoryResponse.cpp
  src/v20191022/model/InputDataConfig.cpp
  src/v20191022/model/StartNotebookInstanceResponse.cpp
  src/v20191022/model/UpdateCodeRepositoryResponse.cpp
  src/v20191022/model/CreateNotebookInstanceResponse.cpp
  src/v20191022/model/FileSystemDataSource.cpp
  src/v20191022/model/NotebookLifecycleScriptsSummary.cpp
  src/v20191022/model/StopTrainingJobRequest.cpp
  src/v20191022/model/UpdateNotebookInstanceResponse.cpp
  src/v20191022/model/UpdateNotebookLifecycleScriptRequest.cpp
  src/v20191022/model/UpdateNotebookInstanceRequest.cpp
  src/v20191022/model/CreatePresignedNotebookInstanceUrlRequest.cpp
  src/v20191022/model/CreateNotebookLifecycleScriptRequest.cpp
  src/v20191022/model/CreateCodeRepositoryRequest.cpp
  src/v20191022/model/DescribeNotebookInstancesRequest.cpp
  src/v20191022/model/DescribeTrainingJobsResponse.cpp
  src/v20191022/model/StoppingCondition.cpp
  src/v20191022/model/DescribeCodeRepositoriesResponse.cpp
  src/v20191022/model/DescribeNotebookInstancesResponse.cpp
  src/v20191022/model/DescribeCodeRepositoryRequest.cpp
  src/v20191022/model/CreateTrainingJobResponse.cpp
  src/v20191022/model/DescribeNotebookInstanceResponse.cpp
  src/v20191022/model/DescribeTrainingJobRequest.cpp
  src/v20191022/model/TrainingJobSummary.cpp
  src/v20191022/model/AlgorithmSpecification.cpp
  src/v20191022/model/CosDataSource.cpp
  src/v20191022/model/DescribeNotebookLifecycleScriptsResponse.cpp
  src/v20191022/model/DescribeNotebookSummaryResponse.cpp
  src/v20191022/model/Filter.cpp
  src/v20191022/model/StopNotebookInstanceRequest.cpp
  src/v20191022/model/DeleteNotebookLifecycleScriptRequest.cpp
  src/v20191022/model/DescribeNotebookLifecycleScriptResponse.cpp
  src/v20191022/model/DescribeTrainingJobResponse.cpp
  src/v20191022/model/StopNotebookInstanceResponse.cpp
  src/v20191022/model/UpdateCodeRepositoryRequest.cpp
  src/v20191022/model/CreateTrainingJobRequest.cpp
  src/v20191022/model/DeleteNotebookInstanceRequest.cpp
  src/v20191022/model/DescribeNotebookLifecycleScriptRequest.cpp
  src/v20191022/model/VpcConfig.cpp
  src/v20191022/model/CreateNotebookLifecycleScriptResponse.cpp
  src/v20191022/model/CreatePresignedNotebookInstanceUrlResponse.cpp
  src/v20191022/model/UpdateNotebookLifecycleScriptResponse.cpp
  src/v20191022/model/DescribeTrainingJobsRequest.cpp
  src/v20191022/model/StartNotebookInstanceRequest.cpp
  src/v20191022/model/CreateCodeRepositoryResponse.cpp
  src/v20191022/model/DescribeCodeRepositoriesRequest.cpp
  src/v20191022/model/DataSource.cpp
  src/v20191022/model/ModelArtifacts.cpp
  src/v20191022/model/DeleteCodeRepositoryResponse.cpp
  )

set(tione_include
    include/tencentcloud/tione
  )

add_library(tione ${LIB_TYPE}
  ${tione_public_header}
  ${tione_public_header_model}
  ${tione_src})

set_target_properties(tione
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tione
  )

target_include_directories(tione
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tione
  core)

#install(FILES ${tione_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tione/v20191022)
#install(FILES ${tione_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tione/v20191022/model)
install(DIRECTORY ${tione_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tione
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
