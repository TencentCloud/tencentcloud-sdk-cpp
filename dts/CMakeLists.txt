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

set(dts_public_header
  include/tencentcloud/dts/v20180330/DtsClient.h
  )

set(dts_public_header_model
  include/tencentcloud/dts/v20180330/model/DescribeSyncJobsResponse.h
  include/tencentcloud/dts/v20180330/model/DescribeMigrateJobsResponse.h
  include/tencentcloud/dts/v20180330/model/MigrateDetailInfo.h
  include/tencentcloud/dts/v20180330/model/DeleteMigrateJobResponse.h
  include/tencentcloud/dts/v20180330/model/CreateMigrateCheckJobRequest.h
  include/tencentcloud/dts/v20180330/model/ModifySubscribeVipVportRequest.h
  include/tencentcloud/dts/v20180330/model/SyncInstanceInfo.h
  include/tencentcloud/dts/v20180330/model/ModifySubscribeNameResponse.h
  include/tencentcloud/dts/v20180330/model/CreateSyncJobResponse.h
  include/tencentcloud/dts/v20180330/model/DescribeMigrateCheckJobRequest.h
  include/tencentcloud/dts/v20180330/model/IsolateSubscribeResponse.h
  include/tencentcloud/dts/v20180330/model/ModifySubscribeObjectsResponse.h
  include/tencentcloud/dts/v20180330/model/SwitchDrToMasterRequest.h
  include/tencentcloud/dts/v20180330/model/StartSyncJobRequest.h
  include/tencentcloud/dts/v20180330/model/CreateMigrateJobRequest.h
  include/tencentcloud/dts/v20180330/model/SubscribeInfo.h
  include/tencentcloud/dts/v20180330/model/ModifySubscribeNameRequest.h
  include/tencentcloud/dts/v20180330/model/SyncJobInfo.h
  include/tencentcloud/dts/v20180330/model/ModifySubscribeConsumeTimeResponse.h
  include/tencentcloud/dts/v20180330/model/DstInfo.h
  include/tencentcloud/dts/v20180330/model/DescribeSubscribeConfResponse.h
  include/tencentcloud/dts/v20180330/model/DescribeAsyncRequestInfoRequest.h
  include/tencentcloud/dts/v20180330/model/SrcInfo.h
  include/tencentcloud/dts/v20180330/model/ConsistencyParams.h
  include/tencentcloud/dts/v20180330/model/ModifyMigrateJobRequest.h
  include/tencentcloud/dts/v20180330/model/CreateSubscribeRequest.h
  include/tencentcloud/dts/v20180330/model/CreateMigrateCheckJobResponse.h
  include/tencentcloud/dts/v20180330/model/MigrateStepDetailInfo.h
  include/tencentcloud/dts/v20180330/model/ModifySubscribeObjectsRequest.h
  include/tencentcloud/dts/v20180330/model/DescribeMigrateCheckJobResponse.h
  include/tencentcloud/dts/v20180330/model/SubscribeRegionConf.h
  include/tencentcloud/dts/v20180330/model/ActivateSubscribeRequest.h
  include/tencentcloud/dts/v20180330/model/OfflineIsolatedSubscribeRequest.h
  include/tencentcloud/dts/v20180330/model/DescribeSubscribesRequest.h
  include/tencentcloud/dts/v20180330/model/ResetSubscribeResponse.h
  include/tencentcloud/dts/v20180330/model/StartSyncJobResponse.h
  include/tencentcloud/dts/v20180330/model/DescribeSubscribesResponse.h
  include/tencentcloud/dts/v20180330/model/SyncCheckStepInfo.h
  include/tencentcloud/dts/v20180330/model/CreateSyncCheckJobResponse.h
  include/tencentcloud/dts/v20180330/model/StopMigrateJobRequest.h
  include/tencentcloud/dts/v20180330/model/DescribeSyncCheckJobRequest.h
  include/tencentcloud/dts/v20180330/model/DescribeRegionConfResponse.h
  include/tencentcloud/dts/v20180330/model/ModifySyncJobResponse.h
  include/tencentcloud/dts/v20180330/model/DescribeAsyncRequestInfoResponse.h
  include/tencentcloud/dts/v20180330/model/CompleteMigrateJobRequest.h
  include/tencentcloud/dts/v20180330/model/ResetSubscribeRequest.h
  include/tencentcloud/dts/v20180330/model/ModifySubscribeConsumeTimeRequest.h
  include/tencentcloud/dts/v20180330/model/SwitchDrToMasterResponse.h
  include/tencentcloud/dts/v20180330/model/ModifyMigrateJobResponse.h
  include/tencentcloud/dts/v20180330/model/CreateSyncJobRequest.h
  include/tencentcloud/dts/v20180330/model/DescribeSyncJobsRequest.h
  include/tencentcloud/dts/v20180330/model/DescribeMigrateJobsRequest.h
  include/tencentcloud/dts/v20180330/model/SyncDetailInfo.h
  include/tencentcloud/dts/v20180330/model/StopMigrateJobResponse.h
  include/tencentcloud/dts/v20180330/model/SyncOption.h
  include/tencentcloud/dts/v20180330/model/OfflineIsolatedSubscribeResponse.h
  include/tencentcloud/dts/v20180330/model/SyncStepDetailInfo.h
  include/tencentcloud/dts/v20180330/model/IsolateSubscribeRequest.h
  include/tencentcloud/dts/v20180330/model/DeleteSyncJobResponse.h
  include/tencentcloud/dts/v20180330/model/CreateSyncCheckJobRequest.h
  include/tencentcloud/dts/v20180330/model/ModifySyncJobRequest.h
  include/tencentcloud/dts/v20180330/model/DescribeRegionConfRequest.h
  include/tencentcloud/dts/v20180330/model/CompleteMigrateJobResponse.h
  include/tencentcloud/dts/v20180330/model/StartMigrateJobResponse.h
  include/tencentcloud/dts/v20180330/model/SubscribeObject.h
  include/tencentcloud/dts/v20180330/model/CreateMigrateJobResponse.h
  include/tencentcloud/dts/v20180330/model/DescribeSubscribeConfRequest.h
  include/tencentcloud/dts/v20180330/model/ModifySubscribeVipVportResponse.h
  include/tencentcloud/dts/v20180330/model/MigrateJobInfo.h
  include/tencentcloud/dts/v20180330/model/DeleteMigrateJobRequest.h
  include/tencentcloud/dts/v20180330/model/DeleteSyncJobRequest.h
  include/tencentcloud/dts/v20180330/model/ActivateSubscribeResponse.h
  include/tencentcloud/dts/v20180330/model/CreateSubscribeResponse.h
  include/tencentcloud/dts/v20180330/model/MigrateOption.h
  include/tencentcloud/dts/v20180330/model/ErrorInfo.h
  include/tencentcloud/dts/v20180330/model/DescribeSyncCheckJobResponse.h
  include/tencentcloud/dts/v20180330/model/StartMigrateJobRequest.h
  )

