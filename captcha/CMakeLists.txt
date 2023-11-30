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

set(captcha_public_header
  include/tencentcloud/captcha/v20190722/CaptchaClient.h
  )

set(captcha_public_header_model
  include/tencentcloud/captcha/v20190722/model/DescribeCaptchaOperDataResponse.h
  include/tencentcloud/captcha/v20190722/model/CaptchaOperDataInterceptUnit.h
  include/tencentcloud/captcha/v20190722/model/CaptchaOperDataTryTimesDistributeUnit.h
  include/tencentcloud/captcha/v20190722/model/DescribeCaptchaMiniOperDataResponse.h
  include/tencentcloud/captcha/v20190722/model/GetTotalTicketStatisticsRequest.h
  include/tencentcloud/captcha/v20190722/model/DescribeCaptchaMiniDataSumResponse.h
  include/tencentcloud/captcha/v20190722/model/DescribeCaptchaRceResultResponse.h
  include/tencentcloud/captcha/v20190722/model/GetRequestStatisticsResponse.h
  include/tencentcloud/captcha/v20190722/model/GetRequestStatisticsRequest.h
  include/tencentcloud/captcha/v20190722/model/RceResult.h
  include/tencentcloud/captcha/v20190722/model/OutputManageMarketingRiskValue.h
  include/tencentcloud/captcha/v20190722/model/CaptchaOperDataRes.h
  include/tencentcloud/captcha/v20190722/model/GetTicketStatisticsRequest.h
  include/tencentcloud/captcha/v20190722/model/TicketInterceptUnit.h
  include/tencentcloud/captcha/v20190722/model/DescribeCaptchaUserAllAppIdRequest.h
  include/tencentcloud/captcha/v20190722/model/GetTotalTicketStatisticsResponse.h
  include/tencentcloud/captcha/v20190722/model/TicketCheckTrendObj.h
  include/tencentcloud/captcha/v20190722/model/DescribeCaptchaMiniDataResponse.h
  include/tencentcloud/captcha/v20190722/model/InterceptPerTrendObj.h
  include/tencentcloud/captcha/v20190722/model/DescribeCaptchaMiniRiskResultRequest.h
  include/tencentcloud/captcha/v20190722/model/UpdateCaptchaAppIdInfoResponse.h
  include/tencentcloud/captcha/v20190722/model/CaptchaUserAllAppId.h
  include/tencentcloud/captcha/v20190722/model/DescribeCaptchaDataSumResponse.h
  include/tencentcloud/captcha/v20190722/model/TicketThroughUnit.h
  include/tencentcloud/captcha/v20190722/model/DescribeCaptchaTicketDataRequest.h
  include/tencentcloud/captcha/v20190722/model/DescribeCaptchaResultResponse.h
  include/tencentcloud/captcha/v20190722/model/DescribeCaptchaMiniDataSumRequest.h
  include/tencentcloud/captcha/v20190722/model/CaptchaOperDataTryTimesUnit.h
  include/tencentcloud/captcha/v20190722/model/DescribeCaptchaOperDataRequest.h
  include/tencentcloud/captcha/v20190722/model/DescribeCaptchaDataSumRequest.h
  include/tencentcloud/captcha/v20190722/model/DescribeCaptchaMiniRiskResultResponse.h
  include/tencentcloud/captcha/v20190722/model/GetTicketStatisticsResponse.h
  include/tencentcloud/captcha/v20190722/model/GetTotalRequestStatisticsRequest.h
  include/tencentcloud/captcha/v20190722/model/TicketAmountUnit.h
  include/tencentcloud/captcha/v20190722/model/GetTotalRequestStatisticsResponse.h
  include/tencentcloud/captcha/v20190722/model/CaptchaQueryData.h
  include/tencentcloud/captcha/v20190722/model/RequestTrendObj.h
  include/tencentcloud/captcha/v20190722/model/DescribeCaptchaDataResponse.h
  include/tencentcloud/captcha/v20190722/model/DescribeCaptchaResultRequest.h
  include/tencentcloud/captcha/v20190722/model/CaptchaStatisticObj.h
  include/tencentcloud/captcha/v20190722/model/UpdateCaptchaAppIdInfoRequest.h
  include/tencentcloud/captcha/v20190722/model/CaptchaOperDataLoadTimeUnit.h
  include/tencentcloud/captcha/v20190722/model/DescribeCaptchaMiniOperDataRequest.h
  include/tencentcloud/captcha/v20190722/model/DescribeCaptchaAppIdInfoRequest.h
  include/tencentcloud/captcha/v20190722/model/DescribeCaptchaAppIdInfoResponse.h
  include/tencentcloud/captcha/v20190722/model/DescribeCaptchaRceResultRequest.h
  include/tencentcloud/captcha/v20190722/model/DescribeCaptchaUserAllAppIdResponse.h
  include/tencentcloud/captcha/v20190722/model/DescribeCaptchaDataRequest.h
  include/tencentcloud/captcha/v20190722/model/DescribeCaptchaMiniResultRequest.h
  include/tencentcloud/captcha/v20190722/model/DescribeCaptchaTicketDataResponse.h
  include/tencentcloud/captcha/v20190722/model/CaptchaTicketDataRes.h
  include/tencentcloud/captcha/v20190722/model/DescribeCaptchaMiniResultResponse.h
  include/tencentcloud/captcha/v20190722/model/DescribeCaptchaMiniDataRequest.h
  )

