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

set(ses_public_header
  include/tencentcloud/ses/v20201002/SesClient.h
  )

set(ses_public_header_model
  include/tencentcloud/ses/v20201002/model/SendTaskData.h
  include/tencentcloud/ses/v20201002/model/Template.h
  include/tencentcloud/ses/v20201002/model/ListAddressUnsubscribeConfigRequest.h
  include/tencentcloud/ses/v20201002/model/EmailSender.h
  include/tencentcloud/ses/v20201002/model/BatchSendEmailResponse.h
  include/tencentcloud/ses/v20201002/model/DeleteEmailIdentityRequest.h
  include/tencentcloud/ses/v20201002/model/CreateCustomBlacklistResponse.h
  include/tencentcloud/ses/v20201002/model/UpdateAddressUnsubscribeConfigResponse.h
  include/tencentcloud/ses/v20201002/model/CreateReceiverRequest.h
  include/tencentcloud/ses/v20201002/model/TemplateContent.h
  include/tencentcloud/ses/v20201002/model/BlackEmailAddress.h
  include/tencentcloud/ses/v20201002/model/Simple.h
  include/tencentcloud/ses/v20201002/model/CreateEmailAddressRequest.h
  include/tencentcloud/ses/v20201002/model/CreateReceiverDetailRequest.h
  include/tencentcloud/ses/v20201002/model/UpdateEmailTemplateResponse.h
  include/tencentcloud/ses/v20201002/model/CreateReceiverDetailWithDataRequest.h
  include/tencentcloud/ses/v20201002/model/TimedEmailParam.h
  include/tencentcloud/ses/v20201002/model/DNSAttributes.h
  include/tencentcloud/ses/v20201002/model/GetEmailTemplateResponse.h
  include/tencentcloud/ses/v20201002/model/ListAddressUnsubscribeConfigResponse.h
  include/tencentcloud/ses/v20201002/model/SendEmailRequest.h
  include/tencentcloud/ses/v20201002/model/UpdateEmailIdentityRequest.h
  include/tencentcloud/ses/v20201002/model/DeleteEmailIdentityResponse.h
  include/tencentcloud/ses/v20201002/model/DeleteEmailTemplateResponse.h
  include/tencentcloud/ses/v20201002/model/ListCustomBlacklistRequest.h
  include/tencentcloud/ses/v20201002/model/DeleteEmailTemplateRequest.h
  include/tencentcloud/ses/v20201002/model/SendEmailStatus.h
  include/tencentcloud/ses/v20201002/model/ListEmailTemplatesRequest.h
  include/tencentcloud/ses/v20201002/model/DeleteBlackListRequest.h
  include/tencentcloud/ses/v20201002/model/ReceiverInputData.h
  include/tencentcloud/ses/v20201002/model/ReceiverDetail.h
  include/tencentcloud/ses/v20201002/model/ListBlackEmailAddressResponse.h
  include/tencentcloud/ses/v20201002/model/ListEmailIdentitiesResponse.h
  include/tencentcloud/ses/v20201002/model/UpdateCustomBlackListRequest.h
  include/tencentcloud/ses/v20201002/model/UpdateEmailSmtpPassWordRequest.h
  include/tencentcloud/ses/v20201002/model/DeleteCustomBlackListRequest.h
  include/tencentcloud/ses/v20201002/model/UpdateAddressUnsubscribeConfigRequest.h
  include/tencentcloud/ses/v20201002/model/ListEmailIdentitiesRequest.h
  include/tencentcloud/ses/v20201002/model/CreateReceiverResponse.h
  include/tencentcloud/ses/v20201002/model/UpdateEmailSmtpPassWordResponse.h
  include/tencentcloud/ses/v20201002/model/ListReceiversRequest.h
  include/tencentcloud/ses/v20201002/model/GetEmailIdentityResponse.h
  include/tencentcloud/ses/v20201002/model/Attachment.h
  include/tencentcloud/ses/v20201002/model/ListSendTasksRequest.h
  include/tencentcloud/ses/v20201002/model/ListReceiverDetailsResponse.h
  include/tencentcloud/ses/v20201002/model/ListEmailTemplatesResponse.h
  include/tencentcloud/ses/v20201002/model/GetEmailIdentityRequest.h
  include/tencentcloud/ses/v20201002/model/GetStatisticsReportRequest.h
  include/tencentcloud/ses/v20201002/model/GetSendEmailStatusResponse.h
  include/tencentcloud/ses/v20201002/model/AddressUnsubscribeConfigData.h
  include/tencentcloud/ses/v20201002/model/CreateEmailIdentityRequest.h
  include/tencentcloud/ses/v20201002/model/UpdateEmailTemplateRequest.h
  include/tencentcloud/ses/v20201002/model/CreateEmailTemplateRequest.h
  include/tencentcloud/ses/v20201002/model/DeleteBlackListResponse.h
  include/tencentcloud/ses/v20201002/model/DeleteCustomBlackListResponse.h
  include/tencentcloud/ses/v20201002/model/DeleteAddressUnsubscribeConfigRequest.h
  include/tencentcloud/ses/v20201002/model/CreateReceiverDetailResponse.h
  include/tencentcloud/ses/v20201002/model/DeleteReceiverResponse.h
  include/tencentcloud/ses/v20201002/model/SendEmailResponse.h
  include/tencentcloud/ses/v20201002/model/TemplatesMetadata.h
  include/tencentcloud/ses/v20201002/model/BlackAddressDetail.h
  include/tencentcloud/ses/v20201002/model/GetStatisticsReportResponse.h
  include/tencentcloud/ses/v20201002/model/DeleteEmailAddressResponse.h
  include/tencentcloud/ses/v20201002/model/ListCustomBlacklistResponse.h
  include/tencentcloud/ses/v20201002/model/ListReceiverDetailsRequest.h
  include/tencentcloud/ses/v20201002/model/CreateEmailIdentityResponse.h
  include/tencentcloud/ses/v20201002/model/CreateEmailAddressResponse.h
  include/tencentcloud/ses/v20201002/model/DeleteAddressUnsubscribeConfigResponse.h
  include/tencentcloud/ses/v20201002/model/BatchSendEmailRequest.h
  include/tencentcloud/ses/v20201002/model/CreateCustomBlacklistRequest.h
  include/tencentcloud/ses/v20201002/model/ListEmailAddressRequest.h
  include/tencentcloud/ses/v20201002/model/UpdateCustomBlackListResponse.h
  include/tencentcloud/ses/v20201002/model/ListBlackEmailAddressRequest.h
  include/tencentcloud/ses/v20201002/model/CreateReceiverDetailWithDataResponse.h
  include/tencentcloud/ses/v20201002/model/GetEmailTemplateRequest.h
  include/tencentcloud/ses/v20201002/model/ListSendTasksResponse.h
  include/tencentcloud/ses/v20201002/model/Volume.h
  include/tencentcloud/ses/v20201002/model/ReceiverData.h
  include/tencentcloud/ses/v20201002/model/CreateAddressUnsubscribeConfigRequest.h
  include/tencentcloud/ses/v20201002/model/UpdateEmailIdentityResponse.h
  include/tencentcloud/ses/v20201002/model/CreateEmailTemplateResponse.h
  include/tencentcloud/ses/v20201002/model/GetSendEmailStatusRequest.h
  include/tencentcloud/ses/v20201002/model/ListEmailAddressResponse.h
  include/tencentcloud/ses/v20201002/model/DeleteEmailAddressRequest.h
  include/tencentcloud/ses/v20201002/model/EmailIdentity.h
  include/tencentcloud/ses/v20201002/model/DeleteReceiverRequest.h
  include/tencentcloud/ses/v20201002/model/CycleEmailParam.h
  include/tencentcloud/ses/v20201002/model/CreateAddressUnsubscribeConfigResponse.h
  include/tencentcloud/ses/v20201002/model/ListReceiversResponse.h
  )

