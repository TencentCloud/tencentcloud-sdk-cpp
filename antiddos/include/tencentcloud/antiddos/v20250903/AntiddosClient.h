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

#ifndef TENCENTCLOUD_ANTIDDOS_V20250903_ANTIDDOSCLIENT_H_
#define TENCENTCLOUD_ANTIDDOS_V20250903_ANTIDDOSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/antiddos/v20250903/model/CreateProtectionRequest.h>
#include <tencentcloud/antiddos/v20250903/model/CreateProtectionResponse.h>
#include <tencentcloud/antiddos/v20250903/model/DeleteProtectionRequest.h>
#include <tencentcloud/antiddos/v20250903/model/DeleteProtectionResponse.h>
#include <tencentcloud/antiddos/v20250903/model/DescribeDDoSBlockRecordsRequest.h>
#include <tencentcloud/antiddos/v20250903/model/DescribeDDoSBlockRecordsResponse.h>
#include <tencentcloud/antiddos/v20250903/model/DescribeDDoSProtectionPolicyRequest.h>
#include <tencentcloud/antiddos/v20250903/model/DescribeDDoSProtectionPolicyResponse.h>
#include <tencentcloud/antiddos/v20250903/model/DescribeProtectionResourcesRequest.h>
#include <tencentcloud/antiddos/v20250903/model/DescribeProtectionResourcesResponse.h>
#include <tencentcloud/antiddos/v20250903/model/DescribeProtectionsRequest.h>
#include <tencentcloud/antiddos/v20250903/model/DescribeProtectionsResponse.h>
#include <tencentcloud/antiddos/v20250903/model/DescribeResourceProtectionsRequest.h>
#include <tencentcloud/antiddos/v20250903/model/DescribeResourceProtectionsResponse.h>
#include <tencentcloud/antiddos/v20250903/model/ModifyDDoSProtectionPolicyRequest.h>
#include <tencentcloud/antiddos/v20250903/model/ModifyDDoSProtectionPolicyResponse.h>
#include <tencentcloud/antiddos/v20250903/model/ModifyProtectionRequest.h>
#include <tencentcloud/antiddos/v20250903/model/ModifyProtectionResponse.h>
#include <tencentcloud/antiddos/v20250903/model/ModifyProtectionResourceRequest.h>
#include <tencentcloud/antiddos/v20250903/model/ModifyProtectionResourceResponse.h>
#include <tencentcloud/antiddos/v20250903/model/UnblockResourcesRequest.h>
#include <tencentcloud/antiddos/v20250903/model/UnblockResourcesResponse.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20250903
        {
            class AntiddosClient : public AbstractClient
            {
            public:
                AntiddosClient(const Credential &credential, const std::string &region);
                AntiddosClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateProtectionResponse> CreateProtectionOutcome;
                typedef std::future<CreateProtectionOutcome> CreateProtectionOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::CreateProtectionRequest&, CreateProtectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProtectionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteProtectionResponse> DeleteProtectionOutcome;
                typedef std::future<DeleteProtectionOutcome> DeleteProtectionOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DeleteProtectionRequest&, DeleteProtectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProtectionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDDoSBlockRecordsResponse> DescribeDDoSBlockRecordsOutcome;
                typedef std::future<DescribeDDoSBlockRecordsOutcome> DescribeDDoSBlockRecordsOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeDDoSBlockRecordsRequest&, DescribeDDoSBlockRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDoSBlockRecordsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDDoSProtectionPolicyResponse> DescribeDDoSProtectionPolicyOutcome;
                typedef std::future<DescribeDDoSProtectionPolicyOutcome> DescribeDDoSProtectionPolicyOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeDDoSProtectionPolicyRequest&, DescribeDDoSProtectionPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDoSProtectionPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProtectionResourcesResponse> DescribeProtectionResourcesOutcome;
                typedef std::future<DescribeProtectionResourcesOutcome> DescribeProtectionResourcesOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeProtectionResourcesRequest&, DescribeProtectionResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProtectionResourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProtectionsResponse> DescribeProtectionsOutcome;
                typedef std::future<DescribeProtectionsOutcome> DescribeProtectionsOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeProtectionsRequest&, DescribeProtectionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProtectionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourceProtectionsResponse> DescribeResourceProtectionsOutcome;
                typedef std::future<DescribeResourceProtectionsOutcome> DescribeResourceProtectionsOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeResourceProtectionsRequest&, DescribeResourceProtectionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceProtectionsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDDoSProtectionPolicyResponse> ModifyDDoSProtectionPolicyOutcome;
                typedef std::future<ModifyDDoSProtectionPolicyOutcome> ModifyDDoSProtectionPolicyOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::ModifyDDoSProtectionPolicyRequest&, ModifyDDoSProtectionPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDDoSProtectionPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyProtectionResponse> ModifyProtectionOutcome;
                typedef std::future<ModifyProtectionOutcome> ModifyProtectionOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::ModifyProtectionRequest&, ModifyProtectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyProtectionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyProtectionResourceResponse> ModifyProtectionResourceOutcome;
                typedef std::future<ModifyProtectionResourceOutcome> ModifyProtectionResourceOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::ModifyProtectionResourceRequest&, ModifyProtectionResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyProtectionResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::UnblockResourcesResponse> UnblockResourcesOutcome;
                typedef std::future<UnblockResourcesOutcome> UnblockResourcesOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::UnblockResourcesRequest&, UnblockResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnblockResourcesAsyncHandler;



                /**
                 *<p>创建 DDoS 高防服务防护实例。</p>
<p>防护实例是高防服务下承载防护策略与防护资源的基本单元。创建后，您可以在实例中配置防护策略，并绑定需要防护的云资源。</p>
<p><strong>前提条件：</strong>当前腾讯云主账号已订阅 DDoS 高防套餐，具体操作请参见 <a href="https://cloud.tencent.com/document/product/297/137989">购买指引</a>。</p>
                 * @param req CreateProtectionRequest
                 * @return CreateProtectionOutcome
                 */
                CreateProtectionOutcome CreateProtection(const Model::CreateProtectionRequest &request);
                void CreateProtectionAsync(const Model::CreateProtectionRequest& request, const CreateProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProtectionOutcomeCallable CreateProtectionCallable(const Model::CreateProtectionRequest& request);

                /**
                 *<p>删除防护实例。</p>
<p>删除后，该实例及其绑定的防护策略将不再生效。请确保实例中没有正在使用的防护资源，或已提前将防护资源换绑至其他实例。</p>
                 * @param req DeleteProtectionRequest
                 * @return DeleteProtectionOutcome
                 */
                DeleteProtectionOutcome DeleteProtection(const Model::DeleteProtectionRequest &request);
                void DeleteProtectionAsync(const Model::DeleteProtectionRequest& request, const DeleteProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteProtectionOutcomeCallable DeleteProtectionCallable(const Model::DeleteProtectionRequest& request);

                /**
                 *查询封堵解封记录和解封配额信息。
                 * @param req DescribeDDoSBlockRecordsRequest
                 * @return DescribeDDoSBlockRecordsOutcome
                 */
                DescribeDDoSBlockRecordsOutcome DescribeDDoSBlockRecords(const Model::DescribeDDoSBlockRecordsRequest &request);
                void DescribeDDoSBlockRecordsAsync(const Model::DescribeDDoSBlockRecordsRequest& request, const DescribeDDoSBlockRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDDoSBlockRecordsOutcomeCallable DescribeDDoSBlockRecordsCallable(const Model::DescribeDDoSBlockRecordsRequest& request);

                /**
                 *<p>按防护实例 ID 查询该实例下的 L3/4 DDoS 防护策略详情。</p>
                 * @param req DescribeDDoSProtectionPolicyRequest
                 * @return DescribeDDoSProtectionPolicyOutcome
                 */
                DescribeDDoSProtectionPolicyOutcome DescribeDDoSProtectionPolicy(const Model::DescribeDDoSProtectionPolicyRequest &request);
                void DescribeDDoSProtectionPolicyAsync(const Model::DescribeDDoSProtectionPolicyRequest& request, const DescribeDDoSProtectionPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDDoSProtectionPolicyOutcomeCallable DescribeDDoSProtectionPolicyCallable(const Model::DescribeDDoSProtectionPolicyRequest& request);

                /**
                 *<p>按防护实例 ID 查询该实例下绑定的防护资源，支持分页与按资源类型过滤。</p>
                 * @param req DescribeProtectionResourcesRequest
                 * @return DescribeProtectionResourcesOutcome
                 */
                DescribeProtectionResourcesOutcome DescribeProtectionResources(const Model::DescribeProtectionResourcesRequest &request);
                void DescribeProtectionResourcesAsync(const Model::DescribeProtectionResourcesRequest& request, const DescribeProtectionResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProtectionResourcesOutcomeCallable DescribeProtectionResourcesCallable(const Model::DescribeProtectionResourcesRequest& request);

                /**
                 *<p>按过滤条件查询当前账号下有权限访问的 DDoS 高防服务防护实例，支持分页返回。</p>
                 * @param req DescribeProtectionsRequest
                 * @return DescribeProtectionsOutcome
                 */
                DescribeProtectionsOutcome DescribeProtections(const Model::DescribeProtectionsRequest &request);
                void DescribeProtectionsAsync(const Model::DescribeProtectionsRequest& request, const DescribeProtectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProtectionsOutcomeCallable DescribeProtectionsCallable(const Model::DescribeProtectionsRequest& request);

                /**
                 *<p>按资源六段式查询云资源当前绑定的 DDoS 高防服务防护实例。</p>
                 * @param req DescribeResourceProtectionsRequest
                 * @return DescribeResourceProtectionsOutcome
                 */
                DescribeResourceProtectionsOutcome DescribeResourceProtections(const Model::DescribeResourceProtectionsRequest &request);
                void DescribeResourceProtectionsAsync(const Model::DescribeResourceProtectionsRequest& request, const DescribeResourceProtectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourceProtectionsOutcomeCallable DescribeResourceProtectionsCallable(const Model::DescribeResourceProtectionsRequest& request);

                /**
                 *<p>按防护实例 ID 修改该实例下的 L3/4 DDoS 防护策略。</p>
                 * @param req ModifyDDoSProtectionPolicyRequest
                 * @return ModifyDDoSProtectionPolicyOutcome
                 */
                ModifyDDoSProtectionPolicyOutcome ModifyDDoSProtectionPolicy(const Model::ModifyDDoSProtectionPolicyRequest &request);
                void ModifyDDoSProtectionPolicyAsync(const Model::ModifyDDoSProtectionPolicyRequest& request, const ModifyDDoSProtectionPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDDoSProtectionPolicyOutcomeCallable ModifyDDoSProtectionPolicyCallable(const Model::ModifyDDoSProtectionPolicyRequest& request);

                /**
                 *修改防护实例。支持修改防护实例的名称。
                 * @param req ModifyProtectionRequest
                 * @return ModifyProtectionOutcome
                 */
                ModifyProtectionOutcome ModifyProtection(const Model::ModifyProtectionRequest &request);
                void ModifyProtectionAsync(const Model::ModifyProtectionRequest& request, const ModifyProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyProtectionOutcomeCallable ModifyProtectionCallable(const Model::ModifyProtectionRequest& request);

                /**
                 *<p>修改防护实例的防护资源。</p>
<p>向防护实例中添加、替换或移除防护对象（即绑定到该实例进行防护的云资源）。</p>
                 * @param req ModifyProtectionResourceRequest
                 * @return ModifyProtectionResourceOutcome
                 */
                ModifyProtectionResourceOutcome ModifyProtectionResource(const Model::ModifyProtectionResourceRequest &request);
                void ModifyProtectionResourceAsync(const Model::ModifyProtectionResourceRequest& request, const ModifyProtectionResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyProtectionResourceOutcomeCallable ModifyProtectionResourceCallable(const Model::ModifyProtectionResourceRequest& request);

                /**
                 *申请解封资源，可通过 DescribeDDoSBlockRecords 接口获取资源的封堵解封状态。
                 * @param req UnblockResourcesRequest
                 * @return UnblockResourcesOutcome
                 */
                UnblockResourcesOutcome UnblockResources(const Model::UnblockResourcesRequest &request);
                void UnblockResourcesAsync(const Model::UnblockResourcesRequest& request, const UnblockResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnblockResourcesOutcomeCallable UnblockResourcesCallable(const Model::UnblockResourcesRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20250903_ANTIDDOSCLIENT_H_
