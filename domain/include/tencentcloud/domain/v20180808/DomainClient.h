/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_DOMAIN_V20180808_DOMAINCLIENT_H_
#define TENCENTCLOUD_DOMAIN_V20180808_DOMAINCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/domain/v20180808/model/BatchModifyDomainInfoRequest.h>
#include <tencentcloud/domain/v20180808/model/BatchModifyDomainInfoResponse.h>
#include <tencentcloud/domain/v20180808/model/BidDetailPageRequest.h>
#include <tencentcloud/domain/v20180808/model/BidDetailPageResponse.h>
#include <tencentcloud/domain/v20180808/model/BidPreDomainsRequest.h>
#include <tencentcloud/domain/v20180808/model/BidPreDomainsResponse.h>
#include <tencentcloud/domain/v20180808/model/BiddingPreReleaseRequest.h>
#include <tencentcloud/domain/v20180808/model/BiddingPreReleaseResponse.h>
#include <tencentcloud/domain/v20180808/model/CheckBatchStatusRequest.h>
#include <tencentcloud/domain/v20180808/model/CheckBatchStatusResponse.h>
#include <tencentcloud/domain/v20180808/model/CheckDomainRequest.h>
#include <tencentcloud/domain/v20180808/model/CheckDomainResponse.h>
#include <tencentcloud/domain/v20180808/model/CreateCustomDnsHostRequest.h>
#include <tencentcloud/domain/v20180808/model/CreateCustomDnsHostResponse.h>
#include <tencentcloud/domain/v20180808/model/CreateDomainBatchRequest.h>
#include <tencentcloud/domain/v20180808/model/CreateDomainBatchResponse.h>
#include <tencentcloud/domain/v20180808/model/CreateDomainRedemptionRequest.h>
#include <tencentcloud/domain/v20180808/model/CreateDomainRedemptionResponse.h>
#include <tencentcloud/domain/v20180808/model/CreatePhoneEmailRequest.h>
#include <tencentcloud/domain/v20180808/model/CreatePhoneEmailResponse.h>
#include <tencentcloud/domain/v20180808/model/CreateTemplateRequest.h>
#include <tencentcloud/domain/v20180808/model/CreateTemplateResponse.h>
#include <tencentcloud/domain/v20180808/model/DeleteBiddingRequest.h>
#include <tencentcloud/domain/v20180808/model/DeleteBiddingResponse.h>
#include <tencentcloud/domain/v20180808/model/DeleteCustomDnsHostRequest.h>
#include <tencentcloud/domain/v20180808/model/DeleteCustomDnsHostResponse.h>
#include <tencentcloud/domain/v20180808/model/DeletePhoneEmailRequest.h>
#include <tencentcloud/domain/v20180808/model/DeletePhoneEmailResponse.h>
#include <tencentcloud/domain/v20180808/model/DeleteReservedPreDomainInfoRequest.h>
#include <tencentcloud/domain/v20180808/model/DeleteReservedPreDomainInfoResponse.h>
#include <tencentcloud/domain/v20180808/model/DeleteTemplateRequest.h>
#include <tencentcloud/domain/v20180808/model/DeleteTemplateResponse.h>
#include <tencentcloud/domain/v20180808/model/DescribeAuctionListRequest.h>
#include <tencentcloud/domain/v20180808/model/DescribeAuctionListResponse.h>
#include <tencentcloud/domain/v20180808/model/DescribeBatchOperationLogDetailsRequest.h>
#include <tencentcloud/domain/v20180808/model/DescribeBatchOperationLogDetailsResponse.h>
#include <tencentcloud/domain/v20180808/model/DescribeBatchOperationLogsRequest.h>
#include <tencentcloud/domain/v20180808/model/DescribeBatchOperationLogsResponse.h>
#include <tencentcloud/domain/v20180808/model/DescribeBiddingAppointDetailRequest.h>
#include <tencentcloud/domain/v20180808/model/DescribeBiddingAppointDetailResponse.h>
#include <tencentcloud/domain/v20180808/model/DescribeBiddingAppointListRequest.h>
#include <tencentcloud/domain/v20180808/model/DescribeBiddingAppointListResponse.h>
#include <tencentcloud/domain/v20180808/model/DescribeBiddingDetailRequest.h>
#include <tencentcloud/domain/v20180808/model/DescribeBiddingDetailResponse.h>
#include <tencentcloud/domain/v20180808/model/DescribeBiddingListRequest.h>
#include <tencentcloud/domain/v20180808/model/DescribeBiddingListResponse.h>
#include <tencentcloud/domain/v20180808/model/DescribeBiddingSuccessfulDetailRequest.h>
#include <tencentcloud/domain/v20180808/model/DescribeBiddingSuccessfulDetailResponse.h>
#include <tencentcloud/domain/v20180808/model/DescribeBiddingSuccessfulListRequest.h>
#include <tencentcloud/domain/v20180808/model/DescribeBiddingSuccessfulListResponse.h>
#include <tencentcloud/domain/v20180808/model/DescribeCustomDnsHostSetRequest.h>
#include <tencentcloud/domain/v20180808/model/DescribeCustomDnsHostSetResponse.h>
#include <tencentcloud/domain/v20180808/model/DescribeDomainBaseInfoRequest.h>
#include <tencentcloud/domain/v20180808/model/DescribeDomainBaseInfoResponse.h>
#include <tencentcloud/domain/v20180808/model/DescribeDomainNameListRequest.h>
#include <tencentcloud/domain/v20180808/model/DescribeDomainNameListResponse.h>
#include <tencentcloud/domain/v20180808/model/DescribeDomainPriceListRequest.h>
#include <tencentcloud/domain/v20180808/model/DescribeDomainPriceListResponse.h>
#include <tencentcloud/domain/v20180808/model/DescribeDomainSimpleInfoRequest.h>
#include <tencentcloud/domain/v20180808/model/DescribeDomainSimpleInfoResponse.h>
#include <tencentcloud/domain/v20180808/model/DescribePayWaitDetailRequest.h>
#include <tencentcloud/domain/v20180808/model/DescribePayWaitDetailResponse.h>
#include <tencentcloud/domain/v20180808/model/DescribePhoneEmailListRequest.h>
#include <tencentcloud/domain/v20180808/model/DescribePhoneEmailListResponse.h>
#include <tencentcloud/domain/v20180808/model/DescribePreAuctionListRequest.h>
#include <tencentcloud/domain/v20180808/model/DescribePreAuctionListResponse.h>
#include <tencentcloud/domain/v20180808/model/DescribePreDomainListRequest.h>
#include <tencentcloud/domain/v20180808/model/DescribePreDomainListResponse.h>
#include <tencentcloud/domain/v20180808/model/DescribePreReleaseListRequest.h>
#include <tencentcloud/domain/v20180808/model/DescribePreReleaseListResponse.h>
#include <tencentcloud/domain/v20180808/model/DescribeReservedBidInfoRequest.h>
#include <tencentcloud/domain/v20180808/model/DescribeReservedBidInfoResponse.h>
#include <tencentcloud/domain/v20180808/model/DescribeReservedPreDomainInfoRequest.h>
#include <tencentcloud/domain/v20180808/model/DescribeReservedPreDomainInfoResponse.h>
#include <tencentcloud/domain/v20180808/model/DescribeTemplateRequest.h>
#include <tencentcloud/domain/v20180808/model/DescribeTemplateResponse.h>
#include <tencentcloud/domain/v20180808/model/DescribeTemplateListRequest.h>
#include <tencentcloud/domain/v20180808/model/DescribeTemplateListResponse.h>
#include <tencentcloud/domain/v20180808/model/DescribeTldListRequest.h>
#include <tencentcloud/domain/v20180808/model/DescribeTldListResponse.h>
#include <tencentcloud/domain/v20180808/model/DescribeUnPreDomainDetailRequest.h>
#include <tencentcloud/domain/v20180808/model/DescribeUnPreDomainDetailResponse.h>
#include <tencentcloud/domain/v20180808/model/ModifyCustomDnsHostRequest.h>
#include <tencentcloud/domain/v20180808/model/ModifyCustomDnsHostResponse.h>
#include <tencentcloud/domain/v20180808/model/ModifyDomainDNSBatchRequest.h>
#include <tencentcloud/domain/v20180808/model/ModifyDomainDNSBatchResponse.h>
#include <tencentcloud/domain/v20180808/model/ModifyDomainOwnerBatchRequest.h>
#include <tencentcloud/domain/v20180808/model/ModifyDomainOwnerBatchResponse.h>
#include <tencentcloud/domain/v20180808/model/ModifyIntlCustomDnsHostRequest.h>
#include <tencentcloud/domain/v20180808/model/ModifyIntlCustomDnsHostResponse.h>
#include <tencentcloud/domain/v20180808/model/ModifyTemplateRequest.h>
#include <tencentcloud/domain/v20180808/model/ModifyTemplateResponse.h>
#include <tencentcloud/domain/v20180808/model/RenewDomainBatchRequest.h>
#include <tencentcloud/domain/v20180808/model/RenewDomainBatchResponse.h>
#include <tencentcloud/domain/v20180808/model/ReservedPreDomainsRequest.h>
#include <tencentcloud/domain/v20180808/model/ReservedPreDomainsResponse.h>
#include <tencentcloud/domain/v20180808/model/SendPhoneEmailCodeRequest.h>
#include <tencentcloud/domain/v20180808/model/SendPhoneEmailCodeResponse.h>
#include <tencentcloud/domain/v20180808/model/SetDomainAutoRenewRequest.h>
#include <tencentcloud/domain/v20180808/model/SetDomainAutoRenewResponse.h>
#include <tencentcloud/domain/v20180808/model/SyncCustomDnsHostRequest.h>
#include <tencentcloud/domain/v20180808/model/SyncCustomDnsHostResponse.h>
#include <tencentcloud/domain/v20180808/model/TransferInDomainBatchRequest.h>
#include <tencentcloud/domain/v20180808/model/TransferInDomainBatchResponse.h>
#include <tencentcloud/domain/v20180808/model/TransferProhibitionBatchRequest.h>
#include <tencentcloud/domain/v20180808/model/TransferProhibitionBatchResponse.h>
#include <tencentcloud/domain/v20180808/model/UpdateProhibitionBatchRequest.h>
#include <tencentcloud/domain/v20180808/model/UpdateProhibitionBatchResponse.h>
#include <tencentcloud/domain/v20180808/model/UploadImageRequest.h>
#include <tencentcloud/domain/v20180808/model/UploadImageResponse.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            class DomainClient : public AbstractClient
            {
            public:
                DomainClient(const Credential &credential, const std::string &region);
                DomainClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::BatchModifyDomainInfoResponse> BatchModifyDomainInfoOutcome;
                typedef std::future<BatchModifyDomainInfoOutcome> BatchModifyDomainInfoOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::BatchModifyDomainInfoRequest&, BatchModifyDomainInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchModifyDomainInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::BidDetailPageResponse> BidDetailPageOutcome;
                typedef std::future<BidDetailPageOutcome> BidDetailPageOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::BidDetailPageRequest&, BidDetailPageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BidDetailPageAsyncHandler;
                typedef Outcome<Core::Error, Model::BidPreDomainsResponse> BidPreDomainsOutcome;
                typedef std::future<BidPreDomainsOutcome> BidPreDomainsOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::BidPreDomainsRequest&, BidPreDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BidPreDomainsAsyncHandler;
                typedef Outcome<Core::Error, Model::BiddingPreReleaseResponse> BiddingPreReleaseOutcome;
                typedef std::future<BiddingPreReleaseOutcome> BiddingPreReleaseOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::BiddingPreReleaseRequest&, BiddingPreReleaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BiddingPreReleaseAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckBatchStatusResponse> CheckBatchStatusOutcome;
                typedef std::future<CheckBatchStatusOutcome> CheckBatchStatusOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::CheckBatchStatusRequest&, CheckBatchStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckBatchStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckDomainResponse> CheckDomainOutcome;
                typedef std::future<CheckDomainOutcome> CheckDomainOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::CheckDomainRequest&, CheckDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCustomDnsHostResponse> CreateCustomDnsHostOutcome;
                typedef std::future<CreateCustomDnsHostOutcome> CreateCustomDnsHostOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::CreateCustomDnsHostRequest&, CreateCustomDnsHostOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCustomDnsHostAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDomainBatchResponse> CreateDomainBatchOutcome;
                typedef std::future<CreateDomainBatchOutcome> CreateDomainBatchOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::CreateDomainBatchRequest&, CreateDomainBatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDomainBatchAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDomainRedemptionResponse> CreateDomainRedemptionOutcome;
                typedef std::future<CreateDomainRedemptionOutcome> CreateDomainRedemptionOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::CreateDomainRedemptionRequest&, CreateDomainRedemptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDomainRedemptionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePhoneEmailResponse> CreatePhoneEmailOutcome;
                typedef std::future<CreatePhoneEmailOutcome> CreatePhoneEmailOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::CreatePhoneEmailRequest&, CreatePhoneEmailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePhoneEmailAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTemplateResponse> CreateTemplateOutcome;
                typedef std::future<CreateTemplateOutcome> CreateTemplateOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::CreateTemplateRequest&, CreateTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBiddingResponse> DeleteBiddingOutcome;
                typedef std::future<DeleteBiddingOutcome> DeleteBiddingOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DeleteBiddingRequest&, DeleteBiddingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBiddingAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCustomDnsHostResponse> DeleteCustomDnsHostOutcome;
                typedef std::future<DeleteCustomDnsHostOutcome> DeleteCustomDnsHostOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DeleteCustomDnsHostRequest&, DeleteCustomDnsHostOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCustomDnsHostAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePhoneEmailResponse> DeletePhoneEmailOutcome;
                typedef std::future<DeletePhoneEmailOutcome> DeletePhoneEmailOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DeletePhoneEmailRequest&, DeletePhoneEmailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePhoneEmailAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteReservedPreDomainInfoResponse> DeleteReservedPreDomainInfoOutcome;
                typedef std::future<DeleteReservedPreDomainInfoOutcome> DeleteReservedPreDomainInfoOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DeleteReservedPreDomainInfoRequest&, DeleteReservedPreDomainInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteReservedPreDomainInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTemplateResponse> DeleteTemplateOutcome;
                typedef std::future<DeleteTemplateOutcome> DeleteTemplateOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DeleteTemplateRequest&, DeleteTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAuctionListResponse> DescribeAuctionListOutcome;
                typedef std::future<DescribeAuctionListOutcome> DescribeAuctionListOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DescribeAuctionListRequest&, DescribeAuctionListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuctionListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBatchOperationLogDetailsResponse> DescribeBatchOperationLogDetailsOutcome;
                typedef std::future<DescribeBatchOperationLogDetailsOutcome> DescribeBatchOperationLogDetailsOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DescribeBatchOperationLogDetailsRequest&, DescribeBatchOperationLogDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBatchOperationLogDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBatchOperationLogsResponse> DescribeBatchOperationLogsOutcome;
                typedef std::future<DescribeBatchOperationLogsOutcome> DescribeBatchOperationLogsOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DescribeBatchOperationLogsRequest&, DescribeBatchOperationLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBatchOperationLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBiddingAppointDetailResponse> DescribeBiddingAppointDetailOutcome;
                typedef std::future<DescribeBiddingAppointDetailOutcome> DescribeBiddingAppointDetailOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DescribeBiddingAppointDetailRequest&, DescribeBiddingAppointDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBiddingAppointDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBiddingAppointListResponse> DescribeBiddingAppointListOutcome;
                typedef std::future<DescribeBiddingAppointListOutcome> DescribeBiddingAppointListOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DescribeBiddingAppointListRequest&, DescribeBiddingAppointListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBiddingAppointListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBiddingDetailResponse> DescribeBiddingDetailOutcome;
                typedef std::future<DescribeBiddingDetailOutcome> DescribeBiddingDetailOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DescribeBiddingDetailRequest&, DescribeBiddingDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBiddingDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBiddingListResponse> DescribeBiddingListOutcome;
                typedef std::future<DescribeBiddingListOutcome> DescribeBiddingListOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DescribeBiddingListRequest&, DescribeBiddingListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBiddingListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBiddingSuccessfulDetailResponse> DescribeBiddingSuccessfulDetailOutcome;
                typedef std::future<DescribeBiddingSuccessfulDetailOutcome> DescribeBiddingSuccessfulDetailOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DescribeBiddingSuccessfulDetailRequest&, DescribeBiddingSuccessfulDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBiddingSuccessfulDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBiddingSuccessfulListResponse> DescribeBiddingSuccessfulListOutcome;
                typedef std::future<DescribeBiddingSuccessfulListOutcome> DescribeBiddingSuccessfulListOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DescribeBiddingSuccessfulListRequest&, DescribeBiddingSuccessfulListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBiddingSuccessfulListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCustomDnsHostSetResponse> DescribeCustomDnsHostSetOutcome;
                typedef std::future<DescribeCustomDnsHostSetOutcome> DescribeCustomDnsHostSetOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DescribeCustomDnsHostSetRequest&, DescribeCustomDnsHostSetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomDnsHostSetAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainBaseInfoResponse> DescribeDomainBaseInfoOutcome;
                typedef std::future<DescribeDomainBaseInfoOutcome> DescribeDomainBaseInfoOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DescribeDomainBaseInfoRequest&, DescribeDomainBaseInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainBaseInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainNameListResponse> DescribeDomainNameListOutcome;
                typedef std::future<DescribeDomainNameListOutcome> DescribeDomainNameListOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DescribeDomainNameListRequest&, DescribeDomainNameListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainNameListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainPriceListResponse> DescribeDomainPriceListOutcome;
                typedef std::future<DescribeDomainPriceListOutcome> DescribeDomainPriceListOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DescribeDomainPriceListRequest&, DescribeDomainPriceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainPriceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainSimpleInfoResponse> DescribeDomainSimpleInfoOutcome;
                typedef std::future<DescribeDomainSimpleInfoOutcome> DescribeDomainSimpleInfoOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DescribeDomainSimpleInfoRequest&, DescribeDomainSimpleInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainSimpleInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePayWaitDetailResponse> DescribePayWaitDetailOutcome;
                typedef std::future<DescribePayWaitDetailOutcome> DescribePayWaitDetailOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DescribePayWaitDetailRequest&, DescribePayWaitDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePayWaitDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePhoneEmailListResponse> DescribePhoneEmailListOutcome;
                typedef std::future<DescribePhoneEmailListOutcome> DescribePhoneEmailListOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DescribePhoneEmailListRequest&, DescribePhoneEmailListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePhoneEmailListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePreAuctionListResponse> DescribePreAuctionListOutcome;
                typedef std::future<DescribePreAuctionListOutcome> DescribePreAuctionListOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DescribePreAuctionListRequest&, DescribePreAuctionListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePreAuctionListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePreDomainListResponse> DescribePreDomainListOutcome;
                typedef std::future<DescribePreDomainListOutcome> DescribePreDomainListOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DescribePreDomainListRequest&, DescribePreDomainListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePreDomainListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePreReleaseListResponse> DescribePreReleaseListOutcome;
                typedef std::future<DescribePreReleaseListOutcome> DescribePreReleaseListOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DescribePreReleaseListRequest&, DescribePreReleaseListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePreReleaseListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReservedBidInfoResponse> DescribeReservedBidInfoOutcome;
                typedef std::future<DescribeReservedBidInfoOutcome> DescribeReservedBidInfoOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DescribeReservedBidInfoRequest&, DescribeReservedBidInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReservedBidInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReservedPreDomainInfoResponse> DescribeReservedPreDomainInfoOutcome;
                typedef std::future<DescribeReservedPreDomainInfoOutcome> DescribeReservedPreDomainInfoOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DescribeReservedPreDomainInfoRequest&, DescribeReservedPreDomainInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReservedPreDomainInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTemplateResponse> DescribeTemplateOutcome;
                typedef std::future<DescribeTemplateOutcome> DescribeTemplateOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DescribeTemplateRequest&, DescribeTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTemplateListResponse> DescribeTemplateListOutcome;
                typedef std::future<DescribeTemplateListOutcome> DescribeTemplateListOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DescribeTemplateListRequest&, DescribeTemplateListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTemplateListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTldListResponse> DescribeTldListOutcome;
                typedef std::future<DescribeTldListOutcome> DescribeTldListOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DescribeTldListRequest&, DescribeTldListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTldListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUnPreDomainDetailResponse> DescribeUnPreDomainDetailOutcome;
                typedef std::future<DescribeUnPreDomainDetailOutcome> DescribeUnPreDomainDetailOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DescribeUnPreDomainDetailRequest&, DescribeUnPreDomainDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUnPreDomainDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCustomDnsHostResponse> ModifyCustomDnsHostOutcome;
                typedef std::future<ModifyCustomDnsHostOutcome> ModifyCustomDnsHostOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::ModifyCustomDnsHostRequest&, ModifyCustomDnsHostOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCustomDnsHostAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDomainDNSBatchResponse> ModifyDomainDNSBatchOutcome;
                typedef std::future<ModifyDomainDNSBatchOutcome> ModifyDomainDNSBatchOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::ModifyDomainDNSBatchRequest&, ModifyDomainDNSBatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDomainDNSBatchAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDomainOwnerBatchResponse> ModifyDomainOwnerBatchOutcome;
                typedef std::future<ModifyDomainOwnerBatchOutcome> ModifyDomainOwnerBatchOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::ModifyDomainOwnerBatchRequest&, ModifyDomainOwnerBatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDomainOwnerBatchAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyIntlCustomDnsHostResponse> ModifyIntlCustomDnsHostOutcome;
                typedef std::future<ModifyIntlCustomDnsHostOutcome> ModifyIntlCustomDnsHostOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::ModifyIntlCustomDnsHostRequest&, ModifyIntlCustomDnsHostOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIntlCustomDnsHostAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTemplateResponse> ModifyTemplateOutcome;
                typedef std::future<ModifyTemplateOutcome> ModifyTemplateOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::ModifyTemplateRequest&, ModifyTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewDomainBatchResponse> RenewDomainBatchOutcome;
                typedef std::future<RenewDomainBatchOutcome> RenewDomainBatchOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::RenewDomainBatchRequest&, RenewDomainBatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewDomainBatchAsyncHandler;
                typedef Outcome<Core::Error, Model::ReservedPreDomainsResponse> ReservedPreDomainsOutcome;
                typedef std::future<ReservedPreDomainsOutcome> ReservedPreDomainsOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::ReservedPreDomainsRequest&, ReservedPreDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReservedPreDomainsAsyncHandler;
                typedef Outcome<Core::Error, Model::SendPhoneEmailCodeResponse> SendPhoneEmailCodeOutcome;
                typedef std::future<SendPhoneEmailCodeOutcome> SendPhoneEmailCodeOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::SendPhoneEmailCodeRequest&, SendPhoneEmailCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendPhoneEmailCodeAsyncHandler;
                typedef Outcome<Core::Error, Model::SetDomainAutoRenewResponse> SetDomainAutoRenewOutcome;
                typedef std::future<SetDomainAutoRenewOutcome> SetDomainAutoRenewOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::SetDomainAutoRenewRequest&, SetDomainAutoRenewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetDomainAutoRenewAsyncHandler;
                typedef Outcome<Core::Error, Model::SyncCustomDnsHostResponse> SyncCustomDnsHostOutcome;
                typedef std::future<SyncCustomDnsHostOutcome> SyncCustomDnsHostOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::SyncCustomDnsHostRequest&, SyncCustomDnsHostOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SyncCustomDnsHostAsyncHandler;
                typedef Outcome<Core::Error, Model::TransferInDomainBatchResponse> TransferInDomainBatchOutcome;
                typedef std::future<TransferInDomainBatchOutcome> TransferInDomainBatchOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::TransferInDomainBatchRequest&, TransferInDomainBatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TransferInDomainBatchAsyncHandler;
                typedef Outcome<Core::Error, Model::TransferProhibitionBatchResponse> TransferProhibitionBatchOutcome;
                typedef std::future<TransferProhibitionBatchOutcome> TransferProhibitionBatchOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::TransferProhibitionBatchRequest&, TransferProhibitionBatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TransferProhibitionBatchAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateProhibitionBatchResponse> UpdateProhibitionBatchOutcome;
                typedef std::future<UpdateProhibitionBatchOutcome> UpdateProhibitionBatchOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::UpdateProhibitionBatchRequest&, UpdateProhibitionBatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateProhibitionBatchAsyncHandler;
                typedef Outcome<Core::Error, Model::UploadImageResponse> UploadImageOutcome;
                typedef std::future<UploadImageOutcome> UploadImageOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::UploadImageRequest&, UploadImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadImageAsyncHandler;



                /**
                 *本接口 ( BatchModifyDomainInfo ) 用于批量域名信息修改 。
                 * @param req BatchModifyDomainInfoRequest
                 * @return BatchModifyDomainInfoOutcome
                 */
                BatchModifyDomainInfoOutcome BatchModifyDomainInfo(const Model::BatchModifyDomainInfoRequest &request);
                void BatchModifyDomainInfoAsync(const Model::BatchModifyDomainInfoRequest& request, const BatchModifyDomainInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchModifyDomainInfoOutcomeCallable BatchModifyDomainInfoCallable(const Model::BatchModifyDomainInfoRequest& request);

                /**
                 *该接口用于用户详情页出价请求
                 * @param req BidDetailPageRequest
                 * @return BidDetailPageOutcome
                 */
                BidDetailPageOutcome BidDetailPage(const Model::BidDetailPageRequest &request);
                void BidDetailPageAsync(const Model::BidDetailPageRequest& request, const BidDetailPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BidDetailPageOutcomeCallable BidDetailPageCallable(const Model::BidDetailPageRequest& request);

                /**
                 *用户合作商预释放出价
                 * @param req BidPreDomainsRequest
                 * @return BidPreDomainsOutcome
                 */
                BidPreDomainsOutcome BidPreDomains(const Model::BidPreDomainsRequest &request);
                void BidPreDomainsAsync(const Model::BidPreDomainsRequest& request, const BidPreDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BidPreDomainsOutcomeCallable BidPreDomainsCallable(const Model::BidPreDomainsRequest& request);

                /**
                 *用于出价界面出价请求
                 * @param req BiddingPreReleaseRequest
                 * @return BiddingPreReleaseOutcome
                 */
                BiddingPreReleaseOutcome BiddingPreRelease(const Model::BiddingPreReleaseRequest &request);
                void BiddingPreReleaseAsync(const Model::BiddingPreReleaseRequest& request, const BiddingPreReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BiddingPreReleaseOutcomeCallable BiddingPreReleaseCallable(const Model::BiddingPreReleaseRequest& request);

                /**
                 *本接口 ( CheckBatchStatus ) 用于查询批量操作日志状态 。
                 * @param req CheckBatchStatusRequest
                 * @return CheckBatchStatusOutcome
                 */
                CheckBatchStatusOutcome CheckBatchStatus(const Model::CheckBatchStatusRequest &request);
                void CheckBatchStatusAsync(const Model::CheckBatchStatusRequest& request, const CheckBatchStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckBatchStatusOutcomeCallable CheckBatchStatusCallable(const Model::CheckBatchStatusRequest& request);

                /**
                 *检查域名是否可以注册。
                 * @param req CheckDomainRequest
                 * @return CheckDomainOutcome
                 */
                CheckDomainOutcome CheckDomain(const Model::CheckDomainRequest &request);
                void CheckDomainAsync(const Model::CheckDomainRequest& request, const CheckDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckDomainOutcomeCallable CheckDomainCallable(const Model::CheckDomainRequest& request);

                /**
                 *创建自定义DNS Host
域名在“正常状态”下可创建，域名如果“未实名”则无法创建，账户如果未实名则无法创建。
默认每个域名 自定义DNS Host 数量不超过10个
                 * @param req CreateCustomDnsHostRequest
                 * @return CreateCustomDnsHostOutcome
                 */
                CreateCustomDnsHostOutcome CreateCustomDnsHost(const Model::CreateCustomDnsHostRequest &request);
                void CreateCustomDnsHostAsync(const Model::CreateCustomDnsHostRequest& request, const CreateCustomDnsHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCustomDnsHostOutcomeCallable CreateCustomDnsHostCallable(const Model::CreateCustomDnsHostRequest& request);

                /**
                 *本接口 ( CreateDomainBatch ) 用于批量域名注册 。
                 * @param req CreateDomainBatchRequest
                 * @return CreateDomainBatchOutcome
                 */
                CreateDomainBatchOutcome CreateDomainBatch(const Model::CreateDomainBatchRequest &request);
                void CreateDomainBatchAsync(const Model::CreateDomainBatchRequest& request, const CreateDomainBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDomainBatchOutcomeCallable CreateDomainBatchCallable(const Model::CreateDomainBatchRequest& request);

                /**
                 *创建赎回订单。需要域名状态为：RedemptionPending：赎回期
                 * @param req CreateDomainRedemptionRequest
                 * @return CreateDomainRedemptionOutcome
                 */
                CreateDomainRedemptionOutcome CreateDomainRedemption(const Model::CreateDomainRedemptionRequest &request);
                void CreateDomainRedemptionAsync(const Model::CreateDomainRedemptionRequest& request, const CreateDomainRedemptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDomainRedemptionOutcomeCallable CreateDomainRedemptionCallable(const Model::CreateDomainRedemptionRequest& request);

                /**
                 *此接口用于创建有效的手机、邮箱
                 * @param req CreatePhoneEmailRequest
                 * @return CreatePhoneEmailOutcome
                 */
                CreatePhoneEmailOutcome CreatePhoneEmail(const Model::CreatePhoneEmailRequest &request);
                void CreatePhoneEmailAsync(const Model::CreatePhoneEmailRequest& request, const CreatePhoneEmailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePhoneEmailOutcomeCallable CreatePhoneEmailCallable(const Model::CreatePhoneEmailRequest& request);

                /**
                 *本接口 ( CreateTemplate ) 用于添加域名信息模板 。
                 * @param req CreateTemplateRequest
                 * @return CreateTemplateOutcome
                 */
                CreateTemplateOutcome CreateTemplate(const Model::CreateTemplateRequest &request);
                void CreateTemplateAsync(const Model::CreateTemplateRequest& request, const CreateTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTemplateOutcomeCallable CreateTemplateCallable(const Model::CreateTemplateRequest& request);

                /**
                 *删除记录。
                 * @param req DeleteBiddingRequest
                 * @return DeleteBiddingOutcome
                 */
                DeleteBiddingOutcome DeleteBidding(const Model::DeleteBiddingRequest &request);
                void DeleteBiddingAsync(const Model::DeleteBiddingRequest& request, const DeleteBiddingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBiddingOutcomeCallable DeleteBiddingCallable(const Model::DeleteBiddingRequest& request);

                /**
                 *删除自定义DNS Host
仅能删除域名在“正常状态”下，已经创建过的自定义Host，域名如果“未实名”或账户未实名，则无法操作
                 * @param req DeleteCustomDnsHostRequest
                 * @return DeleteCustomDnsHostOutcome
                 */
                DeleteCustomDnsHostOutcome DeleteCustomDnsHost(const Model::DeleteCustomDnsHostRequest &request);
                void DeleteCustomDnsHostAsync(const Model::DeleteCustomDnsHostRequest& request, const DeleteCustomDnsHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCustomDnsHostOutcomeCallable DeleteCustomDnsHostCallable(const Model::DeleteCustomDnsHostRequest& request);

                /**
                 *此接口用于删除已验证的手机邮箱
                 * @param req DeletePhoneEmailRequest
                 * @return DeletePhoneEmailOutcome
                 */
                DeletePhoneEmailOutcome DeletePhoneEmail(const Model::DeletePhoneEmailRequest &request);
                void DeletePhoneEmailAsync(const Model::DeletePhoneEmailRequest& request, const DeletePhoneEmailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePhoneEmailOutcomeCallable DeletePhoneEmailCallable(const Model::DeletePhoneEmailRequest& request);

                /**
                 *用于清除多余的预定域名信息
                 * @param req DeleteReservedPreDomainInfoRequest
                 * @return DeleteReservedPreDomainInfoOutcome
                 */
                DeleteReservedPreDomainInfoOutcome DeleteReservedPreDomainInfo(const Model::DeleteReservedPreDomainInfoRequest &request);
                void DeleteReservedPreDomainInfoAsync(const Model::DeleteReservedPreDomainInfoRequest& request, const DeleteReservedPreDomainInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteReservedPreDomainInfoOutcomeCallable DeleteReservedPreDomainInfoCallable(const Model::DeleteReservedPreDomainInfoRequest& request);

                /**
                 *本接口 ( DeleteTemplate ) 用于删除信息模板。
                 * @param req DeleteTemplateRequest
                 * @return DeleteTemplateOutcome
                 */
                DeleteTemplateOutcome DeleteTemplate(const Model::DeleteTemplateRequest &request);
                void DeleteTemplateAsync(const Model::DeleteTemplateRequest& request, const DeleteTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTemplateOutcomeCallable DeleteTemplateCallable(const Model::DeleteTemplateRequest& request);

                /**
                 *用户控制台获取竞价列表
                 * @param req DescribeAuctionListRequest
                 * @return DescribeAuctionListOutcome
                 */
                DescribeAuctionListOutcome DescribeAuctionList(const Model::DescribeAuctionListRequest &request);
                void DescribeAuctionListAsync(const Model::DescribeAuctionListRequest& request, const DescribeAuctionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAuctionListOutcomeCallable DescribeAuctionListCallable(const Model::DescribeAuctionListRequest& request);

                /**
                 *本接口 ( DescribeBatchOperationLogDetails ) 用于获取批量操作日志详情。
                 * @param req DescribeBatchOperationLogDetailsRequest
                 * @return DescribeBatchOperationLogDetailsOutcome
                 */
                DescribeBatchOperationLogDetailsOutcome DescribeBatchOperationLogDetails(const Model::DescribeBatchOperationLogDetailsRequest &request);
                void DescribeBatchOperationLogDetailsAsync(const Model::DescribeBatchOperationLogDetailsRequest& request, const DescribeBatchOperationLogDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBatchOperationLogDetailsOutcomeCallable DescribeBatchOperationLogDetailsCallable(const Model::DescribeBatchOperationLogDetailsRequest& request);

                /**
                 *本接口 ( DescribeBatchOperationLogs ) 用于获取批量操作日志 。
                 * @param req DescribeBatchOperationLogsRequest
                 * @return DescribeBatchOperationLogsOutcome
                 */
                DescribeBatchOperationLogsOutcome DescribeBatchOperationLogs(const Model::DescribeBatchOperationLogsRequest &request);
                void DescribeBatchOperationLogsAsync(const Model::DescribeBatchOperationLogsRequest& request, const DescribeBatchOperationLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBatchOperationLogsOutcomeCallable DescribeBatchOperationLogsCallable(const Model::DescribeBatchOperationLogsRequest& request);

                /**
                 *我预约的域名-预约详情。
                 * @param req DescribeBiddingAppointDetailRequest
                 * @return DescribeBiddingAppointDetailOutcome
                 */
                DescribeBiddingAppointDetailOutcome DescribeBiddingAppointDetail(const Model::DescribeBiddingAppointDetailRequest &request);
                void DescribeBiddingAppointDetailAsync(const Model::DescribeBiddingAppointDetailRequest& request, const DescribeBiddingAppointDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBiddingAppointDetailOutcomeCallable DescribeBiddingAppointDetailCallable(const Model::DescribeBiddingAppointDetailRequest& request);

                /**
                 *我预定的域名。
                 * @param req DescribeBiddingAppointListRequest
                 * @return DescribeBiddingAppointListOutcome
                 */
                DescribeBiddingAppointListOutcome DescribeBiddingAppointList(const Model::DescribeBiddingAppointListRequest &request);
                void DescribeBiddingAppointListAsync(const Model::DescribeBiddingAppointListRequest& request, const DescribeBiddingAppointListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBiddingAppointListOutcomeCallable DescribeBiddingAppointListCallable(const Model::DescribeBiddingAppointListRequest& request);

                /**
                 *我竞价的域名-竞价详情。
                 * @param req DescribeBiddingDetailRequest
                 * @return DescribeBiddingDetailOutcome
                 */
                DescribeBiddingDetailOutcome DescribeBiddingDetail(const Model::DescribeBiddingDetailRequest &request);
                void DescribeBiddingDetailAsync(const Model::DescribeBiddingDetailRequest& request, const DescribeBiddingDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBiddingDetailOutcomeCallable DescribeBiddingDetailCallable(const Model::DescribeBiddingDetailRequest& request);

                /**
                 *我竞价的域名。
                 * @param req DescribeBiddingListRequest
                 * @return DescribeBiddingListOutcome
                 */
                DescribeBiddingListOutcome DescribeBiddingList(const Model::DescribeBiddingListRequest &request);
                void DescribeBiddingListAsync(const Model::DescribeBiddingListRequest& request, const DescribeBiddingListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBiddingListOutcomeCallable DescribeBiddingListCallable(const Model::DescribeBiddingListRequest& request);

                /**
                 *我得标的域名-得标详情。
                 * @param req DescribeBiddingSuccessfulDetailRequest
                 * @return DescribeBiddingSuccessfulDetailOutcome
                 */
                DescribeBiddingSuccessfulDetailOutcome DescribeBiddingSuccessfulDetail(const Model::DescribeBiddingSuccessfulDetailRequest &request);
                void DescribeBiddingSuccessfulDetailAsync(const Model::DescribeBiddingSuccessfulDetailRequest& request, const DescribeBiddingSuccessfulDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBiddingSuccessfulDetailOutcomeCallable DescribeBiddingSuccessfulDetailCallable(const Model::DescribeBiddingSuccessfulDetailRequest& request);

                /**
                 *我得标的域名。
                 * @param req DescribeBiddingSuccessfulListRequest
                 * @return DescribeBiddingSuccessfulListOutcome
                 */
                DescribeBiddingSuccessfulListOutcome DescribeBiddingSuccessfulList(const Model::DescribeBiddingSuccessfulListRequest &request);
                void DescribeBiddingSuccessfulListAsync(const Model::DescribeBiddingSuccessfulListRequest& request, const DescribeBiddingSuccessfulListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBiddingSuccessfulListOutcomeCallable DescribeBiddingSuccessfulListCallable(const Model::DescribeBiddingSuccessfulListRequest& request);

                /**
                 *查询自定义DNS Host
当前域名在任意状态下均可获取(根据域名当前状态，不一定能获取到具体数据)
                 * @param req DescribeCustomDnsHostSetRequest
                 * @return DescribeCustomDnsHostSetOutcome
                 */
                DescribeCustomDnsHostSetOutcome DescribeCustomDnsHostSet(const Model::DescribeCustomDnsHostSetRequest &request);
                void DescribeCustomDnsHostSetAsync(const Model::DescribeCustomDnsHostSetRequest& request, const DescribeCustomDnsHostSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomDnsHostSetOutcomeCallable DescribeCustomDnsHostSetCallable(const Model::DescribeCustomDnsHostSetRequest& request);

                /**
                 *本接口 (  DescribeDomainBaseInfo) 获取域名基本信息。
                 * @param req DescribeDomainBaseInfoRequest
                 * @return DescribeDomainBaseInfoOutcome
                 */
                DescribeDomainBaseInfoOutcome DescribeDomainBaseInfo(const Model::DescribeDomainBaseInfoRequest &request);
                void DescribeDomainBaseInfoAsync(const Model::DescribeDomainBaseInfoRequest& request, const DescribeDomainBaseInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainBaseInfoOutcomeCallable DescribeDomainBaseInfoCallable(const Model::DescribeDomainBaseInfoRequest& request);

                /**
                 *本接口 (  DescribeDomainNameList ) 我的域名列表。
                 * @param req DescribeDomainNameListRequest
                 * @return DescribeDomainNameListOutcome
                 */
                DescribeDomainNameListOutcome DescribeDomainNameList(const Model::DescribeDomainNameListRequest &request);
                void DescribeDomainNameListAsync(const Model::DescribeDomainNameListRequest& request, const DescribeDomainNameListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainNameListOutcomeCallable DescribeDomainNameListCallable(const Model::DescribeDomainNameListRequest& request);

                /**
                 *按照域名后缀获取对应的价格列表
                 * @param req DescribeDomainPriceListRequest
                 * @return DescribeDomainPriceListOutcome
                 */
                DescribeDomainPriceListOutcome DescribeDomainPriceList(const Model::DescribeDomainPriceListRequest &request);
                void DescribeDomainPriceListAsync(const Model::DescribeDomainPriceListRequest& request, const DescribeDomainPriceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainPriceListOutcomeCallable DescribeDomainPriceListCallable(const Model::DescribeDomainPriceListRequest& request);

                /**
                 *获取域名实名信息详情
                 * @param req DescribeDomainSimpleInfoRequest
                 * @return DescribeDomainSimpleInfoOutcome
                 */
                DescribeDomainSimpleInfoOutcome DescribeDomainSimpleInfo(const Model::DescribeDomainSimpleInfoRequest &request);
                void DescribeDomainSimpleInfoAsync(const Model::DescribeDomainSimpleInfoRequest& request, const DescribeDomainSimpleInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainSimpleInfoOutcomeCallable DescribeDomainSimpleInfoCallable(const Model::DescribeDomainSimpleInfoRequest& request);

                /**
                 *等待支付详情接口
                 * @param req DescribePayWaitDetailRequest
                 * @return DescribePayWaitDetailOutcome
                 */
                DescribePayWaitDetailOutcome DescribePayWaitDetail(const Model::DescribePayWaitDetailRequest &request);
                void DescribePayWaitDetailAsync(const Model::DescribePayWaitDetailRequest& request, const DescribePayWaitDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePayWaitDetailOutcomeCallable DescribePayWaitDetailCallable(const Model::DescribePayWaitDetailRequest& request);

                /**
                 *本接口用于获取已验证的手机邮箱列表
                 * @param req DescribePhoneEmailListRequest
                 * @return DescribePhoneEmailListOutcome
                 */
                DescribePhoneEmailListOutcome DescribePhoneEmailList(const Model::DescribePhoneEmailListRequest &request);
                void DescribePhoneEmailListAsync(const Model::DescribePhoneEmailListRequest& request, const DescribePhoneEmailListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePhoneEmailListOutcomeCallable DescribePhoneEmailListCallable(const Model::DescribePhoneEmailListRequest& request);

                /**
                 *用于预释放竞价列表数据查询
                 * @param req DescribePreAuctionListRequest
                 * @return DescribePreAuctionListOutcome
                 */
                DescribePreAuctionListOutcome DescribePreAuctionList(const Model::DescribePreAuctionListRequest &request);
                void DescribePreAuctionListAsync(const Model::DescribePreAuctionListRequest& request, const DescribePreAuctionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePreAuctionListOutcomeCallable DescribePreAuctionListCallable(const Model::DescribePreAuctionListRequest& request);

                /**
                 *用户服务商提前获取预释放域名数据，查询数据根据结束时间进行倒序。
                 * @param req DescribePreDomainListRequest
                 * @return DescribePreDomainListOutcome
                 */
                DescribePreDomainListOutcome DescribePreDomainList(const Model::DescribePreDomainListRequest &request);
                void DescribePreDomainListAsync(const Model::DescribePreDomainListRequest& request, const DescribePreDomainListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePreDomainListOutcomeCallable DescribePreDomainListCallable(const Model::DescribePreDomainListRequest& request);

                /**
                 *接口用于预释放页面查询
                 * @param req DescribePreReleaseListRequest
                 * @return DescribePreReleaseListOutcome
                 */
                DescribePreReleaseListOutcome DescribePreReleaseList(const Model::DescribePreReleaseListRequest &request);
                void DescribePreReleaseListAsync(const Model::DescribePreReleaseListRequest& request, const DescribePreReleaseListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePreReleaseListOutcomeCallable DescribePreReleaseListCallable(const Model::DescribePreReleaseListRequest& request);

                /**
                 *接口用于获取合作商竞价过程中竞价详情数据
                 * @param req DescribeReservedBidInfoRequest
                 * @return DescribeReservedBidInfoOutcome
                 */
                DescribeReservedBidInfoOutcome DescribeReservedBidInfo(const Model::DescribeReservedBidInfoRequest &request);
                void DescribeReservedBidInfoAsync(const Model::DescribeReservedBidInfoRequest& request, const DescribeReservedBidInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReservedBidInfoOutcomeCallable DescribeReservedBidInfoCallable(const Model::DescribeReservedBidInfoRequest& request);

                /**
                 *合作商用于查询预约预释放状态信息内容
                 * @param req DescribeReservedPreDomainInfoRequest
                 * @return DescribeReservedPreDomainInfoOutcome
                 */
                DescribeReservedPreDomainInfoOutcome DescribeReservedPreDomainInfo(const Model::DescribeReservedPreDomainInfoRequest &request);
                void DescribeReservedPreDomainInfoAsync(const Model::DescribeReservedPreDomainInfoRequest& request, const DescribeReservedPreDomainInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReservedPreDomainInfoOutcomeCallable DescribeReservedPreDomainInfoCallable(const Model::DescribeReservedPreDomainInfoRequest& request);

                /**
                 *本接口 (DescribeTemplate) 用于获取模板信息。
                 * @param req DescribeTemplateRequest
                 * @return DescribeTemplateOutcome
                 */
                DescribeTemplateOutcome DescribeTemplate(const Model::DescribeTemplateRequest &request);
                void DescribeTemplateAsync(const Model::DescribeTemplateRequest& request, const DescribeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTemplateOutcomeCallable DescribeTemplateCallable(const Model::DescribeTemplateRequest& request);

                /**
                 *本接口 (DescribeTemplateList) 用于获取信息模板列表。
                 * @param req DescribeTemplateListRequest
                 * @return DescribeTemplateListOutcome
                 */
                DescribeTemplateListOutcome DescribeTemplateList(const Model::DescribeTemplateListRequest &request);
                void DescribeTemplateListAsync(const Model::DescribeTemplateListRequest& request, const DescribeTemplateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTemplateListOutcomeCallable DescribeTemplateListCallable(const Model::DescribeTemplateListRequest& request);

                /**
                 *用于获取域名注册当前支持注册的后缀
                 * @param req DescribeTldListRequest
                 * @return DescribeTldListOutcome
                 */
                DescribeTldListOutcome DescribeTldList(const Model::DescribeTldListRequest &request);
                void DescribeTldListAsync(const Model::DescribeTldListRequest& request, const DescribeTldListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTldListOutcomeCallable DescribeTldListCallable(const Model::DescribeTldListRequest& request);

                /**
                 *查询预释放未预约域名详情接口
                 * @param req DescribeUnPreDomainDetailRequest
                 * @return DescribeUnPreDomainDetailOutcome
                 */
                DescribeUnPreDomainDetailOutcome DescribeUnPreDomainDetail(const Model::DescribeUnPreDomainDetailRequest &request);
                void DescribeUnPreDomainDetailAsync(const Model::DescribeUnPreDomainDetailRequest& request, const DescribeUnPreDomainDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUnPreDomainDetailOutcomeCallable DescribeUnPreDomainDetailCallable(const Model::DescribeUnPreDomainDetailRequest& request);

                /**
                 *修改自定义DNS Host
域名在“正常状态”下可修改已经存在的自定义DNS Host，域名如果“未实名”则无法修改，账户如果未实名则无法修改。 默认每个域名 自定义DNS Host 数量不超过10个
                 * @param req ModifyCustomDnsHostRequest
                 * @return ModifyCustomDnsHostOutcome
                 */
                ModifyCustomDnsHostOutcome ModifyCustomDnsHost(const Model::ModifyCustomDnsHostRequest &request);
                void ModifyCustomDnsHostAsync(const Model::ModifyCustomDnsHostRequest& request, const ModifyCustomDnsHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCustomDnsHostOutcomeCallable ModifyCustomDnsHostCallable(const Model::ModifyCustomDnsHostRequest& request);

                /**
                 *本接口 ( ModifyDomainDNSBatch) 用于批量域名 DNS 修改 。
                 * @param req ModifyDomainDNSBatchRequest
                 * @return ModifyDomainDNSBatchOutcome
                 */
                ModifyDomainDNSBatchOutcome ModifyDomainDNSBatch(const Model::ModifyDomainDNSBatchRequest &request);
                void ModifyDomainDNSBatchAsync(const Model::ModifyDomainDNSBatchRequest& request, const ModifyDomainDNSBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDomainDNSBatchOutcomeCallable ModifyDomainDNSBatchCallable(const Model::ModifyDomainDNSBatchRequest& request);

                /**
                 *本接口 ( ModifyDomainOwnerBatch) 用于域名批量账号间转移 。
                 * @param req ModifyDomainOwnerBatchRequest
                 * @return ModifyDomainOwnerBatchOutcome
                 */
                ModifyDomainOwnerBatchOutcome ModifyDomainOwnerBatch(const Model::ModifyDomainOwnerBatchRequest &request);
                void ModifyDomainOwnerBatchAsync(const Model::ModifyDomainOwnerBatchRequest& request, const ModifyDomainOwnerBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDomainOwnerBatchOutcomeCallable ModifyDomainOwnerBatchCallable(const Model::ModifyDomainOwnerBatchRequest& request);

                /**
                 *国际站-修改DNS Host
                 * @param req ModifyIntlCustomDnsHostRequest
                 * @return ModifyIntlCustomDnsHostOutcome
                 */
                ModifyIntlCustomDnsHostOutcome ModifyIntlCustomDnsHost(const Model::ModifyIntlCustomDnsHostRequest &request);
                void ModifyIntlCustomDnsHostAsync(const Model::ModifyIntlCustomDnsHostRequest& request, const ModifyIntlCustomDnsHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyIntlCustomDnsHostOutcomeCallable ModifyIntlCustomDnsHostCallable(const Model::ModifyIntlCustomDnsHostRequest& request);

                /**
                 *修改模板信息,仅能修改模板未通过审核的，即[模板详情](https://cloud.tencent.com/document/product/242/50018)中：AuditStatus不为Approved状态的
                 * @param req ModifyTemplateRequest
                 * @return ModifyTemplateOutcome
                 */
                ModifyTemplateOutcome ModifyTemplate(const Model::ModifyTemplateRequest &request);
                void ModifyTemplateAsync(const Model::ModifyTemplateRequest& request, const ModifyTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTemplateOutcomeCallable ModifyTemplateCallable(const Model::ModifyTemplateRequest& request);

                /**
                 *本接口 ( RenewDomainBatch ) 用于批量续费域名 。
                 * @param req RenewDomainBatchRequest
                 * @return RenewDomainBatchOutcome
                 */
                RenewDomainBatchOutcome RenewDomainBatch(const Model::RenewDomainBatchRequest &request);
                void RenewDomainBatchAsync(const Model::RenewDomainBatchRequest& request, const RenewDomainBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewDomainBatchOutcomeCallable RenewDomainBatchCallable(const Model::RenewDomainBatchRequest& request);

                /**
                 *用于合作商对预释放域名进行预留。
                 * @param req ReservedPreDomainsRequest
                 * @return ReservedPreDomainsOutcome
                 */
                ReservedPreDomainsOutcome ReservedPreDomains(const Model::ReservedPreDomainsRequest &request);
                void ReservedPreDomainsAsync(const Model::ReservedPreDomainsRequest& request, const ReservedPreDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReservedPreDomainsOutcomeCallable ReservedPreDomainsCallable(const Model::ReservedPreDomainsRequest& request);

                /**
                 *此接口用于发送手机邮箱验证码。
                 * @param req SendPhoneEmailCodeRequest
                 * @return SendPhoneEmailCodeOutcome
                 */
                SendPhoneEmailCodeOutcome SendPhoneEmailCode(const Model::SendPhoneEmailCodeRequest &request);
                void SendPhoneEmailCodeAsync(const Model::SendPhoneEmailCodeRequest& request, const SendPhoneEmailCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendPhoneEmailCodeOutcomeCallable SendPhoneEmailCodeCallable(const Model::SendPhoneEmailCodeRequest& request);

                /**
                 *本接口 ( SetDomainAutoRenew ) 用于设置域名自动续费。
当前操作暂不受域名状态限制
                 * @param req SetDomainAutoRenewRequest
                 * @return SetDomainAutoRenewOutcome
                 */
                SetDomainAutoRenewOutcome SetDomainAutoRenew(const Model::SetDomainAutoRenewRequest &request);
                void SetDomainAutoRenewAsync(const Model::SetDomainAutoRenewRequest& request, const SetDomainAutoRenewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetDomainAutoRenewOutcomeCallable SetDomainAutoRenewCallable(const Model::SetDomainAutoRenewRequest& request);

                /**
                 *同步自定义DNS Host，将域名已经设置的host配置数据从注册局同步下来
                 * @param req SyncCustomDnsHostRequest
                 * @return SyncCustomDnsHostOutcome
                 */
                SyncCustomDnsHostOutcome SyncCustomDnsHost(const Model::SyncCustomDnsHostRequest &request);
                void SyncCustomDnsHostAsync(const Model::SyncCustomDnsHostRequest& request, const SyncCustomDnsHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SyncCustomDnsHostOutcomeCallable SyncCustomDnsHostCallable(const Model::SyncCustomDnsHostRequest& request);

                /**
                 *本接口 ( TransferInDomainBatch ) 用于批量转入域名 。
                 * @param req TransferInDomainBatchRequest
                 * @return TransferInDomainBatchOutcome
                 */
                TransferInDomainBatchOutcome TransferInDomainBatch(const Model::TransferInDomainBatchRequest &request);
                void TransferInDomainBatchAsync(const Model::TransferInDomainBatchRequest& request, const TransferInDomainBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TransferInDomainBatchOutcomeCallable TransferInDomainBatchCallable(const Model::TransferInDomainBatchRequest& request);

                /**
                 *本接口 ( TransferProhibitionBatch ) 用于批量禁止域名转移 。
                 * @param req TransferProhibitionBatchRequest
                 * @return TransferProhibitionBatchOutcome
                 */
                TransferProhibitionBatchOutcome TransferProhibitionBatch(const Model::TransferProhibitionBatchRequest &request);
                void TransferProhibitionBatchAsync(const Model::TransferProhibitionBatchRequest& request, const TransferProhibitionBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TransferProhibitionBatchOutcomeCallable TransferProhibitionBatchCallable(const Model::TransferProhibitionBatchRequest& request);

                /**
                 *本接口 ( UpdateProhibitionBatch ) 用于批量禁止更新锁。
                 * @param req UpdateProhibitionBatchRequest
                 * @return UpdateProhibitionBatchOutcome
                 */
                UpdateProhibitionBatchOutcome UpdateProhibitionBatch(const Model::UpdateProhibitionBatchRequest &request);
                void UpdateProhibitionBatchAsync(const Model::UpdateProhibitionBatchRequest& request, const UpdateProhibitionBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateProhibitionBatchOutcomeCallable UpdateProhibitionBatchCallable(const Model::UpdateProhibitionBatchRequest& request);

                /**
                 *本接口 ( UploadImage ) 用于证件图片上传 。
                 * @param req UploadImageRequest
                 * @return UploadImageOutcome
                 */
                UploadImageOutcome UploadImage(const Model::UploadImageRequest &request);
                void UploadImageAsync(const Model::UploadImageRequest& request, const UploadImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadImageOutcomeCallable UploadImageCallable(const Model::UploadImageRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_DOMAINCLIENT_H_
