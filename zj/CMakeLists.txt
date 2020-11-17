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

set(zj_public_header
  include/tencentcloud/zj/v20190121/ZjClient.h
  )

set(zj_public_header_model
  include/tencentcloud/zj/v20190121/model/ModifySmsTemplateResponse.h
  include/tencentcloud/zj/v20190121/model/SmsAddCrowdPackInfoResponse.h
  include/tencentcloud/zj/v20190121/model/PushMmsContentResponse.h
  include/tencentcloud/zj/v20190121/model/AddSmsTemplateDataStruct.h
  include/tencentcloud/zj/v20190121/model/DescribeMmsInstanceListRequest.h
  include/tencentcloud/zj/v20190121/model/DescribeMmsInstanceInfoResponse.h
  include/tencentcloud/zj/v20190121/model/SendSmsPaasDataStruct.h
  include/tencentcloud/zj/v20190121/model/AddCrowdPackInfoResponse.h
  include/tencentcloud/zj/v20190121/model/AddSmsSignRequest.h
  include/tencentcloud/zj/v20190121/model/AddSmsSignResponse.h
  include/tencentcloud/zj/v20190121/model/GetSmsCampaignStatusRequest.h
  include/tencentcloud/zj/v20190121/model/DescribeSmsTemplateListResponse.h
  include/tencentcloud/zj/v20190121/model/MmsInstanceInfoList.h
  include/tencentcloud/zj/v20190121/model/GetCrowdPackListResponse.h
  include/tencentcloud/zj/v20190121/model/CreateMmsInstanceResp.h
  include/tencentcloud/zj/v20190121/model/AddSmsTemplateRequest.h
  include/tencentcloud/zj/v20190121/model/DescribeMmsInstanceInfoRequest.h
  include/tencentcloud/zj/v20190121/model/CreateCampaignResponse.h
  include/tencentcloud/zj/v20190121/model/PushMmsContentResp.h
  include/tencentcloud/zj/v20190121/model/UploadFansInfoCosInfo.h
  include/tencentcloud/zj/v20190121/model/CreateCampaignRequest.h
  include/tencentcloud/zj/v20190121/model/SmsAmountDataStruct.h
  include/tencentcloud/zj/v20190121/model/AddCrowdPackInfoRequest.h
  include/tencentcloud/zj/v20190121/model/SmsSuccessResponse.h
  include/tencentcloud/zj/v20190121/model/SmsGetCrowdPackListResponse.h
  include/tencentcloud/zj/v20190121/model/DescribeSmsTemplateListDataStruct.h
  include/tencentcloud/zj/v20190121/model/DeleteMmsInstanceResponse.h
  include/tencentcloud/zj/v20190121/model/ModifySmsTemplateRequest.h
  include/tencentcloud/zj/v20190121/model/MmsInstanceStateInfo.h
  include/tencentcloud/zj/v20190121/model/CancelActivityData.h
  include/tencentcloud/zj/v20190121/model/SendSmsResponse.h
  include/tencentcloud/zj/v20190121/model/PaasStrategy.h
  include/tencentcloud/zj/v20190121/model/CancelCampaignResponse.h
  include/tencentcloud/zj/v20190121/model/SmsCampaignStatisticsCrowdData.h
  include/tencentcloud/zj/v20190121/model/DescribeSmsSignListRequest.h
  include/tencentcloud/zj/v20190121/model/GetCrowdUploadInfoResponse.h
  include/tencentcloud/zj/v20190121/model/SmsGetCrowdPackList.h
  include/tencentcloud/zj/v20190121/model/GetSmsAmountInfoResponse.h
  include/tencentcloud/zj/v20190121/model/DescribeSmsSignListDataStruct.h
  include/tencentcloud/zj/v20190121/model/GetCrowdPackListRequest.h
  include/tencentcloud/zj/v20190121/model/AddSmsTemplateResponse.h
  include/tencentcloud/zj/v20190121/model/PaasCreateSignResp.h
  include/tencentcloud/zj/v20190121/model/PaasSmsCampaignStatusResp.h
  include/tencentcloud/zj/v20190121/model/DelCrowdPackResponse.h
  include/tencentcloud/zj/v20190121/model/DelCrowdPackRequest.h
  include/tencentcloud/zj/v20190121/model/CreateMmsInstanceResponse.h
  include/tencentcloud/zj/v20190121/model/DescribeSmsTemplateListRequest.h
  include/tencentcloud/zj/v20190121/model/DeleteMmsInstanceRequest.h
  include/tencentcloud/zj/v20190121/model/DelMmsInstanceData.h
  include/tencentcloud/zj/v20190121/model/PaasStrategyItem.h
  include/tencentcloud/zj/v20190121/model/GetSmsAmountInfoRequest.h
  include/tencentcloud/zj/v20190121/model/DelTemplateRequest.h
  include/tencentcloud/zj/v20190121/model/SmsCreateCampaignResponse.h
  include/tencentcloud/zj/v20190121/model/ModifySmsTemplateDataStruct.h
  include/tencentcloud/zj/v20190121/model/PushMmsContentRequest.h
  include/tencentcloud/zj/v20190121/model/DescribeMmsInstanceListResponse.h
  include/tencentcloud/zj/v20190121/model/CreateMmsInstanceItem.h
  include/tencentcloud/zj/v20190121/model/GetCrowdUploadInfoRequest.h
  include/tencentcloud/zj/v20190121/model/CancelCampaignRequest.h
  include/tencentcloud/zj/v20190121/model/SmsCampaignStatisticsData.h
  include/tencentcloud/zj/v20190121/model/MmsInstanceInfo.h
  include/tencentcloud/zj/v20190121/model/DelTemplateResponse.h
  include/tencentcloud/zj/v20190121/model/SmsGetCrowdUploadInfoResponse.h
  include/tencentcloud/zj/v20190121/model/CreateMmsInstanceRequest.h
  include/tencentcloud/zj/v20190121/model/DescribeSmsSignListResponse.h
  include/tencentcloud/zj/v20190121/model/DescribeSmsCampaignStatisticsResponse.h
  include/tencentcloud/zj/v20190121/model/GetSmsCampaignStatusResponse.h
  include/tencentcloud/zj/v20190121/model/DescribeSmsCampaignStatisticsRequest.h
  include/tencentcloud/zj/v20190121/model/SendSmsRequest.h
  include/tencentcloud/zj/v20190121/model/SmsCampaignStatisticsTemplateData.h
  )

