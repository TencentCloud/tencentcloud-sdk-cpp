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
#include <tencentcloud/domain/v20180808/model/CreateDomainBatchRequest.h>
#include <tencentcloud/domain/v20180808/model/CreateDomainBatchResponse.h>
#include <tencentcloud/domain/v20180808/model/DescribeDomainBaseInfoRequest.h>
#include <tencentcloud/domain/v20180808/model/DescribeDomainBaseInfoResponse.h>
#include <tencentcloud/domain/v20180808/model/DescribeDomainNameListRequest.h>
#include <tencentcloud/domain/v20180808/model/DescribeDomainNameListResponse.h>
#include <tencentcloud/domain/v20180808/model/DescribeDomainPriceListRequest.h>
#include <tencentcloud/domain/v20180808/model/DescribeDomainPriceListResponse.h>
#include <tencentcloud/domain/v20180808/model/DescribeTemplateListRequest.h>
#include <tencentcloud/domain/v20180808/model/DescribeTemplateListResponse.h>
#include <tencentcloud/domain/v20180808/model/ModifyDomainOwnerBatchRequest.h>
#include <tencentcloud/domain/v20180808/model/ModifyDomainOwnerBatchResponse.h>
#include <tencentcloud/domain/v20180808/model/TransferInDomainBatchRequest.h>
#include <tencentcloud/domain/v20180808/model/TransferInDomainBatchResponse.h>
#include <tencentcloud/domain/v20180808/model/TransferProhibitionBatchRequest.h>
#include <tencentcloud/domain/v20180808/model/TransferProhibitionBatchResponse.h>
#include <tencentcloud/domain/v20180808/model/UpdateProhibitionBatchRequest.h>
#include <tencentcloud/domain/v20180808/model/UpdateProhibitionBatchResponse.h>


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

                typedef Outcome<Error, Model::BatchModifyDomainInfoResponse> BatchModifyDomainInfoOutcome;
                typedef std::future<BatchModifyDomainInfoOutcome> BatchModifyDomainInfoOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::BatchModifyDomainInfoRequest&, BatchModifyDomainInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchModifyDomainInfoAsyncHandler;
                typedef Outcome<Error, Model::CheckBatchStatusResponse> CheckBatchStatusOutcome;
                typedef std::future<CheckBatchStatusOutcome> CheckBatchStatusOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::CheckBatchStatusRequest&, CheckBatchStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckBatchStatusAsyncHandler;
                typedef Outcome<Error, Model::CheckDomainResponse> CheckDomainOutcome;
                typedef std::future<CheckDomainOutcome> CheckDomainOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::CheckDomainRequest&, CheckDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckDomainAsyncHandler;
                typedef Outcome<Error, Model::CreateDomainBatchResponse> CreateDomainBatchOutcome;
                typedef std::future<CreateDomainBatchOutcome> CreateDomainBatchOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::CreateDomainBatchRequest&, CreateDomainBatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDomainBatchAsyncHandler;
                typedef Outcome<Error, Model::DescribeDomainBaseInfoResponse> DescribeDomainBaseInfoOutcome;
                typedef std::future<DescribeDomainBaseInfoOutcome> DescribeDomainBaseInfoOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DescribeDomainBaseInfoRequest&, DescribeDomainBaseInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainBaseInfoAsyncHandler;
                typedef Outcome<Error, Model::DescribeDomainNameListResponse> DescribeDomainNameListOutcome;
                typedef std::future<DescribeDomainNameListOutcome> DescribeDomainNameListOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DescribeDomainNameListRequest&, DescribeDomainNameListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainNameListAsyncHandler;
                typedef Outcome<Error, Model::DescribeDomainPriceListResponse> DescribeDomainPriceListOutcome;
                typedef std::future<DescribeDomainPriceListOutcome> DescribeDomainPriceListOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DescribeDomainPriceListRequest&, DescribeDomainPriceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainPriceListAsyncHandler;
                typedef Outcome<Error, Model::DescribeTemplateListResponse> DescribeTemplateListOutcome;
                typedef std::future<DescribeTemplateListOutcome> DescribeTemplateListOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DescribeTemplateListRequest&, DescribeTemplateListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTemplateListAsyncHandler;
                typedef Outcome<Error, Model::ModifyDomainOwnerBatchResponse> ModifyDomainOwnerBatchOutcome;
                typedef std::future<ModifyDomainOwnerBatchOutcome> ModifyDomainOwnerBatchOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::ModifyDomainOwnerBatchRequest&, ModifyDomainOwnerBatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDomainOwnerBatchAsyncHandler;
                typedef Outcome<Error, Model::TransferInDomainBatchResponse> TransferInDomainBatchOutcome;
                typedef std::future<TransferInDomainBatchOutcome> TransferInDomainBatchOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::TransferInDomainBatchRequest&, TransferInDomainBatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TransferInDomainBatchAsyncHandler;
                typedef Outcome<Error, Model::TransferProhibitionBatchResponse> TransferProhibitionBatchOutcome;
                typedef std::future<TransferProhibitionBatchOutcome> TransferProhibitionBatchOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::TransferProhibitionBatchRequest&, TransferProhibitionBatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TransferProhibitionBatchAsyncHandler;
                typedef Outcome<Error, Model::UpdateProhibitionBatchResponse> UpdateProhibitionBatchOutcome;
                typedef std::future<UpdateProhibitionBatchOutcome> UpdateProhibitionBatchOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::UpdateProhibitionBatchRequest&, UpdateProhibitionBatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateProhibitionBatchAsyncHandler;



                /**
                 *本接口 ( BatchModifyDomainInfo ) 用于批量域名信息修改 。

默认接口请求频率限制：20次/秒。
                 * @param req BatchModifyDomainInfoRequest
                 * @return BatchModifyDomainInfoOutcome
                 */
                BatchModifyDomainInfoOutcome BatchModifyDomainInfo(const Model::BatchModifyDomainInfoRequest &request);
                void BatchModifyDomainInfoAsync(const Model::BatchModifyDomainInfoRequest& request, const BatchModifyDomainInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchModifyDomainInfoOutcomeCallable BatchModifyDomainInfoCallable(const Model::BatchModifyDomainInfoRequest& request);

                /**
                 *本接口 ( CheckBatchStatus ) 用于检查批量任务状态 。

默认接口请求频率限制：20次/秒。
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
                 *本接口 ( CreateDomainBatch ) 用于批量注册域名 。

默认接口请求频率限制：20次/秒。
                 * @param req CreateDomainBatchRequest
                 * @return CreateDomainBatchOutcome
                 */
                CreateDomainBatchOutcome CreateDomainBatch(const Model::CreateDomainBatchRequest &request);
                void CreateDomainBatchAsync(const Model::CreateDomainBatchRequest& request, const CreateDomainBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDomainBatchOutcomeCallable CreateDomainBatchCallable(const Model::CreateDomainBatchRequest& request);

                /**
                 *本接口 (  DescribeDomainBaseInfo) 获取域名基础信息。

默认接口请求频率限制：20次/秒。

                 * @param req DescribeDomainBaseInfoRequest
                 * @return DescribeDomainBaseInfoOutcome
                 */
                DescribeDomainBaseInfoOutcome DescribeDomainBaseInfo(const Model::DescribeDomainBaseInfoRequest &request);
                void DescribeDomainBaseInfoAsync(const Model::DescribeDomainBaseInfoRequest& request, const DescribeDomainBaseInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainBaseInfoOutcomeCallable DescribeDomainBaseInfoCallable(const Model::DescribeDomainBaseInfoRequest& request);

                /**
                 *本接口 (  DescribeDomainNameList ) 获取域名列表。

默认接口请求频率限制：20次/秒。

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
                 *本接口 (DescribeTemplateList) 用于获取模板列表。

默认接口请求频率限制：20次/秒。

                 * @param req DescribeTemplateListRequest
                 * @return DescribeTemplateListOutcome
                 */
                DescribeTemplateListOutcome DescribeTemplateList(const Model::DescribeTemplateListRequest &request);
                void DescribeTemplateListAsync(const Model::DescribeTemplateListRequest& request, const DescribeTemplateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTemplateListOutcomeCallable DescribeTemplateListCallable(const Model::DescribeTemplateListRequest& request);

                /**
                 *本接口 ( ModifyDomainOwnerBatch) 用于域名批量账号间转移 。

默认接口请求频率限制：20次/秒。
                 * @param req ModifyDomainOwnerBatchRequest
                 * @return ModifyDomainOwnerBatchOutcome
                 */
                ModifyDomainOwnerBatchOutcome ModifyDomainOwnerBatch(const Model::ModifyDomainOwnerBatchRequest &request);
                void ModifyDomainOwnerBatchAsync(const Model::ModifyDomainOwnerBatchRequest& request, const ModifyDomainOwnerBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDomainOwnerBatchOutcomeCallable ModifyDomainOwnerBatchCallable(const Model::ModifyDomainOwnerBatchRequest& request);

                /**
                 *本接口 ( TransferInDomainBatch ) 用于批量转入域名 。

默认接口请求频率限制：20次/秒。
                 * @param req TransferInDomainBatchRequest
                 * @return TransferInDomainBatchOutcome
                 */
                TransferInDomainBatchOutcome TransferInDomainBatch(const Model::TransferInDomainBatchRequest &request);
                void TransferInDomainBatchAsync(const Model::TransferInDomainBatchRequest& request, const TransferInDomainBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TransferInDomainBatchOutcomeCallable TransferInDomainBatchCallable(const Model::TransferInDomainBatchRequest& request);

                /**
                 *本接口 ( TransferInDomainBatch ) 用于批量禁止域名转移 。

默认接口请求频率限制：20次/秒。
                 * @param req TransferProhibitionBatchRequest
                 * @return TransferProhibitionBatchOutcome
                 */
                TransferProhibitionBatchOutcome TransferProhibitionBatch(const Model::TransferProhibitionBatchRequest &request);
                void TransferProhibitionBatchAsync(const Model::TransferProhibitionBatchRequest& request, const TransferProhibitionBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TransferProhibitionBatchOutcomeCallable TransferProhibitionBatchCallable(const Model::TransferProhibitionBatchRequest& request);

                /**
                 *本接口 ( UpdateProhibitionBatch ) 用于批量设置禁止域名更新 。

默认接口请求频率限制：20次/秒。
                 * @param req UpdateProhibitionBatchRequest
                 * @return UpdateProhibitionBatchOutcome
                 */
                UpdateProhibitionBatchOutcome UpdateProhibitionBatch(const Model::UpdateProhibitionBatchRequest &request);
                void UpdateProhibitionBatchAsync(const Model::UpdateProhibitionBatchRequest& request, const UpdateProhibitionBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateProhibitionBatchOutcomeCallable UpdateProhibitionBatchCallable(const Model::UpdateProhibitionBatchRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_DOMAINCLIENT_H_
