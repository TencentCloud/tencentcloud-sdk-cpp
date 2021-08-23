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

#ifndef TENCENTCLOUD_CFS_V20190719_CFSCLIENT_H_
#define TENCENTCLOUD_CFS_V20190719_CFSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cfs/v20190719/model/CreateCfsFileSystemRequest.h>
#include <tencentcloud/cfs/v20190719/model/CreateCfsFileSystemResponse.h>
#include <tencentcloud/cfs/v20190719/model/CreateCfsPGroupRequest.h>
#include <tencentcloud/cfs/v20190719/model/CreateCfsPGroupResponse.h>
#include <tencentcloud/cfs/v20190719/model/CreateCfsRuleRequest.h>
#include <tencentcloud/cfs/v20190719/model/CreateCfsRuleResponse.h>
#include <tencentcloud/cfs/v20190719/model/DeleteCfsFileSystemRequest.h>
#include <tencentcloud/cfs/v20190719/model/DeleteCfsFileSystemResponse.h>
#include <tencentcloud/cfs/v20190719/model/DeleteCfsPGroupRequest.h>
#include <tencentcloud/cfs/v20190719/model/DeleteCfsPGroupResponse.h>
#include <tencentcloud/cfs/v20190719/model/DeleteCfsRuleRequest.h>
#include <tencentcloud/cfs/v20190719/model/DeleteCfsRuleResponse.h>
#include <tencentcloud/cfs/v20190719/model/DeleteMountTargetRequest.h>
#include <tencentcloud/cfs/v20190719/model/DeleteMountTargetResponse.h>
#include <tencentcloud/cfs/v20190719/model/DescribeAvailableZoneInfoRequest.h>
#include <tencentcloud/cfs/v20190719/model/DescribeAvailableZoneInfoResponse.h>
#include <tencentcloud/cfs/v20190719/model/DescribeCfsFileSystemClientsRequest.h>
#include <tencentcloud/cfs/v20190719/model/DescribeCfsFileSystemClientsResponse.h>
#include <tencentcloud/cfs/v20190719/model/DescribeCfsFileSystemsRequest.h>
#include <tencentcloud/cfs/v20190719/model/DescribeCfsFileSystemsResponse.h>
#include <tencentcloud/cfs/v20190719/model/DescribeCfsPGroupsRequest.h>
#include <tencentcloud/cfs/v20190719/model/DescribeCfsPGroupsResponse.h>
#include <tencentcloud/cfs/v20190719/model/DescribeCfsRulesRequest.h>
#include <tencentcloud/cfs/v20190719/model/DescribeCfsRulesResponse.h>
#include <tencentcloud/cfs/v20190719/model/DescribeCfsServiceStatusRequest.h>
#include <tencentcloud/cfs/v20190719/model/DescribeCfsServiceStatusResponse.h>
#include <tencentcloud/cfs/v20190719/model/DescribeMountTargetsRequest.h>
#include <tencentcloud/cfs/v20190719/model/DescribeMountTargetsResponse.h>
#include <tencentcloud/cfs/v20190719/model/SignUpCfsServiceRequest.h>
#include <tencentcloud/cfs/v20190719/model/SignUpCfsServiceResponse.h>
#include <tencentcloud/cfs/v20190719/model/UpdateCfsFileSystemNameRequest.h>
#include <tencentcloud/cfs/v20190719/model/UpdateCfsFileSystemNameResponse.h>
#include <tencentcloud/cfs/v20190719/model/UpdateCfsFileSystemPGroupRequest.h>
#include <tencentcloud/cfs/v20190719/model/UpdateCfsFileSystemPGroupResponse.h>
#include <tencentcloud/cfs/v20190719/model/UpdateCfsFileSystemSizeLimitRequest.h>
#include <tencentcloud/cfs/v20190719/model/UpdateCfsFileSystemSizeLimitResponse.h>
#include <tencentcloud/cfs/v20190719/model/UpdateCfsPGroupRequest.h>
#include <tencentcloud/cfs/v20190719/model/UpdateCfsPGroupResponse.h>
#include <tencentcloud/cfs/v20190719/model/UpdateCfsRuleRequest.h>
#include <tencentcloud/cfs/v20190719/model/UpdateCfsRuleResponse.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            class CfsClient : public AbstractClient
            {
            public:
                CfsClient(const Credential &credential, const std::string &region);
                CfsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateCfsFileSystemResponse> CreateCfsFileSystemOutcome;
                typedef std::future<CreateCfsFileSystemOutcome> CreateCfsFileSystemOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::CreateCfsFileSystemRequest&, CreateCfsFileSystemOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCfsFileSystemAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCfsPGroupResponse> CreateCfsPGroupOutcome;
                typedef std::future<CreateCfsPGroupOutcome> CreateCfsPGroupOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::CreateCfsPGroupRequest&, CreateCfsPGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCfsPGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCfsRuleResponse> CreateCfsRuleOutcome;
                typedef std::future<CreateCfsRuleOutcome> CreateCfsRuleOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::CreateCfsRuleRequest&, CreateCfsRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCfsRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCfsFileSystemResponse> DeleteCfsFileSystemOutcome;
                typedef std::future<DeleteCfsFileSystemOutcome> DeleteCfsFileSystemOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::DeleteCfsFileSystemRequest&, DeleteCfsFileSystemOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCfsFileSystemAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCfsPGroupResponse> DeleteCfsPGroupOutcome;
                typedef std::future<DeleteCfsPGroupOutcome> DeleteCfsPGroupOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::DeleteCfsPGroupRequest&, DeleteCfsPGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCfsPGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCfsRuleResponse> DeleteCfsRuleOutcome;
                typedef std::future<DeleteCfsRuleOutcome> DeleteCfsRuleOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::DeleteCfsRuleRequest&, DeleteCfsRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCfsRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMountTargetResponse> DeleteMountTargetOutcome;
                typedef std::future<DeleteMountTargetOutcome> DeleteMountTargetOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::DeleteMountTargetRequest&, DeleteMountTargetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMountTargetAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAvailableZoneInfoResponse> DescribeAvailableZoneInfoOutcome;
                typedef std::future<DescribeAvailableZoneInfoOutcome> DescribeAvailableZoneInfoOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::DescribeAvailableZoneInfoRequest&, DescribeAvailableZoneInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAvailableZoneInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCfsFileSystemClientsResponse> DescribeCfsFileSystemClientsOutcome;
                typedef std::future<DescribeCfsFileSystemClientsOutcome> DescribeCfsFileSystemClientsOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::DescribeCfsFileSystemClientsRequest&, DescribeCfsFileSystemClientsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCfsFileSystemClientsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCfsFileSystemsResponse> DescribeCfsFileSystemsOutcome;
                typedef std::future<DescribeCfsFileSystemsOutcome> DescribeCfsFileSystemsOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::DescribeCfsFileSystemsRequest&, DescribeCfsFileSystemsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCfsFileSystemsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCfsPGroupsResponse> DescribeCfsPGroupsOutcome;
                typedef std::future<DescribeCfsPGroupsOutcome> DescribeCfsPGroupsOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::DescribeCfsPGroupsRequest&, DescribeCfsPGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCfsPGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCfsRulesResponse> DescribeCfsRulesOutcome;
                typedef std::future<DescribeCfsRulesOutcome> DescribeCfsRulesOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::DescribeCfsRulesRequest&, DescribeCfsRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCfsRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCfsServiceStatusResponse> DescribeCfsServiceStatusOutcome;
                typedef std::future<DescribeCfsServiceStatusOutcome> DescribeCfsServiceStatusOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::DescribeCfsServiceStatusRequest&, DescribeCfsServiceStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCfsServiceStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMountTargetsResponse> DescribeMountTargetsOutcome;
                typedef std::future<DescribeMountTargetsOutcome> DescribeMountTargetsOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::DescribeMountTargetsRequest&, DescribeMountTargetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMountTargetsAsyncHandler;
                typedef Outcome<Core::Error, Model::SignUpCfsServiceResponse> SignUpCfsServiceOutcome;
                typedef std::future<SignUpCfsServiceOutcome> SignUpCfsServiceOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::SignUpCfsServiceRequest&, SignUpCfsServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SignUpCfsServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateCfsFileSystemNameResponse> UpdateCfsFileSystemNameOutcome;
                typedef std::future<UpdateCfsFileSystemNameOutcome> UpdateCfsFileSystemNameOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::UpdateCfsFileSystemNameRequest&, UpdateCfsFileSystemNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCfsFileSystemNameAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateCfsFileSystemPGroupResponse> UpdateCfsFileSystemPGroupOutcome;
                typedef std::future<UpdateCfsFileSystemPGroupOutcome> UpdateCfsFileSystemPGroupOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::UpdateCfsFileSystemPGroupRequest&, UpdateCfsFileSystemPGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCfsFileSystemPGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateCfsFileSystemSizeLimitResponse> UpdateCfsFileSystemSizeLimitOutcome;
                typedef std::future<UpdateCfsFileSystemSizeLimitOutcome> UpdateCfsFileSystemSizeLimitOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::UpdateCfsFileSystemSizeLimitRequest&, UpdateCfsFileSystemSizeLimitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCfsFileSystemSizeLimitAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateCfsPGroupResponse> UpdateCfsPGroupOutcome;
                typedef std::future<UpdateCfsPGroupOutcome> UpdateCfsPGroupOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::UpdateCfsPGroupRequest&, UpdateCfsPGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCfsPGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateCfsRuleResponse> UpdateCfsRuleOutcome;
                typedef std::future<UpdateCfsRuleOutcome> UpdateCfsRuleOutcomeCallable;
                typedef std::function<void(const CfsClient*, const Model::UpdateCfsRuleRequest&, UpdateCfsRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCfsRuleAsyncHandler;



                /**
                 *用于添加新文件系统
                 * @param req CreateCfsFileSystemRequest
                 * @return CreateCfsFileSystemOutcome
                 */
                CreateCfsFileSystemOutcome CreateCfsFileSystem(const Model::CreateCfsFileSystemRequest &request);
                void CreateCfsFileSystemAsync(const Model::CreateCfsFileSystemRequest& request, const CreateCfsFileSystemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCfsFileSystemOutcomeCallable CreateCfsFileSystemCallable(const Model::CreateCfsFileSystemRequest& request);

                /**
                 *本接口（CreateCfsPGroup）用于创建权限组
                 * @param req CreateCfsPGroupRequest
                 * @return CreateCfsPGroupOutcome
                 */
                CreateCfsPGroupOutcome CreateCfsPGroup(const Model::CreateCfsPGroupRequest &request);
                void CreateCfsPGroupAsync(const Model::CreateCfsPGroupRequest& request, const CreateCfsPGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCfsPGroupOutcomeCallable CreateCfsPGroupCallable(const Model::CreateCfsPGroupRequest& request);

                /**
                 *本接口（CreateCfsRule）用于创建权限组规则。
                 * @param req CreateCfsRuleRequest
                 * @return CreateCfsRuleOutcome
                 */
                CreateCfsRuleOutcome CreateCfsRule(const Model::CreateCfsRuleRequest &request);
                void CreateCfsRuleAsync(const Model::CreateCfsRuleRequest& request, const CreateCfsRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCfsRuleOutcomeCallable CreateCfsRuleCallable(const Model::CreateCfsRuleRequest& request);

                /**
                 *用于删除文件系统
                 * @param req DeleteCfsFileSystemRequest
                 * @return DeleteCfsFileSystemOutcome
                 */
                DeleteCfsFileSystemOutcome DeleteCfsFileSystem(const Model::DeleteCfsFileSystemRequest &request);
                void DeleteCfsFileSystemAsync(const Model::DeleteCfsFileSystemRequest& request, const DeleteCfsFileSystemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCfsFileSystemOutcomeCallable DeleteCfsFileSystemCallable(const Model::DeleteCfsFileSystemRequest& request);

                /**
                 *本接口（DeleteCfsPGroup）用于删除权限组。
                 * @param req DeleteCfsPGroupRequest
                 * @return DeleteCfsPGroupOutcome
                 */
                DeleteCfsPGroupOutcome DeleteCfsPGroup(const Model::DeleteCfsPGroupRequest &request);
                void DeleteCfsPGroupAsync(const Model::DeleteCfsPGroupRequest& request, const DeleteCfsPGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCfsPGroupOutcomeCallable DeleteCfsPGroupCallable(const Model::DeleteCfsPGroupRequest& request);

                /**
                 *本接口（DeleteCfsRule）用于删除权限组规则。
                 * @param req DeleteCfsRuleRequest
                 * @return DeleteCfsRuleOutcome
                 */
                DeleteCfsRuleOutcome DeleteCfsRule(const Model::DeleteCfsRuleRequest &request);
                void DeleteCfsRuleAsync(const Model::DeleteCfsRuleRequest& request, const DeleteCfsRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCfsRuleOutcomeCallable DeleteCfsRuleCallable(const Model::DeleteCfsRuleRequest& request);

                /**
                 *本接口（DeleteMountTarget）用于删除挂载点
                 * @param req DeleteMountTargetRequest
                 * @return DeleteMountTargetOutcome
                 */
                DeleteMountTargetOutcome DeleteMountTarget(const Model::DeleteMountTargetRequest &request);
                void DeleteMountTargetAsync(const Model::DeleteMountTargetRequest& request, const DeleteMountTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMountTargetOutcomeCallable DeleteMountTargetCallable(const Model::DeleteMountTargetRequest& request);

                /**
                 *本接口（DescribeAvailableZoneInfo）用于查询区域的可用情况。
                 * @param req DescribeAvailableZoneInfoRequest
                 * @return DescribeAvailableZoneInfoOutcome
                 */
                DescribeAvailableZoneInfoOutcome DescribeAvailableZoneInfo(const Model::DescribeAvailableZoneInfoRequest &request);
                void DescribeAvailableZoneInfoAsync(const Model::DescribeAvailableZoneInfoRequest& request, const DescribeAvailableZoneInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAvailableZoneInfoOutcomeCallable DescribeAvailableZoneInfoCallable(const Model::DescribeAvailableZoneInfoRequest& request);

                /**
                 *查询挂载该文件系统的客户端。此功能需要客户端安装CFS监控插件。
                 * @param req DescribeCfsFileSystemClientsRequest
                 * @return DescribeCfsFileSystemClientsOutcome
                 */
                DescribeCfsFileSystemClientsOutcome DescribeCfsFileSystemClients(const Model::DescribeCfsFileSystemClientsRequest &request);
                void DescribeCfsFileSystemClientsAsync(const Model::DescribeCfsFileSystemClientsRequest& request, const DescribeCfsFileSystemClientsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCfsFileSystemClientsOutcomeCallable DescribeCfsFileSystemClientsCallable(const Model::DescribeCfsFileSystemClientsRequest& request);

                /**
                 *本接口（DescribeCfsFileSystems）用于查询文件系统
                 * @param req DescribeCfsFileSystemsRequest
                 * @return DescribeCfsFileSystemsOutcome
                 */
                DescribeCfsFileSystemsOutcome DescribeCfsFileSystems(const Model::DescribeCfsFileSystemsRequest &request);
                void DescribeCfsFileSystemsAsync(const Model::DescribeCfsFileSystemsRequest& request, const DescribeCfsFileSystemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCfsFileSystemsOutcomeCallable DescribeCfsFileSystemsCallable(const Model::DescribeCfsFileSystemsRequest& request);

                /**
                 *本接口（DescribeCfsPGroups）用于查询权限组列表。
                 * @param req DescribeCfsPGroupsRequest
                 * @return DescribeCfsPGroupsOutcome
                 */
                DescribeCfsPGroupsOutcome DescribeCfsPGroups(const Model::DescribeCfsPGroupsRequest &request);
                void DescribeCfsPGroupsAsync(const Model::DescribeCfsPGroupsRequest& request, const DescribeCfsPGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCfsPGroupsOutcomeCallable DescribeCfsPGroupsCallable(const Model::DescribeCfsPGroupsRequest& request);

                /**
                 *本接口（DescribeCfsRules）用于查询权限组规则列表。
                 * @param req DescribeCfsRulesRequest
                 * @return DescribeCfsRulesOutcome
                 */
                DescribeCfsRulesOutcome DescribeCfsRules(const Model::DescribeCfsRulesRequest &request);
                void DescribeCfsRulesAsync(const Model::DescribeCfsRulesRequest& request, const DescribeCfsRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCfsRulesOutcomeCallable DescribeCfsRulesCallable(const Model::DescribeCfsRulesRequest& request);

                /**
                 *本接口（DescribeCfsServiceStatus）用于查询用户使用CFS的服务状态。
                 * @param req DescribeCfsServiceStatusRequest
                 * @return DescribeCfsServiceStatusOutcome
                 */
                DescribeCfsServiceStatusOutcome DescribeCfsServiceStatus(const Model::DescribeCfsServiceStatusRequest &request);
                void DescribeCfsServiceStatusAsync(const Model::DescribeCfsServiceStatusRequest& request, const DescribeCfsServiceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCfsServiceStatusOutcomeCallable DescribeCfsServiceStatusCallable(const Model::DescribeCfsServiceStatusRequest& request);

                /**
                 *本接口（DescribeMountTargets）用于查询文件系统挂载点信息
                 * @param req DescribeMountTargetsRequest
                 * @return DescribeMountTargetsOutcome
                 */
                DescribeMountTargetsOutcome DescribeMountTargets(const Model::DescribeMountTargetsRequest &request);
                void DescribeMountTargetsAsync(const Model::DescribeMountTargetsRequest& request, const DescribeMountTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMountTargetsOutcomeCallable DescribeMountTargetsCallable(const Model::DescribeMountTargetsRequest& request);

                /**
                 *本接口（SignUpCfsService）用于开通CFS服务。
                 * @param req SignUpCfsServiceRequest
                 * @return SignUpCfsServiceOutcome
                 */
                SignUpCfsServiceOutcome SignUpCfsService(const Model::SignUpCfsServiceRequest &request);
                void SignUpCfsServiceAsync(const Model::SignUpCfsServiceRequest& request, const SignUpCfsServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SignUpCfsServiceOutcomeCallable SignUpCfsServiceCallable(const Model::SignUpCfsServiceRequest& request);

                /**
                 *本接口（UpdateCfsFileSystemName）用于更新文件系统名
                 * @param req UpdateCfsFileSystemNameRequest
                 * @return UpdateCfsFileSystemNameOutcome
                 */
                UpdateCfsFileSystemNameOutcome UpdateCfsFileSystemName(const Model::UpdateCfsFileSystemNameRequest &request);
                void UpdateCfsFileSystemNameAsync(const Model::UpdateCfsFileSystemNameRequest& request, const UpdateCfsFileSystemNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateCfsFileSystemNameOutcomeCallable UpdateCfsFileSystemNameCallable(const Model::UpdateCfsFileSystemNameRequest& request);

                /**
                 *本接口（UpdateCfsFileSystemPGroup）用于更新文件系统所使用的权限组
                 * @param req UpdateCfsFileSystemPGroupRequest
                 * @return UpdateCfsFileSystemPGroupOutcome
                 */
                UpdateCfsFileSystemPGroupOutcome UpdateCfsFileSystemPGroup(const Model::UpdateCfsFileSystemPGroupRequest &request);
                void UpdateCfsFileSystemPGroupAsync(const Model::UpdateCfsFileSystemPGroupRequest& request, const UpdateCfsFileSystemPGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateCfsFileSystemPGroupOutcomeCallable UpdateCfsFileSystemPGroupCallable(const Model::UpdateCfsFileSystemPGroupRequest& request);

                /**
                 *本接口（UpdateCfsFileSystemSizeLimit）用于更新文件系统存储容量限制。
                 * @param req UpdateCfsFileSystemSizeLimitRequest
                 * @return UpdateCfsFileSystemSizeLimitOutcome
                 */
                UpdateCfsFileSystemSizeLimitOutcome UpdateCfsFileSystemSizeLimit(const Model::UpdateCfsFileSystemSizeLimitRequest &request);
                void UpdateCfsFileSystemSizeLimitAsync(const Model::UpdateCfsFileSystemSizeLimitRequest& request, const UpdateCfsFileSystemSizeLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateCfsFileSystemSizeLimitOutcomeCallable UpdateCfsFileSystemSizeLimitCallable(const Model::UpdateCfsFileSystemSizeLimitRequest& request);

                /**
                 *本接口（UpdateCfsPGroup）更新权限组信息。
                 * @param req UpdateCfsPGroupRequest
                 * @return UpdateCfsPGroupOutcome
                 */
                UpdateCfsPGroupOutcome UpdateCfsPGroup(const Model::UpdateCfsPGroupRequest &request);
                void UpdateCfsPGroupAsync(const Model::UpdateCfsPGroupRequest& request, const UpdateCfsPGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateCfsPGroupOutcomeCallable UpdateCfsPGroupCallable(const Model::UpdateCfsPGroupRequest& request);

                /**
                 *本接口（UpdateCfsRule）用于更新权限规则。
                 * @param req UpdateCfsRuleRequest
                 * @return UpdateCfsRuleOutcome
                 */
                UpdateCfsRuleOutcome UpdateCfsRule(const Model::UpdateCfsRuleRequest &request);
                void UpdateCfsRuleAsync(const Model::UpdateCfsRuleRequest& request, const UpdateCfsRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateCfsRuleOutcomeCallable UpdateCfsRuleCallable(const Model::UpdateCfsRuleRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_CFSCLIENT_H_
