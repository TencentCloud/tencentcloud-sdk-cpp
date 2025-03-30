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

set(gs_public_header
  include/tencentcloud/gs/v20191118/GsClient.h
  )

set(gs_public_header_model
  include/tencentcloud/gs/v20191118/model/DescribeAndroidInstanceTasksStatusResponse.h
  include/tencentcloud/gs/v20191118/model/ExecuteCommandOnAndroidInstancesResponse.h
  include/tencentcloud/gs/v20191118/model/StartPublishStreamToCSSResponse.h
  include/tencentcloud/gs/v20191118/model/StartAndroidInstancesRequest.h
  include/tencentcloud/gs/v20191118/model/CreateSessionRequest.h
  include/tencentcloud/gs/v20191118/model/SyncExecuteCommandOnAndroidInstancesRequest.h
  include/tencentcloud/gs/v20191118/model/UninstallAndroidInstancesAppResponse.h
  include/tencentcloud/gs/v20191118/model/StopAndroidInstancesAppResponse.h
  include/tencentcloud/gs/v20191118/model/DescribeAndroidInstanceLabelsResponse.h
  include/tencentcloud/gs/v20191118/model/AndroidApp.h
  include/tencentcloud/gs/v20191118/model/DescribeAndroidAppsResponse.h
  include/tencentcloud/gs/v20191118/model/StopAndroidInstancesAppRequest.h
  include/tencentcloud/gs/v20191118/model/ModifyAndroidInstancesLabelsRequest.h
  include/tencentcloud/gs/v20191118/model/SyncAndroidInstanceImage.h
  include/tencentcloud/gs/v20191118/model/AndroidInstanceLabel.h
  include/tencentcloud/gs/v20191118/model/DeleteAndroidInstanceImagesResponse.h
  include/tencentcloud/gs/v20191118/model/StartPublishStreamRequest.h
  include/tencentcloud/gs/v20191118/model/CreateAndroidInstanceImageResponse.h
  include/tencentcloud/gs/v20191118/model/ModifyAndroidInstanceResolutionResponse.h
  include/tencentcloud/gs/v20191118/model/DeleteAndroidInstanceImagesRequest.h
  include/tencentcloud/gs/v20191118/model/DescribeAndroidInstanceAppsResponse.h
  include/tencentcloud/gs/v20191118/model/CreateAndroidInstanceSSHResponse.h
  include/tencentcloud/gs/v20191118/model/ResetAndroidInstancesRequest.h
  include/tencentcloud/gs/v20191118/model/UploadFileToAndroidInstancesRequest.h
  include/tencentcloud/gs/v20191118/model/SaveGameArchiveResponse.h
  include/tencentcloud/gs/v20191118/model/ConnectAndroidInstanceRequest.h
  include/tencentcloud/gs/v20191118/model/CopyAndroidInstanceRequest.h
  include/tencentcloud/gs/v20191118/model/SyncExecuteCommandOnAndroidInstancesResponse.h
  include/tencentcloud/gs/v20191118/model/StartAndroidInstancesAppRequest.h
  include/tencentcloud/gs/v20191118/model/ModifyAndroidInstancesUserIdRequest.h
  include/tencentcloud/gs/v20191118/model/StopPublishStreamResponse.h
  include/tencentcloud/gs/v20191118/model/StartAndroidInstancesResponse.h
  include/tencentcloud/gs/v20191118/model/DeleteAndroidInstanceLabelRequest.h
  include/tencentcloud/gs/v20191118/model/ModifyAndroidInstancesUserIdResponse.h
  include/tencentcloud/gs/v20191118/model/InstallAndroidInstancesAppRequest.h
  include/tencentcloud/gs/v20191118/model/UninstallAndroidInstancesAppRequest.h
  include/tencentcloud/gs/v20191118/model/DestroyAndroidInstancesRequest.h
  include/tencentcloud/gs/v20191118/model/CreateAndroidInstanceWebShellResponse.h
  include/tencentcloud/gs/v20191118/model/DescribeAndroidInstanceImagesResponse.h
  include/tencentcloud/gs/v20191118/model/ModifyAndroidInstanceInformationRequest.h
  include/tencentcloud/gs/v20191118/model/StopPublishStreamRequest.h
  include/tencentcloud/gs/v20191118/model/SyncExecuteCommandResult.h
  include/tencentcloud/gs/v20191118/model/RestartAndroidInstancesAppResponse.h
  include/tencentcloud/gs/v20191118/model/DescribeAndroidInstanceTasksStatusRequest.h
  include/tencentcloud/gs/v20191118/model/CreateAndroidInstancesScreenshotResponse.h
  include/tencentcloud/gs/v20191118/model/DescribeInstancesCountResponse.h
  include/tencentcloud/gs/v20191118/model/ExecuteCommandOnAndroidInstancesRequest.h
  include/tencentcloud/gs/v20191118/model/ModifyAndroidInstanceInformationResponse.h
  include/tencentcloud/gs/v20191118/model/DestroyAndroidInstancesResponse.h
  include/tencentcloud/gs/v20191118/model/SaveGameArchiveRequest.h
  include/tencentcloud/gs/v20191118/model/SwitchGameArchiveResponse.h
  include/tencentcloud/gs/v20191118/model/CreateAndroidInstancesScreenshotRequest.h
  include/tencentcloud/gs/v20191118/model/InstallAndroidInstancesAppResponse.h
  include/tencentcloud/gs/v20191118/model/AndroidInstanceTask.h
  include/tencentcloud/gs/v20191118/model/ConnectAndroidInstanceResponse.h
  include/tencentcloud/gs/v20191118/model/DescribeAndroidInstancesRequest.h
  include/tencentcloud/gs/v20191118/model/DescribeAndroidInstancesResponse.h
  include/tencentcloud/gs/v20191118/model/SyncAndroidInstanceImageRequest.h
  include/tencentcloud/gs/v20191118/model/ModifyAndroidInstanceResolutionRequest.h
  include/tencentcloud/gs/v20191118/model/AndroidAppVersionInfo.h
  include/tencentcloud/gs/v20191118/model/StartAndroidInstancesAppResponse.h
  include/tencentcloud/gs/v20191118/model/SwitchGameArchiveRequest.h
  include/tencentcloud/gs/v20191118/model/StartPublishStreamToCSSRequest.h
  include/tencentcloud/gs/v20191118/model/Filter.h
  include/tencentcloud/gs/v20191118/model/ResetAndroidInstancesResponse.h
  include/tencentcloud/gs/v20191118/model/RestartAndroidInstancesAppRequest.h
  include/tencentcloud/gs/v20191118/model/DescribeAndroidAppsRequest.h
  include/tencentcloud/gs/v20191118/model/StopGameRequest.h
  include/tencentcloud/gs/v20191118/model/RebootAndroidInstancesResponse.h
  include/tencentcloud/gs/v20191118/model/TrylockWorkerResponse.h
  include/tencentcloud/gs/v20191118/model/CreateAndroidInstanceWebShellRequest.h
  include/tencentcloud/gs/v20191118/model/ModifyAndroidInstancesLabelsResponse.h
  include/tencentcloud/gs/v20191118/model/DescribeAndroidInstanceLabelsRequest.h
  include/tencentcloud/gs/v20191118/model/CopyAndroidInstanceResponse.h
  include/tencentcloud/gs/v20191118/model/DeleteAndroidInstanceLabelResponse.h
  include/tencentcloud/gs/v20191118/model/DescribeAndroidInstanceImagesRequest.h
  include/tencentcloud/gs/v20191118/model/AndroidInstanceTaskStatus.h
  include/tencentcloud/gs/v20191118/model/UploadFileToAndroidInstancesResponse.h
  include/tencentcloud/gs/v20191118/model/SyncAndroidInstanceImageResponse.h
  include/tencentcloud/gs/v20191118/model/CreateAndroidInstancesResponse.h
  include/tencentcloud/gs/v20191118/model/StopGameResponse.h
  include/tencentcloud/gs/v20191118/model/CreateAndroidInstanceLabelRequest.h
  include/tencentcloud/gs/v20191118/model/AndroidInstance.h
  include/tencentcloud/gs/v20191118/model/CreateAndroidInstancesRequest.h
  include/tencentcloud/gs/v20191118/model/CreateAndroidInstanceLabelResponse.h
  include/tencentcloud/gs/v20191118/model/StartPublishStreamResponse.h
  include/tencentcloud/gs/v20191118/model/AndroidInstanceImage.h
  include/tencentcloud/gs/v20191118/model/DescribeAndroidInstanceAppsRequest.h
  include/tencentcloud/gs/v20191118/model/DescribeInstancesCountRequest.h
  include/tencentcloud/gs/v20191118/model/TrylockWorkerRequest.h
  include/tencentcloud/gs/v20191118/model/RebootAndroidInstancesRequest.h
  include/tencentcloud/gs/v20191118/model/CreateSessionResponse.h
  include/tencentcloud/gs/v20191118/model/AndroidInstanceAppInfo.h
  include/tencentcloud/gs/v20191118/model/StopAndroidInstancesRequest.h
  include/tencentcloud/gs/v20191118/model/LabelRequirement.h
  include/tencentcloud/gs/v20191118/model/CreateAndroidInstanceSSHRequest.h
  include/tencentcloud/gs/v20191118/model/StopAndroidInstancesResponse.h
  include/tencentcloud/gs/v20191118/model/CreateAndroidInstanceImageRequest.h
  )

