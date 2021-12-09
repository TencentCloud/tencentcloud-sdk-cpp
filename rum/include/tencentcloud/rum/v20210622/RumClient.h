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

#ifndef TENCENTCLOUD_RUM_V20210622_RUMCLIENT_H_
#define TENCENTCLOUD_RUM_V20210622_RUMCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/rum/v20210622/model/CreateProjectRequest.h>
#include <tencentcloud/rum/v20210622/model/CreateProjectResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataEventUrlRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataEventUrlResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataLogUrlStatisticsRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataLogUrlStatisticsResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataPerformancePageRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataPerformancePageResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataPvUrlStatisticsRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeDataPvUrlStatisticsResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeErrorRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeErrorResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeLogListRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeLogListResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeProjectsRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeProjectsResponse.h>
#include <tencentcloud/rum/v20210622/model/DescribeScoresRequest.h>
#include <tencentcloud/rum/v20210622/model/DescribeScoresResponse.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            class RumClient : public AbstractClient
            {
            public:
                RumClient(const Credential &credential, const std::string &region);
                RumClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateProjectResponse> CreateProjectOutcome;
                typedef std::future<CreateProjectOutcome> CreateProjectOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::CreateProjectRequest&, CreateProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataEventUrlResponse> DescribeDataEventUrlOutcome;
                typedef std::future<DescribeDataEventUrlOutcome> DescribeDataEventUrlOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeDataEventUrlRequest&, DescribeDataEventUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataEventUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataLogUrlStatisticsResponse> DescribeDataLogUrlStatisticsOutcome;
                typedef std::future<DescribeDataLogUrlStatisticsOutcome> DescribeDataLogUrlStatisticsOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeDataLogUrlStatisticsRequest&, DescribeDataLogUrlStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataLogUrlStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataPerformancePageResponse> DescribeDataPerformancePageOutcome;
                typedef std::future<DescribeDataPerformancePageOutcome> DescribeDataPerformancePageOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeDataPerformancePageRequest&, DescribeDataPerformancePageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataPerformancePageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDataPvUrlStatisticsResponse> DescribeDataPvUrlStatisticsOutcome;
                typedef std::future<DescribeDataPvUrlStatisticsOutcome> DescribeDataPvUrlStatisticsOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeDataPvUrlStatisticsRequest&, DescribeDataPvUrlStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataPvUrlStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeErrorResponse> DescribeErrorOutcome;
                typedef std::future<DescribeErrorOutcome> DescribeErrorOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeErrorRequest&, DescribeErrorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeErrorAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogListResponse> DescribeLogListOutcome;
                typedef std::future<DescribeLogListOutcome> DescribeLogListOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeLogListRequest&, DescribeLogListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProjectsResponse> DescribeProjectsOutcome;
                typedef std::future<DescribeProjectsOutcome> DescribeProjectsOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeProjectsRequest&, DescribeProjectsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScoresResponse> DescribeScoresOutcome;
                typedef std::future<DescribeScoresOutcome> DescribeScoresOutcomeCallable;
                typedef std::function<void(const RumClient*, const Model::DescribeScoresRequest&, DescribeScoresOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScoresAsyncHandler;



                /**
                 *创建项目（归属于某个团队）
                 * @param req CreateProjectRequest
                 * @return CreateProjectOutcome
                 */
                CreateProjectOutcome CreateProject(const Model::CreateProjectRequest &request);
                void CreateProjectAsync(const Model::CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProjectOutcomeCallable CreateProjectCallable(const Model::CreateProjectRequest& request);

                /**
                 *获取DescribeDataEventUrl信息
                 * @param req DescribeDataEventUrlRequest
                 * @return DescribeDataEventUrlOutcome
                 */
                DescribeDataEventUrlOutcome DescribeDataEventUrl(const Model::DescribeDataEventUrlRequest &request);
                void DescribeDataEventUrlAsync(const Model::DescribeDataEventUrlRequest& request, const DescribeDataEventUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataEventUrlOutcomeCallable DescribeDataEventUrlCallable(const Model::DescribeDataEventUrlRequest& request);

                /**
                 *获取LogUrlStatistics信息
                 * @param req DescribeDataLogUrlStatisticsRequest
                 * @return DescribeDataLogUrlStatisticsOutcome
                 */
                DescribeDataLogUrlStatisticsOutcome DescribeDataLogUrlStatistics(const Model::DescribeDataLogUrlStatisticsRequest &request);
                void DescribeDataLogUrlStatisticsAsync(const Model::DescribeDataLogUrlStatisticsRequest& request, const DescribeDataLogUrlStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataLogUrlStatisticsOutcomeCallable DescribeDataLogUrlStatisticsCallable(const Model::DescribeDataLogUrlStatisticsRequest& request);

                /**
                 *获取PerformancePage信息
                 * @param req DescribeDataPerformancePageRequest
                 * @return DescribeDataPerformancePageOutcome
                 */
                DescribeDataPerformancePageOutcome DescribeDataPerformancePage(const Model::DescribeDataPerformancePageRequest &request);
                void DescribeDataPerformancePageAsync(const Model::DescribeDataPerformancePageRequest& request, const DescribeDataPerformancePageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataPerformancePageOutcomeCallable DescribeDataPerformancePageCallable(const Model::DescribeDataPerformancePageRequest& request);

                /**
                 *获取DescribeDataPvUrlStatistics信息
                 * @param req DescribeDataPvUrlStatisticsRequest
                 * @return DescribeDataPvUrlStatisticsOutcome
                 */
                DescribeDataPvUrlStatisticsOutcome DescribeDataPvUrlStatistics(const Model::DescribeDataPvUrlStatisticsRequest &request);
                void DescribeDataPvUrlStatisticsAsync(const Model::DescribeDataPvUrlStatisticsRequest& request, const DescribeDataPvUrlStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDataPvUrlStatisticsOutcomeCallable DescribeDataPvUrlStatisticsCallable(const Model::DescribeDataPvUrlStatisticsRequest& request);

                /**
                 *获取首页错误信息
                 * @param req DescribeErrorRequest
                 * @return DescribeErrorOutcome
                 */
                DescribeErrorOutcome DescribeError(const Model::DescribeErrorRequest &request);
                void DescribeErrorAsync(const Model::DescribeErrorRequest& request, const DescribeErrorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeErrorOutcomeCallable DescribeErrorCallable(const Model::DescribeErrorRequest& request);

                /**
                 *获取项目下的日志列表（实例创建的项目下的日志列表）
                 * @param req DescribeLogListRequest
                 * @return DescribeLogListOutcome
                 */
                DescribeLogListOutcome DescribeLogList(const Model::DescribeLogListRequest &request);
                void DescribeLogListAsync(const Model::DescribeLogListRequest& request, const DescribeLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogListOutcomeCallable DescribeLogListCallable(const Model::DescribeLogListRequest& request);

                /**
                 *获取项目列表（实例创建的团队下的项目列表）
                 * @param req DescribeProjectsRequest
                 * @return DescribeProjectsOutcome
                 */
                DescribeProjectsOutcome DescribeProjects(const Model::DescribeProjectsRequest &request);
                void DescribeProjectsAsync(const Model::DescribeProjectsRequest& request, const DescribeProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProjectsOutcomeCallable DescribeProjectsCallable(const Model::DescribeProjectsRequest& request);

                /**
                 *获取首页分数列表
                 * @param req DescribeScoresRequest
                 * @return DescribeScoresOutcome
                 */
                DescribeScoresOutcome DescribeScores(const Model::DescribeScoresRequest &request);
                void DescribeScoresAsync(const Model::DescribeScoresRequest& request, const DescribeScoresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScoresOutcomeCallable DescribeScoresCallable(const Model::DescribeScoresRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_RUMCLIENT_H_
