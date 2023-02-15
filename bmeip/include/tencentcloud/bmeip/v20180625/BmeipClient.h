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

#ifndef TENCENTCLOUD_BMEIP_V20180625_BMEIPCLIENT_H_
#define TENCENTCLOUD_BMEIP_V20180625_BMEIPCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/bmeip/v20180625/model/BindEipAclsRequest.h>
#include <tencentcloud/bmeip/v20180625/model/BindEipAclsResponse.h>
#include <tencentcloud/bmeip/v20180625/model/BindHostedRequest.h>
#include <tencentcloud/bmeip/v20180625/model/BindHostedResponse.h>
#include <tencentcloud/bmeip/v20180625/model/BindRsRequest.h>
#include <tencentcloud/bmeip/v20180625/model/BindRsResponse.h>
#include <tencentcloud/bmeip/v20180625/model/BindVpcIpRequest.h>
#include <tencentcloud/bmeip/v20180625/model/BindVpcIpResponse.h>
#include <tencentcloud/bmeip/v20180625/model/CreateEipRequest.h>
#include <tencentcloud/bmeip/v20180625/model/CreateEipResponse.h>
#include <tencentcloud/bmeip/v20180625/model/CreateEipAclRequest.h>
#include <tencentcloud/bmeip/v20180625/model/CreateEipAclResponse.h>
#include <tencentcloud/bmeip/v20180625/model/DeleteEipRequest.h>
#include <tencentcloud/bmeip/v20180625/model/DeleteEipResponse.h>
#include <tencentcloud/bmeip/v20180625/model/DeleteEipAclRequest.h>
#include <tencentcloud/bmeip/v20180625/model/DeleteEipAclResponse.h>
#include <tencentcloud/bmeip/v20180625/model/DescribeEipAclsRequest.h>
#include <tencentcloud/bmeip/v20180625/model/DescribeEipAclsResponse.h>
#include <tencentcloud/bmeip/v20180625/model/DescribeEipQuotaRequest.h>
#include <tencentcloud/bmeip/v20180625/model/DescribeEipQuotaResponse.h>
#include <tencentcloud/bmeip/v20180625/model/DescribeEipTaskRequest.h>
#include <tencentcloud/bmeip/v20180625/model/DescribeEipTaskResponse.h>
#include <tencentcloud/bmeip/v20180625/model/DescribeEipsRequest.h>
#include <tencentcloud/bmeip/v20180625/model/DescribeEipsResponse.h>
#include <tencentcloud/bmeip/v20180625/model/ModifyEipAclRequest.h>
#include <tencentcloud/bmeip/v20180625/model/ModifyEipAclResponse.h>
#include <tencentcloud/bmeip/v20180625/model/ModifyEipChargeRequest.h>
#include <tencentcloud/bmeip/v20180625/model/ModifyEipChargeResponse.h>
#include <tencentcloud/bmeip/v20180625/model/ModifyEipNameRequest.h>
#include <tencentcloud/bmeip/v20180625/model/ModifyEipNameResponse.h>
#include <tencentcloud/bmeip/v20180625/model/UnbindEipAclsRequest.h>
#include <tencentcloud/bmeip/v20180625/model/UnbindEipAclsResponse.h>
#include <tencentcloud/bmeip/v20180625/model/UnbindHostedRequest.h>
#include <tencentcloud/bmeip/v20180625/model/UnbindHostedResponse.h>
#include <tencentcloud/bmeip/v20180625/model/UnbindRsRequest.h>
#include <tencentcloud/bmeip/v20180625/model/UnbindRsResponse.h>
#include <tencentcloud/bmeip/v20180625/model/UnbindRsListRequest.h>
#include <tencentcloud/bmeip/v20180625/model/UnbindRsListResponse.h>
#include <tencentcloud/bmeip/v20180625/model/UnbindVpcIpRequest.h>
#include <tencentcloud/bmeip/v20180625/model/UnbindVpcIpResponse.h>