set(gs_src
  src/v20191118/GsClient.cpp
  src/v20191118/model/DescribeAndroidInstanceTasksStatusResponse.cpp
  src/v20191118/model/ExecuteCommandOnAndroidInstancesResponse.cpp
  src/v20191118/model/StartPublishStreamToCSSResponse.cpp
  src/v20191118/model/StartAndroidInstancesRequest.cpp
  src/v20191118/model/CreateSessionRequest.cpp
  src/v20191118/model/SyncExecuteCommandOnAndroidInstancesRequest.cpp
  src/v20191118/model/UninstallAndroidInstancesAppResponse.cpp
  src/v20191118/model/StopAndroidInstancesAppResponse.cpp
  src/v20191118/model/DescribeAndroidInstanceLabelsResponse.cpp
  src/v20191118/model/AndroidApp.cpp
  src/v20191118/model/DescribeAndroidAppsResponse.cpp
  src/v20191118/model/StopAndroidInstancesAppRequest.cpp
  src/v20191118/model/ModifyAndroidInstancesLabelsRequest.cpp
  src/v20191118/model/SyncAndroidInstanceImage.cpp
  src/v20191118/model/AndroidInstanceLabel.cpp
  src/v20191118/model/DeleteAndroidInstanceImagesResponse.cpp
  src/v20191118/model/StartPublishStreamRequest.cpp
  src/v20191118/model/CreateAndroidInstanceImageResponse.cpp
  src/v20191118/model/ModifyAndroidInstanceResolutionResponse.cpp
  src/v20191118/model/DeleteAndroidInstanceImagesRequest.cpp
  src/v20191118/model/DescribeAndroidInstanceAppsResponse.cpp
  src/v20191118/model/CreateAndroidInstanceSSHResponse.cpp
  src/v20191118/model/ResetAndroidInstancesRequest.cpp
  src/v20191118/model/UploadFileToAndroidInstancesRequest.cpp
  src/v20191118/model/SaveGameArchiveResponse.cpp
  src/v20191118/model/ConnectAndroidInstanceRequest.cpp
  src/v20191118/model/CopyAndroidInstanceRequest.cpp
  src/v20191118/model/SyncExecuteCommandOnAndroidInstancesResponse.cpp
  src/v20191118/model/StartAndroidInstancesAppRequest.cpp
  src/v20191118/model/ModifyAndroidInstancesUserIdRequest.cpp
  src/v20191118/model/StopPublishStreamResponse.cpp
  src/v20191118/model/StartAndroidInstancesResponse.cpp
  src/v20191118/model/DeleteAndroidInstanceLabelRequest.cpp
  src/v20191118/model/ModifyAndroidInstancesUserIdResponse.cpp
  src/v20191118/model/InstallAndroidInstancesAppRequest.cpp
  src/v20191118/model/UninstallAndroidInstancesAppRequest.cpp
  src/v20191118/model/DestroyAndroidInstancesRequest.cpp
  src/v20191118/model/CreateAndroidInstanceWebShellResponse.cpp
  src/v20191118/model/DescribeAndroidInstanceImagesResponse.cpp
  src/v20191118/model/ModifyAndroidInstanceInformationRequest.cpp
  src/v20191118/model/StopPublishStreamRequest.cpp
  src/v20191118/model/SyncExecuteCommandResult.cpp
  src/v20191118/model/RestartAndroidInstancesAppResponse.cpp
  src/v20191118/model/DescribeAndroidInstanceTasksStatusRequest.cpp
  src/v20191118/model/CreateAndroidInstancesScreenshotResponse.cpp
  src/v20191118/model/DescribeInstancesCountResponse.cpp
  src/v20191118/model/ExecuteCommandOnAndroidInstancesRequest.cpp
  src/v20191118/model/ModifyAndroidInstanceInformationResponse.cpp
  src/v20191118/model/DestroyAndroidInstancesResponse.cpp
  src/v20191118/model/SaveGameArchiveRequest.cpp
  src/v20191118/model/SwitchGameArchiveResponse.cpp
  src/v20191118/model/CreateAndroidInstancesScreenshotRequest.cpp
  src/v20191118/model/InstallAndroidInstancesAppResponse.cpp
  src/v20191118/model/AndroidInstanceTask.cpp
  src/v20191118/model/ConnectAndroidInstanceResponse.cpp
  src/v20191118/model/DescribeAndroidInstancesRequest.cpp
  src/v20191118/model/DescribeAndroidInstancesResponse.cpp
  src/v20191118/model/SyncAndroidInstanceImageRequest.cpp
  src/v20191118/model/ModifyAndroidInstanceResolutionRequest.cpp
  src/v20191118/model/AndroidAppVersionInfo.cpp
  src/v20191118/model/StartAndroidInstancesAppResponse.cpp
  src/v20191118/model/SwitchGameArchiveRequest.cpp
  src/v20191118/model/StartPublishStreamToCSSRequest.cpp
  src/v20191118/model/Filter.cpp
  src/v20191118/model/ResetAndroidInstancesResponse.cpp
  src/v20191118/model/RestartAndroidInstancesAppRequest.cpp
  src/v20191118/model/DescribeAndroidAppsRequest.cpp
  src/v20191118/model/StopGameRequest.cpp
  src/v20191118/model/RebootAndroidInstancesResponse.cpp
  src/v20191118/model/TrylockWorkerResponse.cpp
  src/v20191118/model/CreateAndroidInstanceWebShellRequest.cpp
  src/v20191118/model/ModifyAndroidInstancesLabelsResponse.cpp
  src/v20191118/model/DescribeAndroidInstanceLabelsRequest.cpp
  src/v20191118/model/CopyAndroidInstanceResponse.cpp
  src/v20191118/model/DeleteAndroidInstanceLabelResponse.cpp
  src/v20191118/model/DescribeAndroidInstanceImagesRequest.cpp
  src/v20191118/model/AndroidInstanceTaskStatus.cpp
  src/v20191118/model/UploadFileToAndroidInstancesResponse.cpp
  src/v20191118/model/SyncAndroidInstanceImageResponse.cpp
  src/v20191118/model/CreateAndroidInstancesResponse.cpp
  src/v20191118/model/StopGameResponse.cpp
  src/v20191118/model/CreateAndroidInstanceLabelRequest.cpp
  src/v20191118/model/AndroidInstance.cpp
  src/v20191118/model/CreateAndroidInstancesRequest.cpp
  src/v20191118/model/CreateAndroidInstanceLabelResponse.cpp
  src/v20191118/model/StartPublishStreamResponse.cpp
  src/v20191118/model/AndroidInstanceImage.cpp
  src/v20191118/model/DescribeAndroidInstanceAppsRequest.cpp
  src/v20191118/model/DescribeInstancesCountRequest.cpp
  src/v20191118/model/TrylockWorkerRequest.cpp
  src/v20191118/model/RebootAndroidInstancesRequest.cpp
  src/v20191118/model/CreateSessionResponse.cpp
  src/v20191118/model/AndroidInstanceAppInfo.cpp
  src/v20191118/model/StopAndroidInstancesRequest.cpp
  src/v20191118/model/LabelRequirement.cpp
  src/v20191118/model/CreateAndroidInstanceSSHRequest.cpp
  src/v20191118/model/StopAndroidInstancesResponse.cpp
  src/v20191118/model/CreateAndroidInstanceImageRequest.cpp
  )

set(gs_include
    include/tencentcloud/gs
  )

add_library(gs ${LIB_TYPE}
  ${gs_public_header}
  ${gs_public_header_model}
  ${gs_src})

set_target_properties(gs
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}gs
  )

target_include_directories(gs
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(gs
  core)

#install(FILES ${gs_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/gs/v20191118)
#install(FILES ${gs_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/gs/v20191118/model)
install(DIRECTORY ${gs_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS gs
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
