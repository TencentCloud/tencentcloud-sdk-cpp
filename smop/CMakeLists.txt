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

set(smop_public_header
  include/tencentcloud/smop/v20201203/SmopClient.h
  )

set(smop_public_header_model
  include/tencentcloud/smop/v20201203/model/TaskEventData.h
  include/tencentcloud/smop/v20201203/model/SubmitTaskEventResponse.h
  include/tencentcloud/smop/v20201203/model/SubmitTaskEventRequest.h
  )

set(smop_src
  src/v20201203/SmopClient.cpp
  src/v20201203/model/TaskEventData.cpp
  src/v20201203/model/SubmitTaskEventResponse.cpp
  src/v20201203/model/SubmitTaskEventRequest.cpp
  )

set(smop_include
    include/tencentcloud/smop
  )

add_library(smop ${LIB_TYPE}
  ${smop_public_header}
  ${smop_public_header_model}
  ${smop_src})

set_target_properties(smop
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}smop
  )

target_include_directories(smop
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(smop
  core)

#install(FILES ${smop_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/smop/v20201203)
#install(FILES ${smop_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/smop/v20201203/model)
install(DIRECTORY ${smop_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS smop
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