set(ses_src
  src/v20201002/SesClient.cpp
  src/v20201002/model/SendTaskData.cpp
  src/v20201002/model/Template.cpp
  src/v20201002/model/ListAddressUnsubscribeConfigRequest.cpp
  src/v20201002/model/EmailSender.cpp
  src/v20201002/model/BatchSendEmailResponse.cpp
  src/v20201002/model/DeleteEmailIdentityRequest.cpp
  src/v20201002/model/CreateCustomBlacklistResponse.cpp
  src/v20201002/model/UpdateAddressUnsubscribeConfigResponse.cpp
  src/v20201002/model/CreateReceiverRequest.cpp
  src/v20201002/model/TemplateContent.cpp
  src/v20201002/model/BlackEmailAddress.cpp
  src/v20201002/model/Simple.cpp
  src/v20201002/model/CreateEmailAddressRequest.cpp
  src/v20201002/model/CreateReceiverDetailRequest.cpp
  src/v20201002/model/UpdateEmailTemplateResponse.cpp
  src/v20201002/model/CreateReceiverDetailWithDataRequest.cpp
  src/v20201002/model/TimedEmailParam.cpp
  src/v20201002/model/DNSAttributes.cpp
  src/v20201002/model/GetEmailTemplateResponse.cpp
  src/v20201002/model/ListAddressUnsubscribeConfigResponse.cpp
  src/v20201002/model/SendEmailRequest.cpp
  src/v20201002/model/UpdateEmailIdentityRequest.cpp
  src/v20201002/model/DeleteEmailIdentityResponse.cpp
  src/v20201002/model/DeleteEmailTemplateResponse.cpp
  src/v20201002/model/ListCustomBlacklistRequest.cpp
  src/v20201002/model/DeleteEmailTemplateRequest.cpp
  src/v20201002/model/SendEmailStatus.cpp
  src/v20201002/model/ListEmailTemplatesRequest.cpp
  src/v20201002/model/DeleteBlackListRequest.cpp
  src/v20201002/model/ReceiverInputData.cpp
  src/v20201002/model/ReceiverDetail.cpp
  src/v20201002/model/ListBlackEmailAddressResponse.cpp
  src/v20201002/model/ListEmailIdentitiesResponse.cpp
  src/v20201002/model/UpdateCustomBlackListRequest.cpp
  src/v20201002/model/UpdateEmailSmtpPassWordRequest.cpp
  src/v20201002/model/DeleteCustomBlackListRequest.cpp
  src/v20201002/model/UpdateAddressUnsubscribeConfigRequest.cpp
  src/v20201002/model/ListEmailIdentitiesRequest.cpp
  src/v20201002/model/CreateReceiverResponse.cpp
  src/v20201002/model/UpdateEmailSmtpPassWordResponse.cpp
  src/v20201002/model/ListReceiversRequest.cpp
  src/v20201002/model/GetEmailIdentityResponse.cpp
  src/v20201002/model/Attachment.cpp
  src/v20201002/model/ListSendTasksRequest.cpp
  src/v20201002/model/ListReceiverDetailsResponse.cpp
  src/v20201002/model/ListEmailTemplatesResponse.cpp
  src/v20201002/model/GetEmailIdentityRequest.cpp
  src/v20201002/model/GetStatisticsReportRequest.cpp
  src/v20201002/model/GetSendEmailStatusResponse.cpp
  src/v20201002/model/AddressUnsubscribeConfigData.cpp
  src/v20201002/model/CreateEmailIdentityRequest.cpp
  src/v20201002/model/UpdateEmailTemplateRequest.cpp
  src/v20201002/model/CreateEmailTemplateRequest.cpp
  src/v20201002/model/DeleteBlackListResponse.cpp
  src/v20201002/model/DeleteCustomBlackListResponse.cpp
  src/v20201002/model/DeleteAddressUnsubscribeConfigRequest.cpp
  src/v20201002/model/CreateReceiverDetailResponse.cpp
  src/v20201002/model/DeleteReceiverResponse.cpp
  src/v20201002/model/SendEmailResponse.cpp
  src/v20201002/model/TemplatesMetadata.cpp
  src/v20201002/model/BlackAddressDetail.cpp
  src/v20201002/model/GetStatisticsReportResponse.cpp
  src/v20201002/model/DeleteEmailAddressResponse.cpp
  src/v20201002/model/ListCustomBlacklistResponse.cpp
  src/v20201002/model/ListReceiverDetailsRequest.cpp
  src/v20201002/model/CreateEmailIdentityResponse.cpp
  src/v20201002/model/CreateEmailAddressResponse.cpp
  src/v20201002/model/DeleteAddressUnsubscribeConfigResponse.cpp
  src/v20201002/model/BatchSendEmailRequest.cpp
  src/v20201002/model/CreateCustomBlacklistRequest.cpp
  src/v20201002/model/ListEmailAddressRequest.cpp
  src/v20201002/model/UpdateCustomBlackListResponse.cpp
  src/v20201002/model/ListBlackEmailAddressRequest.cpp
  src/v20201002/model/CreateReceiverDetailWithDataResponse.cpp
  src/v20201002/model/GetEmailTemplateRequest.cpp
  src/v20201002/model/ListSendTasksResponse.cpp
  src/v20201002/model/Volume.cpp
  src/v20201002/model/ReceiverData.cpp
  src/v20201002/model/CreateAddressUnsubscribeConfigRequest.cpp
  src/v20201002/model/UpdateEmailIdentityResponse.cpp
  src/v20201002/model/CreateEmailTemplateResponse.cpp
  src/v20201002/model/GetSendEmailStatusRequest.cpp
  src/v20201002/model/ListEmailAddressResponse.cpp
  src/v20201002/model/DeleteEmailAddressRequest.cpp
  src/v20201002/model/EmailIdentity.cpp
  src/v20201002/model/DeleteReceiverRequest.cpp
  src/v20201002/model/CycleEmailParam.cpp
  src/v20201002/model/CreateAddressUnsubscribeConfigResponse.cpp
  src/v20201002/model/ListReceiversResponse.cpp
  )

set(ses_include
    include/tencentcloud/ses
  )

add_library(ses ${LIB_TYPE}
  ${ses_public_header}
  ${ses_public_header_model}
  ${ses_src})

set_target_properties(ses
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ses
  )

target_include_directories(ses
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(ses
  core)

#install(FILES ${ses_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ses/v20201002)
#install(FILES ${ses_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ses/v20201002/model)
install(DIRECTORY ${ses_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS ses
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
