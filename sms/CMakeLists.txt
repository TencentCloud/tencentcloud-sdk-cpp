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
  include/tencentcloud/sms/v20210111/SmsClient.h
  )

set(sms_public_header_model
  include/tencentcloud/sms/v20190711/model/PullSmsReplyStatusRequest.h
  include/tencentcloud/sms/v20190711/model/DeleteSmsTemplateResponse.h
  include/tencentcloud/sms/v20190711/model/ModifySmsTemplateResponse.h
  include/tencentcloud/sms/v20190711/model/ModifySmsSignRequest.h
  include/tencentcloud/sms/v20190711/model/AddSmsSignRequest.h
  include/tencentcloud/sms/v20190711/model/AddTemplateStatus.h
  include/tencentcloud/sms/v20190711/model/DescribeSmsTemplateListResponse.h
  include/tencentcloud/sms/v20190711/model/PullSmsSendStatusByPhoneNumberRequest.h
  include/tencentcloud/sms/v20190711/model/AddSmsTemplateRequest.h
  include/tencentcloud/sms/v20190711/model/ModifySmsTemplateRequest.h
  include/tencentcloud/sms/v20190711/model/PullSmsReplyStatus.h
  include/tencentcloud/sms/v20190711/model/CallbackStatusStatisticsResponse.h
  include/tencentcloud/sms/v20190711/model/PullSmsSendStatusRequest.h
  include/tencentcloud/sms/v20190711/model/SmsPackagesStatistics.h
  include/tencentcloud/sms/v20190711/model/PullSmsSendStatusByPhoneNumberResponse.h
  include/tencentcloud/sms/v20190711/model/ModifySignStatus.h
  include/tencentcloud/sms/v20190711/model/DescribeSignListStatus.h
  include/tencentcloud/sms/v20190711/model/SendSmsResponse.h
  include/tencentcloud/sms/v20190711/model/SendStatusStatisticsResponse.h
  include/tencentcloud/sms/v20190711/model/SendSmsRequest.h
  include/tencentcloud/sms/v20190711/model/SendStatusStatistics.h
  include/tencentcloud/sms/v20190711/model/CallbackStatusStatisticsRequest.h
  include/tencentcloud/sms/v20190711/model/DeleteTemplateStatus.h
  include/tencentcloud/sms/v20190711/model/DescribeSmsSignListRequest.h
  include/tencentcloud/sms/v20190711/model/SmsPackagesStatisticsRequest.h
  include/tencentcloud/sms/v20190711/model/DescribeTemplateListStatus.h
  include/tencentcloud/sms/v20190711/model/AddSmsTemplateResponse.h
  include/tencentcloud/sms/v20190711/model/PullSmsSendStatus.h
  include/tencentcloud/sms/v20190711/model/DescribeSmsSignListResponse.h
  include/tencentcloud/sms/v20190711/model/DescribeSmsTemplateListRequest.h
  include/tencentcloud/sms/v20190711/model/CallbackStatusStatistics.h
  include/tencentcloud/sms/v20190711/model/SendStatusStatisticsRequest.h
  include/tencentcloud/sms/v20190711/model/DeleteSmsTemplateRequest.h
  include/tencentcloud/sms/v20190711/model/PullSmsReplyStatusByPhoneNumberResponse.h
  include/tencentcloud/sms/v20190711/model/SendStatus.h
  include/tencentcloud/sms/v20190711/model/DeleteSmsSignResponse.h
  include/tencentcloud/sms/v20190711/model/AddSmsSignResponse.h
  include/tencentcloud/sms/v20190711/model/DeleteSmsSignRequest.h
  include/tencentcloud/sms/v20190711/model/PullSmsReplyStatusByPhoneNumberRequest.h
  include/tencentcloud/sms/v20190711/model/ModifySmsSignResponse.h
  include/tencentcloud/sms/v20190711/model/AddSignStatus.h
  include/tencentcloud/sms/v20190711/model/ModifyTemplateStatus.h
  include/tencentcloud/sms/v20190711/model/PullSmsSendStatusResponse.h
  include/tencentcloud/sms/v20190711/model/SmsPackagesStatisticsResponse.h
  include/tencentcloud/sms/v20190711/model/DeleteSignStatus.h
  include/tencentcloud/sms/v20190711/model/PullSmsReplyStatusResponse.h
  include/tencentcloud/sms/v20210111/model/PullSmsReplyStatusRequest.h
  include/tencentcloud/sms/v20210111/model/DeleteSmsTemplateResponse.h
  include/tencentcloud/sms/v20210111/model/ModifySmsTemplateResponse.h
  include/tencentcloud/sms/v20210111/model/ModifySmsSignRequest.h
  include/tencentcloud/sms/v20210111/model/SmsPackagesStatisticsRequest.h
  include/tencentcloud/sms/v20210111/model/ReportConversionStatus.h
  include/tencentcloud/sms/v20210111/model/AddSmsSignRequest.h
  include/tencentcloud/sms/v20210111/model/AddTemplateStatus.h
  include/tencentcloud/sms/v20210111/model/DescribeSmsTemplateListResponse.h
  include/tencentcloud/sms/v20210111/model/DescribePhoneNumberInfoRequest.h
  include/tencentcloud/sms/v20210111/model/PullSmsSendStatusByPhoneNumberRequest.h
  include/tencentcloud/sms/v20210111/model/ReportConversionResponse.h
  include/tencentcloud/sms/v20210111/model/AddSmsTemplateRequest.h
  include/tencentcloud/sms/v20210111/model/ModifySmsTemplateRequest.h
  include/tencentcloud/sms/v20210111/model/PullSmsReplyStatus.h
  include/tencentcloud/sms/v20210111/model/CallbackStatusStatisticsResponse.h
  include/tencentcloud/sms/v20210111/model/PullSmsSendStatusRequest.h
  include/tencentcloud/sms/v20210111/model/SmsPackagesStatistics.h
  include/tencentcloud/sms/v20210111/model/PullSmsSendStatusByPhoneNumberResponse.h
  include/tencentcloud/sms/v20210111/model/ModifySignStatus.h
  include/tencentcloud/sms/v20210111/model/DescribeSignListStatus.h
  include/tencentcloud/sms/v20210111/model/SendSmsResponse.h
  include/tencentcloud/sms/v20210111/model/SendStatusStatisticsResponse.h
  include/tencentcloud/sms/v20210111/model/SendSmsRequest.h
  include/tencentcloud/sms/v20210111/model/SendStatusStatistics.h
  include/tencentcloud/sms/v20210111/model/CallbackStatusStatisticsRequest.h
  include/tencentcloud/sms/v20210111/model/DeleteTemplateStatus.h
  include/tencentcloud/sms/v20210111/model/DescribeSmsSignListRequest.h
  include/tencentcloud/sms/v20210111/model/DescribePhoneNumberInfoResponse.h
  include/tencentcloud/sms/v20210111/model/DescribeTemplateListStatus.h
  include/tencentcloud/sms/v20210111/model/AddSmsTemplateResponse.h
  include/tencentcloud/sms/v20210111/model/PullSmsSendStatus.h
  include/tencentcloud/sms/v20210111/model/DescribeSmsSignListResponse.h
  include/tencentcloud/sms/v20210111/model/DescribeSmsTemplateListRequest.h
  include/tencentcloud/sms/v20210111/model/CallbackStatusStatistics.h
  include/tencentcloud/sms/v20210111/model/PhoneNumberInfo.h
  include/tencentcloud/sms/v20210111/model/SendStatusStatisticsRequest.h
  include/tencentcloud/sms/v20210111/model/DeleteSmsTemplateRequest.h
  include/tencentcloud/sms/v20210111/model/PullSmsReplyStatusByPhoneNumberResponse.h
  include/tencentcloud/sms/v20210111/model/SendStatus.h
  include/tencentcloud/sms/v20210111/model/DeleteSmsSignResponse.h
  include/tencentcloud/sms/v20210111/model/AddSmsSignResponse.h
  include/tencentcloud/sms/v20210111/model/DeleteSmsSignRequest.h
  include/tencentcloud/sms/v20210111/model/PullSmsReplyStatusByPhoneNumberRequest.h
  include/tencentcloud/sms/v20210111/model/ModifySmsSignResponse.h
  include/tencentcloud/sms/v20210111/model/ReportConversionRequest.h
  include/tencentcloud/sms/v20210111/model/AddSignStatus.h
  include/tencentcloud/sms/v20210111/model/ModifyTemplateStatus.h
  include/tencentcloud/sms/v20210111/model/PullSmsSendStatusResponse.h
  include/tencentcloud/sms/v20210111/model/SmsPackagesStatisticsResponse.h
  include/tencentcloud/sms/v20210111/model/DeleteSignStatus.h
  include/tencentcloud/sms/v20210111/model/PullSmsReplyStatusResponse.h
  )

