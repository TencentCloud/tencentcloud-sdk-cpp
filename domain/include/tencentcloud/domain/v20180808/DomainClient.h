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
#include <tencentcloud/domain/v20180808/model/DeleteCustomDnsHostRequest.h>
#include <tencentcloud/domain/v20180808/model/DeleteCustomDnsHostResponse.h>
#include <tencentcloud/domain/v20180808/model/DeletePhoneEmailRequest.h>
#include <tencentcloud/domain/v20180808/model/DeletePhoneEmailResponse.h>
#include <tencentcloud/domain/v20180808/model/DeleteTemplateRequest.h>
#include <tencentcloud/domain/v20180808/model/DeleteTemplateResponse.h>
#include <tencentcloud/domain/v20180808/model/DescribeBatchOperationLogDetailsRequest.h>
#include <tencentcloud/domain/v20180808/model/DescribeBatchOperationLogDetailsResponse.h>
#include <tencentcloud/domain/v20180808/model/DescribeBatchOperationLogsRequest.h>
#include <tencentcloud/domain/v20180808/model/DescribeBatchOperationLogsResponse.h>
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
#include <tencentcloud/domain/v20180808/model/DescribePhoneEmailListRequest.h>
#include <tencentcloud/domain/v20180808/model/DescribePhoneEmailListResponse.h>
#include <tencentcloud/domain/v20180808/model/DescribeTemplateRequest.h>
#include <tencentcloud/domain/v20180808/model/DescribeTemplateResponse.h>
#include <tencentcloud/domain/v20180808/model/DescribeTemplateListRequest.h>
#include <tencentcloud/domain/v20180808/model/DescribeTemplateListResponse.h>
#include <tencentcloud/domain/v20180808/model/ModifyCustomDnsHostRequest.h>
#include <tencentcloud/domain/v20180808/model/ModifyCustomDnsHostResponse.h>
#include <tencentcloud/domain/v20180808/model/ModifyDomainDNSBatchRequest.h>
#include <tencentcloud/domain/v20180808/model/ModifyDomainDNSBatchResponse.h>
#include <tencentcloud/domain/v20180808/model/ModifyDomainOwnerBatchRequest.h>
#include <tencentcloud/domain/v20180808/model/ModifyDomainOwnerBatchResponse.h>
#include <tencentcloud/domain/v20180808/model/ModifyIntlCustomDnsHostRequest.h>
#include <tencentcloud/domain/v20180808/model/ModifyIntlCustomDnsHostResponse.h>
#include <tencentcloud/domain/v20180808/model/RenewDomainBatchRequest.h>
#include <tencentcloud/domain/v20180808/model/RenewDomainBatchResponse.h>
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
                typedef Outcome<Core::Error, Model::DeleteCustomDnsHostResponse> DeleteCustomDnsHostOutcome;
                typedef std::future<DeleteCustomDnsHostOutcome> DeleteCustomDnsHostOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DeleteCustomDnsHostRequest&, DeleteCustomDnsHostOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCustomDnsHostAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePhoneEmailResponse> DeletePhoneEmailOutcome;
                typedef std::future<DeletePhoneEmailOutcome> DeletePhoneEmailOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DeletePhoneEmailRequest&, DeletePhoneEmailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePhoneEmailAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTemplateResponse> DeleteTemplateOutcome;
                typedef std::future<DeleteTemplateOutcome> DeleteTemplateOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DeleteTemplateRequest&, DeleteTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBatchOperationLogDetailsResponse> DescribeBatchOperationLogDetailsOutcome;
                typedef std::future<DescribeBatchOperationLogDetailsOutcome> DescribeBatchOperationLogDetailsOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DescribeBatchOperationLogDetailsRequest&, DescribeBatchOperationLogDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBatchOperationLogDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBatchOperationLogsResponse> DescribeBatchOperationLogsOutcome;
                typedef std::future<DescribeBatchOperationLogsOutcome> DescribeBatchOperationLogsOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DescribeBatchOperationLogsRequest&, DescribeBatchOperationLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBatchOperationLogsAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribePhoneEmailListResponse> DescribePhoneEmailListOutcome;
                typedef std::future<DescribePhoneEmailListOutcome> DescribePhoneEmailListOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DescribePhoneEmailListRequest&, DescribePhoneEmailListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePhoneEmailListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTemplateResponse> DescribeTemplateOutcome;
                typedef std::future<DescribeTemplateOutcome> DescribeTemplateOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DescribeTemplateRequest&, DescribeTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTemplateListResponse> DescribeTemplateListOutcome;
                typedef std::future<DescribeTemplateListOutcome> DescribeTemplateListOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DescribeTemplateListRequest&, DescribeTemplateListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTemplateListAsyncHandler;
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
                typedef Outcome<Core::Error, Model::RenewDomainBatchResponse> RenewDomainBatchOutcome;
                typedef std::future<RenewDomainBatchOutcome> RenewDomainBatchOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::RenewDomainBatchRequest&, RenewDomainBatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewDomainBatchAsyncHandler;
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
                 *创建赎回订单。
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
                 *删除自定义DNS Host
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
                 *本接口 ( DeleteTemplate ) 用于删除信息模板。
                 * @param req DeleteTemplateRequest
                 * @return DeleteTemplateOutcome
                 */
                DeleteTemplateOutcome DeleteTemplate(const Model::DeleteTemplateRequest &request);
                void DeleteTemplateAsync(const Model::DeleteTemplateRequest& request, const DeleteTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTemplateOutcomeCallable DeleteTemplateCallable(const Model::DeleteTemplateRequest& request);

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
                 *查询自定义DNS Host
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
                 *本接口用于获取已验证的手机邮箱列表
                 * @param req DescribePhoneEmailListRequest
                 * @return DescribePhoneEmailListOutcome
                 */
                DescribePhoneEmailListOutcome DescribePhoneEmailList(const Model::DescribePhoneEmailListRequest &request);
                void DescribePhoneEmailListAsync(const Model::DescribePhoneEmailListRequest& request, const DescribePhoneEmailListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePhoneEmailListOutcomeCallable DescribePhoneEmailListCallable(const Model::DescribePhoneEmailListRequest& request);

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
                 *修改自定义DNS Host
                 * @param req ModifyCustomDnsHostRequest
                 * @return ModifyCustomDnsHostOutcome
                 */
                ModifyCustomDnsHostOutcome ModifyCustomDnsHost(const Model::ModifyCustomDnsHostRequest &request);
                void ModifyCustomDnsHostAsync(const Model::ModifyCustomDnsHostRequest& request, const ModifyCustomDnsHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCustomDnsHostOutcomeCallable ModifyCustomDnsHostCallable(const Model::ModifyCustomDnsHostRequest& request);

                /**
                 *本接口 ( ModifyDomainDNSBatch) 用于批量域名 DNS 修改 。
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
                 *本接口 ( RenewDomainBatch ) 用于批量续费域名 。

                 * @param req RenewDomainBatchRequest
                 * @return RenewDomainBatchOutcome
                 */
                RenewDomainBatchOutcome RenewDomainBatch(const Model::RenewDomainBatchRequest &request);
                void RenewDomainBatchAsync(const Model::RenewDomainBatchRequest& request, const RenewDomainBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewDomainBatchOutcomeCallable RenewDomainBatchCallable(const Model::RenewDomainBatchRequest& request);

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
                 * @param req SetDomainAutoRenewRequest
                 * @return SetDomainAutoRenewOutcome
                 */
                SetDomainAutoRenewOutcome SetDomainAutoRenew(const Model::SetDomainAutoRenewRequest &request);
                void SetDomainAutoRenewAsync(const Model::SetDomainAutoRenewRequest& request, const SetDomainAutoRenewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetDomainAutoRenewOutcomeCallable SetDomainAutoRenewCallable(const Model::SetDomainAutoRenewRequest& request);

                /**
                 *同步自定义DNS Host
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
