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

set(tcb_public_header
  include/tencentcloud/tcb/v20180608/TcbClient.h
  )

set(tcb_public_header_model
  include/tencentcloud/tcb/v20180608/model/DescribeDatabaseACLResponse.h
  include/tencentcloud/tcb/v20180608/model/StorageInfo.h
  include/tencentcloud/tcb/v20180608/model/DatabasesInfo.h
  include/tencentcloud/tcb/v20180608/model/ModifyEnvRequest.h
  include/tencentcloud/tcb/v20180608/model/EnvInfo.h
  include/tencentcloud/tcb/v20180608/model/FunctionInfo.h
  include/tencentcloud/tcb/v20180608/model/DescribeEnvsRequest.h
  include/tencentcloud/tcb/v20180608/model/ModifyDatabaseACLRequest.h
  include/tencentcloud/tcb/v20180608/model/DescribeDatabaseACLRequest.h
  include/tencentcloud/tcb/v20180608/model/DescribeEnvsResponse.h
  include/tencentcloud/tcb/v20180608/model/ModifyEnvResponse.h
  include/tencentcloud/tcb/v20180608/model/ModifyDatabaseACLResponse.h
  )

set(tcb_src
  src/v20180608/TcbClient.cpp
  src/v20180608/model/DescribeDatabaseACLResponse.cpp
  src/v20180608/model/StorageInfo.cpp
  src/v20180608/model/DatabasesInfo.cpp
  src/v20180608/model/ModifyEnvRequest.cpp
  src/v20180608/model/EnvInfo.cpp
  src/v20180608/model/FunctionInfo.cpp
  src/v20180608/model/DescribeEnvsRequest.cpp
  src/v20180608/model/ModifyDatabaseACLRequest.cpp
  src/v20180608/model/DescribeDatabaseACLRequest.cpp
  src/v20180608/model/DescribeEnvsResponse.cpp
  src/v20180608/model/ModifyEnvResponse.cpp
  src/v20180608/model/ModifyDatabaseACLResponse.cpp
  )

set(tcb_include
    include/tencentcloud/tcb
  )

add_library(tcb ${LIB_TYPE}
  ${tcb_public_header}
  ${tcb_public_header_model}
  ${tcb_src})

set_target_properties(tcb
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tcb
  )

target_include_directories(tcb
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tcb
  core)

#install(FILES ${tcb_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tcb/v20180608)
#install(FILES ${tcb_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tcb/v20180608/model)
install(DIRECTORY ${tcb_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tcb
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
