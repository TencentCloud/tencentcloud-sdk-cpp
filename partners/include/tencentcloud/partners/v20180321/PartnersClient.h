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

#ifndef TENCENTCLOUD_PARTNERS_V20180321_PARTNERSCLIENT_H_
#define TENCENTCLOUD_PARTNERS_V20180321_PARTNERSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/partners/v20180321/model/AgentPayDealsRequest.h>
#include <tencentcloud/partners/v20180321/model/AgentPayDealsResponse.h>
#include <tencentcloud/partners/v20180321/model/AgentTransferMoneyRequest.h>
#include <tencentcloud/partners/v20180321/model/AgentTransferMoneyResponse.h>
#include <tencentcloud/partners/v20180321/model/AuditApplyClientRequest.h>
#include <tencentcloud/partners/v20180321/model/AuditApplyClientResponse.h>
#include <tencentcloud/partners/v20180321/model/CreatePayRelationForClientRequest.h>
#include <tencentcloud/partners/v20180321/model/CreatePayRelationForClientResponse.h>
#include <tencentcloud/partners/v20180321/model/DescribeAgentAuditedClientsRequest.h>
#include <tencentcloud/partners/v20180321/model/DescribeAgentAuditedClientsResponse.h>
#include <tencentcloud/partners/v20180321/model/DescribeAgentBillsRequest.h>
#include <tencentcloud/partners/v20180321/model/DescribeAgentBillsResponse.h>
#include <tencentcloud/partners/v20180321/model/DescribeAgentClientGradeRequest.h>
#include <tencentcloud/partners/v20180321/model/DescribeAgentClientGradeResponse.h>
#include <tencentcloud/partners/v20180321/model/DescribeAgentClientsRequest.h>
#include <tencentcloud/partners/v20180321/model/DescribeAgentClientsResponse.h>
#include <tencentcloud/partners/v20180321/model/DescribeAgentDealsByCacheRequest.h>
#include <tencentcloud/partners/v20180321/model/DescribeAgentDealsByCacheResponse.h>
#include <tencentcloud/partners/v20180321/model/DescribeAgentDealsCacheRequest.h>
#include <tencentcloud/partners/v20180321/model/DescribeAgentDealsCacheResponse.h>
#include <tencentcloud/partners/v20180321/model/DescribeAgentPayDealsRequest.h>
#include <tencentcloud/partners/v20180321/model/DescribeAgentPayDealsResponse.h>
#include <tencentcloud/partners/v20180321/model/DescribeAgentPayDealsV2Request.h>
#include <tencentcloud/partners/v20180321/model/DescribeAgentPayDealsV2Response.h>
#include <tencentcloud/partners/v20180321/model/DescribeAgentSelfPayDealsRequest.h>
#include <tencentcloud/partners/v20180321/model/DescribeAgentSelfPayDealsResponse.h>
#include <tencentcloud/partners/v20180321/model/DescribeAgentSelfPayDealsV2Request.h>
#include <tencentcloud/partners/v20180321/model/DescribeAgentSelfPayDealsV2Response.h>
#include <tencentcloud/partners/v20180321/model/DescribeClientBalanceRequest.h>
#include <tencentcloud/partners/v20180321/model/DescribeClientBalanceResponse.h>
#include <tencentcloud/partners/v20180321/model/DescribeClientBalanceNewRequest.h>
#include <tencentcloud/partners/v20180321/model/DescribeClientBalanceNewResponse.h>
#include <tencentcloud/partners/v20180321/model/DescribeRebateInfosRequest.h>
#include <tencentcloud/partners/v20180321/model/DescribeRebateInfosResponse.h>
#include <tencentcloud/partners/v20180321/model/DescribeSalesmansRequest.h>
#include <tencentcloud/partners/v20180321/model/DescribeSalesmansResponse.h>
#include <tencentcloud/partners/v20180321/model/DescribeUnbindClientListRequest.h>
#include <tencentcloud/partners/v20180321/model/DescribeUnbindClientListResponse.h>
#include <tencentcloud/partners/v20180321/model/ModifyClientRemarkRequest.h>
#include <tencentcloud/partners/v20180321/model/ModifyClientRemarkResponse.h>
#include <tencentcloud/partners/v20180321/model/RemovePayRelationForClientRequest.h>
#include <tencentcloud/partners/v20180321/model/RemovePayRelationForClientResponse.h>


