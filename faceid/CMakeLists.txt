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

set(faceid_public_header
  include/tencentcloud/faceid/v20180301/FaceidClient.h
  )

set(faceid_public_header_model
  include/tencentcloud/faceid/v20180301/model/DetectInfoVideoData.h
  include/tencentcloud/faceid/v20180301/model/GetDetectInfoEnhancedRequest.h
  include/tencentcloud/faceid/v20180301/model/GetFaceIdTokenRequest.h
  include/tencentcloud/faceid/v20180301/model/LivenessRequest.h
  include/tencentcloud/faceid/v20180301/model/Encryption.h
  include/tencentcloud/faceid/v20180301/model/CheckBankCardInformationRequest.h
  include/tencentcloud/faceid/v20180301/model/MobileNetworkTimeVerificationResponse.h
  include/tencentcloud/faceid/v20180301/model/GetLiveCodeRequest.h
  include/tencentcloud/faceid/v20180301/model/GetEidResultResponse.h
  include/tencentcloud/faceid/v20180301/model/IdCardVerificationRequest.h
  include/tencentcloud/faceid/v20180301/model/BankCardVerificationRequest.h
  include/tencentcloud/faceid/v20180301/model/CheckBankCardInformationResponse.h
  include/tencentcloud/faceid/v20180301/model/DetectInfoBestFrame.h
  include/tencentcloud/faceid/v20180301/model/CheckIdCardInformationResponse.h
  include/tencentcloud/faceid/v20180301/model/GetDetectInfoEnhancedResponse.h
  include/tencentcloud/faceid/v20180301/model/PhoneVerificationRequest.h
  include/tencentcloud/faceid/v20180301/model/GetEidResultRequest.h
  include/tencentcloud/faceid/v20180301/model/DetectAuthResponse.h
  include/tencentcloud/faceid/v20180301/model/PhoneVerificationResponse.h
  include/tencentcloud/faceid/v20180301/model/GetEidTokenRequest.h
  include/tencentcloud/faceid/v20180301/model/IdCardOCRVerificationRequest.h
  include/tencentcloud/faceid/v20180301/model/CheckPhoneAndNameResponse.h
  include/tencentcloud/faceid/v20180301/model/BankCard4EVerificationResponse.h
  include/tencentcloud/faceid/v20180301/model/MobileStatusRequest.h
  include/tencentcloud/faceid/v20180301/model/GetRealNameAuthTokenRequest.h
  include/tencentcloud/faceid/v20180301/model/BankCard2EVerificationRequest.h
  include/tencentcloud/faceid/v20180301/model/LivenessRecognitionRequest.h
  include/tencentcloud/faceid/v20180301/model/EidInfo.h
  include/tencentcloud/faceid/v20180301/model/GetFaceIdTokenResponse.h
  include/tencentcloud/faceid/v20180301/model/GetEidTokenConfig.h
  include/tencentcloud/faceid/v20180301/model/MobileStatusResponse.h
  include/tencentcloud/faceid/v20180301/model/IdCardOCRVerificationResponse.h
  include/tencentcloud/faceid/v20180301/model/GetRealNameAuthTokenResponse.h
  include/tencentcloud/faceid/v20180301/model/LivenessResponse.h
  include/tencentcloud/faceid/v20180301/model/CheckIdCardInformationRequest.h
  include/tencentcloud/faceid/v20180301/model/DetectInfoText.h
  include/tencentcloud/faceid/v20180301/model/DetectAuthRequest.h
  include/tencentcloud/faceid/v20180301/model/MinorsVerificationResponse.h
  include/tencentcloud/faceid/v20180301/model/BankCardVerificationResponse.h
  include/tencentcloud/faceid/v20180301/model/GetRealNameAuthResultRequest.h
  include/tencentcloud/faceid/v20180301/model/ImageRecognitionRequest.h
  include/tencentcloud/faceid/v20180301/model/BankCard4EVerificationRequest.h
  include/tencentcloud/faceid/v20180301/model/MobileNetworkTimeVerificationRequest.h
  include/tencentcloud/faceid/v20180301/model/GetFaceIdResultRequest.h
  include/tencentcloud/faceid/v20180301/model/GetActionSequenceResponse.h
  include/tencentcloud/faceid/v20180301/model/LivenessRecognitionResponse.h
  include/tencentcloud/faceid/v20180301/model/MinorsVerificationRequest.h
  include/tencentcloud/faceid/v20180301/model/ImageRecognitionResponse.h
  include/tencentcloud/faceid/v20180301/model/GetActionSequenceRequest.h
  include/tencentcloud/faceid/v20180301/model/GetDetectInfoResponse.h
  include/tencentcloud/faceid/v20180301/model/LivenessCompareResponse.h
  include/tencentcloud/faceid/v20180301/model/GetLiveCodeResponse.h
  include/tencentcloud/faceid/v20180301/model/GetDetectInfoRequest.h
  include/tencentcloud/faceid/v20180301/model/BankCard2EVerificationResponse.h
  include/tencentcloud/faceid/v20180301/model/IdCardVerificationResponse.h
  include/tencentcloud/faceid/v20180301/model/DetectInfoIdCardData.h
  include/tencentcloud/faceid/v20180301/model/CheckPhoneAndNameRequest.h
  include/tencentcloud/faceid/v20180301/model/GetEidTokenResponse.h
  include/tencentcloud/faceid/v20180301/model/LivenessCompareRequest.h
  include/tencentcloud/faceid/v20180301/model/DetectDetail.h
  include/tencentcloud/faceid/v20180301/model/GetFaceIdResultResponse.h
  include/tencentcloud/faceid/v20180301/model/GetRealNameAuthResultResponse.h
  )