set(sms_src
  src/v20190711/SmsClient.cpp
  src/v20210111/SmsClient.cpp
  src/v20190711/model/PullSmsReplyStatusRequest.cpp
  src/v20190711/model/DeleteSmsTemplateResponse.cpp
  src/v20190711/model/ModifySmsTemplateResponse.cpp
  src/v20190711/model/ModifySmsSignRequest.cpp
  src/v20190711/model/AddSmsSignRequest.cpp
  src/v20190711/model/AddTemplateStatus.cpp
  src/v20190711/model/DescribeSmsTemplateListResponse.cpp
  src/v20190711/model/PullSmsSendStatusByPhoneNumberRequest.cpp
  src/v20190711/model/AddSmsTemplateRequest.cpp
  src/v20190711/model/ModifySmsTemplateRequest.cpp
  src/v20190711/model/PullSmsReplyStatus.cpp
  src/v20190711/model/CallbackStatusStatisticsResponse.cpp
  src/v20190711/model/PullSmsSendStatusRequest.cpp
  src/v20190711/model/SmsPackagesStatistics.cpp
  src/v20190711/model/PullSmsSendStatusByPhoneNumberResponse.cpp
  src/v20190711/model/ModifySignStatus.cpp
  src/v20190711/model/DescribeSignListStatus.cpp
  src/v20190711/model/SendSmsResponse.cpp
  src/v20190711/model/SendStatusStatisticsResponse.cpp
  src/v20190711/model/SendSmsRequest.cpp
  src/v20190711/model/SendStatusStatistics.cpp
  src/v20190711/model/CallbackStatusStatisticsRequest.cpp
  src/v20190711/model/DeleteTemplateStatus.cpp
  src/v20190711/model/DescribeSmsSignListRequest.cpp
  src/v20190711/model/SmsPackagesStatisticsRequest.cpp
  src/v20190711/model/DescribeTemplateListStatus.cpp
  src/v20190711/model/AddSmsTemplateResponse.cpp
  src/v20190711/model/PullSmsSendStatus.cpp
  src/v20190711/model/DescribeSmsSignListResponse.cpp
  src/v20190711/model/DescribeSmsTemplateListRequest.cpp
  src/v20190711/model/CallbackStatusStatistics.cpp
  src/v20190711/model/SendStatusStatisticsRequest.cpp
  src/v20190711/model/DeleteSmsTemplateRequest.cpp
  src/v20190711/model/PullSmsReplyStatusByPhoneNumberResponse.cpp
  src/v20190711/model/SendStatus.cpp
  src/v20190711/model/DeleteSmsSignResponse.cpp
  src/v20190711/model/AddSmsSignResponse.cpp
  src/v20190711/model/DeleteSmsSignRequest.cpp
  src/v20190711/model/PullSmsReplyStatusByPhoneNumberRequest.cpp
  src/v20190711/model/ModifySmsSignResponse.cpp
  src/v20190711/model/AddSignStatus.cpp
  src/v20190711/model/ModifyTemplateStatus.cpp
  src/v20190711/model/PullSmsSendStatusResponse.cpp
  src/v20190711/model/SmsPackagesStatisticsResponse.cpp
  src/v20190711/model/DeleteSignStatus.cpp
  src/v20190711/model/PullSmsReplyStatusResponse.cpp
  src/v20210111/model/PullSmsReplyStatusRequest.cpp
  src/v20210111/model/DeleteSmsTemplateResponse.cpp
  src/v20210111/model/ModifySmsTemplateResponse.cpp
  src/v20210111/model/ModifySmsSignRequest.cpp
  src/v20210111/model/SmsPackagesStatisticsRequest.cpp
  src/v20210111/model/ReportConversionStatus.cpp
  src/v20210111/model/AddSmsSignRequest.cpp
  src/v20210111/model/AddTemplateStatus.cpp
  src/v20210111/model/DescribeSmsTemplateListResponse.cpp
  src/v20210111/model/DescribePhoneNumberInfoRequest.cpp
  src/v20210111/model/PullSmsSendStatusByPhoneNumberRequest.cpp
  src/v20210111/model/ReportConversionResponse.cpp
  src/v20210111/model/AddSmsTemplateRequest.cpp
  src/v20210111/model/ModifySmsTemplateRequest.cpp
  src/v20210111/model/PullSmsReplyStatus.cpp
  src/v20210111/model/CallbackStatusStatisticsResponse.cpp
  src/v20210111/model/PullSmsSendStatusRequest.cpp
  src/v20210111/model/SmsPackagesStatistics.cpp
  src/v20210111/model/PullSmsSendStatusByPhoneNumberResponse.cpp
  src/v20210111/model/ModifySignStatus.cpp
  src/v20210111/model/DescribeSignListStatus.cpp
  src/v20210111/model/SendSmsResponse.cpp
  src/v20210111/model/SendStatusStatisticsResponse.cpp
  src/v20210111/model/SendSmsRequest.cpp
  src/v20210111/model/SendStatusStatistics.cpp
  src/v20210111/model/CallbackStatusStatisticsRequest.cpp
  src/v20210111/model/DeleteTemplateStatus.cpp
  src/v20210111/model/DescribeSmsSignListRequest.cpp
  src/v20210111/model/DescribePhoneNumberInfoResponse.cpp
  src/v20210111/model/DescribeTemplateListStatus.cpp
  src/v20210111/model/AddSmsTemplateResponse.cpp
  src/v20210111/model/PullSmsSendStatus.cpp
  src/v20210111/model/DescribeSmsSignListResponse.cpp
  src/v20210111/model/DescribeSmsTemplateListRequest.cpp
  src/v20210111/model/CallbackStatusStatistics.cpp
  src/v20210111/model/PhoneNumberInfo.cpp
  src/v20210111/model/SendStatusStatisticsRequest.cpp
  src/v20210111/model/DeleteSmsTemplateRequest.cpp
  src/v20210111/model/PullSmsReplyStatusByPhoneNumberResponse.cpp
  src/v20210111/model/SendStatus.cpp
  src/v20210111/model/DeleteSmsSignResponse.cpp
  src/v20210111/model/AddSmsSignResponse.cpp
  src/v20210111/model/DeleteSmsSignRequest.cpp
  src/v20210111/model/PullSmsReplyStatusByPhoneNumberRequest.cpp
  src/v20210111/model/ModifySmsSignResponse.cpp
  src/v20210111/model/ReportConversionRequest.cpp
  src/v20210111/model/AddSignStatus.cpp
  src/v20210111/model/ModifyTemplateStatus.cpp
  src/v20210111/model/PullSmsSendStatusResponse.cpp
  src/v20210111/model/SmsPackagesStatisticsResponse.cpp
  src/v20210111/model/DeleteSignStatus.cpp
  src/v20210111/model/PullSmsReplyStatusResponse.cpp
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
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/sms/v20210111)
#install(FILES ${sms_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/sms/v20210111/model)
install(DIRECTORY ${sms_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS sms
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