namespace TencentCloud
{
    namespace Bmeip
    {
        namespace V20180625
        {
            class BmeipClient : public AbstractClient
            {
            public:
                BmeipClient(const Credential &credential, const std::string &region);
                BmeipClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::BindEipAclsResponse> BindEipAclsOutcome;
                typedef std::future<BindEipAclsOutcome> BindEipAclsOutcomeCallable;
                typedef std::function<void(const BmeipClient*, const Model::BindEipAclsRequest&, BindEipAclsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindEipAclsAsyncHandler;
                typedef Outcome<Core::Error, Model::BindHostedResponse> BindHostedOutcome;
                typedef std::future<BindHostedOutcome> BindHostedOutcomeCallable;
                typedef std::function<void(const BmeipClient*, const Model::BindHostedRequest&, BindHostedOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindHostedAsyncHandler;
                typedef Outcome<Core::Error, Model::BindRsResponse> BindRsOutcome;
                typedef std::future<BindRsOutcome> BindRsOutcomeCallable;
                typedef std::function<void(const BmeipClient*, const Model::BindRsRequest&, BindRsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindRsAsyncHandler;
                typedef Outcome<Core::Error, Model::BindVpcIpResponse> BindVpcIpOutcome;
                typedef std::future<BindVpcIpOutcome> BindVpcIpOutcomeCallable;
                typedef std::function<void(const BmeipClient*, const Model::BindVpcIpRequest&, BindVpcIpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindVpcIpAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEipResponse> CreateEipOutcome;
                typedef std::future<CreateEipOutcome> CreateEipOutcomeCallable;
                typedef std::function<void(const BmeipClient*, const Model::CreateEipRequest&, CreateEipOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEipAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEipAclResponse> CreateEipAclOutcome;
                typedef std::future<CreateEipAclOutcome> CreateEipAclOutcomeCallable;
                typedef std::function<void(const BmeipClient*, const Model::CreateEipAclRequest&, CreateEipAclOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEipAclAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteEipResponse> DeleteEipOutcome;
                typedef std::future<DeleteEipOutcome> DeleteEipOutcomeCallable;
                typedef std::function<void(const BmeipClient*, const Model::DeleteEipRequest&, DeleteEipOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEipAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteEipAclResponse> DeleteEipAclOutcome;
                typedef std::future<DeleteEipAclOutcome> DeleteEipAclOutcomeCallable;
                typedef std::function<void(const BmeipClient*, const Model::DeleteEipAclRequest&, DeleteEipAclOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEipAclAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEipAclsResponse> DescribeEipAclsOutcome;
                typedef std::future<DescribeEipAclsOutcome> DescribeEipAclsOutcomeCallable;
                typedef std::function<void(const BmeipClient*, const Model::DescribeEipAclsRequest&, DescribeEipAclsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEipAclsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEipQuotaResponse> DescribeEipQuotaOutcome;
                typedef std::future<DescribeEipQuotaOutcome> DescribeEipQuotaOutcomeCallable;
                typedef std::function<void(const BmeipClient*, const Model::DescribeEipQuotaRequest&, DescribeEipQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEipQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEipTaskResponse> DescribeEipTaskOutcome;
                typedef std::future<DescribeEipTaskOutcome> DescribeEipTaskOutcomeCallable;
                typedef std::function<void(const BmeipClient*, const Model::DescribeEipTaskRequest&, DescribeEipTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEipTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEipsResponse> DescribeEipsOutcome;
                typedef std::future<DescribeEipsOutcome> DescribeEipsOutcomeCallable;
                typedef std::function<void(const BmeipClient*, const Model::DescribeEipsRequest&, DescribeEipsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEipsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEipAclResponse> ModifyEipAclOutcome;
                typedef std::future<ModifyEipAclOutcome> ModifyEipAclOutcomeCallable;
                typedef std::function<void(const BmeipClient*, const Model::ModifyEipAclRequest&, ModifyEipAclOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEipAclAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEipChargeResponse> ModifyEipChargeOutcome;
                typedef std::future<ModifyEipChargeOutcome> ModifyEipChargeOutcomeCallable;
                typedef std::function<void(const BmeipClient*, const Model::ModifyEipChargeRequest&, ModifyEipChargeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEipChargeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEipNameResponse> ModifyEipNameOutcome;
                typedef std::future<ModifyEipNameOutcome> ModifyEipNameOutcomeCallable;
                typedef std::function<void(const BmeipClient*, const Model::ModifyEipNameRequest&, ModifyEipNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEipNameAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindEipAclsResponse> UnbindEipAclsOutcome;
                typedef std::future<UnbindEipAclsOutcome> UnbindEipAclsOutcomeCallable;
                typedef std::function<void(const BmeipClient*, const Model::UnbindEipAclsRequest&, UnbindEipAclsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindEipAclsAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindHostedResponse> UnbindHostedOutcome;
                typedef std::future<UnbindHostedOutcome> UnbindHostedOutcomeCallable;
                typedef std::function<void(const BmeipClient*, const Model::UnbindHostedRequest&, UnbindHostedOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindHostedAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindRsResponse> UnbindRsOutcome;
                typedef std::future<UnbindRsOutcome> UnbindRsOutcomeCallable;
                typedef std::function<void(const BmeipClient*, const Model::UnbindRsRequest&, UnbindRsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindRsAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindRsListResponse> UnbindRsListOutcome;
                typedef std::future<UnbindRsListOutcome> UnbindRsListOutcomeCallable;
                typedef std::function<void(const BmeipClient*, const Model::UnbindRsListRequest&, UnbindRsListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindRsListAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindVpcIpResponse> UnbindVpcIpOutcome;
                typedef std::future<UnbindVpcIpOutcome> UnbindVpcIpOutcomeCallable;
                typedef std::function<void(const BmeipClient*, const Model::UnbindVpcIpRequest&, UnbindVpcIpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindVpcIpAsyncHandler;



                /**
                 *此接口用于为某个 EIP 关联 ACL。
                 * @param req BindEipAclsRequest
                 * @return BindEipAclsOutcome
                 */
                BindEipAclsOutcome BindEipAcls(const Model::BindEipAclsRequest &request);
                void BindEipAclsAsync(const Model::BindEipAclsRequest& request, const BindEipAclsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindEipAclsOutcomeCallable BindEipAclsCallable(const Model::BindEipAclsRequest& request);

                /**
                 *BindHosted接口用于绑定黑石弹性公网IP到黑石托管机器上
                 * @param req BindHostedRequest
                 * @return BindHostedOutcome
                 */
                BindHostedOutcome BindHosted(const Model::BindHostedRequest &request);
                void BindHostedAsync(const Model::BindHostedRequest& request, const BindHostedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindHostedOutcomeCallable BindHostedCallable(const Model::BindHostedRequest& request);

                /**
                 *绑定黑石EIP
                 * @param req BindRsRequest
                 * @return BindRsOutcome
                 */
                BindRsOutcome BindRs(const Model::BindRsRequest &request);
                void BindRsAsync(const Model::BindRsRequest& request, const BindRsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindRsOutcomeCallable BindRsCallable(const Model::BindRsRequest& request);

                /**
                 *黑石EIP绑定VPC IP
                 * @param req BindVpcIpRequest
                 * @return BindVpcIpOutcome
                 */
                BindVpcIpOutcome BindVpcIp(const Model::BindVpcIpRequest &request);
                void BindVpcIpAsync(const Model::BindVpcIpRequest& request, const BindVpcIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindVpcIpOutcomeCallable BindVpcIpCallable(const Model::BindVpcIpRequest& request);

                /**
                 *创建黑石弹性公网IP
                 * @param req CreateEipRequest
                 * @return CreateEipOutcome
                 */
                CreateEipOutcome CreateEip(const Model::CreateEipRequest &request);
                void CreateEipAsync(const Model::CreateEipRequest& request, const CreateEipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEipOutcomeCallable CreateEipCallable(const Model::CreateEipRequest& request);

                /**
                 *创建黑石弹性公网 EIP ACL
                 * @param req CreateEipAclRequest
                 * @return CreateEipAclOutcome
                 */
                CreateEipAclOutcome CreateEipAcl(const Model::CreateEipAclRequest &request);
                void CreateEipAclAsync(const Model::CreateEipAclRequest& request, const CreateEipAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEipAclOutcomeCallable CreateEipAclCallable(const Model::CreateEipAclRequest& request);

                /**
                 *释放黑石弹性公网IP
                 * @param req DeleteEipRequest
                 * @return DeleteEipOutcome
                 */
                DeleteEipOutcome DeleteEip(const Model::DeleteEipRequest &request);
                void DeleteEipAsync(const Model::DeleteEipRequest& request, const DeleteEipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteEipOutcomeCallable DeleteEipCallable(const Model::DeleteEipRequest& request);

                /**
                 *删除弹性公网IP ACL
                 * @param req DeleteEipAclRequest
                 * @return DeleteEipAclOutcome
                 */
                DeleteEipAclOutcome DeleteEipAcl(const Model::DeleteEipAclRequest &request);
                void DeleteEipAclAsync(const Model::DeleteEipAclRequest& request, const DeleteEipAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteEipAclOutcomeCallable DeleteEipAclCallable(const Model::DeleteEipAclRequest& request);

                /**
                 *查询弹性公网IP ACL
                 * @param req DescribeEipAclsRequest
                 * @return DescribeEipAclsOutcome
                 */
                DescribeEipAclsOutcome DescribeEipAcls(const Model::DescribeEipAclsRequest &request);
                void DescribeEipAclsAsync(const Model::DescribeEipAclsRequest& request, const DescribeEipAclsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEipAclsOutcomeCallable DescribeEipAclsCallable(const Model::DescribeEipAclsRequest& request);

                /**
                 *查询黑石EIP 限额
                 * @param req DescribeEipQuotaRequest
                 * @return DescribeEipQuotaOutcome
                 */
                DescribeEipQuotaOutcome DescribeEipQuota(const Model::DescribeEipQuotaRequest &request);
                void DescribeEipQuotaAsync(const Model::DescribeEipQuotaRequest& request, const DescribeEipQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEipQuotaOutcomeCallable DescribeEipQuotaCallable(const Model::DescribeEipQuotaRequest& request);

                /**
                 *黑石EIP查询任务状态
                 * @param req DescribeEipTaskRequest
                 * @return DescribeEipTaskOutcome
                 */
                DescribeEipTaskOutcome DescribeEipTask(const Model::DescribeEipTaskRequest &request);
                void DescribeEipTaskAsync(const Model::DescribeEipTaskRequest& request, const DescribeEipTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEipTaskOutcomeCallable DescribeEipTaskCallable(const Model::DescribeEipTaskRequest& request);

                /**
                 *黑石EIP查询接口
                 * @param req DescribeEipsRequest
                 * @return DescribeEipsOutcome
                 */
                DescribeEipsOutcome DescribeEips(const Model::DescribeEipsRequest &request);
                void DescribeEipsAsync(const Model::DescribeEipsRequest& request, const DescribeEipsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEipsOutcomeCallable DescribeEipsCallable(const Model::DescribeEipsRequest& request);

                /**
                 *修改弹性公网IP ACL
                 * @param req ModifyEipAclRequest
                 * @return ModifyEipAclOutcome
                 */
                ModifyEipAclOutcome ModifyEipAcl(const Model::ModifyEipAclRequest &request);
                void ModifyEipAclAsync(const Model::ModifyEipAclRequest& request, const ModifyEipAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEipAclOutcomeCallable ModifyEipAclCallable(const Model::ModifyEipAclRequest& request);

                /**
                 *黑石EIP修改计费方式
                 * @param req ModifyEipChargeRequest
                 * @return ModifyEipChargeOutcome
                 */
                ModifyEipChargeOutcome ModifyEipCharge(const Model::ModifyEipChargeRequest &request);
                void ModifyEipChargeAsync(const Model::ModifyEipChargeRequest& request, const ModifyEipChargeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEipChargeOutcomeCallable ModifyEipChargeCallable(const Model::ModifyEipChargeRequest& request);

                /**
                 *更新黑石EIP名称
                 * @param req ModifyEipNameRequest
                 * @return ModifyEipNameOutcome
                 */
                ModifyEipNameOutcome ModifyEipName(const Model::ModifyEipNameRequest &request);
                void ModifyEipNameAsync(const Model::ModifyEipNameRequest& request, const ModifyEipNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEipNameOutcomeCallable ModifyEipNameCallable(const Model::ModifyEipNameRequest& request);

                /**
                 *解绑弹性公网IP ACL
                 * @param req UnbindEipAclsRequest
                 * @return UnbindEipAclsOutcome
                 */
                UnbindEipAclsOutcome UnbindEipAcls(const Model::UnbindEipAclsRequest &request);
                void UnbindEipAclsAsync(const Model::UnbindEipAclsRequest& request, const UnbindEipAclsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindEipAclsOutcomeCallable UnbindEipAclsCallable(const Model::UnbindEipAclsRequest& request);

                /**
                 *UnbindHosted接口用于解绑托管机器上的EIP
                 * @param req UnbindHostedRequest
                 * @return UnbindHostedOutcome
                 */
                UnbindHostedOutcome UnbindHosted(const Model::UnbindHostedRequest &request);
                void UnbindHostedAsync(const Model::UnbindHostedRequest& request, const UnbindHostedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindHostedOutcomeCallable UnbindHostedCallable(const Model::UnbindHostedRequest& request);

                /**
                 *解绑黑石EIP
                 * @param req UnbindRsRequest
                 * @return UnbindRsOutcome
                 */
                UnbindRsOutcome UnbindRs(const Model::UnbindRsRequest &request);
                void UnbindRsAsync(const Model::UnbindRsRequest& request, const UnbindRsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindRsOutcomeCallable UnbindRsCallable(const Model::UnbindRsRequest& request);

                /**
                 *批量解绑物理机弹性公网IP接口
                 * @param req UnbindRsListRequest
                 * @return UnbindRsListOutcome
                 */
                UnbindRsListOutcome UnbindRsList(const Model::UnbindRsListRequest &request);
                void UnbindRsListAsync(const Model::UnbindRsListRequest& request, const UnbindRsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindRsListOutcomeCallable UnbindRsListCallable(const Model::UnbindRsListRequest& request);

                /**
                 *黑石EIP解绑VPCIP
                 * @param req UnbindVpcIpRequest
                 * @return UnbindVpcIpOutcome
                 */
                UnbindVpcIpOutcome UnbindVpcIp(const Model::UnbindVpcIpRequest &request);
                void UnbindVpcIpAsync(const Model::UnbindVpcIpRequest& request, const UnbindVpcIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindVpcIpOutcomeCallable UnbindVpcIpCallable(const Model::UnbindVpcIpRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_BMEIP_V20180625_BMEIPCLIENT_H_
