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

set(ms_public_header
  include/tencentcloud/ms/v20180408/MsClient.h
  )

set(ms_public_header_model
  include/tencentcloud/ms/v20180408/model/PlanDetailInfo.h
  include/tencentcloud/ms/v20180408/model/AppSetInfo.h
  include/tencentcloud/ms/v20180408/model/CreateShieldPlanInstanceResponse.h
  include/tencentcloud/ms/v20180408/model/DescribeEncryptInstancesResponse.h
  include/tencentcloud/ms/v20180408/model/ResourceServiceInfo.h
  include/tencentcloud/ms/v20180408/model/CreateResourceInstancesRequest.h
  include/tencentcloud/ms/v20180408/model/DescribeShieldInstancesResponse.h
  include/tencentcloud/ms/v20180408/model/ShieldInfo.h
  include/tencentcloud/ms/v20180408/model/UpdateClientStateRequest.h
  include/tencentcloud/ms/v20180408/model/SDKPlan.h
  include/tencentcloud/ms/v20180408/model/DescribeShieldResultRequest.h
  include/tencentcloud/ms/v20180408/model/CancelEncryptTaskResponse.h
  include/tencentcloud/ms/v20180408/model/DescribeOrderInstancesResponse.h
  include/tencentcloud/ms/v20180408/model/CreateCosSecKeyInstanceRequest.h
  include/tencentcloud/ms/v20180408/model/IOSPlan.h
  include/tencentcloud/ms/v20180408/model/DescribeUserBaseInfoInstanceResponse.h
  include/tencentcloud/ms/v20180408/model/UpdateLocalTaskResultResponse.h
  include/tencentcloud/ms/v20180408/model/Filter.h
  include/tencentcloud/ms/v20180408/model/CreateShieldPlanInstanceRequest.h
  include/tencentcloud/ms/v20180408/model/CreateEncryptInstanceResponse.h
  include/tencentcloud/ms/v20180408/model/DestroyResourceInstancesRequest.h
  include/tencentcloud/ms/v20180408/model/SDKResult.h
  include/tencentcloud/ms/v20180408/model/RequestLocalTaskResponse.h
  include/tencentcloud/ms/v20180408/model/UpdateLocalTaskResultRequest.h
  include/tencentcloud/ms/v20180408/model/IOSInfo.h
  include/tencentcloud/ms/v20180408/model/ShieldPlanInfo.h
  include/tencentcloud/ms/v20180408/model/CreateBindInstanceRequest.h
  include/tencentcloud/ms/v20180408/model/CreateShieldInstanceResponse.h
  include/tencentcloud/ms/v20180408/model/AppletPlan.h
  include/tencentcloud/ms/v20180408/model/DeleteShieldInstancesRequest.h
  include/tencentcloud/ms/v20180408/model/ResourceInfo.h
  include/tencentcloud/ms/v20180408/model/AndroidResult.h
  include/tencentcloud/ms/v20180408/model/DescribeUserBaseInfoInstanceRequest.h
  include/tencentcloud/ms/v20180408/model/DescribeShieldInstancesRequest.h
  include/tencentcloud/ms/v20180408/model/AppletInfo.h
  include/tencentcloud/ms/v20180408/model/AndroidPlan.h
  include/tencentcloud/ms/v20180408/model/IOSResult.h
  include/tencentcloud/ms/v20180408/model/DescribeUrlDetectionResultRequest.h
  include/tencentcloud/ms/v20180408/model/AppInfo.h
  include/tencentcloud/ms/v20180408/model/DescribeShieldPlanInstanceResponse.h
  include/tencentcloud/ms/v20180408/model/DescribeEncryptPlanRequest.h
  include/tencentcloud/ms/v20180408/model/DescribeEncryptInstancesRequest.h
  include/tencentcloud/ms/v20180408/model/SoInfo.h
  include/tencentcloud/ms/v20180408/model/PluginListItem.h
  include/tencentcloud/ms/v20180408/model/DescribeApkDetectionResultRequest.h
  include/tencentcloud/ms/v20180408/model/ResultListItem.h
  include/tencentcloud/ms/v20180408/model/DeleteShieldInstancesResponse.h
  include/tencentcloud/ms/v20180408/model/DestroyResourceInstancesResponse.h
  include/tencentcloud/ms/v20180408/model/AndroidAppInfo.h
  include/tencentcloud/ms/v20180408/model/DescribeUrlDetectionResultResponse.h
  include/tencentcloud/ms/v20180408/model/CreateShieldInstanceRequest.h
  include/tencentcloud/ms/v20180408/model/DescribeShieldPlanInstanceRequest.h
  include/tencentcloud/ms/v20180408/model/DescribeEncryptPlanResponse.h
  include/tencentcloud/ms/v20180408/model/CreateResourceInstancesResponse.h
  include/tencentcloud/ms/v20180408/model/AppDetailInfo.h
  include/tencentcloud/ms/v20180408/model/RequestLocalTaskRequest.h
  include/tencentcloud/ms/v20180408/model/DescribeOrderInstancesRequest.h
  include/tencentcloud/ms/v20180408/model/DescribeResourceInstancesRequest.h
  include/tencentcloud/ms/v20180408/model/CreateOrderInstanceRequest.h
  include/tencentcloud/ms/v20180408/model/AppletResult.h
  include/tencentcloud/ms/v20180408/model/DescribeApkDetectionResultResponse.h
  include/tencentcloud/ms/v20180408/model/DescribeResourceInstancesResponse.h
  include/tencentcloud/ms/v20180408/model/CreateOrderInstanceResponse.h
  include/tencentcloud/ms/v20180408/model/ServiceInfo.h
  include/tencentcloud/ms/v20180408/model/CancelEncryptTaskRequest.h
  include/tencentcloud/ms/v20180408/model/CreateCosSecKeyInstanceResponse.h
  include/tencentcloud/ms/v20180408/model/Orders.h
  include/tencentcloud/ms/v20180408/model/CreateEncryptInstanceRequest.h
  include/tencentcloud/ms/v20180408/model/PlanInfo.h
  include/tencentcloud/ms/v20180408/model/DescribeShieldResultResponse.h
  include/tencentcloud/ms/v20180408/model/CreateBindInstanceResponse.h
  include/tencentcloud/ms/v20180408/model/BindInfo.h
  include/tencentcloud/ms/v20180408/model/UpdateClientStateResponse.h
  include/tencentcloud/ms/v20180408/model/OptPluginListItem.h
  include/tencentcloud/ms/v20180408/model/EncryptResults.h
  )

