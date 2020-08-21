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

set(tiw_public_header
  include/tencentcloud/tiw/v20190919/TiwClient.h
  )

set(tiw_public_header_model
  include/tencentcloud/tiw/v20190919/model/Canvas.h
  include/tencentcloud/tiw/v20190919/model/LayoutParams.h
  include/tencentcloud/tiw/v20190919/model/StreamControl.h
  include/tencentcloud/tiw/v20190919/model/ResumeOnlineRecordResponse.h
  include/tencentcloud/tiw/v20190919/model/StartOnlineRecordRequest.h
  include/tencentcloud/tiw/v20190919/model/DescribeOnlineRecordCallbackRequest.h
  include/tencentcloud/tiw/v20190919/model/DescribeOnlineRecordCallbackResponse.h
  include/tencentcloud/tiw/v20190919/model/SetTranscodeCallbackResponse.h
  include/tencentcloud/tiw/v20190919/model/StopOnlineRecordRequest.h
  include/tencentcloud/tiw/v20190919/model/StreamLayout.h
  include/tencentcloud/tiw/v20190919/model/CreateTranscodeResponse.h
  include/tencentcloud/tiw/v20190919/model/VideoInfo.h
  include/tencentcloud/tiw/v20190919/model/CustomLayout.h
  include/tencentcloud/tiw/v20190919/model/SetTranscodeCallbackKeyResponse.h
  include/tencentcloud/tiw/v20190919/model/Concat.h
  include/tencentcloud/tiw/v20190919/model/DescribeOnlineRecordRequest.h
  include/tencentcloud/tiw/v20190919/model/StartOnlineRecordResponse.h
  include/tencentcloud/tiw/v20190919/model/Whiteboard.h
  include/tencentcloud/tiw/v20190919/model/DescribeOnlineRecordResponse.h
  include/tencentcloud/tiw/v20190919/model/CreateTranscodeRequest.h
  include/tencentcloud/tiw/v20190919/model/SetOnlineRecordCallbackKeyResponse.h
  include/tencentcloud/tiw/v20190919/model/PauseOnlineRecordResponse.h
  include/tencentcloud/tiw/v20190919/model/SetTranscodeCallbackKeyRequest.h
  include/tencentcloud/tiw/v20190919/model/DescribeTranscodeRequest.h
  include/tencentcloud/tiw/v20190919/model/DescribeTranscodeResponse.h
  include/tencentcloud/tiw/v20190919/model/SetOnlineRecordCallbackResponse.h
  include/tencentcloud/tiw/v20190919/model/SetOnlineRecordCallbackKeyRequest.h
  include/tencentcloud/tiw/v20190919/model/StopOnlineRecordResponse.h
  include/tencentcloud/tiw/v20190919/model/DescribeTranscodeCallbackRequest.h
  include/tencentcloud/tiw/v20190919/model/ResumeOnlineRecordRequest.h
  include/tencentcloud/tiw/v20190919/model/DescribeTranscodeCallbackResponse.h
  include/tencentcloud/tiw/v20190919/model/SetTranscodeCallbackRequest.h
  include/tencentcloud/tiw/v20190919/model/RecordControl.h
  include/tencentcloud/tiw/v20190919/model/SetOnlineRecordCallbackRequest.h
  include/tencentcloud/tiw/v20190919/model/MixStream.h
  include/tencentcloud/tiw/v20190919/model/OmittedDuration.h
  include/tencentcloud/tiw/v20190919/model/PauseOnlineRecordRequest.h
  )

set(tiw_src
  src/v20190919/TiwClient.cpp
  src/v20190919/model/Canvas.cpp
  src/v20190919/model/LayoutParams.cpp
  src/v20190919/model/StreamControl.cpp
  src/v20190919/model/ResumeOnlineRecordResponse.cpp
  src/v20190919/model/StartOnlineRecordRequest.cpp
  src/v20190919/model/DescribeOnlineRecordCallbackRequest.cpp
  src/v20190919/model/DescribeOnlineRecordCallbackResponse.cpp
  src/v20190919/model/SetTranscodeCallbackResponse.cpp
  src/v20190919/model/StopOnlineRecordRequest.cpp
  src/v20190919/model/StreamLayout.cpp
  src/v20190919/model/CreateTranscodeResponse.cpp
  src/v20190919/model/VideoInfo.cpp
  src/v20190919/model/CustomLayout.cpp
  src/v20190919/model/SetTranscodeCallbackKeyResponse.cpp
  src/v20190919/model/Concat.cpp
  src/v20190919/model/DescribeOnlineRecordRequest.cpp
  src/v20190919/model/StartOnlineRecordResponse.cpp
  src/v20190919/model/Whiteboard.cpp
  src/v20190919/model/DescribeOnlineRecordResponse.cpp
  src/v20190919/model/CreateTranscodeRequest.cpp
  src/v20190919/model/SetOnlineRecordCallbackKeyResponse.cpp
  src/v20190919/model/PauseOnlineRecordResponse.cpp
  src/v20190919/model/SetTranscodeCallbackKeyRequest.cpp
  src/v20190919/model/DescribeTranscodeRequest.cpp
  src/v20190919/model/DescribeTranscodeResponse.cpp
  src/v20190919/model/SetOnlineRecordCallbackResponse.cpp
  src/v20190919/model/SetOnlineRecordCallbackKeyRequest.cpp
  src/v20190919/model/StopOnlineRecordResponse.cpp
  src/v20190919/model/DescribeTranscodeCallbackRequest.cpp
  src/v20190919/model/ResumeOnlineRecordRequest.cpp
  src/v20190919/model/DescribeTranscodeCallbackResponse.cpp
  src/v20190919/model/SetTranscodeCallbackRequest.cpp
  src/v20190919/model/RecordControl.cpp
  src/v20190919/model/SetOnlineRecordCallbackRequest.cpp
  src/v20190919/model/MixStream.cpp
  src/v20190919/model/OmittedDuration.cpp
  src/v20190919/model/PauseOnlineRecordRequest.cpp
  )

set(tiw_include
    include/tencentcloud/tiw
  )

add_library(tiw ${LIB_TYPE}
  ${tiw_public_header}
  ${tiw_public_header_model}
  ${tiw_src})

set_target_properties(tiw
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tiw
  )

target_include_directories(tiw
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tiw
  core)

#install(FILES ${tiw_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tiw/v20190919)
#install(FILES ${tiw_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tiw/v20190919/model)
install(DIRECTORY ${tiw_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tiw
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
