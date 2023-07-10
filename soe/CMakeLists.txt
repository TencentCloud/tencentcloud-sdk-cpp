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

set(soe_public_header
  include/tencentcloud/soe/v20180724/SoeClient.h
  )

set(soe_public_header_model
  include/tencentcloud/soe/v20180724/model/SentenceInfo.h
  include/tencentcloud/soe/v20180724/model/Tone.h
  include/tencentcloud/soe/v20180724/model/InitOralProcessRequest.h
  include/tencentcloud/soe/v20180724/model/Keyword.h
  include/tencentcloud/soe/v20180724/model/KeywordEvaluateRequest.h
  include/tencentcloud/soe/v20180724/model/TransmitOralProcessRequest.h
  include/tencentcloud/soe/v20180724/model/TransmitOralProcessResponse.h
  include/tencentcloud/soe/v20180724/model/InitOralProcessResponse.h
  include/tencentcloud/soe/v20180724/model/KeywordEvaluateResponse.h
  include/tencentcloud/soe/v20180724/model/PhoneInfo.h
  include/tencentcloud/soe/v20180724/model/WordRsp.h
  include/tencentcloud/soe/v20180724/model/KeywordScore.h
  include/tencentcloud/soe/v20180724/model/TransmitOralProcessWithInitRequest.h
  include/tencentcloud/soe/v20180724/model/TransmitOralProcessWithInitResponse.h
  )

set(soe_src
  src/v20180724/SoeClient.cpp
  src/v20180724/model/SentenceInfo.cpp
  src/v20180724/model/Tone.cpp
  src/v20180724/model/InitOralProcessRequest.cpp
  src/v20180724/model/Keyword.cpp
  src/v20180724/model/KeywordEvaluateRequest.cpp
  src/v20180724/model/TransmitOralProcessRequest.cpp
  src/v20180724/model/TransmitOralProcessResponse.cpp
  src/v20180724/model/InitOralProcessResponse.cpp
  src/v20180724/model/KeywordEvaluateResponse.cpp
  src/v20180724/model/PhoneInfo.cpp
  src/v20180724/model/WordRsp.cpp
  src/v20180724/model/KeywordScore.cpp
  src/v20180724/model/TransmitOralProcessWithInitRequest.cpp
  src/v20180724/model/TransmitOralProcessWithInitResponse.cpp
  )

set(soe_include
    include/tencentcloud/soe
  )

add_library(soe ${LIB_TYPE}
  ${soe_public_header}
  ${soe_public_header_model}
  ${soe_src})

set_target_properties(soe
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}soe
  )

target_include_directories(soe
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(soe
  core)

#install(FILES ${soe_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/soe/v20180724)
#install(FILES ${soe_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/soe/v20180724/model)
install(DIRECTORY ${soe_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS soe
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
