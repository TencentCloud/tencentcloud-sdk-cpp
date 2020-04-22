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

set(taf_public_header
  include/tencentcloud/taf/v20200210/TafClient.h
  )

set(taf_public_header_model
  include/tencentcloud/taf/v20200210/model/OutputDetectAccountActivity.h
  include/tencentcloud/taf/v20200210/model/OutputKolData.h
  include/tencentcloud/taf/v20200210/model/InputKolBspData.h
  include/tencentcloud/taf/v20200210/model/EnhanceTaDegreeRequest.h
  include/tencentcloud/taf/v20200210/model/OutputRecognizeTargetAudienceValue.h
  include/tencentcloud/taf/v20200210/model/SendTrafficSecuritySmsMessageRequest.h
  include/tencentcloud/taf/v20200210/model/DetectFraudKOLResponse.h
  include/tencentcloud/taf/v20200210/model/RecognizeCustomizedAudienceResponse.h
  include/tencentcloud/taf/v20200210/model/OutputKolValue.h
  include/tencentcloud/taf/v20200210/model/EnhanceTaDegreeResponse.h
  include/tencentcloud/taf/v20200210/model/InputTaBspData.h
  include/tencentcloud/taf/v20200210/model/OutputDetectAccountActivityValue.h
  include/tencentcloud/taf/v20200210/model/OutputSendTrafficSecuritySmsMsg.h
  include/tencentcloud/taf/v20200210/model/RecognizeTargetAudienceRequest.h
  include/tencentcloud/taf/v20200210/model/SendTrafficSecuritySmsMessageResponse.h
  include/tencentcloud/taf/v20200210/model/DetectFraudKOLRequest.h
  include/tencentcloud/taf/v20200210/model/RecognizeCustomizedAudienceRequest.h
  include/tencentcloud/taf/v20200210/model/RecognizeTargetAudienceResponse.h
  include/tencentcloud/taf/v20200210/model/InputRecognizeTargetAudience.h
  include/tencentcloud/taf/v20200210/model/OutputTaData.h
  include/tencentcloud/taf/v20200210/model/OutputTaValue.h
  include/tencentcloud/taf/v20200210/model/RecognizePreciseTargetAudienceRequest.h
  include/tencentcloud/taf/v20200210/model/InputKolDataList.h
  include/tencentcloud/taf/v20200210/model/DetectAccountActivityResponse.h
  include/tencentcloud/taf/v20200210/model/DetectAccountActivityRequest.h
  include/tencentcloud/taf/v20200210/model/RecognizePreciseTargetAudienceResponse.h
  include/tencentcloud/taf/v20200210/model/OutputRecognizeTargetAudience.h
  include/tencentcloud/taf/v20200210/model/InputDetectAccountActivity.h
  include/tencentcloud/taf/v20200210/model/InputSendTrafficSecuritySmsMsg.h
  )

set(taf_src
  src/v20200210/TafClient.cpp
  src/v20200210/model/OutputDetectAccountActivity.cpp
  src/v20200210/model/OutputKolData.cpp
  src/v20200210/model/InputKolBspData.cpp
  src/v20200210/model/EnhanceTaDegreeRequest.cpp
  src/v20200210/model/OutputRecognizeTargetAudienceValue.cpp
  src/v20200210/model/SendTrafficSecuritySmsMessageRequest.cpp
  src/v20200210/model/DetectFraudKOLResponse.cpp
  src/v20200210/model/RecognizeCustomizedAudienceResponse.cpp
  src/v20200210/model/OutputKolValue.cpp
  src/v20200210/model/EnhanceTaDegreeResponse.cpp
  src/v20200210/model/InputTaBspData.cpp
  src/v20200210/model/OutputDetectAccountActivityValue.cpp
  src/v20200210/model/OutputSendTrafficSecuritySmsMsg.cpp
  src/v20200210/model/RecognizeTargetAudienceRequest.cpp
  src/v20200210/model/SendTrafficSecuritySmsMessageResponse.cpp
  src/v20200210/model/DetectFraudKOLRequest.cpp
  src/v20200210/model/RecognizeCustomizedAudienceRequest.cpp
  src/v20200210/model/RecognizeTargetAudienceResponse.cpp
  src/v20200210/model/InputRecognizeTargetAudience.cpp
  src/v20200210/model/OutputTaData.cpp
  src/v20200210/model/OutputTaValue.cpp
  src/v20200210/model/RecognizePreciseTargetAudienceRequest.cpp
  src/v20200210/model/InputKolDataList.cpp
  src/v20200210/model/DetectAccountActivityResponse.cpp
  src/v20200210/model/DetectAccountActivityRequest.cpp
  src/v20200210/model/RecognizePreciseTargetAudienceResponse.cpp
  src/v20200210/model/OutputRecognizeTargetAudience.cpp
  src/v20200210/model/InputDetectAccountActivity.cpp
  src/v20200210/model/InputSendTrafficSecuritySmsMsg.cpp
  )

set(taf_include
    include/tencentcloud/taf
  )

add_library(taf ${LIB_TYPE}
  ${taf_public_header}
  ${taf_public_header_model}
  ${taf_src})

set_target_properties(taf
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}taf
  )

target_include_directories(taf
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(taf
  core)

#install(FILES ${taf_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/taf/v20200210)
#install(FILES ${taf_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/taf/v20200210/model)
install(DIRECTORY ${taf_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS taf
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
