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
  include/tencentcloud/domain/v20180808/model/AuctionInfo.h
  include/tencentcloud/domain/v20180808/model/DeleteReservedPreDomainInfoResponse.h
  include/tencentcloud/domain/v20180808/model/DescribeUnPreDomainDetailRequest.h
  include/tencentcloud/domain/v20180808/model/DeleteTemplateResponse.h
  include/tencentcloud/domain/v20180808/model/BiddingResult.h
  include/tencentcloud/domain/v20180808/model/PriceInfo.h
  include/tencentcloud/domain/v20180808/model/DescribeCustomDnsHostSetResponse.h
  include/tencentcloud/domain/v20180808/model/ModifyTemplateRequest.h
  include/tencentcloud/domain/v20180808/model/CheckDomainResponse.h
  include/tencentcloud/domain/v20180808/model/DeleteCustomDnsHostResponse.h
  include/tencentcloud/domain/v20180808/model/DescribeBiddingSuccessfulDetailRequest.h
  include/tencentcloud/domain/v20180808/model/RenewDomainBatchRequest.h
  include/tencentcloud/domain/v20180808/model/DescribeTemplateListResponse.h
  include/tencentcloud/domain/v20180808/model/SetDomainAutoRenewResponse.h
  include/tencentcloud/domain/v20180808/model/DescribeBiddingAppointDetailRequest.h
  include/tencentcloud/domain/v20180808/model/DescribeCustomDnsHostSetRequest.h
  include/tencentcloud/domain/v20180808/model/CreateCustomDnsHostResponse.h
  include/tencentcloud/domain/v20180808/model/DescribeBiddingAppointListRequest.h
  include/tencentcloud/domain/v20180808/model/DescribeDomainPriceListResponse.h
  include/tencentcloud/domain/v20180808/model/DescribeBiddingListResponse.h
  include/tencentcloud/domain/v20180808/model/CheckBatchStatusRequest.h
  include/tencentcloud/domain/v20180808/model/ReserveBidInfo.h
  include/tencentcloud/domain/v20180808/model/CreateDomainBatchRequest.h
  include/tencentcloud/domain/v20180808/model/SucDomainInfo.h
  include/tencentcloud/domain/v20180808/model/ModifyTemplateResponse.h
  include/tencentcloud/domain/v20180808/model/BiddingSuccessfulResult.h
  include/tencentcloud/domain/v20180808/model/DescribeBatchOperationLogsRequest.h
  include/tencentcloud/domain/v20180808/model/UploadImageRequest.h
  include/tencentcloud/domain/v20180808/model/ModifyCustomDnsHostResponse.h
  include/tencentcloud/domain/v20180808/model/BidPreDomainsResponse.h
  include/tencentcloud/domain/v20180808/model/DescribeAuctionListRequest.h
  include/tencentcloud/domain/v20180808/model/DescribeBatchOperationLogDetailsResponse.h
  include/tencentcloud/domain/v20180808/model/ModifyDomainDNSBatchRequest.h
  include/tencentcloud/domain/v20180808/model/DescribeReservedBidInfoRequest.h
  include/tencentcloud/domain/v20180808/model/DeletePhoneEmailResponse.h
  include/tencentcloud/domain/v20180808/model/ReservedPreDomainsResponse.h
  include/tencentcloud/domain/v20180808/model/DescribeUnPreDomainDetailResponse.h
  include/tencentcloud/domain/v20180808/model/DomainBatchDetailSet.h
  include/tencentcloud/domain/v20180808/model/UploadImageResponse.h
  include/tencentcloud/domain/v20180808/model/SendPhoneEmailCodeResponse.h
  include/tencentcloud/domain/v20180808/model/BidDetailPageRequest.h
  include/tencentcloud/domain/v20180808/model/BiddingPreReleaseResponse.h
  include/tencentcloud/domain/v20180808/model/DomainSimpleInfo.h
  include/tencentcloud/domain/v20180808/model/CreateDomainRedemptionResponse.h
  include/tencentcloud/domain/v20180808/model/DeletePhoneEmailRequest.h
  include/tencentcloud/domain/v20180808/model/DescribeReservedPreDomainInfoResponse.h
  include/tencentcloud/domain/v20180808/model/BatchStatus.h
  include/tencentcloud/domain/v20180808/model/DescribePreAuctionListResponse.h
  include/tencentcloud/domain/v20180808/model/RenewDomainBatchResponse.h
  include/tencentcloud/domain/v20180808/model/ReservedDomainInfo.h
  include/tencentcloud/domain/v20180808/model/TransferInDomainBatchResponse.h
  include/tencentcloud/domain/v20180808/model/BatchModifyDomainInfoResponse.h
  include/tencentcloud/domain/v20180808/model/DescribeDomainBaseInfoResponse.h
  include/tencentcloud/domain/v20180808/model/PhoneEmailData.h
  include/tencentcloud/domain/v20180808/model/CreateTemplateResponse.h
  include/tencentcloud/domain/v20180808/model/UpdateProhibitionBatchRequest.h
  include/tencentcloud/domain/v20180808/model/PreReleaseInfo.h
  include/tencentcloud/domain/v20180808/model/BiddingPreReleaseRequest.h
  include/tencentcloud/domain/v20180808/model/DescribePreDomainListResponse.h
  include/tencentcloud/domain/v20180808/model/ModifyIntlCustomDnsHostResponse.h
  include/tencentcloud/domain/v20180808/model/DescribeDomainBaseInfoRequest.h
  include/tencentcloud/domain/v20180808/model/DescribePayWaitDetailResponse.h
  include/tencentcloud/domain/v20180808/model/DescribeDomainNameListRequest.h
  include/tencentcloud/domain/v20180808/model/DescribeBatchOperationLogsResponse.h
  include/tencentcloud/domain/v20180808/model/DescribePreAuctionListRequest.h
  include/tencentcloud/domain/v20180808/model/SendPhoneEmailCodeRequest.h
  include/tencentcloud/domain/v20180808/model/DeleteBiddingRequest.h
  include/tencentcloud/domain/v20180808/model/DescribePhoneEmailListResponse.h
  include/tencentcloud/domain/v20180808/model/DescribePreDomainListRequest.h
  include/tencentcloud/domain/v20180808/model/PreAuctionInfo.h
  include/tencentcloud/domain/v20180808/model/CreatePhoneEmailResponse.h
  include/tencentcloud/domain/v20180808/model/FailReservedDomainInfo.h
  include/tencentcloud/domain/v20180808/model/ReservedPreDomainsRequest.h
  include/tencentcloud/domain/v20180808/model/BatchModifyDomainInfoRequest.h
  include/tencentcloud/domain/v20180808/model/DescribeBiddingDetailResponse.h
  include/tencentcloud/domain/v20180808/model/CreateDomainBatchResponse.h
  include/tencentcloud/domain/v20180808/model/DeleteReservedPreDomainInfoRequest.h
  include/tencentcloud/domain/v20180808/model/ReservedPreDomainInfo.h
  include/tencentcloud/domain/v20180808/model/DeleteBiddingResponse.h
  include/tencentcloud/domain/v20180808/model/DescribeTemplateResponse.h
  include/tencentcloud/domain/v20180808/model/DescribePayWaitDetailRequest.h
  include/tencentcloud/domain/v20180808/model/DescribeDomainSimpleInfoRequest.h
  include/tencentcloud/domain/v20180808/model/TransferProhibitionBatchRequest.h
  include/tencentcloud/domain/v20180808/model/DescribeDomainSimpleInfoResponse.h
  include/tencentcloud/domain/v20180808/model/DescribeBiddingSuccessfulListResponse.h
  include/tencentcloud/domain/v20180808/model/TemplateInfo.h
  include/tencentcloud/domain/v20180808/model/CertificateInfo.h
  include/tencentcloud/domain/v20180808/model/TransferInDomainBatchRequest.h
  include/tencentcloud/domain/v20180808/model/CreateTemplateRequest.h
  include/tencentcloud/domain/v20180808/model/DescribeReservedPreDomainInfoRequest.h
  include/tencentcloud/domain/v20180808/model/DescribeDomainPriceListRequest.h
  include/tencentcloud/domain/v20180808/model/ModifyIntlCustomDnsHostRequest.h
  include/tencentcloud/domain/v20180808/model/DescribePreReleaseListResponse.h
  include/tencentcloud/domain/v20180808/model/CheckDomainRequest.h
  include/tencentcloud/domain/v20180808/model/TransferProhibitionBatchResponse.h
  include/tencentcloud/domain/v20180808/model/DescribeBiddingListRequest.h
  include/tencentcloud/domain/v20180808/model/ModifyCustomDnsHostRequest.h
  include/tencentcloud/domain/v20180808/model/DescribeBiddingSuccessfulListRequest.h
  include/tencentcloud/domain/v20180808/model/DescribeTemplateListRequest.h
  include/tencentcloud/domain/v20180808/model/ModifyDomainOwnerBatchResponse.h
  include/tencentcloud/domain/v20180808/model/ModifyDomainOwnerBatchRequest.h
  include/tencentcloud/domain/v20180808/model/BidPreDomainsRequest.h
  include/tencentcloud/domain/v20180808/model/DescribeAuctionListResponse.h
  include/tencentcloud/domain/v20180808/model/ModifyDomainDNSBatchResponse.h
  include/tencentcloud/domain/v20180808/model/UpdateProhibitionBatchResponse.h
  include/tencentcloud/domain/v20180808/model/CreatePhoneEmailRequest.h
  include/tencentcloud/domain/v20180808/model/DescribeBiddingDetailRequest.h
  include/tencentcloud/domain/v20180808/model/DescribeTemplateRequest.h
  include/tencentcloud/domain/v20180808/model/DescribeBiddingAppointDetailResponse.h
  include/tencentcloud/domain/v20180808/model/DescribeReservedBidInfoResponse.h
  include/tencentcloud/domain/v20180808/model/DescribeBiddingSuccessfulDetailResponse.h
  include/tencentcloud/domain/v20180808/model/DescribeTldListRequest.h
  include/tencentcloud/domain/v20180808/model/DescribeBatchOperationLogDetailsRequest.h
  include/tencentcloud/domain/v20180808/model/DescribeDomainNameListResponse.h
  include/tencentcloud/domain/v20180808/model/SyncCustomDnsHostRequest.h
  include/tencentcloud/domain/v20180808/model/ContactInfo.h
  include/tencentcloud/domain/v20180808/model/DeleteTemplateRequest.h
  include/tencentcloud/domain/v20180808/model/BidDetailPageResponse.h
  include/tencentcloud/domain/v20180808/model/CustomDnsHost.h
  include/tencentcloud/domain/v20180808/model/DomainList.h
  include/tencentcloud/domain/v20180808/model/PriceScopeConf.h
  include/tencentcloud/domain/v20180808/model/DescribePhoneEmailListRequest.h
  include/tencentcloud/domain/v20180808/model/DescribeBiddingAppointListResponse.h
  include/tencentcloud/domain/v20180808/model/DomainBaseInfo.h
  include/tencentcloud/domain/v20180808/model/DescribeTldListResponse.h
  include/tencentcloud/domain/v20180808/model/DomainBatchLogSet.h
  include/tencentcloud/domain/v20180808/model/CreateCustomDnsHostRequest.h
  include/tencentcloud/domain/v20180808/model/DeleteCustomDnsHostRequest.h
  include/tencentcloud/domain/v20180808/model/CheckBatchStatusResponse.h
  include/tencentcloud/domain/v20180808/model/CreateDomainRedemptionRequest.h
  include/tencentcloud/domain/v20180808/model/SetDomainAutoRenewRequest.h
  include/tencentcloud/domain/v20180808/model/SyncCustomDnsHostResponse.h
  include/tencentcloud/domain/v20180808/model/DescribePreReleaseListRequest.h
  include/tencentcloud/domain/v20180808/model/BiddingAppointResult.h
  )