set(ms_src
  src/v20180408/MsClient.cpp
  src/v20180408/model/PlanDetailInfo.cpp
  src/v20180408/model/AppSetInfo.cpp
  src/v20180408/model/CreateShieldPlanInstanceResponse.cpp
  src/v20180408/model/DescribeEncryptInstancesResponse.cpp
  src/v20180408/model/ResourceServiceInfo.cpp
  src/v20180408/model/CreateResourceInstancesRequest.cpp
  src/v20180408/model/DescribeShieldInstancesResponse.cpp
  src/v20180408/model/ShieldInfo.cpp
  src/v20180408/model/UpdateClientStateRequest.cpp
  src/v20180408/model/SDKPlan.cpp
  src/v20180408/model/DescribeShieldResultRequest.cpp
  src/v20180408/model/CancelEncryptTaskResponse.cpp
  src/v20180408/model/DescribeOrderInstancesResponse.cpp
  src/v20180408/model/CreateCosSecKeyInstanceRequest.cpp
  src/v20180408/model/IOSPlan.cpp
  src/v20180408/model/DescribeUserBaseInfoInstanceResponse.cpp
  src/v20180408/model/UpdateLocalTaskResultResponse.cpp
  src/v20180408/model/Filter.cpp
  src/v20180408/model/CreateShieldPlanInstanceRequest.cpp
  src/v20180408/model/CreateEncryptInstanceResponse.cpp
  src/v20180408/model/DestroyResourceInstancesRequest.cpp
  src/v20180408/model/SDKResult.cpp
  src/v20180408/model/RequestLocalTaskResponse.cpp
  src/v20180408/model/UpdateLocalTaskResultRequest.cpp
  src/v20180408/model/IOSInfo.cpp
  src/v20180408/model/ShieldPlanInfo.cpp
  src/v20180408/model/CreateBindInstanceRequest.cpp
  src/v20180408/model/CreateShieldInstanceResponse.cpp
  src/v20180408/model/AppletPlan.cpp
  src/v20180408/model/DeleteShieldInstancesRequest.cpp
  src/v20180408/model/ResourceInfo.cpp
  src/v20180408/model/AndroidResult.cpp
  src/v20180408/model/DescribeUserBaseInfoInstanceRequest.cpp
  src/v20180408/model/DescribeShieldInstancesRequest.cpp
  src/v20180408/model/AppletInfo.cpp
  src/v20180408/model/AndroidPlan.cpp
  src/v20180408/model/IOSResult.cpp
  src/v20180408/model/DescribeUrlDetectionResultRequest.cpp
  src/v20180408/model/AppInfo.cpp
  src/v20180408/model/DescribeShieldPlanInstanceResponse.cpp
  src/v20180408/model/DescribeEncryptPlanRequest.cpp
  src/v20180408/model/DescribeEncryptInstancesRequest.cpp
  src/v20180408/model/SoInfo.cpp
  src/v20180408/model/PluginListItem.cpp
  src/v20180408/model/DescribeApkDetectionResultRequest.cpp
  src/v20180408/model/ResultListItem.cpp
  src/v20180408/model/DeleteShieldInstancesResponse.cpp
  src/v20180408/model/DestroyResourceInstancesResponse.cpp
  src/v20180408/model/AndroidAppInfo.cpp
  src/v20180408/model/DescribeUrlDetectionResultResponse.cpp
  src/v20180408/model/CreateShieldInstanceRequest.cpp
  src/v20180408/model/DescribeShieldPlanInstanceRequest.cpp
  src/v20180408/model/DescribeEncryptPlanResponse.cpp
  src/v20180408/model/CreateResourceInstancesResponse.cpp
  src/v20180408/model/AppDetailInfo.cpp
  src/v20180408/model/RequestLocalTaskRequest.cpp
  src/v20180408/model/DescribeOrderInstancesRequest.cpp
  src/v20180408/model/DescribeResourceInstancesRequest.cpp
  src/v20180408/model/CreateOrderInstanceRequest.cpp
  src/v20180408/model/AppletResult.cpp
  src/v20180408/model/DescribeApkDetectionResultResponse.cpp
  src/v20180408/model/DescribeResourceInstancesResponse.cpp
  src/v20180408/model/CreateOrderInstanceResponse.cpp
  src/v20180408/model/ServiceInfo.cpp
  src/v20180408/model/CancelEncryptTaskRequest.cpp
  src/v20180408/model/CreateCosSecKeyInstanceResponse.cpp
  src/v20180408/model/Orders.cpp
  src/v20180408/model/CreateEncryptInstanceRequest.cpp
  src/v20180408/model/PlanInfo.cpp
  src/v20180408/model/DescribeShieldResultResponse.cpp
  src/v20180408/model/CreateBindInstanceResponse.cpp
  src/v20180408/model/BindInfo.cpp
  src/v20180408/model/UpdateClientStateResponse.cpp
  src/v20180408/model/OptPluginListItem.cpp
  src/v20180408/model/EncryptResults.cpp
  )

set(ms_include
    include/tencentcloud/ms
  )

add_library(ms ${LIB_TYPE}
  ${ms_public_header}
  ${ms_public_header_model}
  ${ms_src})

set_target_properties(ms
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ms
  )

target_include_directories(ms
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(ms
  core)

#install(FILES ${ms_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ms/v20180408)
#install(FILES ${ms_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ms/v20180408/model)
install(DIRECTORY ${ms_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS ms
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