set(zj_src
  src/v20190121/ZjClient.cpp
  src/v20190121/model/ModifySmsTemplateResponse.cpp
  src/v20190121/model/SmsAddCrowdPackInfoResponse.cpp
  src/v20190121/model/PushMmsContentResponse.cpp
  src/v20190121/model/AddSmsTemplateDataStruct.cpp
  src/v20190121/model/DescribeMmsInstanceListRequest.cpp
  src/v20190121/model/DescribeMmsInstanceInfoResponse.cpp
  src/v20190121/model/SendSmsPaasDataStruct.cpp
  src/v20190121/model/AddCrowdPackInfoResponse.cpp
  src/v20190121/model/AddSmsSignRequest.cpp
  src/v20190121/model/AddSmsSignResponse.cpp
  src/v20190121/model/GetSmsCampaignStatusRequest.cpp
  src/v20190121/model/DescribeSmsTemplateListResponse.cpp
  src/v20190121/model/MmsInstanceInfoList.cpp
  src/v20190121/model/GetCrowdPackListResponse.cpp
  src/v20190121/model/CreateMmsInstanceResp.cpp
  src/v20190121/model/AddSmsTemplateRequest.cpp
  src/v20190121/model/DescribeMmsInstanceInfoRequest.cpp
  src/v20190121/model/CreateCampaignResponse.cpp
  src/v20190121/model/PushMmsContentResp.cpp
  src/v20190121/model/UploadFansInfoCosInfo.cpp
  src/v20190121/model/CreateCampaignRequest.cpp
  src/v20190121/model/SmsAmountDataStruct.cpp
  src/v20190121/model/AddCrowdPackInfoRequest.cpp
  src/v20190121/model/SmsSuccessResponse.cpp
  src/v20190121/model/SmsGetCrowdPackListResponse.cpp
  src/v20190121/model/DescribeSmsTemplateListDataStruct.cpp
  src/v20190121/model/DeleteMmsInstanceResponse.cpp
  src/v20190121/model/ModifySmsTemplateRequest.cpp
  src/v20190121/model/MmsInstanceStateInfo.cpp
  src/v20190121/model/CancelActivityData.cpp
  src/v20190121/model/SendSmsResponse.cpp
  src/v20190121/model/PaasStrategy.cpp
  src/v20190121/model/CancelCampaignResponse.cpp
  src/v20190121/model/SmsCampaignStatisticsCrowdData.cpp
  src/v20190121/model/DescribeSmsSignListRequest.cpp
  src/v20190121/model/GetCrowdUploadInfoResponse.cpp
  src/v20190121/model/SmsGetCrowdPackList.cpp
  src/v20190121/model/GetSmsAmountInfoResponse.cpp
  src/v20190121/model/DescribeSmsSignListDataStruct.cpp
  src/v20190121/model/GetCrowdPackListRequest.cpp
  src/v20190121/model/AddSmsTemplateResponse.cpp
  src/v20190121/model/PaasCreateSignResp.cpp
  src/v20190121/model/PaasSmsCampaignStatusResp.cpp
  src/v20190121/model/DelCrowdPackResponse.cpp
  src/v20190121/model/DelCrowdPackRequest.cpp
  src/v20190121/model/CreateMmsInstanceResponse.cpp
  src/v20190121/model/DescribeSmsTemplateListRequest.cpp
  src/v20190121/model/DeleteMmsInstanceRequest.cpp
  src/v20190121/model/DelMmsInstanceData.cpp
  src/v20190121/model/PaasStrategyItem.cpp
  src/v20190121/model/GetSmsAmountInfoRequest.cpp
  src/v20190121/model/DelTemplateRequest.cpp
  src/v20190121/model/SmsCreateCampaignResponse.cpp
  src/v20190121/model/ModifySmsTemplateDataStruct.cpp
  src/v20190121/model/PushMmsContentRequest.cpp
  src/v20190121/model/DescribeMmsInstanceListResponse.cpp
  src/v20190121/model/CreateMmsInstanceItem.cpp
  src/v20190121/model/GetCrowdUploadInfoRequest.cpp
  src/v20190121/model/CancelCampaignRequest.cpp
  src/v20190121/model/SmsCampaignStatisticsData.cpp
  src/v20190121/model/MmsInstanceInfo.cpp
  src/v20190121/model/DelTemplateResponse.cpp
  src/v20190121/model/SmsGetCrowdUploadInfoResponse.cpp
  src/v20190121/model/CreateMmsInstanceRequest.cpp
  src/v20190121/model/DescribeSmsSignListResponse.cpp
  src/v20190121/model/DescribeSmsCampaignStatisticsResponse.cpp
  src/v20190121/model/GetSmsCampaignStatusResponse.cpp
  src/v20190121/model/DescribeSmsCampaignStatisticsRequest.cpp
  src/v20190121/model/SendSmsRequest.cpp
  src/v20190121/model/SmsCampaignStatisticsTemplateData.cpp
  )

set(zj_include
    include/tencentcloud/zj
  )

add_library(zj ${LIB_TYPE}
  ${zj_public_header}
  ${zj_public_header_model}
  ${zj_src})

set_target_properties(zj
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}zj
  )

target_include_directories(zj
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(zj
  core)

#install(FILES ${zj_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/zj/v20190121)
#install(FILES ${zj_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/zj/v20190121/model)
install(DIRECTORY ${zj_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS zj
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