namespace TencentCloud
{
    namespace Partners
    {
        namespace V20180321
        {
            class PartnersClient : public AbstractClient
            {
            public:
                PartnersClient(const Credential &credential, const std::string &region);
                PartnersClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AgentPayDealsResponse> AgentPayDealsOutcome;
                typedef std::future<AgentPayDealsOutcome> AgentPayDealsOutcomeCallable;
                typedef std::function<void(const PartnersClient*, const Model::AgentPayDealsRequest&, AgentPayDealsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AgentPayDealsAsyncHandler;
                typedef Outcome<Core::Error, Model::AgentTransferMoneyResponse> AgentTransferMoneyOutcome;
                typedef std::future<AgentTransferMoneyOutcome> AgentTransferMoneyOutcomeCallable;
                typedef std::function<void(const PartnersClient*, const Model::AgentTransferMoneyRequest&, AgentTransferMoneyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AgentTransferMoneyAsyncHandler;
                typedef Outcome<Core::Error, Model::AuditApplyClientResponse> AuditApplyClientOutcome;
                typedef std::future<AuditApplyClientOutcome> AuditApplyClientOutcomeCallable;
                typedef std::function<void(const PartnersClient*, const Model::AuditApplyClientRequest&, AuditApplyClientOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AuditApplyClientAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePayRelationForClientResponse> CreatePayRelationForClientOutcome;
                typedef std::future<CreatePayRelationForClientOutcome> CreatePayRelationForClientOutcomeCallable;
                typedef std::function<void(const PartnersClient*, const Model::CreatePayRelationForClientRequest&, CreatePayRelationForClientOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePayRelationForClientAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAgentAuditedClientsResponse> DescribeAgentAuditedClientsOutcome;
                typedef std::future<DescribeAgentAuditedClientsOutcome> DescribeAgentAuditedClientsOutcomeCallable;
                typedef std::function<void(const PartnersClient*, const Model::DescribeAgentAuditedClientsRequest&, DescribeAgentAuditedClientsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentAuditedClientsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAgentBillsResponse> DescribeAgentBillsOutcome;
                typedef std::future<DescribeAgentBillsOutcome> DescribeAgentBillsOutcomeCallable;
                typedef std::function<void(const PartnersClient*, const Model::DescribeAgentBillsRequest&, DescribeAgentBillsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentBillsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAgentClientGradeResponse> DescribeAgentClientGradeOutcome;
                typedef std::future<DescribeAgentClientGradeOutcome> DescribeAgentClientGradeOutcomeCallable;
                typedef std::function<void(const PartnersClient*, const Model::DescribeAgentClientGradeRequest&, DescribeAgentClientGradeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentClientGradeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAgentClientsResponse> DescribeAgentClientsOutcome;
                typedef std::future<DescribeAgentClientsOutcome> DescribeAgentClientsOutcomeCallable;
                typedef std::function<void(const PartnersClient*, const Model::DescribeAgentClientsRequest&, DescribeAgentClientsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentClientsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAgentDealsByCacheResponse> DescribeAgentDealsByCacheOutcome;
                typedef std::future<DescribeAgentDealsByCacheOutcome> DescribeAgentDealsByCacheOutcomeCallable;
                typedef std::function<void(const PartnersClient*, const Model::DescribeAgentDealsByCacheRequest&, DescribeAgentDealsByCacheOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentDealsByCacheAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAgentDealsCacheResponse> DescribeAgentDealsCacheOutcome;
                typedef std::future<DescribeAgentDealsCacheOutcome> DescribeAgentDealsCacheOutcomeCallable;
                typedef std::function<void(const PartnersClient*, const Model::DescribeAgentDealsCacheRequest&, DescribeAgentDealsCacheOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentDealsCacheAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAgentPayDealsResponse> DescribeAgentPayDealsOutcome;
                typedef std::future<DescribeAgentPayDealsOutcome> DescribeAgentPayDealsOutcomeCallable;
                typedef std::function<void(const PartnersClient*, const Model::DescribeAgentPayDealsRequest&, DescribeAgentPayDealsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentPayDealsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAgentPayDealsV2Response> DescribeAgentPayDealsV2Outcome;
                typedef std::future<DescribeAgentPayDealsV2Outcome> DescribeAgentPayDealsV2OutcomeCallable;
                typedef std::function<void(const PartnersClient*, const Model::DescribeAgentPayDealsV2Request&, DescribeAgentPayDealsV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentPayDealsV2AsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAgentSelfPayDealsResponse> DescribeAgentSelfPayDealsOutcome;
                typedef std::future<DescribeAgentSelfPayDealsOutcome> DescribeAgentSelfPayDealsOutcomeCallable;
                typedef std::function<void(const PartnersClient*, const Model::DescribeAgentSelfPayDealsRequest&, DescribeAgentSelfPayDealsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentSelfPayDealsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAgentSelfPayDealsV2Response> DescribeAgentSelfPayDealsV2Outcome;
                typedef std::future<DescribeAgentSelfPayDealsV2Outcome> DescribeAgentSelfPayDealsV2OutcomeCallable;
                typedef std::function<void(const PartnersClient*, const Model::DescribeAgentSelfPayDealsV2Request&, DescribeAgentSelfPayDealsV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentSelfPayDealsV2AsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClientBalanceResponse> DescribeClientBalanceOutcome;
                typedef std::future<DescribeClientBalanceOutcome> DescribeClientBalanceOutcomeCallable;
                typedef std::function<void(const PartnersClient*, const Model::DescribeClientBalanceRequest&, DescribeClientBalanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClientBalanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClientBalanceNewResponse> DescribeClientBalanceNewOutcome;
                typedef std::future<DescribeClientBalanceNewOutcome> DescribeClientBalanceNewOutcomeCallable;
                typedef std::function<void(const PartnersClient*, const Model::DescribeClientBalanceNewRequest&, DescribeClientBalanceNewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClientBalanceNewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRebateInfosResponse> DescribeRebateInfosOutcome;
                typedef std::future<DescribeRebateInfosOutcome> DescribeRebateInfosOutcomeCallable;
                typedef std::function<void(const PartnersClient*, const Model::DescribeRebateInfosRequest&, DescribeRebateInfosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRebateInfosAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSalesmansResponse> DescribeSalesmansOutcome;
                typedef std::future<DescribeSalesmansOutcome> DescribeSalesmansOutcomeCallable;
                typedef std::function<void(const PartnersClient*, const Model::DescribeSalesmansRequest&, DescribeSalesmansOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSalesmansAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUnbindClientListResponse> DescribeUnbindClientListOutcome;
                typedef std::future<DescribeUnbindClientListOutcome> DescribeUnbindClientListOutcomeCallable;
                typedef std::function<void(const PartnersClient*, const Model::DescribeUnbindClientListRequest&, DescribeUnbindClientListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUnbindClientListAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyClientRemarkResponse> ModifyClientRemarkOutcome;
                typedef std::future<ModifyClientRemarkOutcome> ModifyClientRemarkOutcomeCallable;
                typedef std::function<void(const PartnersClient*, const Model::ModifyClientRemarkRequest&, ModifyClientRemarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClientRemarkAsyncHandler;
                typedef Outcome<Core::Error, Model::RemovePayRelationForClientResponse> RemovePayRelationForClientOutcome;
                typedef std::future<RemovePayRelationForClientOutcome> RemovePayRelationForClientOutcomeCallable;
                typedef std::function<void(const PartnersClient*, const Model::RemovePayRelationForClientRequest&, RemovePayRelationForClientOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemovePayRelationForClientAsyncHandler;



                /**
                 *代理商支付订单接口，支持自付/代付
                 * @param req AgentPayDealsRequest
                 * @return AgentPayDealsOutcome
                 */
                AgentPayDealsOutcome AgentPayDeals(const Model::AgentPayDealsRequest &request);
                void AgentPayDealsAsync(const Model::AgentPayDealsRequest& request, const AgentPayDealsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AgentPayDealsOutcomeCallable AgentPayDealsCallable(const Model::AgentPayDealsRequest& request);

                /**
                 *为合作伙伴提供转账给客户能力。仅支持合作伙伴为自己名下客户转账。
                 * @param req AgentTransferMoneyRequest
                 * @return AgentTransferMoneyOutcome
                 */
                AgentTransferMoneyOutcome AgentTransferMoney(const Model::AgentTransferMoneyRequest &request);
                void AgentTransferMoneyAsync(const Model::AgentTransferMoneyRequest& request, const AgentTransferMoneyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AgentTransferMoneyOutcomeCallable AgentTransferMoneyCallable(const Model::AgentTransferMoneyRequest& request);

                /**
                 *代理商可以审核其名下申请中代客
                 * @param req AuditApplyClientRequest
                 * @return AuditApplyClientOutcome
                 */
                AuditApplyClientOutcome AuditApplyClient(const Model::AuditApplyClientRequest &request);
                void AuditApplyClientAsync(const Model::AuditApplyClientRequest& request, const AuditApplyClientAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AuditApplyClientOutcomeCallable AuditApplyClientCallable(const Model::AuditApplyClientRequest& request);

                /**
                 *合作伙伴为客户创建强代付关系
                 * @param req CreatePayRelationForClientRequest
                 * @return CreatePayRelationForClientOutcome
                 */
                CreatePayRelationForClientOutcome CreatePayRelationForClient(const Model::CreatePayRelationForClientRequest &request);
                void CreatePayRelationForClientAsync(const Model::CreatePayRelationForClientRequest& request, const CreatePayRelationForClientAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePayRelationForClientOutcomeCallable CreatePayRelationForClientCallable(const Model::CreatePayRelationForClientRequest& request);

                /**
                 *查询已审核客户列表
                 * @param req DescribeAgentAuditedClientsRequest
                 * @return DescribeAgentAuditedClientsOutcome
                 */
                DescribeAgentAuditedClientsOutcome DescribeAgentAuditedClients(const Model::DescribeAgentAuditedClientsRequest &request);
                void DescribeAgentAuditedClientsAsync(const Model::DescribeAgentAuditedClientsRequest& request, const DescribeAgentAuditedClientsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgentAuditedClientsOutcomeCallable DescribeAgentAuditedClientsCallable(const Model::DescribeAgentAuditedClientsRequest& request);

                /**
                 *代理商可查询自己及名下代客所有业务明细
                 * @param req DescribeAgentBillsRequest
                 * @return DescribeAgentBillsOutcome
                 */
                DescribeAgentBillsOutcome DescribeAgentBills(const Model::DescribeAgentBillsRequest &request);
                void DescribeAgentBillsAsync(const Model::DescribeAgentBillsRequest& request, const DescribeAgentBillsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgentBillsOutcomeCallable DescribeAgentBillsCallable(const Model::DescribeAgentBillsRequest& request);

                /**
                 *传入代客uin，查客户级别，客户审核状态，客户实名认证状态
                 * @param req DescribeAgentClientGradeRequest
                 * @return DescribeAgentClientGradeOutcome
                 */
                DescribeAgentClientGradeOutcome DescribeAgentClientGrade(const Model::DescribeAgentClientGradeRequest &request);
                void DescribeAgentClientGradeAsync(const Model::DescribeAgentClientGradeRequest& request, const DescribeAgentClientGradeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgentClientGradeOutcomeCallable DescribeAgentClientGradeCallable(const Model::DescribeAgentClientGradeRequest& request);

                /**
                 *代理商可查询自己名下待审核客户列表
                 * @param req DescribeAgentClientsRequest
                 * @return DescribeAgentClientsOutcome
                 */
                DescribeAgentClientsOutcome DescribeAgentClients(const Model::DescribeAgentClientsRequest &request);
                void DescribeAgentClientsAsync(const Model::DescribeAgentClientsRequest& request, const DescribeAgentClientsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgentClientsOutcomeCallable DescribeAgentClientsCallable(const Model::DescribeAgentClientsRequest& request);

                /**
                 *供代理商拉取缓存的全量客户订单
                 * @param req DescribeAgentDealsByCacheRequest
                 * @return DescribeAgentDealsByCacheOutcome
                 */
                DescribeAgentDealsByCacheOutcome DescribeAgentDealsByCache(const Model::DescribeAgentDealsByCacheRequest &request);
                void DescribeAgentDealsByCacheAsync(const Model::DescribeAgentDealsByCacheRequest& request, const DescribeAgentDealsByCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgentDealsByCacheOutcomeCallable DescribeAgentDealsByCacheCallable(const Model::DescribeAgentDealsByCacheRequest& request);

                /**
                 *【该接口将逐步下线，请切换使用升级版本DescribeAgentDealsByCache】代理商拉取缓存的全量客户订单
                 * @param req DescribeAgentDealsCacheRequest
                 * @return DescribeAgentDealsCacheOutcome
                 */
                DescribeAgentDealsCacheOutcome DescribeAgentDealsCache(const Model::DescribeAgentDealsCacheRequest &request);
                void DescribeAgentDealsCacheAsync(const Model::DescribeAgentDealsCacheRequest& request, const DescribeAgentDealsCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgentDealsCacheOutcomeCallable DescribeAgentDealsCacheCallable(const Model::DescribeAgentDealsCacheRequest& request);

                /**
                 *【该接口将逐步下线，请切换使用升级版本DescribeAgentPayDealsV2】可以查询代理商代付的所有订单
                 * @param req DescribeAgentPayDealsRequest
                 * @return DescribeAgentPayDealsOutcome
                 */
                DescribeAgentPayDealsOutcome DescribeAgentPayDeals(const Model::DescribeAgentPayDealsRequest &request);
                void DescribeAgentPayDealsAsync(const Model::DescribeAgentPayDealsRequest& request, const DescribeAgentPayDealsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgentPayDealsOutcomeCallable DescribeAgentPayDealsCallable(const Model::DescribeAgentPayDealsRequest& request);

                /**
                 *可以查询代理商代付的所有订单
                 * @param req DescribeAgentPayDealsV2Request
                 * @return DescribeAgentPayDealsV2Outcome
                 */
                DescribeAgentPayDealsV2Outcome DescribeAgentPayDealsV2(const Model::DescribeAgentPayDealsV2Request &request);
                void DescribeAgentPayDealsV2Async(const Model::DescribeAgentPayDealsV2Request& request, const DescribeAgentPayDealsV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgentPayDealsV2OutcomeCallable DescribeAgentPayDealsV2Callable(const Model::DescribeAgentPayDealsV2Request& request);

                /**
                 *【该接口将逐步下线，请切换使用升级版本DescribeAgentSelfPayDealsV2】可以查询代理商下指定客户的自付订单
                 * @param req DescribeAgentSelfPayDealsRequest
                 * @return DescribeAgentSelfPayDealsOutcome
                 */
                DescribeAgentSelfPayDealsOutcome DescribeAgentSelfPayDeals(const Model::DescribeAgentSelfPayDealsRequest &request);
                void DescribeAgentSelfPayDealsAsync(const Model::DescribeAgentSelfPayDealsRequest& request, const DescribeAgentSelfPayDealsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgentSelfPayDealsOutcomeCallable DescribeAgentSelfPayDealsCallable(const Model::DescribeAgentSelfPayDealsRequest& request);

                /**
                 *查询代理商名下指定代客的自付订单
                 * @param req DescribeAgentSelfPayDealsV2Request
                 * @return DescribeAgentSelfPayDealsV2Outcome
                 */
                DescribeAgentSelfPayDealsV2Outcome DescribeAgentSelfPayDealsV2(const Model::DescribeAgentSelfPayDealsV2Request &request);
                void DescribeAgentSelfPayDealsV2Async(const Model::DescribeAgentSelfPayDealsV2Request& request, const DescribeAgentSelfPayDealsV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgentSelfPayDealsV2OutcomeCallable DescribeAgentSelfPayDealsV2Callable(const Model::DescribeAgentSelfPayDealsV2Request& request);

                /**
                 *【该接口将逐步下线，请切换使用升级版本DescribeClientBalanceNew】为合作伙伴提供查询客户余额能力。调用者必须是合作伙伴，只能查询自己名下客户余额.
                 * @param req DescribeClientBalanceRequest
                 * @return DescribeClientBalanceOutcome
                 */
                DescribeClientBalanceOutcome DescribeClientBalance(const Model::DescribeClientBalanceRequest &request);
                void DescribeClientBalanceAsync(const Model::DescribeClientBalanceRequest& request, const DescribeClientBalanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClientBalanceOutcomeCallable DescribeClientBalanceCallable(const Model::DescribeClientBalanceRequest& request);

                /**
                 *为合作伙伴提供查询客户余额能力。调用者必须是合作伙伴，只能查询自己名下客户余额
                 * @param req DescribeClientBalanceNewRequest
                 * @return DescribeClientBalanceNewOutcome
                 */
                DescribeClientBalanceNewOutcome DescribeClientBalanceNew(const Model::DescribeClientBalanceNewRequest &request);
                void DescribeClientBalanceNewAsync(const Model::DescribeClientBalanceNewRequest& request, const DescribeClientBalanceNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClientBalanceNewOutcomeCallable DescribeClientBalanceNewCallable(const Model::DescribeClientBalanceNewRequest& request);

                /**
                 *代理商可查询自己名下全部返佣信息
                 * @param req DescribeRebateInfosRequest
                 * @return DescribeRebateInfosOutcome
                 */
                DescribeRebateInfosOutcome DescribeRebateInfos(const Model::DescribeRebateInfosRequest &request);
                void DescribeRebateInfosAsync(const Model::DescribeRebateInfosRequest& request, const DescribeRebateInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRebateInfosOutcomeCallable DescribeRebateInfosCallable(const Model::DescribeRebateInfosRequest& request);

                /**
                 *代理商查询名下业务员列表信息
                 * @param req DescribeSalesmansRequest
                 * @return DescribeSalesmansOutcome
                 */
                DescribeSalesmansOutcome DescribeSalesmans(const Model::DescribeSalesmansRequest &request);
                void DescribeSalesmansAsync(const Model::DescribeSalesmansRequest& request, const DescribeSalesmansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSalesmansOutcomeCallable DescribeSalesmansCallable(const Model::DescribeSalesmansRequest& request);

                /**
                 *代理商名下客户解绑记录查询接口
                 * @param req DescribeUnbindClientListRequest
                 * @return DescribeUnbindClientListOutcome
                 */
                DescribeUnbindClientListOutcome DescribeUnbindClientList(const Model::DescribeUnbindClientListRequest &request);
                void DescribeUnbindClientListAsync(const Model::DescribeUnbindClientListRequest& request, const DescribeUnbindClientListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUnbindClientListOutcomeCallable DescribeUnbindClientListCallable(const Model::DescribeUnbindClientListRequest& request);

                /**
                 *代理商可以对名下客户添加备注、修改备注
                 * @param req ModifyClientRemarkRequest
                 * @return ModifyClientRemarkOutcome
                 */
                ModifyClientRemarkOutcome ModifyClientRemark(const Model::ModifyClientRemarkRequest &request);
                void ModifyClientRemarkAsync(const Model::ModifyClientRemarkRequest& request, const ModifyClientRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClientRemarkOutcomeCallable ModifyClientRemarkCallable(const Model::ModifyClientRemarkRequest& request);

                /**
                 *合作伙伴为客户消除强代付关系
                 * @param req RemovePayRelationForClientRequest
                 * @return RemovePayRelationForClientOutcome
                 */
                RemovePayRelationForClientOutcome RemovePayRelationForClient(const Model::RemovePayRelationForClientRequest &request);
                void RemovePayRelationForClientAsync(const Model::RemovePayRelationForClientRequest& request, const RemovePayRelationForClientAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemovePayRelationForClientOutcomeCallable RemovePayRelationForClientCallable(const Model::RemovePayRelationForClientRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_PARTNERS_V20180321_PARTNERSCLIENT_H_
