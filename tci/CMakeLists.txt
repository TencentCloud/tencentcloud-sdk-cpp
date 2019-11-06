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

set(tci_public_header
  include/tencentcloud/tci/v20190318/TciClient.h
  )

set(tci_public_header_model
  include/tencentcloud/tci/v20190318/model/CreateVocabLibResponse.h
  include/tencentcloud/tci/v20190318/model/FaceIdentifyStatistic.h
  include/tencentcloud/tci/v20190318/model/DetailInfo.h
  include/tencentcloud/tci/v20190318/model/SubmitImageTaskPlusRequest.h
  include/tencentcloud/tci/v20190318/model/FacePoseResult.h
  include/tencentcloud/tci/v20190318/model/DeleteVocabLibRequest.h
  include/tencentcloud/tci/v20190318/model/DescribeAITaskResultRequest.h
  include/tencentcloud/tci/v20190318/model/ActionDurationStatistic.h
  include/tencentcloud/tci/v20190318/model/CreatePersonRequest.h
  include/tencentcloud/tci/v20190318/model/LightStatistic.h
  include/tencentcloud/tci/v20190318/model/DescribePersonsRequest.h
  include/tencentcloud/tci/v20190318/model/SubmitOneByOneClassTaskRequest.h
  include/tencentcloud/tci/v20190318/model/CreateVocabResponse.h
  include/tencentcloud/tci/v20190318/model/SubmitConversationTaskResponse.h
  include/tencentcloud/tci/v20190318/model/DescribeVocabLibRequest.h
  include/tencentcloud/tci/v20190318/model/ActionType.h
  include/tencentcloud/tci/v20190318/model/DescribePersonsResponse.h
  include/tencentcloud/tci/v20190318/model/HLFunction.h
  include/tencentcloud/tci/v20190318/model/CreateFaceRequest.h
  include/tencentcloud/tci/v20190318/model/DescribeImageTaskStatisticRequest.h
  include/tencentcloud/tci/v20190318/model/SubmitCheckAttendanceTaskPlusResponse.h
  include/tencentcloud/tci/v20190318/model/SubmitImageTaskRequest.h
  include/tencentcloud/tci/v20190318/model/WordTimePair.h
  include/tencentcloud/tci/v20190318/model/ModifyLibraryRequest.h
  include/tencentcloud/tci/v20190318/model/FaceInfo.h
  include/tencentcloud/tci/v20190318/model/LightDistributionStatistic.h
  include/tencentcloud/tci/v20190318/model/DeleteLibraryResponse.h
  include/tencentcloud/tci/v20190318/model/SubmitFullBodyClassTaskRequest.h
  include/tencentcloud/tci/v20190318/model/LightResult.h
  include/tencentcloud/tci/v20190318/model/DescribeAttendanceResultRequest.h
  include/tencentcloud/tci/v20190318/model/SubmitOpenClassTaskResponse.h
  include/tencentcloud/tci/v20190318/model/WholeTextItem.h
  include/tencentcloud/tci/v20190318/model/SubmitCheckAttendanceTaskPlusRequest.h
  include/tencentcloud/tci/v20190318/model/DescribeConversationTaskResponse.h
  include/tencentcloud/tci/v20190318/model/CreatePersonResponse.h
  include/tencentcloud/tci/v20190318/model/DescribeImageTaskRequest.h
  include/tencentcloud/tci/v20190318/model/HighlightsInfomation.h
  include/tencentcloud/tci/v20190318/model/TimeType.h
  include/tencentcloud/tci/v20190318/model/SubmitTraditionalClassTaskRequest.h
  include/tencentcloud/tci/v20190318/model/DeleteFaceResponse.h
  include/tencentcloud/tci/v20190318/model/SubmitDoubleVideoHighlightsRequest.h
  include/tencentcloud/tci/v20190318/model/ExpressRatioStatistic.h
  include/tencentcloud/tci/v20190318/model/TransmitAudioStreamResponse.h
  include/tencentcloud/tci/v20190318/model/DeletePersonRequest.h
  include/tencentcloud/tci/v20190318/model/DescribeLibrariesResponse.h
  include/tencentcloud/tci/v20190318/model/DeleteFaceRequest.h
  include/tencentcloud/tci/v20190318/model/DeleteLibraryRequest.h
  include/tencentcloud/tci/v20190318/model/DescribePersonResponse.h
  include/tencentcloud/tci/v20190318/model/StandardImageResult.h
  include/tencentcloud/tci/v20190318/model/DescribeVocabLibResponse.h
  include/tencentcloud/tci/v20190318/model/AttendanceInfo.h
  include/tencentcloud/tci/v20190318/model/SubmitCheckAttendanceTaskResponse.h
  include/tencentcloud/tci/v20190318/model/DeleteVocabResponse.h
  include/tencentcloud/tci/v20190318/model/CheckFacePhotoRequest.h
  include/tencentcloud/tci/v20190318/model/TeacherOutScreenResult.h
  include/tencentcloud/tci/v20190318/model/Word.h
  include/tencentcloud/tci/v20190318/model/DeleteVocabRequest.h
  include/tencentcloud/tci/v20190318/model/ActionInfo.h
  include/tencentcloud/tci/v20190318/model/FaceExpressionResult.h
  include/tencentcloud/tci/v20190318/model/StatInfo.h
  include/tencentcloud/tci/v20190318/model/ActionCountStatistic.h
  include/tencentcloud/tci/v20190318/model/GestureResult.h
  include/tencentcloud/tci/v20190318/model/CreateFaceResponse.h
  include/tencentcloud/tci/v20190318/model/BodyMovementResult.h
  include/tencentcloud/tci/v20190318/model/DescribeAITaskResultResponse.h
  include/tencentcloud/tci/v20190318/model/DescribeAudioTaskResponse.h
  include/tencentcloud/tci/v20190318/model/ActionDurationRatioStatistic.h
  include/tencentcloud/tci/v20190318/model/DescribePersonRequest.h
  include/tencentcloud/tci/v20190318/model/StandardVideoResult.h
  include/tencentcloud/tci/v20190318/model/ModifyLibraryResponse.h
  include/tencentcloud/tci/v20190318/model/TimeInfoResult.h
  include/tencentcloud/tci/v20190318/model/SubmitPartialBodyClassTaskResponse.h
  include/tencentcloud/tci/v20190318/model/ASRStat.h
  include/tencentcloud/tci/v20190318/model/TextItem.h
  include/tencentcloud/tci/v20190318/model/CancelTaskRequest.h
  include/tencentcloud/tci/v20190318/model/AllMuteSlice.h
  include/tencentcloud/tci/v20190318/model/DoubleVideoFunction.h
  include/tencentcloud/tci/v20190318/model/SubmitPartialBodyClassTaskRequest.h
  include/tencentcloud/tci/v20190318/model/DescribeHighlightResultResponse.h
  include/tencentcloud/tci/v20190318/model/SubmitOneByOneClassTaskResponse.h
  include/tencentcloud/tci/v20190318/model/LightStandard.h
  include/tencentcloud/tci/v20190318/model/SubmitHighlightsRequest.h
  include/tencentcloud/tci/v20190318/model/ModifyPersonResponse.h
  include/tencentcloud/tci/v20190318/model/PersonInfo.h
  include/tencentcloud/tci/v20190318/model/Face.h
  include/tencentcloud/tci/v20190318/model/Person.h
  include/tencentcloud/tci/v20190318/model/LightLevelRatioStatistic.h
  include/tencentcloud/tci/v20190318/model/DescribeVocabResponse.h
  include/tencentcloud/tci/v20190318/model/DescribeImageTaskStatisticResponse.h
  include/tencentcloud/tci/v20190318/model/SubmitCheckAttendanceTaskRequest.h
  include/tencentcloud/tci/v20190318/model/CancelTaskResponse.h
  include/tencentcloud/tci/v20190318/model/StudentBodyMovementResult.h
  include/tencentcloud/tci/v20190318/model/AbsenceInfo.h
  include/tencentcloud/tci/v20190318/model/ImageTaskFunction.h
  include/tencentcloud/tci/v20190318/model/FrameInfo.h
  include/tencentcloud/tci/v20190318/model/Library.h
  include/tencentcloud/tci/v20190318/model/SubmitConversationTaskRequest.h
  include/tencentcloud/tci/v20190318/model/SubmitHighlightsResponse.h
  include/tencentcloud/tci/v20190318/model/DeletePersonResponse.h
  include/tencentcloud/tci/v20190318/model/ImageTaskStatistic.h
  include/tencentcloud/tci/v20190318/model/SuspectedInfo.h
  include/tencentcloud/tci/v20190318/model/CheckFacePhotoResponse.h
  include/tencentcloud/tci/v20190318/model/ActionStatistic.h
  include/tencentcloud/tci/v20190318/model/DescribeHighlightResultRequest.h
  include/tencentcloud/tci/v20190318/model/DescribeVocabRequest.h
  include/tencentcloud/tci/v20190318/model/DeleteVocabLibResponse.h
  include/tencentcloud/tci/v20190318/model/ImageTaskResult.h
  include/tencentcloud/tci/v20190318/model/SubmitImageTaskPlusResponse.h
  include/tencentcloud/tci/v20190318/model/VocabStatInfomation.h
  include/tencentcloud/tci/v20190318/model/SubmitDoubleVideoHighlightsResponse.h
  include/tencentcloud/tci/v20190318/model/Function.h
  include/tencentcloud/tci/v20190318/model/DescribeAudioTaskRequest.h
  include/tencentcloud/tci/v20190318/model/DescribeAttendanceResultResponse.h
  include/tencentcloud/tci/v20190318/model/FaceExpressStatistic.h
  include/tencentcloud/tci/v20190318/model/AIAssistantRequest.h
  include/tencentcloud/tci/v20190318/model/DescribeLibrariesRequest.h
  include/tencentcloud/tci/v20190318/model/SubmitFullBodyClassTaskResponse.h
  include/tencentcloud/tci/v20190318/model/ModifyPersonRequest.h
  include/tencentcloud/tci/v20190318/model/DescribeImageTaskResponse.h
  include/tencentcloud/tci/v20190318/model/StandardAudioResult.h
  include/tencentcloud/tci/v20190318/model/HandTrackingResult.h
  include/tencentcloud/tci/v20190318/model/SubmitOpenClassTaskRequest.h
  include/tencentcloud/tci/v20190318/model/SubmitAudioTaskRequest.h
  include/tencentcloud/tci/v20190318/model/CreateVocabRequest.h
  include/tencentcloud/tci/v20190318/model/TransmitAudioStreamRequest.h
  include/tencentcloud/tci/v20190318/model/FaceAttrResult.h
  include/tencentcloud/tci/v20190318/model/SubmitTraditionalClassTaskResponse.h
  include/tencentcloud/tci/v20190318/model/AIAssistantResponse.h
  include/tencentcloud/tci/v20190318/model/SubmitImageTaskResponse.h
  include/tencentcloud/tci/v20190318/model/CreateVocabLibRequest.h
  include/tencentcloud/tci/v20190318/model/CreateLibraryResponse.h
  include/tencentcloud/tci/v20190318/model/FaceIdentifyResult.h
  include/tencentcloud/tci/v20190318/model/SubmitAudioTaskResponse.h
  include/tencentcloud/tci/v20190318/model/MuteSlice.h
  include/tencentcloud/tci/v20190318/model/DescribeConversationTaskRequest.h
  include/tencentcloud/tci/v20190318/model/VocabDetailInfomation.h
  include/tencentcloud/tci/v20190318/model/CreateLibraryRequest.h
  include/tencentcloud/tci/v20190318/model/FaceInfoResult.h
  include/tencentcloud/tci/v20190318/model/FaceDetectStatistic.h
  )

