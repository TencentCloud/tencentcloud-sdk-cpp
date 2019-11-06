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

set(sms_public_header
  include/tencentcloud/sms/v20190711/SmsClient.h
  )

set(sms_public_header_model
  include/tencentcloud/sms/v20190711/model/PullSmsReplyStatusRequest.h
  include/tencentcloud/sms/v20190711/model/PullSmsReplyStatusByPhoneNumberRequest.h
  include/tencentcloud/sms/v20190711/model/PullSmsSendStatus.h
  include/tencentcloud/sms/v20190711/model/PullSmsSendStatusRequest.h
  include/tencentcloud/sms/v20190711/model/PullSmsSendStatusByPhoneNumberResponse.h
  include/tencentcloud/sms/v20190711/model/PullSmsReplyStatus.h
  include/tencentcloud/sms/v20190711/model/SendSmsResponse.h
  include/tencentcloud/sms/v20190711/model/PullSmsSendStatusByPhoneNumberRequest.h
  include/tencentcloud/sms/v20190711/model/SendSmsRequest.h
  include/tencentcloud/sms/v20190711/model/PullSmsReplyStatusResponse.h
  include/tencentcloud/sms/v20190711/model/PullSmsReplyStatusByPhoneNumberResponse.h
  include/tencentcloud/sms/v20190711/model/SendStatus.h
  include/tencentcloud/sms/v20190711/model/PullSmsSendStatusResponse.h
  )

set(sms_src
  src/v20190711/SmsClient.cpp
  src/v20190711/model/PullSmsReplyStatusRequest.cpp
  src/v20190711/model/PullSmsReplyStatusByPhoneNumberRequest.cpp
  src/v20190711/model/PullSmsSendStatus.cpp
  src/v20190711/model/PullSmsSendStatusRequest.cpp
  src/v20190711/model/PullSmsSendStatusByPhoneNumberResponse.cpp
  src/v20190711/model/PullSmsReplyStatus.cpp
  src/v20190711/model/SendSmsResponse.cpp
  src/v20190711/model/PullSmsSendStatusByPhoneNumberRequest.cpp
  src/v20190711/model/SendSmsRequest.cpp
  src/v20190711/model/PullSmsReplyStatusResponse.cpp
  src/v20190711/model/PullSmsReplyStatusByPhoneNumberResponse.cpp
  src/v20190711/model/SendStatus.cpp
  src/v20190711/model/PullSmsSendStatusResponse.cpp
  )

set(sms_include
    include/tencentcloud/sms
  )

add_library(sms ${LIB_TYPE}
  ${sms_public_header}
  ${sms_public_header_model}
  ${sms_src})

set_target_properties(sms
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}sms
  )

target_include_directories(sms
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(sms
  core)

#install(FILES ${sms_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/sms/v20190711)
#install(FILES ${sms_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/sms/v20190711/model)
install(DIRECTORY ${sms_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS sms
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
