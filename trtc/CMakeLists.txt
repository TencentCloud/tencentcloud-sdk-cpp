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

set(trtc_public_header
  include/tencentcloud/trtc/v20190722/TrtcClient.h
  )

set(trtc_public_header_model
  include/tencentcloud/trtc/v20190722/model/DescribeAbnormalEventResponse.h
  include/tencentcloud/trtc/v20190722/model/DescribeAbnormalEventRequest.h
  include/tencentcloud/trtc/v20190722/model/DescribeTrtcInteractiveTimeResponse.h
  include/tencentcloud/trtc/v20190722/model/ModifyPictureResponse.h
  include/tencentcloud/trtc/v20190722/model/StartMCUMixTranscodeByStrRoomIdRequest.h
  include/tencentcloud/trtc/v20190722/model/LayoutParams.h
  include/tencentcloud/trtc/v20190722/model/TimeValue.h
  include/tencentcloud/trtc/v20190722/model/CreatePictureRequest.h
  include/tencentcloud/trtc/v20190722/model/DescribeTrtcMcuTranscodeTimeRequest.h
  include/tencentcloud/trtc/v20190722/model/SdkAppIdTrtcMcuTranscodeTimeUsage.h
  include/tencentcloud/trtc/v20190722/model/RemoveUserByStrRoomIdRequest.h
  include/tencentcloud/trtc/v20190722/model/DismissRoomResponse.h
  include/tencentcloud/trtc/v20190722/model/EventMessage.h
  include/tencentcloud/trtc/v20190722/model/DescribeRecordStatisticRequest.h
  include/tencentcloud/trtc/v20190722/model/DescribeUserInformationRequest.h
  include/tencentcloud/trtc/v20190722/model/DescribeCallDetailRequest.h
  include/tencentcloud/trtc/v20190722/model/ScaleInfomation.h
  include/tencentcloud/trtc/v20190722/model/DescribeUserInformationResponse.h
  include/tencentcloud/trtc/v20190722/model/EncodeParams.h
  include/tencentcloud/trtc/v20190722/model/RemoveUserByStrRoomIdResponse.h
  include/tencentcloud/trtc/v20190722/model/StartMCUMixTranscodeRequest.h
  include/tencentcloud/trtc/v20190722/model/StopMCUMixTranscodeRequest.h
  include/tencentcloud/trtc/v20190722/model/UserInformation.h
  include/tencentcloud/trtc/v20190722/model/DescribeHistoryScaleRequest.h
  include/tencentcloud/trtc/v20190722/model/DeletePictureRequest.h
  include/tencentcloud/trtc/v20190722/model/DescribeRoomInformationResponse.h
  include/tencentcloud/trtc/v20190722/model/RecordUsage.h
  include/tencentcloud/trtc/v20190722/model/RemoveUserRequest.h
  include/tencentcloud/trtc/v20190722/model/OutputParams.h
  include/tencentcloud/trtc/v20190722/model/ModifyPictureRequest.h
  include/tencentcloud/trtc/v20190722/model/CreateTroubleInfoResponse.h
  include/tencentcloud/trtc/v20190722/model/StopMCUMixTranscodeByStrRoomIdRequest.h
  include/tencentcloud/trtc/v20190722/model/QualityData.h
  include/tencentcloud/trtc/v20190722/model/AbnormalEvent.h
  include/tencentcloud/trtc/v20190722/model/StopMCUMixTranscodeByStrRoomIdResponse.h
  include/tencentcloud/trtc/v20190722/model/DeletePictureResponse.h
  include/tencentcloud/trtc/v20190722/model/CreateTroubleInfoRequest.h
  include/tencentcloud/trtc/v20190722/model/EventList.h
  include/tencentcloud/trtc/v20190722/model/DismissRoomRequest.h
  include/tencentcloud/trtc/v20190722/model/DescribeDetailEventResponse.h
  include/tencentcloud/trtc/v20190722/model/DismissRoomByStrRoomIdRequest.h
  include/tencentcloud/trtc/v20190722/model/StartMCUMixTranscodeResponse.h
  include/tencentcloud/trtc/v20190722/model/OneSdkAppIdTranscodeTimeUsagesInfo.h
  include/tencentcloud/trtc/v20190722/model/DescribeTrtcMcuTranscodeTimeResponse.h
  include/tencentcloud/trtc/v20190722/model/DescribePictureRequest.h
  include/tencentcloud/trtc/v20190722/model/SdkAppIdRecordUsage.h
  include/tencentcloud/trtc/v20190722/model/OneSdkAppIdUsagesInfo.h
  include/tencentcloud/trtc/v20190722/model/SmallVideoLayoutParams.h
  include/tencentcloud/trtc/v20190722/model/RemoveUserResponse.h
  include/tencentcloud/trtc/v20190722/model/PresetLayoutConfig.h
  include/tencentcloud/trtc/v20190722/model/StopMCUMixTranscodeResponse.h
  include/tencentcloud/trtc/v20190722/model/DescribeCallDetailResponse.h
  include/tencentcloud/trtc/v20190722/model/DescribePictureResponse.h
  include/tencentcloud/trtc/v20190722/model/SdkAppIdTrtcUsage.h
  include/tencentcloud/trtc/v20190722/model/DescribeTrtcInteractiveTimeRequest.h
  include/tencentcloud/trtc/v20190722/model/PublishCdnParams.h
  include/tencentcloud/trtc/v20190722/model/DescribeRoomInformationRequest.h
  include/tencentcloud/trtc/v20190722/model/DescribeDetailEventRequest.h
  include/tencentcloud/trtc/v20190722/model/AbnormalExperience.h
  include/tencentcloud/trtc/v20190722/model/RoomState.h
  include/tencentcloud/trtc/v20190722/model/CreatePictureResponse.h
  include/tencentcloud/trtc/v20190722/model/WaterMarkParams.h
  include/tencentcloud/trtc/v20190722/model/DescribeRecordStatisticResponse.h
  include/tencentcloud/trtc/v20190722/model/DismissRoomByStrRoomIdResponse.h
  include/tencentcloud/trtc/v20190722/model/DescribeHistoryScaleResponse.h
  include/tencentcloud/trtc/v20190722/model/StartMCUMixTranscodeByStrRoomIdResponse.h
  include/tencentcloud/trtc/v20190722/model/PictureInfo.h
  )