set(tci_src
  src/v20190318/TciClient.cpp
  src/v20190318/model/CreateVocabLibResponse.cpp
  src/v20190318/model/FaceIdentifyStatistic.cpp
  src/v20190318/model/DetailInfo.cpp
  src/v20190318/model/SubmitImageTaskPlusRequest.cpp
  src/v20190318/model/FacePoseResult.cpp
  src/v20190318/model/DeleteVocabLibRequest.cpp
  src/v20190318/model/DescribeAITaskResultRequest.cpp
  src/v20190318/model/ActionDurationStatistic.cpp
  src/v20190318/model/CreatePersonRequest.cpp
  src/v20190318/model/LightStatistic.cpp
  src/v20190318/model/DescribePersonsRequest.cpp
  src/v20190318/model/SubmitOneByOneClassTaskRequest.cpp
  src/v20190318/model/CreateVocabResponse.cpp
  src/v20190318/model/SubmitConversationTaskResponse.cpp
  src/v20190318/model/DescribeVocabLibRequest.cpp
  src/v20190318/model/ActionType.cpp
  src/v20190318/model/DescribePersonsResponse.cpp
  src/v20190318/model/HLFunction.cpp
  src/v20190318/model/CreateFaceRequest.cpp
  src/v20190318/model/DescribeImageTaskStatisticRequest.cpp
  src/v20190318/model/SubmitCheckAttendanceTaskPlusResponse.cpp
  src/v20190318/model/SubmitImageTaskRequest.cpp
  src/v20190318/model/WordTimePair.cpp
  src/v20190318/model/ModifyLibraryRequest.cpp
  src/v20190318/model/FaceInfo.cpp
  src/v20190318/model/LightDistributionStatistic.cpp
  src/v20190318/model/DeleteLibraryResponse.cpp
  src/v20190318/model/SubmitFullBodyClassTaskRequest.cpp
  src/v20190318/model/LightResult.cpp
  src/v20190318/model/DescribeAttendanceResultRequest.cpp
  src/v20190318/model/SubmitOpenClassTaskResponse.cpp
  src/v20190318/model/WholeTextItem.cpp
  src/v20190318/model/SubmitCheckAttendanceTaskPlusRequest.cpp
  src/v20190318/model/DescribeConversationTaskResponse.cpp
  src/v20190318/model/CreatePersonResponse.cpp
  src/v20190318/model/DescribeImageTaskRequest.cpp
  src/v20190318/model/HighlightsInfomation.cpp
  src/v20190318/model/TimeType.cpp
  src/v20190318/model/SubmitTraditionalClassTaskRequest.cpp
  src/v20190318/model/DeleteFaceResponse.cpp
  src/v20190318/model/SubmitDoubleVideoHighlightsRequest.cpp
  src/v20190318/model/ExpressRatioStatistic.cpp
  src/v20190318/model/TransmitAudioStreamResponse.cpp
  src/v20190318/model/DeletePersonRequest.cpp
  src/v20190318/model/DescribeLibrariesResponse.cpp
  src/v20190318/model/DeleteFaceRequest.cpp
  src/v20190318/model/DeleteLibraryRequest.cpp
  src/v20190318/model/DescribePersonResponse.cpp
  src/v20190318/model/StandardImageResult.cpp
  src/v20190318/model/DescribeVocabLibResponse.cpp
  src/v20190318/model/AttendanceInfo.cpp
  src/v20190318/model/SubmitCheckAttendanceTaskResponse.cpp
  src/v20190318/model/DeleteVocabResponse.cpp
  src/v20190318/model/CheckFacePhotoRequest.cpp
  src/v20190318/model/TeacherOutScreenResult.cpp
  src/v20190318/model/Word.cpp
  src/v20190318/model/DeleteVocabRequest.cpp
  src/v20190318/model/ActionInfo.cpp
  src/v20190318/model/FaceExpressionResult.cpp
  src/v20190318/model/StatInfo.cpp
  src/v20190318/model/ActionCountStatistic.cpp
  src/v20190318/model/GestureResult.cpp
  src/v20190318/model/CreateFaceResponse.cpp
  src/v20190318/model/BodyMovementResult.cpp
  src/v20190318/model/DescribeAITaskResultResponse.cpp
  src/v20190318/model/DescribeAudioTaskResponse.cpp
  src/v20190318/model/ActionDurationRatioStatistic.cpp
  src/v20190318/model/DescribePersonRequest.cpp
  src/v20190318/model/StandardVideoResult.cpp
  src/v20190318/model/ModifyLibraryResponse.cpp
  src/v20190318/model/TimeInfoResult.cpp
  src/v20190318/model/SubmitPartialBodyClassTaskResponse.cpp
  src/v20190318/model/ASRStat.cpp
  src/v20190318/model/TextItem.cpp
  src/v20190318/model/CancelTaskRequest.cpp
  src/v20190318/model/AllMuteSlice.cpp
  src/v20190318/model/DoubleVideoFunction.cpp
  src/v20190318/model/SubmitPartialBodyClassTaskRequest.cpp
  src/v20190318/model/DescribeHighlightResultResponse.cpp
  src/v20190318/model/SubmitOneByOneClassTaskResponse.cpp
  src/v20190318/model/LightStandard.cpp
  src/v20190318/model/SubmitHighlightsRequest.cpp
  src/v20190318/model/ModifyPersonResponse.cpp
  src/v20190318/model/PersonInfo.cpp
  src/v20190318/model/Face.cpp
  src/v20190318/model/Person.cpp
  src/v20190318/model/LightLevelRatioStatistic.cpp
  src/v20190318/model/DescribeVocabResponse.cpp
  src/v20190318/model/DescribeImageTaskStatisticResponse.cpp
  src/v20190318/model/SubmitCheckAttendanceTaskRequest.cpp
  src/v20190318/model/CancelTaskResponse.cpp
  src/v20190318/model/StudentBodyMovementResult.cpp
  src/v20190318/model/AbsenceInfo.cpp
  src/v20190318/model/ImageTaskFunction.cpp
  src/v20190318/model/FrameInfo.cpp
  src/v20190318/model/Library.cpp
  src/v20190318/model/SubmitConversationTaskRequest.cpp
  src/v20190318/model/SubmitHighlightsResponse.cpp
  src/v20190318/model/DeletePersonResponse.cpp
  src/v20190318/model/ImageTaskStatistic.cpp
  src/v20190318/model/SuspectedInfo.cpp
  src/v20190318/model/CheckFacePhotoResponse.cpp
  src/v20190318/model/ActionStatistic.cpp
  src/v20190318/model/DescribeHighlightResultRequest.cpp
  src/v20190318/model/DescribeVocabRequest.cpp
  src/v20190318/model/DeleteVocabLibResponse.cpp
  src/v20190318/model/ImageTaskResult.cpp
  src/v20190318/model/SubmitImageTaskPlusResponse.cpp
  src/v20190318/model/VocabStatInfomation.cpp
  src/v20190318/model/SubmitDoubleVideoHighlightsResponse.cpp
  src/v20190318/model/Function.cpp
  src/v20190318/model/DescribeAudioTaskRequest.cpp
  src/v20190318/model/DescribeAttendanceResultResponse.cpp
  src/v20190318/model/FaceExpressStatistic.cpp
  src/v20190318/model/AIAssistantRequest.cpp
  src/v20190318/model/DescribeLibrariesRequest.cpp
  src/v20190318/model/SubmitFullBodyClassTaskResponse.cpp
  src/v20190318/model/ModifyPersonRequest.cpp
  src/v20190318/model/DescribeImageTaskResponse.cpp
  src/v20190318/model/StandardAudioResult.cpp
  src/v20190318/model/HandTrackingResult.cpp
  src/v20190318/model/SubmitOpenClassTaskRequest.cpp
  src/v20190318/model/SubmitAudioTaskRequest.cpp
  src/v20190318/model/CreateVocabRequest.cpp
  src/v20190318/model/TransmitAudioStreamRequest.cpp
  src/v20190318/model/FaceAttrResult.cpp
  src/v20190318/model/SubmitTraditionalClassTaskResponse.cpp
  src/v20190318/model/AIAssistantResponse.cpp
  src/v20190318/model/SubmitImageTaskResponse.cpp
  src/v20190318/model/CreateVocabLibRequest.cpp
  src/v20190318/model/CreateLibraryResponse.cpp
  src/v20190318/model/FaceIdentifyResult.cpp
  src/v20190318/model/SubmitAudioTaskResponse.cpp
  src/v20190318/model/MuteSlice.cpp
  src/v20190318/model/DescribeConversationTaskRequest.cpp
  src/v20190318/model/VocabDetailInfomation.cpp
  src/v20190318/model/CreateLibraryRequest.cpp
  src/v20190318/model/FaceInfoResult.cpp
  src/v20190318/model/FaceDetectStatistic.cpp
  )

set(tci_include
    include/tencentcloud/tci
  )

add_library(tci ${LIB_TYPE}
  ${tci_public_header}
  ${tci_public_header_model}
  ${tci_src})

set_target_properties(tci
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tci
  )

target_include_directories(tci
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tci
  core)

#install(FILES ${tci_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tci/v20190318)
#install(FILES ${tci_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tci/v20190318/model)
install(DIRECTORY ${tci_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tci
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