set(dts_src
  src/v20180330/DtsClient.cpp
  src/v20180330/model/DescribeSyncJobsResponse.cpp
  src/v20180330/model/DescribeMigrateJobsResponse.cpp
  src/v20180330/model/MigrateDetailInfo.cpp
  src/v20180330/model/DeleteMigrateJobResponse.cpp
  src/v20180330/model/CreateMigrateCheckJobRequest.cpp
  src/v20180330/model/ModifySubscribeVipVportRequest.cpp
  src/v20180330/model/SyncInstanceInfo.cpp
  src/v20180330/model/ModifySubscribeNameResponse.cpp
  src/v20180330/model/CreateSyncJobResponse.cpp
  src/v20180330/model/DescribeMigrateCheckJobRequest.cpp
  src/v20180330/model/IsolateSubscribeResponse.cpp
  src/v20180330/model/ModifySubscribeObjectsResponse.cpp
  src/v20180330/model/SwitchDrToMasterRequest.cpp
  src/v20180330/model/StartSyncJobRequest.cpp
  src/v20180330/model/CreateMigrateJobRequest.cpp
  src/v20180330/model/SubscribeInfo.cpp
  src/v20180330/model/ModifySubscribeNameRequest.cpp
  src/v20180330/model/SyncJobInfo.cpp
  src/v20180330/model/ModifySubscribeConsumeTimeResponse.cpp
  src/v20180330/model/DstInfo.cpp
  src/v20180330/model/DescribeSubscribeConfResponse.cpp
  src/v20180330/model/DescribeAsyncRequestInfoRequest.cpp
  src/v20180330/model/SrcInfo.cpp
  src/v20180330/model/ConsistencyParams.cpp
  src/v20180330/model/ModifyMigrateJobRequest.cpp
  src/v20180330/model/CreateSubscribeRequest.cpp
  src/v20180330/model/CreateMigrateCheckJobResponse.cpp
  src/v20180330/model/MigrateStepDetailInfo.cpp
  src/v20180330/model/ModifySubscribeObjectsRequest.cpp
  src/v20180330/model/DescribeMigrateCheckJobResponse.cpp
  src/v20180330/model/SubscribeRegionConf.cpp
  src/v20180330/model/ActivateSubscribeRequest.cpp
  src/v20180330/model/OfflineIsolatedSubscribeRequest.cpp
  src/v20180330/model/DescribeSubscribesRequest.cpp
  src/v20180330/model/ResetSubscribeResponse.cpp
  src/v20180330/model/StartSyncJobResponse.cpp
  src/v20180330/model/DescribeSubscribesResponse.cpp
  src/v20180330/model/SyncCheckStepInfo.cpp
  src/v20180330/model/CreateSyncCheckJobResponse.cpp
  src/v20180330/model/StopMigrateJobRequest.cpp
  src/v20180330/model/DescribeSyncCheckJobRequest.cpp
  src/v20180330/model/DescribeRegionConfResponse.cpp
  src/v20180330/model/ModifySyncJobResponse.cpp
  src/v20180330/model/DescribeAsyncRequestInfoResponse.cpp
  src/v20180330/model/CompleteMigrateJobRequest.cpp
  src/v20180330/model/ResetSubscribeRequest.cpp
  src/v20180330/model/ModifySubscribeConsumeTimeRequest.cpp
  src/v20180330/model/SwitchDrToMasterResponse.cpp
  src/v20180330/model/ModifyMigrateJobResponse.cpp
  src/v20180330/model/CreateSyncJobRequest.cpp
  src/v20180330/model/DescribeSyncJobsRequest.cpp
  src/v20180330/model/DescribeMigrateJobsRequest.cpp
  src/v20180330/model/SyncDetailInfo.cpp
  src/v20180330/model/StopMigrateJobResponse.cpp
  src/v20180330/model/SyncOption.cpp
  src/v20180330/model/OfflineIsolatedSubscribeResponse.cpp
  src/v20180330/model/SyncStepDetailInfo.cpp
  src/v20180330/model/IsolateSubscribeRequest.cpp
  src/v20180330/model/DeleteSyncJobResponse.cpp
  src/v20180330/model/CreateSyncCheckJobRequest.cpp
  src/v20180330/model/ModifySyncJobRequest.cpp
  src/v20180330/model/DescribeRegionConfRequest.cpp
  src/v20180330/model/CompleteMigrateJobResponse.cpp
  src/v20180330/model/StartMigrateJobResponse.cpp
  src/v20180330/model/SubscribeObject.cpp
  src/v20180330/model/CreateMigrateJobResponse.cpp
  src/v20180330/model/DescribeSubscribeConfRequest.cpp
  src/v20180330/model/ModifySubscribeVipVportResponse.cpp
  src/v20180330/model/MigrateJobInfo.cpp
  src/v20180330/model/DeleteMigrateJobRequest.cpp
  src/v20180330/model/DeleteSyncJobRequest.cpp
  src/v20180330/model/ActivateSubscribeResponse.cpp
  src/v20180330/model/CreateSubscribeResponse.cpp
  src/v20180330/model/MigrateOption.cpp
  src/v20180330/model/ErrorInfo.cpp
  src/v20180330/model/DescribeSyncCheckJobResponse.cpp
  src/v20180330/model/StartMigrateJobRequest.cpp
  )

set(dts_include
    include/tencentcloud/dts
  )

add_library(dts ${LIB_TYPE}
  ${dts_public_header}
  ${dts_public_header_model}
  ${dts_src})

set_target_properties(dts
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}dts
  )

target_include_directories(dts
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(dts
  core)

#install(FILES ${dts_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/dts/v20180330)
#install(FILES ${dts_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/dts/v20180330/model)
install(DIRECTORY ${dts_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS dts
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
