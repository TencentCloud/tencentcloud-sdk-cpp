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

#ifndef TENCENTCLOUD_GS_V20191118_GSCLIENT_H_
#define TENCENTCLOUD_GS_V20191118_GSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/gs/v20191118/model/CreateSessionRequest.h>
#include <tencentcloud/gs/v20191118/model/CreateSessionResponse.h>
#include <tencentcloud/gs/v20191118/model/DescribeWorkersRequest.h>
#include <tencentcloud/gs/v20191118/model/DescribeWorkersResponse.h>
#include <tencentcloud/gs/v20191118/model/DescribeWorkersInfoRequest.h>
#include <tencentcloud/gs/v20191118/model/DescribeWorkersInfoResponse.h>
#include <tencentcloud/gs/v20191118/model/ModifyWorkersRequest.h>
#include <tencentcloud/gs/v20191118/model/ModifyWorkersResponse.h>
#include <tencentcloud/gs/v20191118/model/StopGameRequest.h>
#include <tencentcloud/gs/v20191118/model/StopGameResponse.h>
#include <tencentcloud/gs/v20191118/model/TrylockWorkerRequest.h>
#include <tencentcloud/gs/v20191118/model/TrylockWorkerResponse.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            class GsClient : public AbstractClient
            {
            public:
                GsClient(const Credential &credential, const std::string &region);
                GsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::CreateSessionResponse> CreateSessionOutcome;
                typedef std::future<CreateSessionOutcome> CreateSessionOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::CreateSessionRequest&, CreateSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSessionAsyncHandler;
                typedef Outcome<Error, Model::DescribeWorkersResponse> DescribeWorkersOutcome;
                typedef std::future<DescribeWorkersOutcome> DescribeWorkersOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::DescribeWorkersRequest&, DescribeWorkersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkersAsyncHandler;
                typedef Outcome<Error, Model::DescribeWorkersInfoResponse> DescribeWorkersInfoOutcome;
                typedef std::future<DescribeWorkersInfoOutcome> DescribeWorkersInfoOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::DescribeWorkersInfoRequest&, DescribeWorkersInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkersInfoAsyncHandler;
                typedef Outcome<Error, Model::ModifyWorkersResponse> ModifyWorkersOutcome;
                typedef std::future<ModifyWorkersOutcome> ModifyWorkersOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::ModifyWorkersRequest&, ModifyWorkersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWorkersAsyncHandler;
                typedef Outcome<Error, Model::StopGameResponse> StopGameOutcome;
                typedef std::future<StopGameOutcome> StopGameOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::StopGameRequest&, StopGameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopGameAsyncHandler;
                typedef Outcome<Error, Model::TrylockWorkerResponse> TrylockWorkerOutcome;
                typedef std::future<TrylockWorkerOutcome> TrylockWorkerOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::TrylockWorkerRequest&, TrylockWorkerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TrylockWorkerAsyncHandler;



                /**
                 *创建会话
                 * @param req CreateSessionRequest
                 * @return CreateSessionOutcome
                 */
                CreateSessionOutcome CreateSession(const Model::CreateSessionRequest &request);
                void CreateSessionAsync(const Model::CreateSessionRequest& request, const CreateSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSessionOutcomeCallable CreateSessionCallable(const Model::CreateSessionRequest& request);

                /**
                 *查询空闲机器数量
                 * @param req DescribeWorkersRequest
                 * @return DescribeWorkersOutcome
                 */
                DescribeWorkersOutcome DescribeWorkers(const Model::DescribeWorkersRequest &request);
                void DescribeWorkersAsync(const Model::DescribeWorkersRequest& request, const DescribeWorkersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWorkersOutcomeCallable DescribeWorkersCallable(const Model::DescribeWorkersRequest& request);

                /**
                 *获取机器信息
                 * @param req DescribeWorkersInfoRequest
                 * @return DescribeWorkersInfoOutcome
                 */
                DescribeWorkersInfoOutcome DescribeWorkersInfo(const Model::DescribeWorkersInfoRequest &request);
                void DescribeWorkersInfoAsync(const Model::DescribeWorkersInfoRequest& request, const DescribeWorkersInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWorkersInfoOutcomeCallable DescribeWorkersInfoCallable(const Model::DescribeWorkersInfoRequest& request);

                /**
                 *修改机器信息
                 * @param req ModifyWorkersRequest
                 * @return ModifyWorkersOutcome
                 */
                ModifyWorkersOutcome ModifyWorkers(const Model::ModifyWorkersRequest &request);
                void ModifyWorkersAsync(const Model::ModifyWorkersRequest& request, const ModifyWorkersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWorkersOutcomeCallable ModifyWorkersCallable(const Model::ModifyWorkersRequest& request);

                /**
                 *强制退出游戏
                 * @param req StopGameRequest
                 * @return StopGameOutcome
                 */
                StopGameOutcome StopGame(const Model::StopGameRequest &request);
                void StopGameAsync(const Model::StopGameRequest& request, const StopGameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopGameOutcomeCallable StopGameCallable(const Model::StopGameRequest& request);

                /**
                 *尝试锁定机器
                 * @param req TrylockWorkerRequest
                 * @return TrylockWorkerOutcome
                 */
                TrylockWorkerOutcome TrylockWorker(const Model::TrylockWorkerRequest &request);
                void TrylockWorkerAsync(const Model::TrylockWorkerRequest& request, const TrylockWorkerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TrylockWorkerOutcomeCallable TrylockWorkerCallable(const Model::TrylockWorkerRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_GSCLIENT_H_
