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

#ifndef TENCENTCLOUD_CAT_V20180409_CATCLIENT_H_
#define TENCENTCLOUD_CAT_V20180409_CATCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cat/v20180409/model/CreateProbeTasksRequest.h>
#include <tencentcloud/cat/v20180409/model/CreateProbeTasksResponse.h>
#include <tencentcloud/cat/v20180409/model/DeleteProbeTaskRequest.h>
#include <tencentcloud/cat/v20180409/model/DeleteProbeTaskResponse.h>
#include <tencentcloud/cat/v20180409/model/DescribeDetailedSingleProbeDataRequest.h>
#include <tencentcloud/cat/v20180409/model/DescribeDetailedSingleProbeDataResponse.h>
#include <tencentcloud/cat/v20180409/model/DescribeInstantTasksRequest.h>
#include <tencentcloud/cat/v20180409/model/DescribeInstantTasksResponse.h>
#include <tencentcloud/cat/v20180409/model/DescribeNodeGroupsRequest.h>
#include <tencentcloud/cat/v20180409/model/DescribeNodeGroupsResponse.h>
#include <tencentcloud/cat/v20180409/model/DescribeNodesRequest.h>
#include <tencentcloud/cat/v20180409/model/DescribeNodesResponse.h>
#include <tencentcloud/cat/v20180409/model/DescribeProbeMetricDataRequest.h>
#include <tencentcloud/cat/v20180409/model/DescribeProbeMetricDataResponse.h>
#include <tencentcloud/cat/v20180409/model/DescribeProbeMetricTagValuesRequest.h>
#include <tencentcloud/cat/v20180409/model/DescribeProbeMetricTagValuesResponse.h>
#include <tencentcloud/cat/v20180409/model/DescribeProbeNodesRequest.h>
#include <tencentcloud/cat/v20180409/model/DescribeProbeNodesResponse.h>
#include <tencentcloud/cat/v20180409/model/DescribeProbeTasksRequest.h>
#include <tencentcloud/cat/v20180409/model/DescribeProbeTasksResponse.h>
#include <tencentcloud/cat/v20180409/model/ResumeProbeTaskRequest.h>
#include <tencentcloud/cat/v20180409/model/ResumeProbeTaskResponse.h>
#include <tencentcloud/cat/v20180409/model/SuspendProbeTaskRequest.h>
#include <tencentcloud/cat/v20180409/model/SuspendProbeTaskResponse.h>
#include <tencentcloud/cat/v20180409/model/UpdateProbeTaskAttributesRequest.h>
#include <tencentcloud/cat/v20180409/model/UpdateProbeTaskAttributesResponse.h>
#include <tencentcloud/cat/v20180409/model/UpdateProbeTaskConfigurationListRequest.h>
#include <tencentcloud/cat/v20180409/model/UpdateProbeTaskConfigurationListResponse.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            class CatClient : public AbstractClient
            {
            public:
                CatClient(const Credential &credential, const std::string &region);
                CatClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateProbeTasksResponse> CreateProbeTasksOutcome;
                typedef std::future<CreateProbeTasksOutcome> CreateProbeTasksOutcomeCallable;
                typedef std::function<void(const CatClient*, const Model::CreateProbeTasksRequest&, CreateProbeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProbeTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteProbeTaskResponse> DeleteProbeTaskOutcome;
                typedef std::future<DeleteProbeTaskOutcome> DeleteProbeTaskOutcomeCallable;
                typedef std::function<void(const CatClient*, const Model::DeleteProbeTaskRequest&, DeleteProbeTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProbeTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDetailedSingleProbeDataResponse> DescribeDetailedSingleProbeDataOutcome;
                typedef std::future<DescribeDetailedSingleProbeDataOutcome> DescribeDetailedSingleProbeDataOutcomeCallable;
                typedef std::function<void(const CatClient*, const Model::DescribeDetailedSingleProbeDataRequest&, DescribeDetailedSingleProbeDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDetailedSingleProbeDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstantTasksResponse> DescribeInstantTasksOutcome;
                typedef std::future<DescribeInstantTasksOutcome> DescribeInstantTasksOutcomeCallable;
                typedef std::function<void(const CatClient*, const Model::DescribeInstantTasksRequest&, DescribeInstantTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstantTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNodeGroupsResponse> DescribeNodeGroupsOutcome;
                typedef std::future<DescribeNodeGroupsOutcome> DescribeNodeGroupsOutcomeCallable;
                typedef std::function<void(const CatClient*, const Model::DescribeNodeGroupsRequest&, DescribeNodeGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNodeGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNodesResponse> DescribeNodesOutcome;
                typedef std::future<DescribeNodesOutcome> DescribeNodesOutcomeCallable;
                typedef std::function<void(const CatClient*, const Model::DescribeNodesRequest&, DescribeNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNodesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProbeMetricDataResponse> DescribeProbeMetricDataOutcome;
                typedef std::future<DescribeProbeMetricDataOutcome> DescribeProbeMetricDataOutcomeCallable;
                typedef std::function<void(const CatClient*, const Model::DescribeProbeMetricDataRequest&, DescribeProbeMetricDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProbeMetricDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProbeMetricTagValuesResponse> DescribeProbeMetricTagValuesOutcome;
                typedef std::future<DescribeProbeMetricTagValuesOutcome> DescribeProbeMetricTagValuesOutcomeCallable;
                typedef std::function<void(const CatClient*, const Model::DescribeProbeMetricTagValuesRequest&, DescribeProbeMetricTagValuesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProbeMetricTagValuesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProbeNodesResponse> DescribeProbeNodesOutcome;
                typedef std::future<DescribeProbeNodesOutcome> DescribeProbeNodesOutcomeCallable;
                typedef std::function<void(const CatClient*, const Model::DescribeProbeNodesRequest&, DescribeProbeNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProbeNodesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProbeTasksResponse> DescribeProbeTasksOutcome;
                typedef std::future<DescribeProbeTasksOutcome> DescribeProbeTasksOutcomeCallable;
                typedef std::function<void(const CatClient*, const Model::DescribeProbeTasksRequest&, DescribeProbeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProbeTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::ResumeProbeTaskResponse> ResumeProbeTaskOutcome;
                typedef std::future<ResumeProbeTaskOutcome> ResumeProbeTaskOutcomeCallable;
                typedef std::function<void(const CatClient*, const Model::ResumeProbeTaskRequest&, ResumeProbeTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResumeProbeTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::SuspendProbeTaskResponse> SuspendProbeTaskOutcome;
                typedef std::future<SuspendProbeTaskOutcome> SuspendProbeTaskOutcomeCallable;
                typedef std::function<void(const CatClient*, const Model::SuspendProbeTaskRequest&, SuspendProbeTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SuspendProbeTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateProbeTaskAttributesResponse> UpdateProbeTaskAttributesOutcome;
                typedef std::future<UpdateProbeTaskAttributesOutcome> UpdateProbeTaskAttributesOutcomeCallable;
                typedef std::function<void(const CatClient*, const Model::UpdateProbeTaskAttributesRequest&, UpdateProbeTaskAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateProbeTaskAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateProbeTaskConfigurationListResponse> UpdateProbeTaskConfigurationListOutcome;
                typedef std::future<UpdateProbeTaskConfigurationListOutcome> UpdateProbeTaskConfigurationListOutcomeCallable;
                typedef std::function<void(const CatClient*, const Model::UpdateProbeTaskConfigurationListRequest&, UpdateProbeTaskConfigurationListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateProbeTaskConfigurationListAsyncHandler;



                /**
                 *批量创建拨测任务
                 * @param req CreateProbeTasksRequest
                 * @return CreateProbeTasksOutcome
                 */
                CreateProbeTasksOutcome CreateProbeTasks(const Model::CreateProbeTasksRequest &request);
                void CreateProbeTasksAsync(const Model::CreateProbeTasksRequest& request, const CreateProbeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProbeTasksOutcomeCallable CreateProbeTasksCallable(const Model::CreateProbeTasksRequest& request);

                /**
                 *删除拨测任务
                 * @param req DeleteProbeTaskRequest
                 * @return DeleteProbeTaskOutcome
                 */
                DeleteProbeTaskOutcome DeleteProbeTask(const Model::DeleteProbeTaskRequest &request);
                void DeleteProbeTaskAsync(const Model::DeleteProbeTaskRequest& request, const DeleteProbeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteProbeTaskOutcomeCallable DeleteProbeTaskCallable(const Model::DeleteProbeTaskRequest& request);

                /**
                 *根据时间范围、任务ID、运营商等条件查询单次拨测详情数据
                 * @param req DescribeDetailedSingleProbeDataRequest
                 * @return DescribeDetailedSingleProbeDataOutcome
                 */
                DescribeDetailedSingleProbeDataOutcome DescribeDetailedSingleProbeData(const Model::DescribeDetailedSingleProbeDataRequest &request);
                void DescribeDetailedSingleProbeDataAsync(const Model::DescribeDetailedSingleProbeDataRequest& request, const DescribeDetailedSingleProbeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDetailedSingleProbeDataOutcomeCallable DescribeDetailedSingleProbeDataCallable(const Model::DescribeDetailedSingleProbeDataRequest& request);

                /**
                 *获取历史即时拨测任务
                 * @param req DescribeInstantTasksRequest
                 * @return DescribeInstantTasksOutcome
                 */
                DescribeInstantTasksOutcome DescribeInstantTasks(const Model::DescribeInstantTasksRequest &request);
                void DescribeInstantTasksAsync(const Model::DescribeInstantTasksRequest& request, const DescribeInstantTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstantTasksOutcomeCallable DescribeInstantTasksCallable(const Model::DescribeInstantTasksRequest& request);

                /**
                 *获取拨测点组（可用性拨测点组、高级拨测点组、我的拨测点组）
                 * @param req DescribeNodeGroupsRequest
                 * @return DescribeNodeGroupsOutcome
                 */
                DescribeNodeGroupsOutcome DescribeNodeGroups(const Model::DescribeNodeGroupsRequest &request);
                void DescribeNodeGroupsAsync(const Model::DescribeNodeGroupsRequest& request, const DescribeNodeGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNodeGroupsOutcomeCallable DescribeNodeGroupsCallable(const Model::DescribeNodeGroupsRequest& request);

                /**
                 *获取拨测节点
                 * @param req DescribeNodesRequest
                 * @return DescribeNodesOutcome
                 */
                DescribeNodesOutcome DescribeNodes(const Model::DescribeNodesRequest &request);
                void DescribeNodesAsync(const Model::DescribeNodesRequest& request, const DescribeNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNodesOutcomeCallable DescribeNodesCallable(const Model::DescribeNodesRequest& request);

                /**
                 *查询云拨测指标数据，指标支持使用sum,avg,max,min聚合函数进行指标数据查询
拨测频率与groupby聚合时间设置关联，如拨测频率为 30 分钟，则 grouby 聚合时间建议设置为大于30分钟，避免出现查询数据为空的情况
                 * @param req DescribeProbeMetricDataRequest
                 * @return DescribeProbeMetricDataOutcome
                 */
                DescribeProbeMetricDataOutcome DescribeProbeMetricData(const Model::DescribeProbeMetricDataRequest &request);
                void DescribeProbeMetricDataAsync(const Model::DescribeProbeMetricDataRequest& request, const DescribeProbeMetricDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProbeMetricDataOutcomeCallable DescribeProbeMetricDataCallable(const Model::DescribeProbeMetricDataRequest& request);

                /**
                 *查询同个任务类型下的维度标签值，包括查询用户任务信息，具体任务下的多个维度标签信息。（通过为DescribeProbeMetricData接口的Filters参数添加维度筛选条件，可实现多维数据分析）
                 * @param req DescribeProbeMetricTagValuesRequest
                 * @return DescribeProbeMetricTagValuesOutcome
                 */
                DescribeProbeMetricTagValuesOutcome DescribeProbeMetricTagValues(const Model::DescribeProbeMetricTagValuesRequest &request);
                void DescribeProbeMetricTagValuesAsync(const Model::DescribeProbeMetricTagValuesRequest& request, const DescribeProbeMetricTagValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProbeMetricTagValuesOutcomeCallable DescribeProbeMetricTagValuesCallable(const Model::DescribeProbeMetricTagValuesRequest& request);

                /**
                 *查询拨测节点
                 * @param req DescribeProbeNodesRequest
                 * @return DescribeProbeNodesOutcome
                 */
                DescribeProbeNodesOutcome DescribeProbeNodes(const Model::DescribeProbeNodesRequest &request);
                void DescribeProbeNodesAsync(const Model::DescribeProbeNodesRequest& request, const DescribeProbeNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProbeNodesOutcomeCallable DescribeProbeNodesCallable(const Model::DescribeProbeNodesRequest& request);

                /**
                 *查询拨测任务列表
                 * @param req DescribeProbeTasksRequest
                 * @return DescribeProbeTasksOutcome
                 */
                DescribeProbeTasksOutcome DescribeProbeTasks(const Model::DescribeProbeTasksRequest &request);
                void DescribeProbeTasksAsync(const Model::DescribeProbeTasksRequest& request, const DescribeProbeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProbeTasksOutcomeCallable DescribeProbeTasksCallable(const Model::DescribeProbeTasksRequest& request);

                /**
                 *恢复拨测任务
                 * @param req ResumeProbeTaskRequest
                 * @return ResumeProbeTaskOutcome
                 */
                ResumeProbeTaskOutcome ResumeProbeTask(const Model::ResumeProbeTaskRequest &request);
                void ResumeProbeTaskAsync(const Model::ResumeProbeTaskRequest& request, const ResumeProbeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResumeProbeTaskOutcomeCallable ResumeProbeTaskCallable(const Model::ResumeProbeTaskRequest& request);

                /**
                 *暂停任务
                 * @param req SuspendProbeTaskRequest
                 * @return SuspendProbeTaskOutcome
                 */
                SuspendProbeTaskOutcome SuspendProbeTask(const Model::SuspendProbeTaskRequest &request);
                void SuspendProbeTaskAsync(const Model::SuspendProbeTaskRequest& request, const SuspendProbeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SuspendProbeTaskOutcomeCallable SuspendProbeTaskCallable(const Model::SuspendProbeTaskRequest& request);

                /**
                 *更新探测任务属性
                 * @param req UpdateProbeTaskAttributesRequest
                 * @return UpdateProbeTaskAttributesOutcome
                 */
                UpdateProbeTaskAttributesOutcome UpdateProbeTaskAttributes(const Model::UpdateProbeTaskAttributesRequest &request);
                void UpdateProbeTaskAttributesAsync(const Model::UpdateProbeTaskAttributesRequest& request, const UpdateProbeTaskAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateProbeTaskAttributesOutcomeCallable UpdateProbeTaskAttributesCallable(const Model::UpdateProbeTaskAttributesRequest& request);

                /**
                 *批量更新拨测任务配置
                 * @param req UpdateProbeTaskConfigurationListRequest
                 * @return UpdateProbeTaskConfigurationListOutcome
                 */
                UpdateProbeTaskConfigurationListOutcome UpdateProbeTaskConfigurationList(const Model::UpdateProbeTaskConfigurationListRequest &request);
                void UpdateProbeTaskConfigurationListAsync(const Model::UpdateProbeTaskConfigurationListRequest& request, const UpdateProbeTaskConfigurationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateProbeTaskConfigurationListOutcomeCallable UpdateProbeTaskConfigurationListCallable(const Model::UpdateProbeTaskConfigurationListRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_CATCLIENT_H_
