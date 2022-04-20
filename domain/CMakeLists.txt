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

set(domain_public_header
  include/tencentcloud/domain/v20180808/DomainClient.h
  )

set(domain_public_header_model
  include/tencentcloud/domain/v20180808/model/UploadImageResponse.h
  include/tencentcloud/domain/v20180808/model/RenewDomainBatchResponse.h
  include/tencentcloud/domain/v20180808/model/BatchModifyDomainInfoRequest.h
  include/tencentcloud/domain/v20180808/model/DomainSimpleInfo.h
  include/tencentcloud/domain/v20180808/model/UpdateProhibitionBatchRequest.h
  include/tencentcloud/domain/v20180808/model/TransferInDomainBatchResponse.h
  include/tencentcloud/domain/v20180808/model/DeleteTemplateResponse.h
  include/tencentcloud/domain/v20180808/model/TransferInDomainBatchRequest.h
  include/tencentcloud/domain/v20180808/model/CreateDomainBatchResponse.h
  include/tencentcloud/domain/v20180808/model/DomainBatchDetailSet.h
  include/tencentcloud/domain/v20180808/model/SendPhoneEmailCodeResponse.h
  include/tencentcloud/domain/v20180808/model/ModifyDomainDNSBatchResponse.h
  include/tencentcloud/domain/v20180808/model/DeletePhoneEmailRequest.h
  include/tencentcloud/domain/v20180808/model/DescribeTemplateResponse.h
  include/tencentcloud/domain/v20180808/model/UpdateProhibitionBatchResponse.h
  include/tencentcloud/domain/v20180808/model/CheckDomainResponse.h
  include/tencentcloud/domain/v20180808/model/DescribeDomainSimpleInfoRequest.h
  include/tencentcloud/domain/v20180808/model/CreatePhoneEmailRequest.h
  include/tencentcloud/domain/v20180808/model/PriceInfo.h
  include/tencentcloud/domain/v20180808/model/DescribeTemplateRequest.h
  include/tencentcloud/domain/v20180808/model/RenewDomainBatchRequest.h
  include/tencentcloud/domain/v20180808/model/BatchModifyDomainInfoResponse.h
  include/tencentcloud/domain/v20180808/model/ModifyDomainOwnerBatchResponse.h
  include/tencentcloud/domain/v20180808/model/TemplateInfo.h
  include/tencentcloud/domain/v20180808/model/DescribeDomainBaseInfoResponse.h
  include/tencentcloud/domain/v20180808/model/DescribeTemplateListResponse.h
  include/tencentcloud/domain/v20180808/model/TransferProhibitionBatchRequest.h
  include/tencentcloud/domain/v20180808/model/DescribeBatchOperationLogDetailsRequest.h
  include/tencentcloud/domain/v20180808/model/DescribeDomainNameListResponse.h
  include/tencentcloud/domain/v20180808/model/PhoneEmailData.h
  include/tencentcloud/domain/v20180808/model/ContactInfo.h
  include/tencentcloud/domain/v20180808/model/DescribeDomainPriceListResponse.h
  include/tencentcloud/domain/v20180808/model/CreateTemplateResponse.h
  include/tencentcloud/domain/v20180808/model/CertificateInfo.h
  include/tencentcloud/domain/v20180808/model/DeleteTemplateRequest.h
  include/tencentcloud/domain/v20180808/model/CheckBatchStatusRequest.h
  include/tencentcloud/domain/v20180808/model/SetDomainAutoRenewResponse.h
  include/tencentcloud/domain/v20180808/model/CreateTemplateRequest.h
  include/tencentcloud/domain/v20180808/model/BatchStatus.h
  include/tencentcloud/domain/v20180808/model/DomainList.h
  include/tencentcloud/domain/v20180808/model/DescribeDomainPriceListRequest.h
  include/tencentcloud/domain/v20180808/model/CreateDomainBatchRequest.h
  include/tencentcloud/domain/v20180808/model/DescribeDomainSimpleInfoResponse.h
  include/tencentcloud/domain/v20180808/model/DescribeDomainBaseInfoRequest.h
  include/tencentcloud/domain/v20180808/model/DescribePhoneEmailListRequest.h
  include/tencentcloud/domain/v20180808/model/DomainBaseInfo.h
  include/tencentcloud/domain/v20180808/model/DescribeDomainNameListRequest.h
  include/tencentcloud/domain/v20180808/model/DescribeBatchOperationLogsRequest.h
  include/tencentcloud/domain/v20180808/model/UploadImageRequest.h
  include/tencentcloud/domain/v20180808/model/CheckDomainRequest.h
  include/tencentcloud/domain/v20180808/model/DescribeBatchOperationLogsResponse.h
  include/tencentcloud/domain/v20180808/model/TransferProhibitionBatchResponse.h
  include/tencentcloud/domain/v20180808/model/ModifyDomainDNSBatchRequest.h
  include/tencentcloud/domain/v20180808/model/DescribeBatchOperationLogDetailsResponse.h
  include/tencentcloud/domain/v20180808/model/DescribePhoneEmailListResponse.h
  include/tencentcloud/domain/v20180808/model/CheckBatchStatusResponse.h
  include/tencentcloud/domain/v20180808/model/DeletePhoneEmailResponse.h
  include/tencentcloud/domain/v20180808/model/DescribeTemplateListRequest.h
  include/tencentcloud/domain/v20180808/model/CreatePhoneEmailResponse.h
  include/tencentcloud/domain/v20180808/model/SetDomainAutoRenewRequest.h
  include/tencentcloud/domain/v20180808/model/ModifyDomainOwnerBatchRequest.h
  include/tencentcloud/domain/v20180808/model/SendPhoneEmailCodeRequest.h
  include/tencentcloud/domain/v20180808/model/DomainBatchLogSet.h
  )

