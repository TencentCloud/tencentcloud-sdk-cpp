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

set(tcbr_public_header
  include/tencentcloud/tcbr/v20220217/TcbrClient.h
  )

set(tcbr_public_header_model
  include/tencentcloud/tcbr/v20220217/model/DescribeCloudRunServersResponse.h
  include/tencentcloud/tcbr/v20220217/model/RepositoryInfo.h
  include/tencentcloud/tcbr/v20220217/model/ReleaseGrayRequest.h
  include/tencentcloud/tcbr/v20220217/model/StorageInfo.h
  include/tencentcloud/tcbr/v20220217/model/DescribeEnvBaseInfoResponse.h
  include/tencentcloud/tcbr/v20220217/model/CreateCloudRunServerRequest.h
  include/tencentcloud/tcbr/v20220217/model/FunctionInfo.h
  include/tencentcloud/tcbr/v20220217/model/DescribeServerManageTaskResponse.h
  include/tencentcloud/tcbr/v20220217/model/TaskStepInfo.h
  include/tencentcloud/tcbr/v20220217/model/DescribeCloudRunEnvsResponse.h
  include/tencentcloud/tcbr/v20220217/model/DescribeCloudRunEnvsRequest.h
  include/tencentcloud/tcbr/v20220217/model/ReleaseGrayResponse.h
  include/tencentcloud/tcbr/v20220217/model/DeployParam.h
  include/tencentcloud/tcbr/v20220217/model/OperateServerManageRequest.h
  include/tencentcloud/tcbr/v20220217/model/StaticStorageInfo.h
  include/tencentcloud/tcbr/v20220217/model/UpdateCloudRunServerRequest.h
  include/tencentcloud/tcbr/v20220217/model/LogServiceInfo.h
  include/tencentcloud/tcbr/v20220217/model/OperateServerManageResponse.h
  include/tencentcloud/tcbr/v20220217/model/DescribeCloudRunServerDetailRequest.h
  include/tencentcloud/tcbr/v20220217/model/DatabasesInfo.h
  include/tencentcloud/tcbr/v20220217/model/DescribeCloudRunServersRequest.h
  include/tencentcloud/tcbr/v20220217/model/ClsInfo.h
  include/tencentcloud/tcbr/v20220217/model/DescribeServerManageTaskRequest.h
  include/tencentcloud/tcbr/v20220217/model/HpaPolicy.h
  include/tencentcloud/tcbr/v20220217/model/OnlineVersionInfo.h
  include/tencentcloud/tcbr/v20220217/model/ServerBaseConfig.h
  include/tencentcloud/tcbr/v20220217/model/DescribeCloudRunServerDetailResponse.h
  include/tencentcloud/tcbr/v20220217/model/CreateCloudRunEnvResponse.h
  include/tencentcloud/tcbr/v20220217/model/EnvBaseInfo.h
  include/tencentcloud/tcbr/v20220217/model/ServerBaseInfo.h
  include/tencentcloud/tcbr/v20220217/model/TimerScale.h
  include/tencentcloud/tcbr/v20220217/model/EnvInfo.h
  include/tencentcloud/tcbr/v20220217/model/Tag.h
  include/tencentcloud/tcbr/v20220217/model/DescribeEnvBaseInfoRequest.h
  include/tencentcloud/tcbr/v20220217/model/CreateCloudRunServerResponse.h
  include/tencentcloud/tcbr/v20220217/model/VersionFlowInfo.h
  include/tencentcloud/tcbr/v20220217/model/UpdateCloudRunServerResponse.h
  include/tencentcloud/tcbr/v20220217/model/ObjectKV.h
  include/tencentcloud/tcbr/v20220217/model/BuildPacksInfo.h
  include/tencentcloud/tcbr/v20220217/model/CreateCloudRunEnvRequest.h
  include/tencentcloud/tcbr/v20220217/model/ServerManageTaskInfo.h
  )

set(tcbr_src
  src/v20220217/TcbrClient.cpp
  src/v20220217/model/DescribeCloudRunServersResponse.cpp
  src/v20220217/model/RepositoryInfo.cpp
  src/v20220217/model/ReleaseGrayRequest.cpp
  src/v20220217/model/StorageInfo.cpp
  src/v20220217/model/DescribeEnvBaseInfoResponse.cpp
  src/v20220217/model/CreateCloudRunServerRequest.cpp
  src/v20220217/model/FunctionInfo.cpp
  src/v20220217/model/DescribeServerManageTaskResponse.cpp
  src/v20220217/model/TaskStepInfo.cpp
  src/v20220217/model/DescribeCloudRunEnvsResponse.cpp
  src/v20220217/model/DescribeCloudRunEnvsRequest.cpp
  src/v20220217/model/ReleaseGrayResponse.cpp
  src/v20220217/model/DeployParam.cpp
  src/v20220217/model/OperateServerManageRequest.cpp
  src/v20220217/model/StaticStorageInfo.cpp
  src/v20220217/model/UpdateCloudRunServerRequest.cpp
  src/v20220217/model/LogServiceInfo.cpp
  src/v20220217/model/OperateServerManageResponse.cpp
  src/v20220217/model/DescribeCloudRunServerDetailRequest.cpp
  src/v20220217/model/DatabasesInfo.cpp
  src/v20220217/model/DescribeCloudRunServersRequest.cpp
  src/v20220217/model/ClsInfo.cpp
  src/v20220217/model/DescribeServerManageTaskRequest.cpp
  src/v20220217/model/HpaPolicy.cpp
  src/v20220217/model/OnlineVersionInfo.cpp
  src/v20220217/model/ServerBaseConfig.cpp
  src/v20220217/model/DescribeCloudRunServerDetailResponse.cpp
  src/v20220217/model/CreateCloudRunEnvResponse.cpp
  src/v20220217/model/EnvBaseInfo.cpp
  src/v20220217/model/ServerBaseInfo.cpp
  src/v20220217/model/TimerScale.cpp
  src/v20220217/model/EnvInfo.cpp
  src/v20220217/model/Tag.cpp
  src/v20220217/model/DescribeEnvBaseInfoRequest.cpp
  src/v20220217/model/CreateCloudRunServerResponse.cpp
  src/v20220217/model/VersionFlowInfo.cpp
  src/v20220217/model/UpdateCloudRunServerResponse.cpp
  src/v20220217/model/ObjectKV.cpp
  src/v20220217/model/BuildPacksInfo.cpp
  src/v20220217/model/CreateCloudRunEnvRequest.cpp
  src/v20220217/model/ServerManageTaskInfo.cpp
  )

set(tcbr_include
    include/tencentcloud/tcbr
  )

add_library(tcbr ${LIB_TYPE}
  ${tcbr_public_header}
  ${tcbr_public_header_model}
  ${tcbr_src})

set_target_properties(tcbr
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tcbr
  )

target_include_directories(tcbr
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tcbr
  core)

#install(FILES ${tcbr_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tcbr/v20220217)
#install(FILES ${tcbr_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tcbr/v20220217/model)
install(DIRECTORY ${tcbr_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tcbr
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
