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
#include <tencentcloud/gs/v20191118/model/DescribeInstancesCountRequest.h>
#include <tencentcloud/gs/v20191118/model/DescribeInstancesCountResponse.h>
#include <tencentcloud/gs/v20191118/model/SaveGameArchiveRequest.h>
#include <tencentcloud/gs/v20191118/model/SaveGameArchiveResponse.h>
#include <tencentcloud/gs/v20191118/model/StartPublishStreamRequest.h>
#include <tencentcloud/gs/v20191118/model/StartPublishStreamResponse.h>
#include <tencentcloud/gs/v20191118/model/StartPublishStreamToCSSRequest.h>
#include <tencentcloud/gs/v20191118/model/StartPublishStreamToCSSResponse.h>
#include <tencentcloud/gs/v20191118/model/StopGameRequest.h>
#include <tencentcloud/gs/v20191118/model/StopGameResponse.h>
#include <tencentcloud/gs/v20191118/model/StopPublishStreamRequest.h>
#include <tencentcloud/gs/v20191118/model/StopPublishStreamResponse.h>
#include <tencentcloud/gs/v20191118/model/SwitchGameArchiveRequest.h>
#include <tencentcloud/gs/v20191118/model/SwitchGameArchiveResponse.h>
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

                typedef Outcome<Core::Error, Model::CreateSessionResponse> CreateSessionOutcome;
                typedef std::future<CreateSessionOutcome> CreateSessionOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::CreateSessionRequest&, CreateSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSessionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesCountResponse> DescribeInstancesCountOutcome;
                typedef std::future<DescribeInstancesCountOutcome> DescribeInstancesCountOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::DescribeInstancesCountRequest&, DescribeInstancesCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesCountAsyncHandler;
                typedef Outcome<Core::Error, Model::SaveGameArchiveResponse> SaveGameArchiveOutcome;
                typedef std::future<SaveGameArchiveOutcome> SaveGameArchiveOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::SaveGameArchiveRequest&, SaveGameArchiveOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SaveGameArchiveAsyncHandler;
                typedef Outcome<Core::Error, Model::StartPublishStreamResponse> StartPublishStreamOutcome;
                typedef std::future<StartPublishStreamOutcome> StartPublishStreamOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::StartPublishStreamRequest&, StartPublishStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartPublishStreamAsyncHandler;
                typedef Outcome<Core::Error, Model::StartPublishStreamToCSSResponse> StartPublishStreamToCSSOutcome;
                typedef std::future<StartPublishStreamToCSSOutcome> StartPublishStreamToCSSOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::StartPublishStreamToCSSRequest&, StartPublishStreamToCSSOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartPublishStreamToCSSAsyncHandler;
                typedef Outcome<Core::Error, Model::StopGameResponse> StopGameOutcome;
                typedef std::future<StopGameOutcome> StopGameOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::StopGameRequest&, StopGameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopGameAsyncHandler;
                typedef Outcome<Core::Error, Model::StopPublishStreamResponse> StopPublishStreamOutcome;
                typedef std::future<StopPublishStreamOutcome> StopPublishStreamOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::StopPublishStreamRequest&, StopPublishStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopPublishStreamAsyncHandler;
                typedef Outcome<Core::Error, Model::SwitchGameArchiveResponse> SwitchGameArchiveOutcome;
                typedef std::future<SwitchGameArchiveOutcome> SwitchGameArchiveOutcomeCallable;
                typedef std::function<void(const GsClient*, const Model::SwitchGameArchiveRequest&, SwitchGameArchiveOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SwitchGameArchiveAsyncHandler;
                typedef Outcome<Core::Error, Model::TrylockWorkerResponse> TrylockWorkerOutcome;
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
                 *获取并发总数和运行数
                 * @param req DescribeInstancesCountRequest
                 * @return DescribeInstancesCountOutcome
                 */
                DescribeInstancesCountOutcome DescribeInstancesCount(const Model::DescribeInstancesCountRequest &request);
                void DescribeInstancesCountAsync(const Model::DescribeInstancesCountRequest& request, const DescribeInstancesCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesCountOutcomeCallable DescribeInstancesCountCallable(const Model::DescribeInstancesCountRequest& request);

                /**
                 *保存游戏存档
                 * @param req SaveGameArchiveRequest
                 * @return SaveGameArchiveOutcome
                 */
                SaveGameArchiveOutcome SaveGameArchive(const Model::SaveGameArchiveRequest &request);
                void SaveGameArchiveAsync(const Model::SaveGameArchiveRequest& request, const SaveGameArchiveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SaveGameArchiveOutcomeCallable SaveGameArchiveCallable(const Model::SaveGameArchiveRequest& request);

                /**
                 *开始云端推流
                 * @param req StartPublishStreamRequest
                 * @return StartPublishStreamOutcome
                 */
                StartPublishStreamOutcome StartPublishStream(const Model::StartPublishStreamRequest &request);
                void StartPublishStreamAsync(const Model::StartPublishStreamRequest& request, const StartPublishStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartPublishStreamOutcomeCallable StartPublishStreamCallable(const Model::StartPublishStreamRequest& request);

                /**
                 *开始云端推流
                 * @param req StartPublishStreamToCSSRequest
                 * @return StartPublishStreamToCSSOutcome
                 */
                StartPublishStreamToCSSOutcome StartPublishStreamToCSS(const Model::StartPublishStreamToCSSRequest &request);
                void StartPublishStreamToCSSAsync(const Model::StartPublishStreamToCSSRequest& request, const StartPublishStreamToCSSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartPublishStreamToCSSOutcomeCallable StartPublishStreamToCSSCallable(const Model::StartPublishStreamToCSSRequest& request);

                /**
                 *强制退出游戏
                 * @param req StopGameRequest
                 * @return StopGameOutcome
                 */
                StopGameOutcome StopGame(const Model::StopGameRequest &request);
                void StopGameAsync(const Model::StopGameRequest& request, const StopGameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopGameOutcomeCallable StopGameCallable(const Model::StopGameRequest& request);

                /**
                 *停止云端推流
                 * @param req StopPublishStreamRequest
                 * @return StopPublishStreamOutcome
                 */
                StopPublishStreamOutcome StopPublishStream(const Model::StopPublishStreamRequest &request);
                void StopPublishStreamAsync(const Model::StopPublishStreamRequest& request, const StopPublishStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopPublishStreamOutcomeCallable StopPublishStreamCallable(const Model::StopPublishStreamRequest& request);

                /**
                 *切换游戏存档
                 * @param req SwitchGameArchiveRequest
                 * @return SwitchGameArchiveOutcome
                 */
                SwitchGameArchiveOutcome SwitchGameArchive(const Model::SwitchGameArchiveRequest &request);
                void SwitchGameArchiveAsync(const Model::SwitchGameArchiveRequest& request, const SwitchGameArchiveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SwitchGameArchiveOutcomeCallable SwitchGameArchiveCallable(const Model::SwitchGameArchiveRequest& request);

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
