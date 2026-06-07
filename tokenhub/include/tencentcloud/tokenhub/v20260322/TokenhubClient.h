/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_TOKENHUBCLIENT_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_TOKENHUBCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tokenhub/v20260322/model/CreateTokenPlanApiKeysRequest.h>
#include <tencentcloud/tokenhub/v20260322/model/CreateTokenPlanApiKeysResponse.h>
#include <tencentcloud/tokenhub/v20260322/model/CreateTokenPlanTeamOrderAndBuyRequest.h>
#include <tencentcloud/tokenhub/v20260322/model/CreateTokenPlanTeamOrderAndBuyResponse.h>
#include <tencentcloud/tokenhub/v20260322/model/DeleteTokenPlanApiKeyRequest.h>
#include <tencentcloud/tokenhub/v20260322/model/DeleteTokenPlanApiKeyResponse.h>
#include <tencentcloud/tokenhub/v20260322/model/DescribeApiKeyRequest.h>
#include <tencentcloud/tokenhub/v20260322/model/DescribeApiKeyResponse.h>
#include <tencentcloud/tokenhub/v20260322/model/DescribeApiKeyListRequest.h>
#include <tencentcloud/tokenhub/v20260322/model/DescribeApiKeyListResponse.h>
#include <tencentcloud/tokenhub/v20260322/model/DescribeModelListRequest.h>
#include <tencentcloud/tokenhub/v20260322/model/DescribeModelListResponse.h>
#include <tencentcloud/tokenhub/v20260322/model/DescribeTokenPlanRequest.h>
#include <tencentcloud/tokenhub/v20260322/model/DescribeTokenPlanResponse.h>
#include <tencentcloud/tokenhub/v20260322/model/DescribeTokenPlanApiKeyRequest.h>
#include <tencentcloud/tokenhub/v20260322/model/DescribeTokenPlanApiKeyResponse.h>
#include <tencentcloud/tokenhub/v20260322/model/DescribeTokenPlanApiKeyListRequest.h>
#include <tencentcloud/tokenhub/v20260322/model/DescribeTokenPlanApiKeyListResponse.h>
#include <tencentcloud/tokenhub/v20260322/model/DescribeTokenPlanApiKeySecretRequest.h>
#include <tencentcloud/tokenhub/v20260322/model/DescribeTokenPlanApiKeySecretResponse.h>
#include <tencentcloud/tokenhub/v20260322/model/DescribeTokenPlanApiKeyUsageDetailRequest.h>
#include <tencentcloud/tokenhub/v20260322/model/DescribeTokenPlanApiKeyUsageDetailResponse.h>
#include <tencentcloud/tokenhub/v20260322/model/DescribeTokenPlanListRequest.h>
#include <tencentcloud/tokenhub/v20260322/model/DescribeTokenPlanListResponse.h>
#include <tencentcloud/tokenhub/v20260322/model/DescribeUsageRankListRequest.h>
#include <tencentcloud/tokenhub/v20260322/model/DescribeUsageRankListResponse.h>
#include <tencentcloud/tokenhub/v20260322/model/ModifyTokenPlanApiKeyRequest.h>
#include <tencentcloud/tokenhub/v20260322/model/ModifyTokenPlanApiKeyResponse.h>
#include <tencentcloud/tokenhub/v20260322/model/ModifyTokenPlanApiKeySecretRequest.h>
#include <tencentcloud/tokenhub/v20260322/model/ModifyTokenPlanApiKeySecretResponse.h>
#include <tencentcloud/tokenhub/v20260322/model/RenewTokenPlanTeamOrderRequest.h>
#include <tencentcloud/tokenhub/v20260322/model/RenewTokenPlanTeamOrderResponse.h>
#include <tencentcloud/tokenhub/v20260322/model/UpgradeTokenPlanTeamOrderRequest.h>
#include <tencentcloud/tokenhub/v20260322/model/UpgradeTokenPlanTeamOrderResponse.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            class TokenhubClient : public AbstractClient
            {
            public:
                TokenhubClient(const Credential &credential, const std::string &region);
                TokenhubClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateTokenPlanApiKeysResponse> CreateTokenPlanApiKeysOutcome;
                typedef std::future<CreateTokenPlanApiKeysOutcome> CreateTokenPlanApiKeysOutcomeCallable;
                typedef std::function<void(const TokenhubClient*, const Model::CreateTokenPlanApiKeysRequest&, CreateTokenPlanApiKeysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTokenPlanApiKeysAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTokenPlanTeamOrderAndBuyResponse> CreateTokenPlanTeamOrderAndBuyOutcome;
                typedef std::future<CreateTokenPlanTeamOrderAndBuyOutcome> CreateTokenPlanTeamOrderAndBuyOutcomeCallable;
                typedef std::function<void(const TokenhubClient*, const Model::CreateTokenPlanTeamOrderAndBuyRequest&, CreateTokenPlanTeamOrderAndBuyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTokenPlanTeamOrderAndBuyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTokenPlanApiKeyResponse> DeleteTokenPlanApiKeyOutcome;
                typedef std::future<DeleteTokenPlanApiKeyOutcome> DeleteTokenPlanApiKeyOutcomeCallable;
                typedef std::function<void(const TokenhubClient*, const Model::DeleteTokenPlanApiKeyRequest&, DeleteTokenPlanApiKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTokenPlanApiKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApiKeyResponse> DescribeApiKeyOutcome;
                typedef std::future<DescribeApiKeyOutcome> DescribeApiKeyOutcomeCallable;
                typedef std::function<void(const TokenhubClient*, const Model::DescribeApiKeyRequest&, DescribeApiKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApiKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApiKeyListResponse> DescribeApiKeyListOutcome;
                typedef std::future<DescribeApiKeyListOutcome> DescribeApiKeyListOutcomeCallable;
                typedef std::function<void(const TokenhubClient*, const Model::DescribeApiKeyListRequest&, DescribeApiKeyListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApiKeyListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeModelListResponse> DescribeModelListOutcome;
                typedef std::future<DescribeModelListOutcome> DescribeModelListOutcomeCallable;
                typedef std::function<void(const TokenhubClient*, const Model::DescribeModelListRequest&, DescribeModelListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModelListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTokenPlanResponse> DescribeTokenPlanOutcome;
                typedef std::future<DescribeTokenPlanOutcome> DescribeTokenPlanOutcomeCallable;
                typedef std::function<void(const TokenhubClient*, const Model::DescribeTokenPlanRequest&, DescribeTokenPlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTokenPlanAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTokenPlanApiKeyResponse> DescribeTokenPlanApiKeyOutcome;
                typedef std::future<DescribeTokenPlanApiKeyOutcome> DescribeTokenPlanApiKeyOutcomeCallable;
                typedef std::function<void(const TokenhubClient*, const Model::DescribeTokenPlanApiKeyRequest&, DescribeTokenPlanApiKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTokenPlanApiKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTokenPlanApiKeyListResponse> DescribeTokenPlanApiKeyListOutcome;
                typedef std::future<DescribeTokenPlanApiKeyListOutcome> DescribeTokenPlanApiKeyListOutcomeCallable;
                typedef std::function<void(const TokenhubClient*, const Model::DescribeTokenPlanApiKeyListRequest&, DescribeTokenPlanApiKeyListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTokenPlanApiKeyListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTokenPlanApiKeySecretResponse> DescribeTokenPlanApiKeySecretOutcome;
                typedef std::future<DescribeTokenPlanApiKeySecretOutcome> DescribeTokenPlanApiKeySecretOutcomeCallable;
                typedef std::function<void(const TokenhubClient*, const Model::DescribeTokenPlanApiKeySecretRequest&, DescribeTokenPlanApiKeySecretOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTokenPlanApiKeySecretAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTokenPlanApiKeyUsageDetailResponse> DescribeTokenPlanApiKeyUsageDetailOutcome;
                typedef std::future<DescribeTokenPlanApiKeyUsageDetailOutcome> DescribeTokenPlanApiKeyUsageDetailOutcomeCallable;
                typedef std::function<void(const TokenhubClient*, const Model::DescribeTokenPlanApiKeyUsageDetailRequest&, DescribeTokenPlanApiKeyUsageDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTokenPlanApiKeyUsageDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTokenPlanListResponse> DescribeTokenPlanListOutcome;
                typedef std::future<DescribeTokenPlanListOutcome> DescribeTokenPlanListOutcomeCallable;
                typedef std::function<void(const TokenhubClient*, const Model::DescribeTokenPlanListRequest&, DescribeTokenPlanListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTokenPlanListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUsageRankListResponse> DescribeUsageRankListOutcome;
                typedef std::future<DescribeUsageRankListOutcome> DescribeUsageRankListOutcomeCallable;
                typedef std::function<void(const TokenhubClient*, const Model::DescribeUsageRankListRequest&, DescribeUsageRankListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUsageRankListAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTokenPlanApiKeyResponse> ModifyTokenPlanApiKeyOutcome;
                typedef std::future<ModifyTokenPlanApiKeyOutcome> ModifyTokenPlanApiKeyOutcomeCallable;
                typedef std::function<void(const TokenhubClient*, const Model::ModifyTokenPlanApiKeyRequest&, ModifyTokenPlanApiKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTokenPlanApiKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTokenPlanApiKeySecretResponse> ModifyTokenPlanApiKeySecretOutcome;
                typedef std::future<ModifyTokenPlanApiKeySecretOutcome> ModifyTokenPlanApiKeySecretOutcomeCallable;
                typedef std::function<void(const TokenhubClient*, const Model::ModifyTokenPlanApiKeySecretRequest&, ModifyTokenPlanApiKeySecretOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTokenPlanApiKeySecretAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewTokenPlanTeamOrderResponse> RenewTokenPlanTeamOrderOutcome;
                typedef std::future<RenewTokenPlanTeamOrderOutcome> RenewTokenPlanTeamOrderOutcomeCallable;
                typedef std::function<void(const TokenhubClient*, const Model::RenewTokenPlanTeamOrderRequest&, RenewTokenPlanTeamOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewTokenPlanTeamOrderAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeTokenPlanTeamOrderResponse> UpgradeTokenPlanTeamOrderOutcome;
                typedef std::future<UpgradeTokenPlanTeamOrderOutcome> UpgradeTokenPlanTeamOrderOutcomeCallable;
                typedef std::function<void(const TokenhubClient*, const Model::UpgradeTokenPlanTeamOrderRequest&, UpgradeTokenPlanTeamOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeTokenPlanTeamOrderAsyncHandler;



                /**
                 *批量创建 TokenPlan APIKey。

传入名称前缀和数量，自动按 {ApiKeyName}-{序号} 格式生成名称（如 aaa-1, aaa-2）。允许同名。支持部分成功，最多 100 条。
                 * @param req CreateTokenPlanApiKeysRequest
                 * @return CreateTokenPlanApiKeysOutcome
                 */
                CreateTokenPlanApiKeysOutcome CreateTokenPlanApiKeys(const Model::CreateTokenPlanApiKeysRequest &request);
                void CreateTokenPlanApiKeysAsync(const Model::CreateTokenPlanApiKeysRequest& request, const CreateTokenPlanApiKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTokenPlanApiKeysOutcomeCallable CreateTokenPlanApiKeysCallable(const Model::CreateTokenPlanApiKeysRequest& request);

                /**
                 *购买套餐。

发起 TokenPlan 套餐下单并完成支付，成功后返回大订单 ID 及关联的子订单、资源信息。
                 * @param req CreateTokenPlanTeamOrderAndBuyRequest
                 * @return CreateTokenPlanTeamOrderAndBuyOutcome
                 */
                CreateTokenPlanTeamOrderAndBuyOutcome CreateTokenPlanTeamOrderAndBuy(const Model::CreateTokenPlanTeamOrderAndBuyRequest &request);
                void CreateTokenPlanTeamOrderAndBuyAsync(const Model::CreateTokenPlanTeamOrderAndBuyRequest& request, const CreateTokenPlanTeamOrderAndBuyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTokenPlanTeamOrderAndBuyOutcomeCallable CreateTokenPlanTeamOrderAndBuyCallable(const Model::CreateTokenPlanTeamOrderAndBuyRequest& request);

                /**
                 *删除 TokenPlan APIKey。

同时删除额度中心子额度包并通知网关清除缓存。
                 * @param req DeleteTokenPlanApiKeyRequest
                 * @return DeleteTokenPlanApiKeyOutcome
                 */
                DeleteTokenPlanApiKeyOutcome DeleteTokenPlanApiKey(const Model::DeleteTokenPlanApiKeyRequest &request);
                void DeleteTokenPlanApiKeyAsync(const Model::DeleteTokenPlanApiKeyRequest& request, const DeleteTokenPlanApiKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTokenPlanApiKeyOutcomeCallable DeleteTokenPlanApiKeyCallable(const Model::DeleteTokenPlanApiKeyRequest& request);

                /**
                 *根据 API 密钥 ID 或密钥值查询 API 密钥详情，返回明文密钥。ApiKeyId 和 ApiKey 至少需传入其一，优先使用 ApiKeyId。
                 * @param req DescribeApiKeyRequest
                 * @return DescribeApiKeyOutcome
                 */
                DescribeApiKeyOutcome DescribeApiKey(const Model::DescribeApiKeyRequest &request);
                void DescribeApiKeyAsync(const Model::DescribeApiKeyRequest& request, const DescribeApiKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApiKeyOutcomeCallable DescribeApiKeyCallable(const Model::DescribeApiKeyRequest& request);

                /**
                 *查询 API 密钥列表。

查询当前用户的 API 密钥列表，密钥值脱敏展示。支持分页、过滤和排序。
                 * @param req DescribeApiKeyListRequest
                 * @return DescribeApiKeyListOutcome
                 */
                DescribeApiKeyListOutcome DescribeApiKeyList(const Model::DescribeApiKeyListRequest &request);
                void DescribeApiKeyListAsync(const Model::DescribeApiKeyListRequest& request, const DescribeApiKeyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApiKeyListOutcomeCallable DescribeApiKeyListCallable(const Model::DescribeApiKeyListRequest& request);

                /**
                 *查询模型列表。

支持按模型 ID、模型名称、模型能力等条件筛选，支持分页和排序。
                 * @param req DescribeModelListRequest
                 * @return DescribeModelListOutcome
                 */
                DescribeModelListOutcome DescribeModelList(const Model::DescribeModelListRequest &request);
                void DescribeModelListAsync(const Model::DescribeModelListRequest& request, const DescribeModelListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModelListOutcomeCallable DescribeModelListCallable(const Model::DescribeModelListRequest& request);

                /**
                 *查询 TokenPlan 套餐详情。

返回套餐基本信息及额度中心主额度包余量。
                 * @param req DescribeTokenPlanRequest
                 * @return DescribeTokenPlanOutcome
                 */
                DescribeTokenPlanOutcome DescribeTokenPlan(const Model::DescribeTokenPlanRequest &request);
                void DescribeTokenPlanAsync(const Model::DescribeTokenPlanRequest& request, const DescribeTokenPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTokenPlanOutcomeCallable DescribeTokenPlanCallable(const Model::DescribeTokenPlanRequest& request);

                /**
                 *查询 TokenPlan APIKey 详情。

返回 APIKey 完整信息（含明文密钥）及子额度包余量。
                 * @param req DescribeTokenPlanApiKeyRequest
                 * @return DescribeTokenPlanApiKeyOutcome
                 */
                DescribeTokenPlanApiKeyOutcome DescribeTokenPlanApiKey(const Model::DescribeTokenPlanApiKeyRequest &request);
                void DescribeTokenPlanApiKeyAsync(const Model::DescribeTokenPlanApiKeyRequest& request, const DescribeTokenPlanApiKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTokenPlanApiKeyOutcomeCallable DescribeTokenPlanApiKeyCallable(const Model::DescribeTokenPlanApiKeyRequest& request);

                /**
                 *查询 TokenPlan APIKey 列表。

返回指定套餐下的 APIKey 列表，密钥已脱敏。主账号可查看全部，子账号仅可查看自己创建的。
                 * @param req DescribeTokenPlanApiKeyListRequest
                 * @return DescribeTokenPlanApiKeyListOutcome
                 */
                DescribeTokenPlanApiKeyListOutcome DescribeTokenPlanApiKeyList(const Model::DescribeTokenPlanApiKeyListRequest &request);
                void DescribeTokenPlanApiKeyListAsync(const Model::DescribeTokenPlanApiKeyListRequest& request, const DescribeTokenPlanApiKeyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTokenPlanApiKeyListOutcomeCallable DescribeTokenPlanApiKeyListCallable(const Model::DescribeTokenPlanApiKeyListRequest& request);

                /**
                 *查询 TokenPlan APIKey 密钥（明文）。

返回指定 APIKey 的明文密钥值，请妥善保管。
                 * @param req DescribeTokenPlanApiKeySecretRequest
                 * @return DescribeTokenPlanApiKeySecretOutcome
                 */
                DescribeTokenPlanApiKeySecretOutcome DescribeTokenPlanApiKeySecret(const Model::DescribeTokenPlanApiKeySecretRequest &request);
                void DescribeTokenPlanApiKeySecretAsync(const Model::DescribeTokenPlanApiKeySecretRequest& request, const DescribeTokenPlanApiKeySecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTokenPlanApiKeySecretOutcomeCallable DescribeTokenPlanApiKeySecretCallable(const Model::DescribeTokenPlanApiKeySecretRequest& request);

                /**
                 *查询 TokenPlan APIKey 调用明细。

从 CLS 日志服务查询套餐下的调用明细，按 pkg_id 过滤，支持游标分页。
                 * @param req DescribeTokenPlanApiKeyUsageDetailRequest
                 * @return DescribeTokenPlanApiKeyUsageDetailOutcome
                 */
                DescribeTokenPlanApiKeyUsageDetailOutcome DescribeTokenPlanApiKeyUsageDetail(const Model::DescribeTokenPlanApiKeyUsageDetailRequest &request);
                void DescribeTokenPlanApiKeyUsageDetailAsync(const Model::DescribeTokenPlanApiKeyUsageDetailRequest& request, const DescribeTokenPlanApiKeyUsageDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTokenPlanApiKeyUsageDetailOutcomeCallable DescribeTokenPlanApiKeyUsageDetailCallable(const Model::DescribeTokenPlanApiKeyUsageDetailRequest& request);

                /**
                 *查询 TokenPlan 套餐列表。

支持分页、过滤和排序。主账号可查看全部，子账号仅可查看自己创建的。返回结果包含每个套餐关联的额度中心主额度包详情。
                 * @param req DescribeTokenPlanListRequest
                 * @return DescribeTokenPlanListOutcome
                 */
                DescribeTokenPlanListOutcome DescribeTokenPlanList(const Model::DescribeTokenPlanListRequest &request);
                void DescribeTokenPlanListAsync(const Model::DescribeTokenPlanListRequest& request, const DescribeTokenPlanListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTokenPlanListOutcomeCallable DescribeTokenPlanListCallable(const Model::DescribeTokenPlanListRequest& request);

                /**
                 *查询用量排行列表。

按 apikey、endpoint、model 三个维度统计指定时间窗内的用量排行，返回顶部数据卡所需的 PageStats/TotalStats、左侧 Top 列表（含每对象整段累计值）、右侧色块趋势图所需的逐点曲线。前端通过 Offset 翻页、ShowAll 切换 CSV 全量导出模式。

MetricType 字段用于切换指标族，本期支持 tokens；接口预留以支持后续指标族扩展。响应回显 MetricType 与 MetricKeys（实际参与渲染的 metric key 列表，顺序固定 [Total, Input, Output]），前端按此渲染顶部数据卡与趋势图，无需硬编码 key 名。
                 * @param req DescribeUsageRankListRequest
                 * @return DescribeUsageRankListOutcome
                 */
                DescribeUsageRankListOutcome DescribeUsageRankList(const Model::DescribeUsageRankListRequest &request);
                void DescribeUsageRankListAsync(const Model::DescribeUsageRankListRequest& request, const DescribeUsageRankListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUsageRankListOutcomeCallable DescribeUsageRankListCallable(const Model::DescribeUsageRankListRequest& request);

                /**
                 *修改 TokenPlan APIKey 配置（网关关注字段）。

修改后自动通知网关更新缓存并同步额度中心。
                 * @param req ModifyTokenPlanApiKeyRequest
                 * @return ModifyTokenPlanApiKeyOutcome
                 */
                ModifyTokenPlanApiKeyOutcome ModifyTokenPlanApiKey(const Model::ModifyTokenPlanApiKeyRequest &request);
                void ModifyTokenPlanApiKeyAsync(const Model::ModifyTokenPlanApiKeyRequest& request, const ModifyTokenPlanApiKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTokenPlanApiKeyOutcomeCallable ModifyTokenPlanApiKeyCallable(const Model::ModifyTokenPlanApiKeyRequest& request);

                /**
                 *重置 TokenPlan APIKey 密钥。

重新生成密钥值，密钥版本号递增，旧密钥立即失效。APIKey ID 不变。重置后需通过 DescribeTokenPlanApiKeySecret 查询新密钥。
                 * @param req ModifyTokenPlanApiKeySecretRequest
                 * @return ModifyTokenPlanApiKeySecretOutcome
                 */
                ModifyTokenPlanApiKeySecretOutcome ModifyTokenPlanApiKeySecret(const Model::ModifyTokenPlanApiKeySecretRequest &request);
                void ModifyTokenPlanApiKeySecretAsync(const Model::ModifyTokenPlanApiKeySecretRequest& request, const ModifyTokenPlanApiKeySecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTokenPlanApiKeySecretOutcomeCallable ModifyTokenPlanApiKeySecretCallable(const Model::ModifyTokenPlanApiKeySecretRequest& request);

                /**
                 *续费套餐。

对已有的 TokenPlan 套餐发起续费下单并完成支付，成功后返回大订单 ID 及关联的子订单、资源信息。
                 * @param req RenewTokenPlanTeamOrderRequest
                 * @return RenewTokenPlanTeamOrderOutcome
                 */
                RenewTokenPlanTeamOrderOutcome RenewTokenPlanTeamOrder(const Model::RenewTokenPlanTeamOrderRequest &request);
                void RenewTokenPlanTeamOrderAsync(const Model::RenewTokenPlanTeamOrderRequest& request, const RenewTokenPlanTeamOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewTokenPlanTeamOrderOutcomeCallable RenewTokenPlanTeamOrderCallable(const Model::RenewTokenPlanTeamOrderRequest& request);

                /**
                 *升配套餐。

对已有的 TokenPlan 套餐发起升配下单并完成支付，扩容积分或 Token 额度，成功后返回大订单 ID 及关联的子订单、资源信息。新额度必须大于当前额度。
                 * @param req UpgradeTokenPlanTeamOrderRequest
                 * @return UpgradeTokenPlanTeamOrderOutcome
                 */
                UpgradeTokenPlanTeamOrderOutcome UpgradeTokenPlanTeamOrder(const Model::UpgradeTokenPlanTeamOrderRequest &request);
                void UpgradeTokenPlanTeamOrderAsync(const Model::UpgradeTokenPlanTeamOrderRequest& request, const UpgradeTokenPlanTeamOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeTokenPlanTeamOrderOutcomeCallable UpgradeTokenPlanTeamOrderCallable(const Model::UpgradeTokenPlanTeamOrderRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_TOKENHUBCLIENT_H_