set(trtc_src
  src/v20190722/TrtcClient.cpp
  src/v20190722/model/DescribeAbnormalEventResponse.cpp
  src/v20190722/model/DescribeAbnormalEventRequest.cpp
  src/v20190722/model/DescribeTrtcInteractiveTimeResponse.cpp
  src/v20190722/model/ModifyPictureResponse.cpp
  src/v20190722/model/StartMCUMixTranscodeByStrRoomIdRequest.cpp
  src/v20190722/model/LayoutParams.cpp
  src/v20190722/model/TimeValue.cpp
  src/v20190722/model/CreatePictureRequest.cpp
  src/v20190722/model/DescribeTrtcMcuTranscodeTimeRequest.cpp
  src/v20190722/model/SdkAppIdTrtcMcuTranscodeTimeUsage.cpp
  src/v20190722/model/RemoveUserByStrRoomIdRequest.cpp
  src/v20190722/model/DismissRoomResponse.cpp
  src/v20190722/model/EventMessage.cpp
  src/v20190722/model/DescribeRecordStatisticRequest.cpp
  src/v20190722/model/DescribeUserInformationRequest.cpp
  src/v20190722/model/DescribeCallDetailRequest.cpp
  src/v20190722/model/ScaleInfomation.cpp
  src/v20190722/model/DescribeUserInformationResponse.cpp
  src/v20190722/model/EncodeParams.cpp
  src/v20190722/model/RemoveUserByStrRoomIdResponse.cpp
  src/v20190722/model/StartMCUMixTranscodeRequest.cpp
  src/v20190722/model/StopMCUMixTranscodeRequest.cpp
  src/v20190722/model/UserInformation.cpp
  src/v20190722/model/DescribeHistoryScaleRequest.cpp
  src/v20190722/model/DeletePictureRequest.cpp
  src/v20190722/model/DescribeRoomInformationResponse.cpp
  src/v20190722/model/RecordUsage.cpp
  src/v20190722/model/RemoveUserRequest.cpp
  src/v20190722/model/OutputParams.cpp
  src/v20190722/model/ModifyPictureRequest.cpp
  src/v20190722/model/CreateTroubleInfoResponse.cpp
  src/v20190722/model/StopMCUMixTranscodeByStrRoomIdRequest.cpp
  src/v20190722/model/QualityData.cpp
  src/v20190722/model/AbnormalEvent.cpp
  src/v20190722/model/StopMCUMixTranscodeByStrRoomIdResponse.cpp
  src/v20190722/model/DeletePictureResponse.cpp
  src/v20190722/model/CreateTroubleInfoRequest.cpp
  src/v20190722/model/EventList.cpp
  src/v20190722/model/DismissRoomRequest.cpp
  src/v20190722/model/DescribeDetailEventResponse.cpp
  src/v20190722/model/DismissRoomByStrRoomIdRequest.cpp
  src/v20190722/model/StartMCUMixTranscodeResponse.cpp
  src/v20190722/model/OneSdkAppIdTranscodeTimeUsagesInfo.cpp
  src/v20190722/model/DescribeTrtcMcuTranscodeTimeResponse.cpp
  src/v20190722/model/DescribePictureRequest.cpp
  src/v20190722/model/SdkAppIdRecordUsage.cpp
  src/v20190722/model/OneSdkAppIdUsagesInfo.cpp
  src/v20190722/model/SmallVideoLayoutParams.cpp
  src/v20190722/model/RemoveUserResponse.cpp
  src/v20190722/model/PresetLayoutConfig.cpp
  src/v20190722/model/StopMCUMixTranscodeResponse.cpp
  src/v20190722/model/DescribeCallDetailResponse.cpp
  src/v20190722/model/DescribePictureResponse.cpp
  src/v20190722/model/SdkAppIdTrtcUsage.cpp
  src/v20190722/model/DescribeTrtcInteractiveTimeRequest.cpp
  src/v20190722/model/PublishCdnParams.cpp
  src/v20190722/model/DescribeRoomInformationRequest.cpp
  src/v20190722/model/DescribeDetailEventRequest.cpp
  src/v20190722/model/AbnormalExperience.cpp
  src/v20190722/model/RoomState.cpp
  src/v20190722/model/CreatePictureResponse.cpp
  src/v20190722/model/WaterMarkParams.cpp
  src/v20190722/model/DescribeRecordStatisticResponse.cpp
  src/v20190722/model/DismissRoomByStrRoomIdResponse.cpp
  src/v20190722/model/DescribeHistoryScaleResponse.cpp
  src/v20190722/model/StartMCUMixTranscodeByStrRoomIdResponse.cpp
  src/v20190722/model/PictureInfo.cpp
  )

set(trtc_include
    include/tencentcloud/trtc
  )

add_library(trtc ${LIB_TYPE}
  ${trtc_public_header}
  ${trtc_public_header_model}
  ${trtc_src})

set_target_properties(trtc
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}trtc
  )

target_include_directories(trtc
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(trtc
  core)

#install(FILES ${trtc_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/trtc/v20190722)
#install(FILES ${trtc_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/trtc/v20190722/model)
install(DIRECTORY ${trtc_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS trtc
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
