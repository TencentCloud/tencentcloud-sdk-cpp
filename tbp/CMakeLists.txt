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

set(tbp_public_header
  include/tencentcloud/tbp/v20190627/TbpClient.h
  include/tencentcloud/tbp/v20190311/TbpClient.h
  )

set(tbp_public_header_model
  include/tencentcloud/tbp/v20190627/model/TextProcessResponse.h
  include/tencentcloud/tbp/v20190627/model/Group.h
  include/tencentcloud/tbp/v20190627/model/SlotInfo.h
  include/tencentcloud/tbp/v20190627/model/TextResetRequest.h
  include/tencentcloud/tbp/v20190627/model/TextResetResponse.h
  include/tencentcloud/tbp/v20190627/model/ResponseMessage.h
  include/tencentcloud/tbp/v20190627/model/TextProcessRequest.h
  include/tencentcloud/tbp/v20190311/model/TextProcessResponse.h
  include/tencentcloud/tbp/v20190311/model/Group.h
  include/tencentcloud/tbp/v20190311/model/SlotInfo.h
  include/tencentcloud/tbp/v20190311/model/TextResetRequest.h
  include/tencentcloud/tbp/v20190311/model/ResetRequest.h
  include/tencentcloud/tbp/v20190311/model/TextResetResponse.h
  include/tencentcloud/tbp/v20190311/model/ResponseMessage.h
  include/tencentcloud/tbp/v20190311/model/CreateBotResponse.h
  include/tencentcloud/tbp/v20190311/model/ResetResponse.h
  include/tencentcloud/tbp/v20190311/model/CreateBotRequest.h
  include/tencentcloud/tbp/v20190311/model/TextProcessRequest.h
  )

set(tbp_src
  src/v20190627/TbpClient.cpp
  src/v20190311/TbpClient.cpp
  src/v20190627/model/TextProcessResponse.cpp
  src/v20190627/model/Group.cpp
  src/v20190627/model/SlotInfo.cpp
  src/v20190627/model/TextResetRequest.cpp
  src/v20190627/model/TextResetResponse.cpp
  src/v20190627/model/ResponseMessage.cpp
  src/v20190627/model/TextProcessRequest.cpp
  src/v20190311/model/TextProcessResponse.cpp
  src/v20190311/model/Group.cpp
  src/v20190311/model/SlotInfo.cpp
  src/v20190311/model/TextResetRequest.cpp
  src/v20190311/model/ResetRequest.cpp
  src/v20190311/model/TextResetResponse.cpp
  src/v20190311/model/ResponseMessage.cpp
  src/v20190311/model/CreateBotResponse.cpp
  src/v20190311/model/ResetResponse.cpp
  src/v20190311/model/CreateBotRequest.cpp
  src/v20190311/model/TextProcessRequest.cpp
  )

set(tbp_include
    include/tencentcloud/tbp
  )

add_library(tbp ${LIB_TYPE}
  ${tbp_public_header}
  ${tbp_public_header_model}
  ${tbp_src})

set_target_properties(tbp
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tbp
  )

target_include_directories(tbp
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tbp
  core)

#install(FILES ${tbp_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tbp/v20190311)
#install(FILES ${tbp_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tbp/v20190311/model)
install(DIRECTORY ${tbp_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tbp
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
