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

set(asr_public_header
  include/tencentcloud/asr/v20190614/AsrClient.h
  )

set(asr_public_header_model
  include/tencentcloud/asr/v20190614/model/SetVocabStateResponse.h
  include/tencentcloud/asr/v20190614/model/CreateCustomizationResponse.h
  include/tencentcloud/asr/v20190614/model/ModifyCustomizationStateRequest.h
  include/tencentcloud/asr/v20190614/model/GetAsrVocabResponse.h
  include/tencentcloud/asr/v20190614/model/HotWord.h
  include/tencentcloud/asr/v20190614/model/GetAsrVocabRequest.h
  include/tencentcloud/asr/v20190614/model/DescribeTaskStatusResponse.h
  include/tencentcloud/asr/v20190614/model/SentenceRecognitionRequest.h
  include/tencentcloud/asr/v20190614/model/SentenceWord.h
  include/tencentcloud/asr/v20190614/model/CreateCustomizationRequest.h
  include/tencentcloud/asr/v20190614/model/DownloadAsrVocabResponse.h
  include/tencentcloud/asr/v20190614/model/CreateRecTaskResponse.h
  include/tencentcloud/asr/v20190614/model/ModifyCustomizationResponse.h
  include/tencentcloud/asr/v20190614/model/ModifyCustomizationStateResponse.h
  include/tencentcloud/asr/v20190614/model/DeleteAsrVocabResponse.h
  include/tencentcloud/asr/v20190614/model/DownloadCustomizationResponse.h
  include/tencentcloud/asr/v20190614/model/GetAsrVocabListRequest.h
  include/tencentcloud/asr/v20190614/model/CreateRecTaskRequest.h
  include/tencentcloud/asr/v20190614/model/GetCustomizationListResponse.h
  include/tencentcloud/asr/v20190614/model/DownloadAsrVocabRequest.h
  include/tencentcloud/asr/v20190614/model/SetVocabStateRequest.h
  include/tencentcloud/asr/v20190614/model/Vocab.h
  include/tencentcloud/asr/v20190614/model/Task.h
  include/tencentcloud/asr/v20190614/model/ModifyCustomizationRequest.h
  include/tencentcloud/asr/v20190614/model/DeleteCustomizationResponse.h
  include/tencentcloud/asr/v20190614/model/TaskStatus.h
  include/tencentcloud/asr/v20190614/model/DeleteAsrVocabRequest.h
  include/tencentcloud/asr/v20190614/model/GetCustomizationListRequest.h
  include/tencentcloud/asr/v20190614/model/UpdateAsrVocabResponse.h
  include/tencentcloud/asr/v20190614/model/DescribeTaskStatusRequest.h
  include/tencentcloud/asr/v20190614/model/Model.h
  include/tencentcloud/asr/v20190614/model/CreateAsrVocabRequest.h
  include/tencentcloud/asr/v20190614/model/SentenceDetail.h
  include/tencentcloud/asr/v20190614/model/UpdateAsrVocabRequest.h
  include/tencentcloud/asr/v20190614/model/CreateAsrVocabResponse.h
  include/tencentcloud/asr/v20190614/model/SentenceRecognitionResponse.h
  include/tencentcloud/asr/v20190614/model/DeleteCustomizationRequest.h
  include/tencentcloud/asr/v20190614/model/GetAsrVocabListResponse.h
  include/tencentcloud/asr/v20190614/model/SentenceWords.h
  include/tencentcloud/asr/v20190614/model/DownloadCustomizationRequest.h
  )

set(asr_src
  src/v20190614/AsrClient.cpp
  src/v20190614/model/SetVocabStateResponse.cpp
  src/v20190614/model/CreateCustomizationResponse.cpp
  src/v20190614/model/ModifyCustomizationStateRequest.cpp
  src/v20190614/model/GetAsrVocabResponse.cpp
  src/v20190614/model/HotWord.cpp
  src/v20190614/model/GetAsrVocabRequest.cpp
  src/v20190614/model/DescribeTaskStatusResponse.cpp
  src/v20190614/model/SentenceRecognitionRequest.cpp
  src/v20190614/model/SentenceWord.cpp
  src/v20190614/model/CreateCustomizationRequest.cpp
  src/v20190614/model/DownloadAsrVocabResponse.cpp
  src/v20190614/model/CreateRecTaskResponse.cpp
  src/v20190614/model/ModifyCustomizationResponse.cpp
  src/v20190614/model/ModifyCustomizationStateResponse.cpp
  src/v20190614/model/DeleteAsrVocabResponse.cpp
  src/v20190614/model/DownloadCustomizationResponse.cpp
  src/v20190614/model/GetAsrVocabListRequest.cpp
  src/v20190614/model/CreateRecTaskRequest.cpp
  src/v20190614/model/GetCustomizationListResponse.cpp
  src/v20190614/model/DownloadAsrVocabRequest.cpp
  src/v20190614/model/SetVocabStateRequest.cpp
  src/v20190614/model/Vocab.cpp
  src/v20190614/model/Task.cpp
  src/v20190614/model/ModifyCustomizationRequest.cpp
  src/v20190614/model/DeleteCustomizationResponse.cpp
  src/v20190614/model/TaskStatus.cpp
  src/v20190614/model/DeleteAsrVocabRequest.cpp
  src/v20190614/model/GetCustomizationListRequest.cpp
  src/v20190614/model/UpdateAsrVocabResponse.cpp
  src/v20190614/model/DescribeTaskStatusRequest.cpp
  src/v20190614/model/Model.cpp
  src/v20190614/model/CreateAsrVocabRequest.cpp
  src/v20190614/model/SentenceDetail.cpp
  src/v20190614/model/UpdateAsrVocabRequest.cpp
  src/v20190614/model/CreateAsrVocabResponse.cpp
  src/v20190614/model/SentenceRecognitionResponse.cpp
  src/v20190614/model/DeleteCustomizationRequest.cpp
  src/v20190614/model/GetAsrVocabListResponse.cpp
  src/v20190614/model/SentenceWords.cpp
  src/v20190614/model/DownloadCustomizationRequest.cpp
  )

set(asr_include
    include/tencentcloud/asr
  )

add_library(asr ${LIB_TYPE}
  ${asr_public_header}
  ${asr_public_header_model}
  ${asr_src})

set_target_properties(asr
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}asr
  )

target_include_directories(asr
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(asr
  core)

#install(FILES ${asr_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/asr/v20190614)
#install(FILES ${asr_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/asr/v20190614/model)
install(DIRECTORY ${asr_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS asr
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