set(faceid_src
  src/v20180301/FaceidClient.cpp
  src/v20180301/model/DetectInfoVideoData.cpp
  src/v20180301/model/GetDetectInfoEnhancedRequest.cpp
  src/v20180301/model/GetFaceIdTokenRequest.cpp
  src/v20180301/model/LivenessRequest.cpp
  src/v20180301/model/Encryption.cpp
  src/v20180301/model/CheckBankCardInformationRequest.cpp
  src/v20180301/model/MobileNetworkTimeVerificationResponse.cpp
  src/v20180301/model/GetLiveCodeRequest.cpp
  src/v20180301/model/GetEidResultResponse.cpp
  src/v20180301/model/IdCardVerificationRequest.cpp
  src/v20180301/model/BankCardVerificationRequest.cpp
  src/v20180301/model/CheckBankCardInformationResponse.cpp
  src/v20180301/model/DetectInfoBestFrame.cpp
  src/v20180301/model/CheckIdCardInformationResponse.cpp
  src/v20180301/model/GetDetectInfoEnhancedResponse.cpp
  src/v20180301/model/PhoneVerificationRequest.cpp
  src/v20180301/model/GetEidResultRequest.cpp
  src/v20180301/model/DetectAuthResponse.cpp
  src/v20180301/model/PhoneVerificationResponse.cpp
  src/v20180301/model/GetEidTokenRequest.cpp
  src/v20180301/model/IdCardOCRVerificationRequest.cpp
  src/v20180301/model/CheckPhoneAndNameResponse.cpp
  src/v20180301/model/BankCard4EVerificationResponse.cpp
  src/v20180301/model/MobileStatusRequest.cpp
  src/v20180301/model/GetRealNameAuthTokenRequest.cpp
  src/v20180301/model/BankCard2EVerificationRequest.cpp
  src/v20180301/model/LivenessRecognitionRequest.cpp
  src/v20180301/model/EidInfo.cpp
  src/v20180301/model/GetFaceIdTokenResponse.cpp
  src/v20180301/model/GetEidTokenConfig.cpp
  src/v20180301/model/MobileStatusResponse.cpp
  src/v20180301/model/IdCardOCRVerificationResponse.cpp
  src/v20180301/model/GetRealNameAuthTokenResponse.cpp
  src/v20180301/model/LivenessResponse.cpp
  src/v20180301/model/CheckIdCardInformationRequest.cpp
  src/v20180301/model/DetectInfoText.cpp
  src/v20180301/model/DetectAuthRequest.cpp
  src/v20180301/model/MinorsVerificationResponse.cpp
  src/v20180301/model/BankCardVerificationResponse.cpp
  src/v20180301/model/GetRealNameAuthResultRequest.cpp
  src/v20180301/model/ImageRecognitionRequest.cpp
  src/v20180301/model/BankCard4EVerificationRequest.cpp
  src/v20180301/model/MobileNetworkTimeVerificationRequest.cpp
  src/v20180301/model/GetFaceIdResultRequest.cpp
  src/v20180301/model/GetActionSequenceResponse.cpp
  src/v20180301/model/LivenessRecognitionResponse.cpp
  src/v20180301/model/MinorsVerificationRequest.cpp
  src/v20180301/model/ImageRecognitionResponse.cpp
  src/v20180301/model/GetActionSequenceRequest.cpp
  src/v20180301/model/GetDetectInfoResponse.cpp
  src/v20180301/model/LivenessCompareResponse.cpp
  src/v20180301/model/GetLiveCodeResponse.cpp
  src/v20180301/model/GetDetectInfoRequest.cpp
  src/v20180301/model/BankCard2EVerificationResponse.cpp
  src/v20180301/model/IdCardVerificationResponse.cpp
  src/v20180301/model/DetectInfoIdCardData.cpp
  src/v20180301/model/CheckPhoneAndNameRequest.cpp
  src/v20180301/model/GetEidTokenResponse.cpp
  src/v20180301/model/LivenessCompareRequest.cpp
  src/v20180301/model/DetectDetail.cpp
  src/v20180301/model/GetFaceIdResultResponse.cpp
  src/v20180301/model/GetRealNameAuthResultResponse.cpp
  )

set(faceid_include
    include/tencentcloud/faceid
  )

add_library(faceid ${LIB_TYPE}
  ${faceid_public_header}
  ${faceid_public_header_model}
  ${faceid_src})

set_target_properties(faceid
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}faceid
  )

target_include_directories(faceid
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(faceid
  core)

#install(FILES ${faceid_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/faceid/v20180301)
#install(FILES ${faceid_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/faceid/v20180301/model)
install(DIRECTORY ${faceid_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS faceid
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