set(captcha_src
  src/v20190722/CaptchaClient.cpp
  src/v20190722/model/DescribeCaptchaOperDataResponse.cpp
  src/v20190722/model/CaptchaOperDataInterceptUnit.cpp
  src/v20190722/model/CaptchaOperDataTryTimesDistributeUnit.cpp
  src/v20190722/model/DescribeCaptchaMiniOperDataResponse.cpp
  src/v20190722/model/GetTotalTicketStatisticsRequest.cpp
  src/v20190722/model/DescribeCaptchaMiniDataSumResponse.cpp
  src/v20190722/model/DescribeCaptchaRceResultResponse.cpp
  src/v20190722/model/GetRequestStatisticsResponse.cpp
  src/v20190722/model/GetRequestStatisticsRequest.cpp
  src/v20190722/model/RceResult.cpp
  src/v20190722/model/OutputManageMarketingRiskValue.cpp
  src/v20190722/model/CaptchaOperDataRes.cpp
  src/v20190722/model/GetTicketStatisticsRequest.cpp
  src/v20190722/model/TicketInterceptUnit.cpp
  src/v20190722/model/DescribeCaptchaUserAllAppIdRequest.cpp
  src/v20190722/model/GetTotalTicketStatisticsResponse.cpp
  src/v20190722/model/TicketCheckTrendObj.cpp
  src/v20190722/model/DescribeCaptchaMiniDataResponse.cpp
  src/v20190722/model/InterceptPerTrendObj.cpp
  src/v20190722/model/DescribeCaptchaMiniRiskResultRequest.cpp
  src/v20190722/model/UpdateCaptchaAppIdInfoResponse.cpp
  src/v20190722/model/CaptchaUserAllAppId.cpp
  src/v20190722/model/DescribeCaptchaDataSumResponse.cpp
  src/v20190722/model/TicketThroughUnit.cpp
  src/v20190722/model/DescribeCaptchaTicketDataRequest.cpp
  src/v20190722/model/DescribeCaptchaResultResponse.cpp
  src/v20190722/model/DescribeCaptchaMiniDataSumRequest.cpp
  src/v20190722/model/CaptchaOperDataTryTimesUnit.cpp
  src/v20190722/model/DescribeCaptchaOperDataRequest.cpp
  src/v20190722/model/DescribeCaptchaDataSumRequest.cpp
  src/v20190722/model/DescribeCaptchaMiniRiskResultResponse.cpp
  src/v20190722/model/GetTicketStatisticsResponse.cpp
  src/v20190722/model/GetTotalRequestStatisticsRequest.cpp
  src/v20190722/model/TicketAmountUnit.cpp
  src/v20190722/model/GetTotalRequestStatisticsResponse.cpp
  src/v20190722/model/CaptchaQueryData.cpp
  src/v20190722/model/RequestTrendObj.cpp
  src/v20190722/model/DescribeCaptchaDataResponse.cpp
  src/v20190722/model/DescribeCaptchaResultRequest.cpp
  src/v20190722/model/CaptchaStatisticObj.cpp
  src/v20190722/model/UpdateCaptchaAppIdInfoRequest.cpp
  src/v20190722/model/CaptchaOperDataLoadTimeUnit.cpp
  src/v20190722/model/DescribeCaptchaMiniOperDataRequest.cpp
  src/v20190722/model/DescribeCaptchaAppIdInfoRequest.cpp
  src/v20190722/model/DescribeCaptchaAppIdInfoResponse.cpp
  src/v20190722/model/DescribeCaptchaRceResultRequest.cpp
  src/v20190722/model/DescribeCaptchaUserAllAppIdResponse.cpp
  src/v20190722/model/DescribeCaptchaDataRequest.cpp
  src/v20190722/model/DescribeCaptchaMiniResultRequest.cpp
  src/v20190722/model/DescribeCaptchaTicketDataResponse.cpp
  src/v20190722/model/CaptchaTicketDataRes.cpp
  src/v20190722/model/DescribeCaptchaMiniResultResponse.cpp
  src/v20190722/model/DescribeCaptchaMiniDataRequest.cpp
  )

set(captcha_include
    include/tencentcloud/captcha
  )

add_library(captcha ${LIB_TYPE}
  ${captcha_public_header}
  ${captcha_public_header_model}
  ${captcha_src})

set_target_properties(captcha
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}captcha
  )

target_include_directories(captcha
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(captcha
  core)

#install(FILES ${captcha_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/captcha/v20190722)
#install(FILES ${captcha_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/captcha/v20190722/model)
install(DIRECTORY ${captcha_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS captcha
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