set(domain_src
  src/v20180808/DomainClient.cpp
  src/v20180808/model/UploadImageResponse.cpp
  src/v20180808/model/RenewDomainBatchResponse.cpp
  src/v20180808/model/BatchModifyDomainInfoRequest.cpp
  src/v20180808/model/DomainSimpleInfo.cpp
  src/v20180808/model/UpdateProhibitionBatchRequest.cpp
  src/v20180808/model/TransferInDomainBatchResponse.cpp
  src/v20180808/model/DeleteTemplateResponse.cpp
  src/v20180808/model/TransferInDomainBatchRequest.cpp
  src/v20180808/model/CreateDomainBatchResponse.cpp
  src/v20180808/model/DomainBatchDetailSet.cpp
  src/v20180808/model/SendPhoneEmailCodeResponse.cpp
  src/v20180808/model/ModifyDomainDNSBatchResponse.cpp
  src/v20180808/model/DeletePhoneEmailRequest.cpp
  src/v20180808/model/DescribeTemplateResponse.cpp
  src/v20180808/model/UpdateProhibitionBatchResponse.cpp
  src/v20180808/model/CheckDomainResponse.cpp
  src/v20180808/model/DescribeDomainSimpleInfoRequest.cpp
  src/v20180808/model/CreatePhoneEmailRequest.cpp
  src/v20180808/model/PriceInfo.cpp
  src/v20180808/model/DescribeTemplateRequest.cpp
  src/v20180808/model/RenewDomainBatchRequest.cpp
  src/v20180808/model/BatchModifyDomainInfoResponse.cpp
  src/v20180808/model/ModifyDomainOwnerBatchResponse.cpp
  src/v20180808/model/TemplateInfo.cpp
  src/v20180808/model/DescribeDomainBaseInfoResponse.cpp
  src/v20180808/model/DescribeTemplateListResponse.cpp
  src/v20180808/model/TransferProhibitionBatchRequest.cpp
  src/v20180808/model/DescribeBatchOperationLogDetailsRequest.cpp
  src/v20180808/model/DescribeDomainNameListResponse.cpp
  src/v20180808/model/PhoneEmailData.cpp
  src/v20180808/model/ContactInfo.cpp
  src/v20180808/model/DescribeDomainPriceListResponse.cpp
  src/v20180808/model/CreateTemplateResponse.cpp
  src/v20180808/model/CertificateInfo.cpp
  src/v20180808/model/DeleteTemplateRequest.cpp
  src/v20180808/model/CheckBatchStatusRequest.cpp
  src/v20180808/model/SetDomainAutoRenewResponse.cpp
  src/v20180808/model/CreateTemplateRequest.cpp
  src/v20180808/model/BatchStatus.cpp
  src/v20180808/model/DomainList.cpp
  src/v20180808/model/DescribeDomainPriceListRequest.cpp
  src/v20180808/model/CreateDomainBatchRequest.cpp
  src/v20180808/model/DescribeDomainSimpleInfoResponse.cpp
  src/v20180808/model/DescribeDomainBaseInfoRequest.cpp
  src/v20180808/model/DescribePhoneEmailListRequest.cpp
  src/v20180808/model/DomainBaseInfo.cpp
  src/v20180808/model/DescribeDomainNameListRequest.cpp
  src/v20180808/model/DescribeBatchOperationLogsRequest.cpp
  src/v20180808/model/UploadImageRequest.cpp
  src/v20180808/model/CheckDomainRequest.cpp
  src/v20180808/model/DescribeBatchOperationLogsResponse.cpp
  src/v20180808/model/TransferProhibitionBatchResponse.cpp
  src/v20180808/model/ModifyDomainDNSBatchRequest.cpp
  src/v20180808/model/DescribeBatchOperationLogDetailsResponse.cpp
  src/v20180808/model/DescribePhoneEmailListResponse.cpp
  src/v20180808/model/CheckBatchStatusResponse.cpp
  src/v20180808/model/DeletePhoneEmailResponse.cpp
  src/v20180808/model/DescribeTemplateListRequest.cpp
  src/v20180808/model/CreatePhoneEmailResponse.cpp
  src/v20180808/model/SetDomainAutoRenewRequest.cpp
  src/v20180808/model/ModifyDomainOwnerBatchRequest.cpp
  src/v20180808/model/SendPhoneEmailCodeRequest.cpp
  src/v20180808/model/DomainBatchLogSet.cpp
  )

set(domain_include
    include/tencentcloud/domain
  )

add_library(domain ${LIB_TYPE}
  ${domain_public_header}
  ${domain_public_header_model}
  ${domain_src})

set_target_properties(domain
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}domain
  )

target_include_directories(domain
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(domain
  core)

#install(FILES ${domain_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/domain/v20180808)
#install(FILES ${domain_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/domain/v20180808/model)
install(DIRECTORY ${domain_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS domain
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
