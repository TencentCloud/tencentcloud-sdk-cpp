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

#ifndef TENCENTCLOUD_EB_V20210416_EBCLIENT_H_
#define TENCENTCLOUD_EB_V20210416_EBCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/eb/v20210416/model/CheckRuleRequest.h>
#include <tencentcloud/eb/v20210416/model/CheckRuleResponse.h>
#include <tencentcloud/eb/v20210416/model/CheckTransformationRequest.h>
#include <tencentcloud/eb/v20210416/model/CheckTransformationResponse.h>
#include <tencentcloud/eb/v20210416/model/CreateConnectionRequest.h>
#include <tencentcloud/eb/v20210416/model/CreateConnectionResponse.h>
#include <tencentcloud/eb/v20210416/model/CreateEventBusRequest.h>
#include <tencentcloud/eb/v20210416/model/CreateEventBusResponse.h>
#include <tencentcloud/eb/v20210416/model/CreateRuleRequest.h>
#include <tencentcloud/eb/v20210416/model/CreateRuleResponse.h>
#include <tencentcloud/eb/v20210416/model/CreateTargetRequest.h>
#include <tencentcloud/eb/v20210416/model/CreateTargetResponse.h>
#include <tencentcloud/eb/v20210416/model/CreateTransformationRequest.h>
#include <tencentcloud/eb/v20210416/model/CreateTransformationResponse.h>
#include <tencentcloud/eb/v20210416/model/DeleteConnectionRequest.h>
#include <tencentcloud/eb/v20210416/model/DeleteConnectionResponse.h>
#include <tencentcloud/eb/v20210416/model/DeleteEventBusRequest.h>
#include <tencentcloud/eb/v20210416/model/DeleteEventBusResponse.h>
#include <tencentcloud/eb/v20210416/model/DeleteRuleRequest.h>
#include <tencentcloud/eb/v20210416/model/DeleteRuleResponse.h>
#include <tencentcloud/eb/v20210416/model/DeleteTargetRequest.h>
#include <tencentcloud/eb/v20210416/model/DeleteTargetResponse.h>
#include <tencentcloud/eb/v20210416/model/DeleteTransformationRequest.h>
#include <tencentcloud/eb/v20210416/model/DeleteTransformationResponse.h>
#include <tencentcloud/eb/v20210416/model/DescribeLogTagValueRequest.h>
#include <tencentcloud/eb/v20210416/model/DescribeLogTagValueResponse.h>
#include <tencentcloud/eb/v20210416/model/GetEventBusRequest.h>
#include <tencentcloud/eb/v20210416/model/GetEventBusResponse.h>
#include <tencentcloud/eb/v20210416/model/GetPlatformEventTemplateRequest.h>
#include <tencentcloud/eb/v20210416/model/GetPlatformEventTemplateResponse.h>
#include <tencentcloud/eb/v20210416/model/GetRuleRequest.h>
#include <tencentcloud/eb/v20210416/model/GetRuleResponse.h>
#include <tencentcloud/eb/v20210416/model/GetTransformationRequest.h>
#include <tencentcloud/eb/v20210416/model/GetTransformationResponse.h>
#include <tencentcloud/eb/v20210416/model/ListConnectionsRequest.h>
#include <tencentcloud/eb/v20210416/model/ListConnectionsResponse.h>
#include <tencentcloud/eb/v20210416/model/ListEventBusesRequest.h>
#include <tencentcloud/eb/v20210416/model/ListEventBusesResponse.h>
#include <tencentcloud/eb/v20210416/model/ListPlatformEventNamesRequest.h>
#include <tencentcloud/eb/v20210416/model/ListPlatformEventNamesResponse.h>
#include <tencentcloud/eb/v20210416/model/ListPlatformEventPatternsRequest.h>
#include <tencentcloud/eb/v20210416/model/ListPlatformEventPatternsResponse.h>
#include <tencentcloud/eb/v20210416/model/ListPlatformProductsRequest.h>
#include <tencentcloud/eb/v20210416/model/ListPlatformProductsResponse.h>
#include <tencentcloud/eb/v20210416/model/ListRulesRequest.h>
#include <tencentcloud/eb/v20210416/model/ListRulesResponse.h>
#include <tencentcloud/eb/v20210416/model/ListTargetsRequest.h>
#include <tencentcloud/eb/v20210416/model/ListTargetsResponse.h>
#include <tencentcloud/eb/v20210416/model/PublishEventRequest.h>
#include <tencentcloud/eb/v20210416/model/PublishEventResponse.h>
#include <tencentcloud/eb/v20210416/model/PutEventsRequest.h>
#include <tencentcloud/eb/v20210416/model/PutEventsResponse.h>
#include <tencentcloud/eb/v20210416/model/SearchLogRequest.h>
#include <tencentcloud/eb/v20210416/model/SearchLogResponse.h>
#include <tencentcloud/eb/v20210416/model/UpdateConnectionRequest.h>
#include <tencentcloud/eb/v20210416/model/UpdateConnectionResponse.h>
#include <tencentcloud/eb/v20210416/model/UpdateEventBusRequest.h>
#include <tencentcloud/eb/v20210416/model/UpdateEventBusResponse.h>
#include <tencentcloud/eb/v20210416/model/UpdateRuleRequest.h>
#include <tencentcloud/eb/v20210416/model/UpdateRuleResponse.h>
#include <tencentcloud/eb/v20210416/model/UpdateTargetRequest.h>
#include <tencentcloud/eb/v20210416/model/UpdateTargetResponse.h>
#include <tencentcloud/eb/v20210416/model/UpdateTransformationRequest.h>
#include <tencentcloud/eb/v20210416/model/UpdateTransformationResponse.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            class EbClient : public AbstractClient
            {
            public:
                EbClient(const Credential &credential, const std::string &region);
                EbClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CheckRuleResponse> CheckRuleOutcome;
                typedef std::future<CheckRuleOutcome> CheckRuleOutcomeCallable;
                typedef std::function<void(const EbClient*, const Model::CheckRuleRequest&, CheckRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckTransformationResponse> CheckTransformationOutcome;
                typedef std::future<CheckTransformationOutcome> CheckTransformationOutcomeCallable;
                typedef std::function<void(const EbClient*, const Model::CheckTransformationRequest&, CheckTransformationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckTransformationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateConnectionResponse> CreateConnectionOutcome;
                typedef std::future<CreateConnectionOutcome> CreateConnectionOutcomeCallable;
                typedef std::function<void(const EbClient*, const Model::CreateConnectionRequest&, CreateConnectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateConnectionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEventBusResponse> CreateEventBusOutcome;
                typedef std::future<CreateEventBusOutcome> CreateEventBusOutcomeCallable;
                typedef std::function<void(const EbClient*, const Model::CreateEventBusRequest&, CreateEventBusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEventBusAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRuleResponse> CreateRuleOutcome;
                typedef std::future<CreateRuleOutcome> CreateRuleOutcomeCallable;
                typedef std::function<void(const EbClient*, const Model::CreateRuleRequest&, CreateRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTargetResponse> CreateTargetOutcome;
                typedef std::future<CreateTargetOutcome> CreateTargetOutcomeCallable;
                typedef std::function<void(const EbClient*, const Model::CreateTargetRequest&, CreateTargetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTargetAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTransformationResponse> CreateTransformationOutcome;
                typedef std::future<CreateTransformationOutcome> CreateTransformationOutcomeCallable;
                typedef std::function<void(const EbClient*, const Model::CreateTransformationRequest&, CreateTransformationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTransformationAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteConnectionResponse> DeleteConnectionOutcome;
                typedef std::future<DeleteConnectionOutcome> DeleteConnectionOutcomeCallable;
                typedef std::function<void(const EbClient*, const Model::DeleteConnectionRequest&, DeleteConnectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConnectionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteEventBusResponse> DeleteEventBusOutcome;
                typedef std::future<DeleteEventBusOutcome> DeleteEventBusOutcomeCallable;
                typedef std::function<void(const EbClient*, const Model::DeleteEventBusRequest&, DeleteEventBusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEventBusAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRuleResponse> DeleteRuleOutcome;
                typedef std::future<DeleteRuleOutcome> DeleteRuleOutcomeCallable;
                typedef std::function<void(const EbClient*, const Model::DeleteRuleRequest&, DeleteRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTargetResponse> DeleteTargetOutcome;
                typedef std::future<DeleteTargetOutcome> DeleteTargetOutcomeCallable;
                typedef std::function<void(const EbClient*, const Model::DeleteTargetRequest&, DeleteTargetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTargetAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTransformationResponse> DeleteTransformationOutcome;
                typedef std::future<DeleteTransformationOutcome> DeleteTransformationOutcomeCallable;
                typedef std::function<void(const EbClient*, const Model::DeleteTransformationRequest&, DeleteTransformationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTransformationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogTagValueResponse> DescribeLogTagValueOutcome;
                typedef std::future<DescribeLogTagValueOutcome> DescribeLogTagValueOutcomeCallable;
                typedef std::function<void(const EbClient*, const Model::DescribeLogTagValueRequest&, DescribeLogTagValueOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogTagValueAsyncHandler;
                typedef Outcome<Core::Error, Model::GetEventBusResponse> GetEventBusOutcome;
                typedef std::future<GetEventBusOutcome> GetEventBusOutcomeCallable;
                typedef std::function<void(const EbClient*, const Model::GetEventBusRequest&, GetEventBusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetEventBusAsyncHandler;
                typedef Outcome<Core::Error, Model::GetPlatformEventTemplateResponse> GetPlatformEventTemplateOutcome;
                typedef std::future<GetPlatformEventTemplateOutcome> GetPlatformEventTemplateOutcomeCallable;
                typedef std::function<void(const EbClient*, const Model::GetPlatformEventTemplateRequest&, GetPlatformEventTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetPlatformEventTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::GetRuleResponse> GetRuleOutcome;
                typedef std::future<GetRuleOutcome> GetRuleOutcomeCallable;
                typedef std::function<void(const EbClient*, const Model::GetRuleRequest&, GetRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::GetTransformationResponse> GetTransformationOutcome;
                typedef std::future<GetTransformationOutcome> GetTransformationOutcomeCallable;
                typedef std::function<void(const EbClient*, const Model::GetTransformationRequest&, GetTransformationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTransformationAsyncHandler;
                typedef Outcome<Core::Error, Model::ListConnectionsResponse> ListConnectionsOutcome;
                typedef std::future<ListConnectionsOutcome> ListConnectionsOutcomeCallable;
                typedef std::function<void(const EbClient*, const Model::ListConnectionsRequest&, ListConnectionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListConnectionsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListEventBusesResponse> ListEventBusesOutcome;
                typedef std::future<ListEventBusesOutcome> ListEventBusesOutcomeCallable;
                typedef std::function<void(const EbClient*, const Model::ListEventBusesRequest&, ListEventBusesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListEventBusesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListPlatformEventNamesResponse> ListPlatformEventNamesOutcome;
                typedef std::future<ListPlatformEventNamesOutcome> ListPlatformEventNamesOutcomeCallable;
                typedef std::function<void(const EbClient*, const Model::ListPlatformEventNamesRequest&, ListPlatformEventNamesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListPlatformEventNamesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListPlatformEventPatternsResponse> ListPlatformEventPatternsOutcome;
                typedef std::future<ListPlatformEventPatternsOutcome> ListPlatformEventPatternsOutcomeCallable;
                typedef std::function<void(const EbClient*, const Model::ListPlatformEventPatternsRequest&, ListPlatformEventPatternsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListPlatformEventPatternsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListPlatformProductsResponse> ListPlatformProductsOutcome;
                typedef std::future<ListPlatformProductsOutcome> ListPlatformProductsOutcomeCallable;
                typedef std::function<void(const EbClient*, const Model::ListPlatformProductsRequest&, ListPlatformProductsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListPlatformProductsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListRulesResponse> ListRulesOutcome;
                typedef std::future<ListRulesOutcome> ListRulesOutcomeCallable;
                typedef std::function<void(const EbClient*, const Model::ListRulesRequest&, ListRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListTargetsResponse> ListTargetsOutcome;
                typedef std::future<ListTargetsOutcome> ListTargetsOutcomeCallable;
                typedef std::function<void(const EbClient*, const Model::ListTargetsRequest&, ListTargetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListTargetsAsyncHandler;
                typedef Outcome<Core::Error, Model::PublishEventResponse> PublishEventOutcome;
                typedef std::future<PublishEventOutcome> PublishEventOutcomeCallable;
                typedef std::function<void(const EbClient*, const Model::PublishEventRequest&, PublishEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PublishEventAsyncHandler;
                typedef Outcome<Core::Error, Model::PutEventsResponse> PutEventsOutcome;
                typedef std::future<PutEventsOutcome> PutEventsOutcomeCallable;
                typedef std::function<void(const EbClient*, const Model::PutEventsRequest&, PutEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PutEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchLogResponse> SearchLogOutcome;
                typedef std::future<SearchLogOutcome> SearchLogOutcomeCallable;
                typedef std::function<void(const EbClient*, const Model::SearchLogRequest&, SearchLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchLogAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateConnectionResponse> UpdateConnectionOutcome;
                typedef std::future<UpdateConnectionOutcome> UpdateConnectionOutcomeCallable;
                typedef std::function<void(const EbClient*, const Model::UpdateConnectionRequest&, UpdateConnectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateConnectionAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateEventBusResponse> UpdateEventBusOutcome;
                typedef std::future<UpdateEventBusOutcome> UpdateEventBusOutcomeCallable;
                typedef std::function<void(const EbClient*, const Model::UpdateEventBusRequest&, UpdateEventBusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEventBusAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateRuleResponse> UpdateRuleOutcome;
                typedef std::future<UpdateRuleOutcome> UpdateRuleOutcomeCallable;
                typedef std::function<void(const EbClient*, const Model::UpdateRuleRequest&, UpdateRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateTargetResponse> UpdateTargetOutcome;
                typedef std::future<UpdateTargetOutcome> UpdateTargetOutcomeCallable;
                typedef std::function<void(const EbClient*, const Model::UpdateTargetRequest&, UpdateTargetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTargetAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateTransformationResponse> UpdateTransformationOutcome;
                typedef std::future<UpdateTransformationOutcome> UpdateTransformationOutcomeCallable;
                typedef std::function<void(const EbClient*, const Model::UpdateTransformationRequest&, UpdateTransformationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTransformationAsyncHandler;



                /**
                 *检验规则
                 * @param req CheckRuleRequest
                 * @return CheckRuleOutcome
                 */
                CheckRuleOutcome CheckRule(const Model::CheckRuleRequest &request);
                void CheckRuleAsync(const Model::CheckRuleRequest& request, const CheckRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckRuleOutcomeCallable CheckRuleCallable(const Model::CheckRuleRequest& request);

                /**
                 *用于在ETL配置页面, 测试规则和数据.
                 * @param req CheckTransformationRequest
                 * @return CheckTransformationOutcome
                 */
                CheckTransformationOutcome CheckTransformation(const Model::CheckTransformationRequest &request);
                void CheckTransformationAsync(const Model::CheckTransformationRequest& request, const CheckTransformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckTransformationOutcomeCallable CheckTransformationCallable(const Model::CheckTransformationRequest& request);

                /**
                 *创建事件连接器
                 * @param req CreateConnectionRequest
                 * @return CreateConnectionOutcome
                 */
                CreateConnectionOutcome CreateConnection(const Model::CreateConnectionRequest &request);
                void CreateConnectionAsync(const Model::CreateConnectionRequest& request, const CreateConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateConnectionOutcomeCallable CreateConnectionCallable(const Model::CreateConnectionRequest& request);

                /**
                 *用于创建事件集
                 * @param req CreateEventBusRequest
                 * @return CreateEventBusOutcome
                 */
                CreateEventBusOutcome CreateEventBus(const Model::CreateEventBusRequest &request);
                void CreateEventBusAsync(const Model::CreateEventBusRequest& request, const CreateEventBusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEventBusOutcomeCallable CreateEventBusCallable(const Model::CreateEventBusRequest& request);

                /**
                 *创建事件规则
                 * @param req CreateRuleRequest
                 * @return CreateRuleOutcome
                 */
                CreateRuleOutcome CreateRule(const Model::CreateRuleRequest &request);
                void CreateRuleAsync(const Model::CreateRuleRequest& request, const CreateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRuleOutcomeCallable CreateRuleCallable(const Model::CreateRuleRequest& request);

                /**
                 *创建事件目标
                 * @param req CreateTargetRequest
                 * @return CreateTargetOutcome
                 */
                CreateTargetOutcome CreateTarget(const Model::CreateTargetRequest &request);
                void CreateTargetAsync(const Model::CreateTargetRequest& request, const CreateTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTargetOutcomeCallable CreateTargetCallable(const Model::CreateTargetRequest& request);

                /**
                 *用于创建转换器
                 * @param req CreateTransformationRequest
                 * @return CreateTransformationOutcome
                 */
                CreateTransformationOutcome CreateTransformation(const Model::CreateTransformationRequest &request);
                void CreateTransformationAsync(const Model::CreateTransformationRequest& request, const CreateTransformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTransformationOutcomeCallable CreateTransformationCallable(const Model::CreateTransformationRequest& request);

                /**
                 *删除事件连接器
                 * @param req DeleteConnectionRequest
                 * @return DeleteConnectionOutcome
                 */
                DeleteConnectionOutcome DeleteConnection(const Model::DeleteConnectionRequest &request);
                void DeleteConnectionAsync(const Model::DeleteConnectionRequest& request, const DeleteConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteConnectionOutcomeCallable DeleteConnectionCallable(const Model::DeleteConnectionRequest& request);

                /**
                 *删除事件集
                 * @param req DeleteEventBusRequest
                 * @return DeleteEventBusOutcome
                 */
                DeleteEventBusOutcome DeleteEventBus(const Model::DeleteEventBusRequest &request);
                void DeleteEventBusAsync(const Model::DeleteEventBusRequest& request, const DeleteEventBusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteEventBusOutcomeCallable DeleteEventBusCallable(const Model::DeleteEventBusRequest& request);

                /**
                 *删除事件规则
                 * @param req DeleteRuleRequest
                 * @return DeleteRuleOutcome
                 */
                DeleteRuleOutcome DeleteRule(const Model::DeleteRuleRequest &request);
                void DeleteRuleAsync(const Model::DeleteRuleRequest& request, const DeleteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRuleOutcomeCallable DeleteRuleCallable(const Model::DeleteRuleRequest& request);

                /**
                 *删除事件目标
                 * @param req DeleteTargetRequest
                 * @return DeleteTargetOutcome
                 */
                DeleteTargetOutcome DeleteTarget(const Model::DeleteTargetRequest &request);
                void DeleteTargetAsync(const Model::DeleteTargetRequest& request, const DeleteTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTargetOutcomeCallable DeleteTargetCallable(const Model::DeleteTargetRequest& request);

                /**
                 *用于删除转换器
                 * @param req DeleteTransformationRequest
                 * @return DeleteTransformationOutcome
                 */
                DeleteTransformationOutcome DeleteTransformation(const Model::DeleteTransformationRequest &request);
                void DeleteTransformationAsync(const Model::DeleteTransformationRequest& request, const DeleteTransformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTransformationOutcomeCallable DeleteTransformationCallable(const Model::DeleteTransformationRequest& request);

                /**
                 *前置条件：需开启事件存储；事件查询维度值
                 * @param req DescribeLogTagValueRequest
                 * @return DescribeLogTagValueOutcome
                 */
                DescribeLogTagValueOutcome DescribeLogTagValue(const Model::DescribeLogTagValueRequest &request);
                void DescribeLogTagValueAsync(const Model::DescribeLogTagValueRequest& request, const DescribeLogTagValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogTagValueOutcomeCallable DescribeLogTagValueCallable(const Model::DescribeLogTagValueRequest& request);

                /**
                 *获取事件集详情
                 * @param req GetEventBusRequest
                 * @return GetEventBusOutcome
                 */
                GetEventBusOutcome GetEventBus(const Model::GetEventBusRequest &request);
                void GetEventBusAsync(const Model::GetEventBusRequest& request, const GetEventBusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetEventBusOutcomeCallable GetEventBusCallable(const Model::GetEventBusRequest& request);

                /**
                 *获取平台产品事件模板
                 * @param req GetPlatformEventTemplateRequest
                 * @return GetPlatformEventTemplateOutcome
                 */
                GetPlatformEventTemplateOutcome GetPlatformEventTemplate(const Model::GetPlatformEventTemplateRequest &request);
                void GetPlatformEventTemplateAsync(const Model::GetPlatformEventTemplateRequest& request, const GetPlatformEventTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetPlatformEventTemplateOutcomeCallable GetPlatformEventTemplateCallable(const Model::GetPlatformEventTemplateRequest& request);

                /**
                 *获取事件规则详情
                 * @param req GetRuleRequest
                 * @return GetRuleOutcome
                 */
                GetRuleOutcome GetRule(const Model::GetRuleRequest &request);
                void GetRuleAsync(const Model::GetRuleRequest& request, const GetRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetRuleOutcomeCallable GetRuleCallable(const Model::GetRuleRequest& request);

                /**
                 *用于获取转换器详情
                 * @param req GetTransformationRequest
                 * @return GetTransformationOutcome
                 */
                GetTransformationOutcome GetTransformation(const Model::GetTransformationRequest &request);
                void GetTransformationAsync(const Model::GetTransformationRequest& request, const GetTransformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTransformationOutcomeCallable GetTransformationCallable(const Model::GetTransformationRequest& request);

                /**
                 *获取事件连接器列表
                 * @param req ListConnectionsRequest
                 * @return ListConnectionsOutcome
                 */
                ListConnectionsOutcome ListConnections(const Model::ListConnectionsRequest &request);
                void ListConnectionsAsync(const Model::ListConnectionsRequest& request, const ListConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListConnectionsOutcomeCallable ListConnectionsCallable(const Model::ListConnectionsRequest& request);

                /**
                 *获取事件集列表
                 * @param req ListEventBusesRequest
                 * @return ListEventBusesOutcome
                 */
                ListEventBusesOutcome ListEventBuses(const Model::ListEventBusesRequest &request);
                void ListEventBusesAsync(const Model::ListEventBusesRequest& request, const ListEventBusesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListEventBusesOutcomeCallable ListEventBusesCallable(const Model::ListEventBusesRequest& request);

                /**
                 *获取平台产品事件名称
                 * @param req ListPlatformEventNamesRequest
                 * @return ListPlatformEventNamesOutcome
                 */
                ListPlatformEventNamesOutcome ListPlatformEventNames(const Model::ListPlatformEventNamesRequest &request);
                void ListPlatformEventNamesAsync(const Model::ListPlatformEventNamesRequest& request, const ListPlatformEventNamesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListPlatformEventNamesOutcomeCallable ListPlatformEventNamesCallable(const Model::ListPlatformEventNamesRequest& request);

                /**
                 *获取平台产品事件匹配规则
                 * @param req ListPlatformEventPatternsRequest
                 * @return ListPlatformEventPatternsOutcome
                 */
                ListPlatformEventPatternsOutcome ListPlatformEventPatterns(const Model::ListPlatformEventPatternsRequest &request);
                void ListPlatformEventPatternsAsync(const Model::ListPlatformEventPatternsRequest& request, const ListPlatformEventPatternsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListPlatformEventPatternsOutcomeCallable ListPlatformEventPatternsCallable(const Model::ListPlatformEventPatternsRequest& request);

                /**
                 *获取平台产品列表
                 * @param req ListPlatformProductsRequest
                 * @return ListPlatformProductsOutcome
                 */
                ListPlatformProductsOutcome ListPlatformProducts(const Model::ListPlatformProductsRequest &request);
                void ListPlatformProductsAsync(const Model::ListPlatformProductsRequest& request, const ListPlatformProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListPlatformProductsOutcomeCallable ListPlatformProductsCallable(const Model::ListPlatformProductsRequest& request);

                /**
                 *获取事件规则列表
                 * @param req ListRulesRequest
                 * @return ListRulesOutcome
                 */
                ListRulesOutcome ListRules(const Model::ListRulesRequest &request);
                void ListRulesAsync(const Model::ListRulesRequest& request, const ListRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListRulesOutcomeCallable ListRulesCallable(const Model::ListRulesRequest& request);

                /**
                 *获取事件目标列表
                 * @param req ListTargetsRequest
                 * @return ListTargetsOutcome
                 */
                ListTargetsOutcome ListTargets(const Model::ListTargetsRequest &request);
                void ListTargetsAsync(const Model::ListTargetsRequest& request, const ListTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListTargetsOutcomeCallable ListTargetsCallable(const Model::ListTargetsRequest& request);

                /**
                 *（已废弃）用于Event事件投递
                 * @param req PublishEventRequest
                 * @return PublishEventOutcome
                 */
                PublishEventOutcome PublishEvent(const Model::PublishEventRequest &request);
                void PublishEventAsync(const Model::PublishEventRequest& request, const PublishEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PublishEventOutcomeCallable PublishEventCallable(const Model::PublishEventRequest& request);

                /**
                 *用于Event事件投递
                 * @param req PutEventsRequest
                 * @return PutEventsOutcome
                 */
                PutEventsOutcome PutEvents(const Model::PutEventsRequest &request);
                void PutEventsAsync(const Model::PutEventsRequest& request, const PutEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PutEventsOutcomeCallable PutEventsCallable(const Model::PutEventsRequest& request);

                /**
                 *前置条件：开启事件存储；查询历史推送事件
                 * @param req SearchLogRequest
                 * @return SearchLogOutcome
                 */
                SearchLogOutcome SearchLog(const Model::SearchLogRequest &request);
                void SearchLogAsync(const Model::SearchLogRequest& request, const SearchLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchLogOutcomeCallable SearchLogCallable(const Model::SearchLogRequest& request);

                /**
                 *更新事件连接器
                 * @param req UpdateConnectionRequest
                 * @return UpdateConnectionOutcome
                 */
                UpdateConnectionOutcome UpdateConnection(const Model::UpdateConnectionRequest &request);
                void UpdateConnectionAsync(const Model::UpdateConnectionRequest& request, const UpdateConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateConnectionOutcomeCallable UpdateConnectionCallable(const Model::UpdateConnectionRequest& request);

                /**
                 *更新事件集
                 * @param req UpdateEventBusRequest
                 * @return UpdateEventBusOutcome
                 */
                UpdateEventBusOutcome UpdateEventBus(const Model::UpdateEventBusRequest &request);
                void UpdateEventBusAsync(const Model::UpdateEventBusRequest& request, const UpdateEventBusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateEventBusOutcomeCallable UpdateEventBusCallable(const Model::UpdateEventBusRequest& request);

                /**
                 *更新事件规则
                 * @param req UpdateRuleRequest
                 * @return UpdateRuleOutcome
                 */
                UpdateRuleOutcome UpdateRule(const Model::UpdateRuleRequest &request);
                void UpdateRuleAsync(const Model::UpdateRuleRequest& request, const UpdateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateRuleOutcomeCallable UpdateRuleCallable(const Model::UpdateRuleRequest& request);

                /**
                 *更新事件目标
                 * @param req UpdateTargetRequest
                 * @return UpdateTargetOutcome
                 */
                UpdateTargetOutcome UpdateTarget(const Model::UpdateTargetRequest &request);
                void UpdateTargetAsync(const Model::UpdateTargetRequest& request, const UpdateTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateTargetOutcomeCallable UpdateTargetCallable(const Model::UpdateTargetRequest& request);

                /**
                 *用于更新转换器
                 * @param req UpdateTransformationRequest
                 * @return UpdateTransformationOutcome
                 */
                UpdateTransformationOutcome UpdateTransformation(const Model::UpdateTransformationRequest &request);
                void UpdateTransformationAsync(const Model::UpdateTransformationRequest& request, const UpdateTransformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateTransformationOutcomeCallable UpdateTransformationCallable(const Model::UpdateTransformationRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_EBCLIENT_H_