set(domain_src
  src/v20180808/DomainClient.cpp
  src/v20180808/model/AuctionInfo.cpp
  src/v20180808/model/DeleteReservedPreDomainInfoResponse.cpp
  src/v20180808/model/DescribeUnPreDomainDetailRequest.cpp
  src/v20180808/model/DeleteTemplateResponse.cpp
  src/v20180808/model/BiddingResult.cpp
  src/v20180808/model/PriceInfo.cpp
  src/v20180808/model/DescribeCustomDnsHostSetResponse.cpp
  src/v20180808/model/ModifyTemplateRequest.cpp
  src/v20180808/model/CheckDomainResponse.cpp
  src/v20180808/model/DeleteCustomDnsHostResponse.cpp
  src/v20180808/model/DescribeBiddingSuccessfulDetailRequest.cpp
  src/v20180808/model/RenewDomainBatchRequest.cpp
  src/v20180808/model/DescribeTemplateListResponse.cpp
  src/v20180808/model/SetDomainAutoRenewResponse.cpp
  src/v20180808/model/DescribeBiddingAppointDetailRequest.cpp
  src/v20180808/model/DescribeCustomDnsHostSetRequest.cpp
  src/v20180808/model/CreateCustomDnsHostResponse.cpp
  src/v20180808/model/DescribeBiddingAppointListRequest.cpp
  src/v20180808/model/DescribeDomainPriceListResponse.cpp
  src/v20180808/model/DescribeBiddingListResponse.cpp
  src/v20180808/model/CheckBatchStatusRequest.cpp
  src/v20180808/model/ReserveBidInfo.cpp
  src/v20180808/model/CreateDomainBatchRequest.cpp
  src/v20180808/model/SucDomainInfo.cpp
  src/v20180808/model/ModifyTemplateResponse.cpp
  src/v20180808/model/BiddingSuccessfulResult.cpp
  src/v20180808/model/DescribeBatchOperationLogsRequest.cpp
  src/v20180808/model/UploadImageRequest.cpp
  src/v20180808/model/ModifyCustomDnsHostResponse.cpp
  src/v20180808/model/BidPreDomainsResponse.cpp
  src/v20180808/model/DescribeAuctionListRequest.cpp
  src/v20180808/model/DescribeBatchOperationLogDetailsResponse.cpp
  src/v20180808/model/ModifyDomainDNSBatchRequest.cpp
  src/v20180808/model/DescribeReservedBidInfoRequest.cpp
  src/v20180808/model/DeletePhoneEmailResponse.cpp
  src/v20180808/model/ReservedPreDomainsResponse.cpp
  src/v20180808/model/DescribeUnPreDomainDetailResponse.cpp
  src/v20180808/model/DomainBatchDetailSet.cpp
  src/v20180808/model/UploadImageResponse.cpp
  src/v20180808/model/SendPhoneEmailCodeResponse.cpp
  src/v20180808/model/BidDetailPageRequest.cpp
  src/v20180808/model/BiddingPreReleaseResponse.cpp
  src/v20180808/model/DomainSimpleInfo.cpp
  src/v20180808/model/CreateDomainRedemptionResponse.cpp
  src/v20180808/model/DeletePhoneEmailRequest.cpp
  src/v20180808/model/DescribeReservedPreDomainInfoResponse.cpp
  src/v20180808/model/BatchStatus.cpp
  src/v20180808/model/DescribePreAuctionListResponse.cpp
  src/v20180808/model/RenewDomainBatchResponse.cpp
  src/v20180808/model/ReservedDomainInfo.cpp
  src/v20180808/model/TransferInDomainBatchResponse.cpp
  src/v20180808/model/BatchModifyDomainInfoResponse.cpp
  src/v20180808/model/DescribeDomainBaseInfoResponse.cpp
  src/v20180808/model/PhoneEmailData.cpp
  src/v20180808/model/CreateTemplateResponse.cpp
  src/v20180808/model/UpdateProhibitionBatchRequest.cpp
  src/v20180808/model/PreReleaseInfo.cpp
  src/v20180808/model/BiddingPreReleaseRequest.cpp
  src/v20180808/model/DescribePreDomainListResponse.cpp
  src/v20180808/model/ModifyIntlCustomDnsHostResponse.cpp
  src/v20180808/model/DescribeDomainBaseInfoRequest.cpp
  src/v20180808/model/DescribePayWaitDetailResponse.cpp
  src/v20180808/model/DescribeDomainNameListRequest.cpp
  src/v20180808/model/DescribeBatchOperationLogsResponse.cpp
  src/v20180808/model/DescribePreAuctionListRequest.cpp
  src/v20180808/model/SendPhoneEmailCodeRequest.cpp
  src/v20180808/model/DeleteBiddingRequest.cpp
  src/v20180808/model/DescribePhoneEmailListResponse.cpp
  src/v20180808/model/DescribePreDomainListRequest.cpp
  src/v20180808/model/PreAuctionInfo.cpp
  src/v20180808/model/CreatePhoneEmailResponse.cpp
  src/v20180808/model/FailReservedDomainInfo.cpp
  src/v20180808/model/ReservedPreDomainsRequest.cpp
  src/v20180808/model/BatchModifyDomainInfoRequest.cpp
  src/v20180808/model/DescribeBiddingDetailResponse.cpp
  src/v20180808/model/CreateDomainBatchResponse.cpp
  src/v20180808/model/DeleteReservedPreDomainInfoRequest.cpp
  src/v20180808/model/ReservedPreDomainInfo.cpp
  src/v20180808/model/DeleteBiddingResponse.cpp
  src/v20180808/model/DescribeTemplateResponse.cpp
  src/v20180808/model/DescribePayWaitDetailRequest.cpp
  src/v20180808/model/DescribeDomainSimpleInfoRequest.cpp
  src/v20180808/model/TransferProhibitionBatchRequest.cpp
  src/v20180808/model/DescribeDomainSimpleInfoResponse.cpp
  src/v20180808/model/DescribeBiddingSuccessfulListResponse.cpp
  src/v20180808/model/TemplateInfo.cpp
  src/v20180808/model/CertificateInfo.cpp
  src/v20180808/model/TransferInDomainBatchRequest.cpp
  src/v20180808/model/CreateTemplateRequest.cpp
  src/v20180808/model/DescribeReservedPreDomainInfoRequest.cpp
  src/v20180808/model/DescribeDomainPriceListRequest.cpp
  src/v20180808/model/ModifyIntlCustomDnsHostRequest.cpp
  src/v20180808/model/DescribePreReleaseListResponse.cpp
  src/v20180808/model/CheckDomainRequest.cpp
  src/v20180808/model/TransferProhibitionBatchResponse.cpp
  src/v20180808/model/DescribeBiddingListRequest.cpp
  src/v20180808/model/ModifyCustomDnsHostRequest.cpp
  src/v20180808/model/DescribeBiddingSuccessfulListRequest.cpp
  src/v20180808/model/DescribeTemplateListRequest.cpp
  src/v20180808/model/ModifyDomainOwnerBatchResponse.cpp
  src/v20180808/model/ModifyDomainOwnerBatchRequest.cpp
  src/v20180808/model/BidPreDomainsRequest.cpp
  src/v20180808/model/DescribeAuctionListResponse.cpp
  src/v20180808/model/ModifyDomainDNSBatchResponse.cpp
  src/v20180808/model/UpdateProhibitionBatchResponse.cpp
  src/v20180808/model/CreatePhoneEmailRequest.cpp
  src/v20180808/model/DescribeBiddingDetailRequest.cpp
  src/v20180808/model/DescribeTemplateRequest.cpp
  src/v20180808/model/DescribeBiddingAppointDetailResponse.cpp
  src/v20180808/model/DescribeReservedBidInfoResponse.cpp
  src/v20180808/model/DescribeBiddingSuccessfulDetailResponse.cpp
  src/v20180808/model/DescribeTldListRequest.cpp
  src/v20180808/model/DescribeBatchOperationLogDetailsRequest.cpp
  src/v20180808/model/DescribeDomainNameListResponse.cpp
  src/v20180808/model/SyncCustomDnsHostRequest.cpp
  src/v20180808/model/ContactInfo.cpp
  src/v20180808/model/DeleteTemplateRequest.cpp
  src/v20180808/model/BidDetailPageResponse.cpp
  src/v20180808/model/CustomDnsHost.cpp
  src/v20180808/model/DomainList.cpp
  src/v20180808/model/PriceScopeConf.cpp
  src/v20180808/model/DescribePhoneEmailListRequest.cpp
  src/v20180808/model/DescribeBiddingAppointListResponse.cpp
  src/v20180808/model/DomainBaseInfo.cpp
  src/v20180808/model/DescribeTldListResponse.cpp
  src/v20180808/model/DomainBatchLogSet.cpp
  src/v20180808/model/CreateCustomDnsHostRequest.cpp
  src/v20180808/model/DeleteCustomDnsHostRequest.cpp
  src/v20180808/model/CheckBatchStatusResponse.cpp
  src/v20180808/model/CreateDomainRedemptionRequest.cpp
  src/v20180808/model/SetDomainAutoRenewRequest.cpp
  src/v20180808/model/SyncCustomDnsHostResponse.cpp
  src/v20180808/model/DescribePreReleaseListRequest.cpp
  src/v20180808/model/BiddingAppointResult.cpp
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
