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

#ifndef TENCENTCLOUD_GSE_V20191112_GSECLIENT_H_
#define TENCENTCLOUD_GSE_V20191112_GSECLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/gse/v20191112/model/CreateGameServerSessionRequest.h>
#include <tencentcloud/gse/v20191112/model/CreateGameServerSessionResponse.h>
#include <tencentcloud/gse/v20191112/model/DescribeGameServerSessionDetailsRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribeGameServerSessionDetailsResponse.h>
#include <tencentcloud/gse/v20191112/model/DescribeGameServerSessionPlacementRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribeGameServerSessionPlacementResponse.h>
#include <tencentcloud/gse/v20191112/model/DescribeGameServerSessionsRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribeGameServerSessionsResponse.h>
#include <tencentcloud/gse/v20191112/model/DescribeInstancesRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribeInstancesResponse.h>
#include <tencentcloud/gse/v20191112/model/DescribePlayerSessionsRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribePlayerSessionsResponse.h>
#include <tencentcloud/gse/v20191112/model/GetGameServerSessionLogUrlRequest.h>
#include <tencentcloud/gse/v20191112/model/GetGameServerSessionLogUrlResponse.h>
#include <tencentcloud/gse/v20191112/model/GetInstanceAccessRequest.h>
#include <tencentcloud/gse/v20191112/model/GetInstanceAccessResponse.h>
#include <tencentcloud/gse/v20191112/model/JoinGameServerSessionRequest.h>
#include <tencentcloud/gse/v20191112/model/JoinGameServerSessionResponse.h>
#include <tencentcloud/gse/v20191112/model/SearchGameServerSessionsRequest.h>
#include <tencentcloud/gse/v20191112/model/SearchGameServerSessionsResponse.h>
#include <tencentcloud/gse/v20191112/model/StartGameServerSessionPlacementRequest.h>
#include <tencentcloud/gse/v20191112/model/StartGameServerSessionPlacementResponse.h>
#include <tencentcloud/gse/v20191112/model/StopGameServerSessionPlacementRequest.h>
#include <tencentcloud/gse/v20191112/model/StopGameServerSessionPlacementResponse.h>
#include <tencentcloud/gse/v20191112/model/UpdateGameServerSessionRequest.h>
#include <tencentcloud/gse/v20191112/model/UpdateGameServerSessionResponse.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            class GseClient : public AbstractClient
            {
            public:
                GseClient(const Credential &credential, const std::string &region);
                GseClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::CreateGameServerSessionResponse> CreateGameServerSessionOutcome;
                typedef std::future<CreateGameServerSessionOutcome> CreateGameServerSessionOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::CreateGameServerSessionRequest&, CreateGameServerSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateGameServerSessionAsyncHandler;
                typedef Outcome<Error, Model::DescribeGameServerSessionDetailsResponse> DescribeGameServerSessionDetailsOutcome;
                typedef std::future<DescribeGameServerSessionDetailsOutcome> DescribeGameServerSessionDetailsOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeGameServerSessionDetailsRequest&, DescribeGameServerSessionDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGameServerSessionDetailsAsyncHandler;
                typedef Outcome<Error, Model::DescribeGameServerSessionPlacementResponse> DescribeGameServerSessionPlacementOutcome;
                typedef std::future<DescribeGameServerSessionPlacementOutcome> DescribeGameServerSessionPlacementOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeGameServerSessionPlacementRequest&, DescribeGameServerSessionPlacementOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGameServerSessionPlacementAsyncHandler;
                typedef Outcome<Error, Model::DescribeGameServerSessionsResponse> DescribeGameServerSessionsOutcome;
                typedef std::future<DescribeGameServerSessionsOutcome> DescribeGameServerSessionsOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeGameServerSessionsRequest&, DescribeGameServerSessionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGameServerSessionsAsyncHandler;
                typedef Outcome<Error, Model::DescribeInstancesResponse> DescribeInstancesOutcome;
                typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeInstancesRequest&, DescribeInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
                typedef Outcome<Error, Model::DescribePlayerSessionsResponse> DescribePlayerSessionsOutcome;
                typedef std::future<DescribePlayerSessionsOutcome> DescribePlayerSessionsOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribePlayerSessionsRequest&, DescribePlayerSessionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePlayerSessionsAsyncHandler;
                typedef Outcome<Error, Model::GetGameServerSessionLogUrlResponse> GetGameServerSessionLogUrlOutcome;
                typedef std::future<GetGameServerSessionLogUrlOutcome> GetGameServerSessionLogUrlOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::GetGameServerSessionLogUrlRequest&, GetGameServerSessionLogUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetGameServerSessionLogUrlAsyncHandler;
                typedef Outcome<Error, Model::GetInstanceAccessResponse> GetInstanceAccessOutcome;
                typedef std::future<GetInstanceAccessOutcome> GetInstanceAccessOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::GetInstanceAccessRequest&, GetInstanceAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceAccessAsyncHandler;
                typedef Outcome<Error, Model::JoinGameServerSessionResponse> JoinGameServerSessionOutcome;
                typedef std::future<JoinGameServerSessionOutcome> JoinGameServerSessionOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::JoinGameServerSessionRequest&, JoinGameServerSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> JoinGameServerSessionAsyncHandler;
                typedef Outcome<Error, Model::SearchGameServerSessionsResponse> SearchGameServerSessionsOutcome;
                typedef std::future<SearchGameServerSessionsOutcome> SearchGameServerSessionsOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::SearchGameServerSessionsRequest&, SearchGameServerSessionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchGameServerSessionsAsyncHandler;
                typedef Outcome<Error, Model::StartGameServerSessionPlacementResponse> StartGameServerSessionPlacementOutcome;
                typedef std::future<StartGameServerSessionPlacementOutcome> StartGameServerSessionPlacementOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::StartGameServerSessionPlacementRequest&, StartGameServerSessionPlacementOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartGameServerSessionPlacementAsyncHandler;
                typedef Outcome<Error, Model::StopGameServerSessionPlacementResponse> StopGameServerSessionPlacementOutcome;
                typedef std::future<StopGameServerSessionPlacementOutcome> StopGameServerSessionPlacementOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::StopGameServerSessionPlacementRequest&, StopGameServerSessionPlacementOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopGameServerSessionPlacementAsyncHandler;
                typedef Outcome<Error, Model::UpdateGameServerSessionResponse> UpdateGameServerSessionOutcome;
                typedef std::future<UpdateGameServerSessionOutcome> UpdateGameServerSessionOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::UpdateGameServerSessionRequest&, UpdateGameServerSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGameServerSessionAsyncHandler;



                /**
                 *本接口（CreateGameServerSession）用于创建游戏服务会话
                 * @param req CreateGameServerSessionRequest
                 * @return CreateGameServerSessionOutcome
                 */
                CreateGameServerSessionOutcome CreateGameServerSession(const Model::CreateGameServerSessionRequest &request);
                void CreateGameServerSessionAsync(const Model::CreateGameServerSessionRequest& request, const CreateGameServerSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateGameServerSessionOutcomeCallable CreateGameServerSessionCallable(const Model::CreateGameServerSessionRequest& request);

                /**
                 *本接口（DescribeGameServerSessionDetails）用于查询游戏服务器会话详情列表
                 * @param req DescribeGameServerSessionDetailsRequest
                 * @return DescribeGameServerSessionDetailsOutcome
                 */
                DescribeGameServerSessionDetailsOutcome DescribeGameServerSessionDetails(const Model::DescribeGameServerSessionDetailsRequest &request);
                void DescribeGameServerSessionDetailsAsync(const Model::DescribeGameServerSessionDetailsRequest& request, const DescribeGameServerSessionDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGameServerSessionDetailsOutcomeCallable DescribeGameServerSessionDetailsCallable(const Model::DescribeGameServerSessionDetailsRequest& request);

                /**
                 *本接口（DescribeGameServerSessionPlacement）用于查询游戏服务器会话的放置
                 * @param req DescribeGameServerSessionPlacementRequest
                 * @return DescribeGameServerSessionPlacementOutcome
                 */
                DescribeGameServerSessionPlacementOutcome DescribeGameServerSessionPlacement(const Model::DescribeGameServerSessionPlacementRequest &request);
                void DescribeGameServerSessionPlacementAsync(const Model::DescribeGameServerSessionPlacementRequest& request, const DescribeGameServerSessionPlacementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGameServerSessionPlacementOutcomeCallable DescribeGameServerSessionPlacementCallable(const Model::DescribeGameServerSessionPlacementRequest& request);

                /**
                 *本接口（DescribeGameServerSessions）用于查询游戏服务器会话列表
                 * @param req DescribeGameServerSessionsRequest
                 * @return DescribeGameServerSessionsOutcome
                 */
                DescribeGameServerSessionsOutcome DescribeGameServerSessions(const Model::DescribeGameServerSessionsRequest &request);
                void DescribeGameServerSessionsAsync(const Model::DescribeGameServerSessionsRequest& request, const DescribeGameServerSessionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGameServerSessionsOutcomeCallable DescribeGameServerSessionsCallable(const Model::DescribeGameServerSessionsRequest& request);

                /**
                 *用于查询服务器实例列表
                 * @param req DescribeInstancesRequest
                 * @return DescribeInstancesOutcome
                 */
                DescribeInstancesOutcome DescribeInstances(const Model::DescribeInstancesRequest &request);
                void DescribeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesOutcomeCallable DescribeInstancesCallable(const Model::DescribeInstancesRequest& request);

                /**
                 *本接口（DescribePlayerSessions）用于获取玩家会话列表
                 * @param req DescribePlayerSessionsRequest
                 * @return DescribePlayerSessionsOutcome
                 */
                DescribePlayerSessionsOutcome DescribePlayerSessions(const Model::DescribePlayerSessionsRequest &request);
                void DescribePlayerSessionsAsync(const Model::DescribePlayerSessionsRequest& request, const DescribePlayerSessionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePlayerSessionsOutcomeCallable DescribePlayerSessionsCallable(const Model::DescribePlayerSessionsRequest& request);

                /**
                 *本接口（GetGameServerSessionLogUrl）用于获取游戏服务器会话的日志URL
                 * @param req GetGameServerSessionLogUrlRequest
                 * @return GetGameServerSessionLogUrlOutcome
                 */
                GetGameServerSessionLogUrlOutcome GetGameServerSessionLogUrl(const Model::GetGameServerSessionLogUrlRequest &request);
                void GetGameServerSessionLogUrlAsync(const Model::GetGameServerSessionLogUrlRequest& request, const GetGameServerSessionLogUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetGameServerSessionLogUrlOutcomeCallable GetGameServerSessionLogUrlCallable(const Model::GetGameServerSessionLogUrlRequest& request);

                /**
                 *获取实例登录所需要的凭据
                 * @param req GetInstanceAccessRequest
                 * @return GetInstanceAccessOutcome
                 */
                GetInstanceAccessOutcome GetInstanceAccess(const Model::GetInstanceAccessRequest &request);
                void GetInstanceAccessAsync(const Model::GetInstanceAccessRequest& request, const GetInstanceAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetInstanceAccessOutcomeCallable GetInstanceAccessCallable(const Model::GetInstanceAccessRequest& request);

                /**
                 *本接口（JoinGameServerSession）用于加入游戏服务器会话
                 * @param req JoinGameServerSessionRequest
                 * @return JoinGameServerSessionOutcome
                 */
                JoinGameServerSessionOutcome JoinGameServerSession(const Model::JoinGameServerSessionRequest &request);
                void JoinGameServerSessionAsync(const Model::JoinGameServerSessionRequest& request, const JoinGameServerSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                JoinGameServerSessionOutcomeCallable JoinGameServerSessionCallable(const Model::JoinGameServerSessionRequest& request);

                /**
                 *本接口（SearchGameServerSessions）用于搜索游戏服务器会话列表
                 * @param req SearchGameServerSessionsRequest
                 * @return SearchGameServerSessionsOutcome
                 */
                SearchGameServerSessionsOutcome SearchGameServerSessions(const Model::SearchGameServerSessionsRequest &request);
                void SearchGameServerSessionsAsync(const Model::SearchGameServerSessionsRequest& request, const SearchGameServerSessionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchGameServerSessionsOutcomeCallable SearchGameServerSessionsCallable(const Model::SearchGameServerSessionsRequest& request);

                /**
                 *本接口（StartGameServerSessionPlacement）用于开始放置游戏服务器会话
                 * @param req StartGameServerSessionPlacementRequest
                 * @return StartGameServerSessionPlacementOutcome
                 */
                StartGameServerSessionPlacementOutcome StartGameServerSessionPlacement(const Model::StartGameServerSessionPlacementRequest &request);
                void StartGameServerSessionPlacementAsync(const Model::StartGameServerSessionPlacementRequest& request, const StartGameServerSessionPlacementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartGameServerSessionPlacementOutcomeCallable StartGameServerSessionPlacementCallable(const Model::StartGameServerSessionPlacementRequest& request);

                /**
                 *本接口（StopGameServerSessionPlacement）用于停止放置游戏服务器会话
                 * @param req StopGameServerSessionPlacementRequest
                 * @return StopGameServerSessionPlacementOutcome
                 */
                StopGameServerSessionPlacementOutcome StopGameServerSessionPlacement(const Model::StopGameServerSessionPlacementRequest &request);
                void StopGameServerSessionPlacementAsync(const Model::StopGameServerSessionPlacementRequest& request, const StopGameServerSessionPlacementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopGameServerSessionPlacementOutcomeCallable StopGameServerSessionPlacementCallable(const Model::StopGameServerSessionPlacementRequest& request);

                /**
                 *本接口（UpdateGameServerSession）用于更新游戏服务器会话
                 * @param req UpdateGameServerSessionRequest
                 * @return UpdateGameServerSessionOutcome
                 */
                UpdateGameServerSessionOutcome UpdateGameServerSession(const Model::UpdateGameServerSessionRequest &request);
                void UpdateGameServerSessionAsync(const Model::UpdateGameServerSessionRequest& request, const UpdateGameServerSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateGameServerSessionOutcomeCallable UpdateGameServerSessionCallable(const Model::UpdateGameServerSessionRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_GSECLIENT_H_
