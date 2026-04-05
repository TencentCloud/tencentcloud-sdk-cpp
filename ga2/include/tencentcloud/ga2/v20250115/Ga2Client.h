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

#ifndef TENCENTCLOUD_GA2_V20250115_GA2CLIENT_H_
#define TENCENTCLOUD_GA2_V20250115_GA2CLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ga2/v20250115/model/CreateAccelerateAreasRequest.h>
#include <tencentcloud/ga2/v20250115/model/CreateAccelerateAreasResponse.h>
#include <tencentcloud/ga2/v20250115/model/CreateEndpointGroupRequest.h>
#include <tencentcloud/ga2/v20250115/model/CreateEndpointGroupResponse.h>
#include <tencentcloud/ga2/v20250115/model/CreateForwardingRuleRequest.h>
#include <tencentcloud/ga2/v20250115/model/CreateForwardingRuleResponse.h>
#include <tencentcloud/ga2/v20250115/model/CreateGlobalAcceleratorRequest.h>
#include <tencentcloud/ga2/v20250115/model/CreateGlobalAcceleratorResponse.h>
#include <tencentcloud/ga2/v20250115/model/CreateListenerRequest.h>
#include <tencentcloud/ga2/v20250115/model/CreateListenerResponse.h>
#include <tencentcloud/ga2/v20250115/model/DeleteAccelerateAreasRequest.h>
#include <tencentcloud/ga2/v20250115/model/DeleteAccelerateAreasResponse.h>
#include <tencentcloud/ga2/v20250115/model/DeleteEndpointGroupsRequest.h>
#include <tencentcloud/ga2/v20250115/model/DeleteEndpointGroupsResponse.h>
#include <tencentcloud/ga2/v20250115/model/DeleteForwardingRuleRequest.h>
#include <tencentcloud/ga2/v20250115/model/DeleteForwardingRuleResponse.h>
#include <tencentcloud/ga2/v20250115/model/DeleteGlobalAcceleratorRequest.h>
#include <tencentcloud/ga2/v20250115/model/DeleteGlobalAcceleratorResponse.h>
#include <tencentcloud/ga2/v20250115/model/DeleteListenerRequest.h>
#include <tencentcloud/ga2/v20250115/model/DeleteListenerResponse.h>
#include <tencentcloud/ga2/v20250115/model/DescribeAccelerateAreasRequest.h>
#include <tencentcloud/ga2/v20250115/model/DescribeAccelerateAreasResponse.h>
#include <tencentcloud/ga2/v20250115/model/DescribeAccelerateRegionsRequest.h>
#include <tencentcloud/ga2/v20250115/model/DescribeAccelerateRegionsResponse.h>
#include <tencentcloud/ga2/v20250115/model/DescribeCrossBorderSettlementRequest.h>
#include <tencentcloud/ga2/v20250115/model/DescribeCrossBorderSettlementResponse.h>
#include <tencentcloud/ga2/v20250115/model/DescribeEndpointGroupsRequest.h>
#include <tencentcloud/ga2/v20250115/model/DescribeEndpointGroupsResponse.h>
#include <tencentcloud/ga2/v20250115/model/DescribeForwardingRuleRequest.h>
#include <tencentcloud/ga2/v20250115/model/DescribeForwardingRuleResponse.h>
#include <tencentcloud/ga2/v20250115/model/DescribeGlobalAcceleratorsRequest.h>
#include <tencentcloud/ga2/v20250115/model/DescribeGlobalAcceleratorsResponse.h>
#include <tencentcloud/ga2/v20250115/model/DescribeListenersRequest.h>
#include <tencentcloud/ga2/v20250115/model/DescribeListenersResponse.h>
#include <tencentcloud/ga2/v20250115/model/ModifyAccelerateAreasRequest.h>
#include <tencentcloud/ga2/v20250115/model/ModifyAccelerateAreasResponse.h>
#include <tencentcloud/ga2/v20250115/model/ModifyEndpointGroupRequest.h>
#include <tencentcloud/ga2/v20250115/model/ModifyEndpointGroupResponse.h>
#include <tencentcloud/ga2/v20250115/model/ModifyForwardingRuleRequest.h>
#include <tencentcloud/ga2/v20250115/model/ModifyForwardingRuleResponse.h>
#include <tencentcloud/ga2/v20250115/model/ModifyGlobalAcceleratorRequest.h>
#include <tencentcloud/ga2/v20250115/model/ModifyGlobalAcceleratorResponse.h>
#include <tencentcloud/ga2/v20250115/model/ModifyListenerRequest.h>
#include <tencentcloud/ga2/v20250115/model/ModifyListenerResponse.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            class Ga2Client : public AbstractClient
            {
            public:
                Ga2Client(const Credential &credential, const std::string &region);
                Ga2Client(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateAccelerateAreasResponse> CreateAccelerateAreasOutcome;
                typedef std::future<CreateAccelerateAreasOutcome> CreateAccelerateAreasOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::CreateAccelerateAreasRequest&, CreateAccelerateAreasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccelerateAreasAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEndpointGroupResponse> CreateEndpointGroupOutcome;
                typedef std::future<CreateEndpointGroupOutcome> CreateEndpointGroupOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::CreateEndpointGroupRequest&, CreateEndpointGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEndpointGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateForwardingRuleResponse> CreateForwardingRuleOutcome;
                typedef std::future<CreateForwardingRuleOutcome> CreateForwardingRuleOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::CreateForwardingRuleRequest&, CreateForwardingRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateForwardingRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateGlobalAcceleratorResponse> CreateGlobalAcceleratorOutcome;
                typedef std::future<CreateGlobalAcceleratorOutcome> CreateGlobalAcceleratorOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::CreateGlobalAcceleratorRequest&, CreateGlobalAcceleratorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateGlobalAcceleratorAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateListenerResponse> CreateListenerOutcome;
                typedef std::future<CreateListenerOutcome> CreateListenerOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::CreateListenerRequest&, CreateListenerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateListenerAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAccelerateAreasResponse> DeleteAccelerateAreasOutcome;
                typedef std::future<DeleteAccelerateAreasOutcome> DeleteAccelerateAreasOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::DeleteAccelerateAreasRequest&, DeleteAccelerateAreasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccelerateAreasAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteEndpointGroupsResponse> DeleteEndpointGroupsOutcome;
                typedef std::future<DeleteEndpointGroupsOutcome> DeleteEndpointGroupsOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::DeleteEndpointGroupsRequest&, DeleteEndpointGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEndpointGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteForwardingRuleResponse> DeleteForwardingRuleOutcome;
                typedef std::future<DeleteForwardingRuleOutcome> DeleteForwardingRuleOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::DeleteForwardingRuleRequest&, DeleteForwardingRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteForwardingRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteGlobalAcceleratorResponse> DeleteGlobalAcceleratorOutcome;
                typedef std::future<DeleteGlobalAcceleratorOutcome> DeleteGlobalAcceleratorOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::DeleteGlobalAcceleratorRequest&, DeleteGlobalAcceleratorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGlobalAcceleratorAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteListenerResponse> DeleteListenerOutcome;
                typedef std::future<DeleteListenerOutcome> DeleteListenerOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::DeleteListenerRequest&, DeleteListenerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteListenerAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccelerateAreasResponse> DescribeAccelerateAreasOutcome;
                typedef std::future<DescribeAccelerateAreasOutcome> DescribeAccelerateAreasOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::DescribeAccelerateAreasRequest&, DescribeAccelerateAreasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccelerateAreasAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccelerateRegionsResponse> DescribeAccelerateRegionsOutcome;
                typedef std::future<DescribeAccelerateRegionsOutcome> DescribeAccelerateRegionsOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::DescribeAccelerateRegionsRequest&, DescribeAccelerateRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccelerateRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCrossBorderSettlementResponse> DescribeCrossBorderSettlementOutcome;
                typedef std::future<DescribeCrossBorderSettlementOutcome> DescribeCrossBorderSettlementOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::DescribeCrossBorderSettlementRequest&, DescribeCrossBorderSettlementOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCrossBorderSettlementAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEndpointGroupsResponse> DescribeEndpointGroupsOutcome;
                typedef std::future<DescribeEndpointGroupsOutcome> DescribeEndpointGroupsOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::DescribeEndpointGroupsRequest&, DescribeEndpointGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEndpointGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeForwardingRuleResponse> DescribeForwardingRuleOutcome;
                typedef std::future<DescribeForwardingRuleOutcome> DescribeForwardingRuleOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::DescribeForwardingRuleRequest&, DescribeForwardingRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeForwardingRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGlobalAcceleratorsResponse> DescribeGlobalAcceleratorsOutcome;
                typedef std::future<DescribeGlobalAcceleratorsOutcome> DescribeGlobalAcceleratorsOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::DescribeGlobalAcceleratorsRequest&, DescribeGlobalAcceleratorsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGlobalAcceleratorsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeListenersResponse> DescribeListenersOutcome;
                typedef std::future<DescribeListenersOutcome> DescribeListenersOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::DescribeListenersRequest&, DescribeListenersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListenersAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAccelerateAreasResponse> ModifyAccelerateAreasOutcome;
                typedef std::future<ModifyAccelerateAreasOutcome> ModifyAccelerateAreasOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::ModifyAccelerateAreasRequest&, ModifyAccelerateAreasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccelerateAreasAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEndpointGroupResponse> ModifyEndpointGroupOutcome;
                typedef std::future<ModifyEndpointGroupOutcome> ModifyEndpointGroupOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::ModifyEndpointGroupRequest&, ModifyEndpointGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEndpointGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyForwardingRuleResponse> ModifyForwardingRuleOutcome;
                typedef std::future<ModifyForwardingRuleOutcome> ModifyForwardingRuleOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::ModifyForwardingRuleRequest&, ModifyForwardingRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyForwardingRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyGlobalAcceleratorResponse> ModifyGlobalAcceleratorOutcome;
                typedef std::future<ModifyGlobalAcceleratorOutcome> ModifyGlobalAcceleratorOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::ModifyGlobalAcceleratorRequest&, ModifyGlobalAcceleratorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGlobalAcceleratorAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyListenerResponse> ModifyListenerOutcome;
                typedef std::future<ModifyListenerOutcome> ModifyListenerOutcomeCallable;
                typedef std::function<void(const Ga2Client*, const Model::ModifyListenerRequest&, ModifyListenerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyListenerAsyncHandler;



                /**
                 *创建加速地域
                 * @param req CreateAccelerateAreasRequest
                 * @return CreateAccelerateAreasOutcome
                 */
                CreateAccelerateAreasOutcome CreateAccelerateAreas(const Model::CreateAccelerateAreasRequest &request);
                void CreateAccelerateAreasAsync(const Model::CreateAccelerateAreasRequest& request, const CreateAccelerateAreasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAccelerateAreasOutcomeCallable CreateAccelerateAreasCallable(const Model::CreateAccelerateAreasRequest& request);

                /**
                 *创建终端节点组。
                 * @param req CreateEndpointGroupRequest
                 * @return CreateEndpointGroupOutcome
                 */
                CreateEndpointGroupOutcome CreateEndpointGroup(const Model::CreateEndpointGroupRequest &request);
                void CreateEndpointGroupAsync(const Model::CreateEndpointGroupRequest& request, const CreateEndpointGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEndpointGroupOutcomeCallable CreateEndpointGroupCallable(const Model::CreateEndpointGroupRequest& request);

                /**
                 *创建七层转发规则
                 * @param req CreateForwardingRuleRequest
                 * @return CreateForwardingRuleOutcome
                 */
                CreateForwardingRuleOutcome CreateForwardingRule(const Model::CreateForwardingRuleRequest &request);
                void CreateForwardingRuleAsync(const Model::CreateForwardingRuleRequest& request, const CreateForwardingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateForwardingRuleOutcomeCallable CreateForwardingRuleCallable(const Model::CreateForwardingRuleRequest& request);

                /**
                 *创建全球加速实例
                 * @param req CreateGlobalAcceleratorRequest
                 * @return CreateGlobalAcceleratorOutcome
                 */
                CreateGlobalAcceleratorOutcome CreateGlobalAccelerator(const Model::CreateGlobalAcceleratorRequest &request);
                void CreateGlobalAcceleratorAsync(const Model::CreateGlobalAcceleratorRequest& request, const CreateGlobalAcceleratorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateGlobalAcceleratorOutcomeCallable CreateGlobalAcceleratorCallable(const Model::CreateGlobalAcceleratorRequest& request);

                /**
                 *创建监听器
                 * @param req CreateListenerRequest
                 * @return CreateListenerOutcome
                 */
                CreateListenerOutcome CreateListener(const Model::CreateListenerRequest &request);
                void CreateListenerAsync(const Model::CreateListenerRequest& request, const CreateListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateListenerOutcomeCallable CreateListenerCallable(const Model::CreateListenerRequest& request);

                /**
                 *删除加速地域
                 * @param req DeleteAccelerateAreasRequest
                 * @return DeleteAccelerateAreasOutcome
                 */
                DeleteAccelerateAreasOutcome DeleteAccelerateAreas(const Model::DeleteAccelerateAreasRequest &request);
                void DeleteAccelerateAreasAsync(const Model::DeleteAccelerateAreasRequest& request, const DeleteAccelerateAreasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAccelerateAreasOutcomeCallable DeleteAccelerateAreasCallable(const Model::DeleteAccelerateAreasRequest& request);

                /**
                 *删除终端节点组。
                 * @param req DeleteEndpointGroupsRequest
                 * @return DeleteEndpointGroupsOutcome
                 */
                DeleteEndpointGroupsOutcome DeleteEndpointGroups(const Model::DeleteEndpointGroupsRequest &request);
                void DeleteEndpointGroupsAsync(const Model::DeleteEndpointGroupsRequest& request, const DeleteEndpointGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteEndpointGroupsOutcomeCallable DeleteEndpointGroupsCallable(const Model::DeleteEndpointGroupsRequest& request);

                /**
                 *删除七层转发规则
                 * @param req DeleteForwardingRuleRequest
                 * @return DeleteForwardingRuleOutcome
                 */
                DeleteForwardingRuleOutcome DeleteForwardingRule(const Model::DeleteForwardingRuleRequest &request);
                void DeleteForwardingRuleAsync(const Model::DeleteForwardingRuleRequest& request, const DeleteForwardingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteForwardingRuleOutcomeCallable DeleteForwardingRuleCallable(const Model::DeleteForwardingRuleRequest& request);

                /**
                 *删除全球加速实例
                 * @param req DeleteGlobalAcceleratorRequest
                 * @return DeleteGlobalAcceleratorOutcome
                 */
                DeleteGlobalAcceleratorOutcome DeleteGlobalAccelerator(const Model::DeleteGlobalAcceleratorRequest &request);
                void DeleteGlobalAcceleratorAsync(const Model::DeleteGlobalAcceleratorRequest& request, const DeleteGlobalAcceleratorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteGlobalAcceleratorOutcomeCallable DeleteGlobalAcceleratorCallable(const Model::DeleteGlobalAcceleratorRequest& request);

                /**
                 *删除监听器
                 * @param req DeleteListenerRequest
                 * @return DeleteListenerOutcome
                 */
                DeleteListenerOutcome DeleteListener(const Model::DeleteListenerRequest &request);
                void DeleteListenerAsync(const Model::DeleteListenerRequest& request, const DeleteListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteListenerOutcomeCallable DeleteListenerCallable(const Model::DeleteListenerRequest& request);

                /**
                 *查询加速地域
                 * @param req DescribeAccelerateAreasRequest
                 * @return DescribeAccelerateAreasOutcome
                 */
                DescribeAccelerateAreasOutcome DescribeAccelerateAreas(const Model::DescribeAccelerateAreasRequest &request);
                void DescribeAccelerateAreasAsync(const Model::DescribeAccelerateAreasRequest& request, const DescribeAccelerateAreasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccelerateAreasOutcomeCallable DescribeAccelerateAreasCallable(const Model::DescribeAccelerateAreasRequest& request);

                /**
                 *查询可选加速区域
                 * @param req DescribeAccelerateRegionsRequest
                 * @return DescribeAccelerateRegionsOutcome
                 */
                DescribeAccelerateRegionsOutcome DescribeAccelerateRegions(const Model::DescribeAccelerateRegionsRequest &request);
                void DescribeAccelerateRegionsAsync(const Model::DescribeAccelerateRegionsRequest& request, const DescribeAccelerateRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccelerateRegionsOutcomeCallable DescribeAccelerateRegionsCallable(const Model::DescribeAccelerateRegionsRequest& request);

                /**
                 *查询跨境账单
                 * @param req DescribeCrossBorderSettlementRequest
                 * @return DescribeCrossBorderSettlementOutcome
                 */
                DescribeCrossBorderSettlementOutcome DescribeCrossBorderSettlement(const Model::DescribeCrossBorderSettlementRequest &request);
                void DescribeCrossBorderSettlementAsync(const Model::DescribeCrossBorderSettlementRequest& request, const DescribeCrossBorderSettlementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCrossBorderSettlementOutcomeCallable DescribeCrossBorderSettlementCallable(const Model::DescribeCrossBorderSettlementRequest& request);

                /**
                 *查询终端节点组。
                 * @param req DescribeEndpointGroupsRequest
                 * @return DescribeEndpointGroupsOutcome
                 */
                DescribeEndpointGroupsOutcome DescribeEndpointGroups(const Model::DescribeEndpointGroupsRequest &request);
                void DescribeEndpointGroupsAsync(const Model::DescribeEndpointGroupsRequest& request, const DescribeEndpointGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEndpointGroupsOutcomeCallable DescribeEndpointGroupsCallable(const Model::DescribeEndpointGroupsRequest& request);

                /**
                 *查看七层转发规则
                 * @param req DescribeForwardingRuleRequest
                 * @return DescribeForwardingRuleOutcome
                 */
                DescribeForwardingRuleOutcome DescribeForwardingRule(const Model::DescribeForwardingRuleRequest &request);
                void DescribeForwardingRuleAsync(const Model::DescribeForwardingRuleRequest& request, const DescribeForwardingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeForwardingRuleOutcomeCallable DescribeForwardingRuleCallable(const Model::DescribeForwardingRuleRequest& request);

                /**
                 *修改全球加速实例
                 * @param req DescribeGlobalAcceleratorsRequest
                 * @return DescribeGlobalAcceleratorsOutcome
                 */
                DescribeGlobalAcceleratorsOutcome DescribeGlobalAccelerators(const Model::DescribeGlobalAcceleratorsRequest &request);
                void DescribeGlobalAcceleratorsAsync(const Model::DescribeGlobalAcceleratorsRequest& request, const DescribeGlobalAcceleratorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGlobalAcceleratorsOutcomeCallable DescribeGlobalAcceleratorsCallable(const Model::DescribeGlobalAcceleratorsRequest& request);

                /**
                 *查询监听器
                 * @param req DescribeListenersRequest
                 * @return DescribeListenersOutcome
                 */
                DescribeListenersOutcome DescribeListeners(const Model::DescribeListenersRequest &request);
                void DescribeListenersAsync(const Model::DescribeListenersRequest& request, const DescribeListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListenersOutcomeCallable DescribeListenersCallable(const Model::DescribeListenersRequest& request);

                /**
                 *修改加速地域
                 * @param req ModifyAccelerateAreasRequest
                 * @return ModifyAccelerateAreasOutcome
                 */
                ModifyAccelerateAreasOutcome ModifyAccelerateAreas(const Model::ModifyAccelerateAreasRequest &request);
                void ModifyAccelerateAreasAsync(const Model::ModifyAccelerateAreasRequest& request, const ModifyAccelerateAreasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAccelerateAreasOutcomeCallable ModifyAccelerateAreasCallable(const Model::ModifyAccelerateAreasRequest& request);

                /**
                 *修改终端节点组。
                 * @param req ModifyEndpointGroupRequest
                 * @return ModifyEndpointGroupOutcome
                 */
                ModifyEndpointGroupOutcome ModifyEndpointGroup(const Model::ModifyEndpointGroupRequest &request);
                void ModifyEndpointGroupAsync(const Model::ModifyEndpointGroupRequest& request, const ModifyEndpointGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEndpointGroupOutcomeCallable ModifyEndpointGroupCallable(const Model::ModifyEndpointGroupRequest& request);

                /**
                 *修改七层转发规则
                 * @param req ModifyForwardingRuleRequest
                 * @return ModifyForwardingRuleOutcome
                 */
                ModifyForwardingRuleOutcome ModifyForwardingRule(const Model::ModifyForwardingRuleRequest &request);
                void ModifyForwardingRuleAsync(const Model::ModifyForwardingRuleRequest& request, const ModifyForwardingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyForwardingRuleOutcomeCallable ModifyForwardingRuleCallable(const Model::ModifyForwardingRuleRequest& request);

                /**
                 *修改全球加速实例
                 * @param req ModifyGlobalAcceleratorRequest
                 * @return ModifyGlobalAcceleratorOutcome
                 */
                ModifyGlobalAcceleratorOutcome ModifyGlobalAccelerator(const Model::ModifyGlobalAcceleratorRequest &request);
                void ModifyGlobalAcceleratorAsync(const Model::ModifyGlobalAcceleratorRequest& request, const ModifyGlobalAcceleratorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyGlobalAcceleratorOutcomeCallable ModifyGlobalAcceleratorCallable(const Model::ModifyGlobalAcceleratorRequest& request);

                /**
                 *修改监听器
                 * @param req ModifyListenerRequest
                 * @return ModifyListenerOutcome
                 */
                ModifyListenerOutcome ModifyListener(const Model::ModifyListenerRequest &request);
                void ModifyListenerAsync(const Model::ModifyListenerRequest& request, const ModifyListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyListenerOutcomeCallable ModifyListenerCallable(const Model::ModifyListenerRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_GA2CLIENT_H_
