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

#ifndef TENCENTCLOUD_IVLD_V20210903_IVLDCLIENT_H_
#define TENCENTCLOUD_IVLD_V20210903_IVLDCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ivld/v20210903/model/CreateTaskRequest.h>
#include <tencentcloud/ivld/v20210903/model/CreateTaskResponse.h>
#include <tencentcloud/ivld/v20210903/model/DeleteMediaRequest.h>
#include <tencentcloud/ivld/v20210903/model/DeleteMediaResponse.h>
#include <tencentcloud/ivld/v20210903/model/DescribeMediaRequest.h>
#include <tencentcloud/ivld/v20210903/model/DescribeMediaResponse.h>
#include <tencentcloud/ivld/v20210903/model/DescribeMediasRequest.h>
#include <tencentcloud/ivld/v20210903/model/DescribeMediasResponse.h>
#include <tencentcloud/ivld/v20210903/model/DescribeTaskRequest.h>
#include <tencentcloud/ivld/v20210903/model/DescribeTaskResponse.h>
#include <tencentcloud/ivld/v20210903/model/DescribeTaskDetailRequest.h>
#include <tencentcloud/ivld/v20210903/model/DescribeTaskDetailResponse.h>
#include <tencentcloud/ivld/v20210903/model/DescribeTasksRequest.h>
#include <tencentcloud/ivld/v20210903/model/DescribeTasksResponse.h>
#include <tencentcloud/ivld/v20210903/model/ImportMediaRequest.h>
#include <tencentcloud/ivld/v20210903/model/ImportMediaResponse.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            class IvldClient : public AbstractClient
            {
            public:
                IvldClient(const Credential &credential, const std::string &region);
                IvldClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateTaskResponse> CreateTaskOutcome;
                typedef std::future<CreateTaskOutcome> CreateTaskOutcomeCallable;
                typedef std::function<void(const IvldClient*, const Model::CreateTaskRequest&, CreateTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMediaResponse> DeleteMediaOutcome;
                typedef std::future<DeleteMediaOutcome> DeleteMediaOutcomeCallable;
                typedef std::function<void(const IvldClient*, const Model::DeleteMediaRequest&, DeleteMediaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMediaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMediaResponse> DescribeMediaOutcome;
                typedef std::future<DescribeMediaOutcome> DescribeMediaOutcomeCallable;
                typedef std::function<void(const IvldClient*, const Model::DescribeMediaRequest&, DescribeMediaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMediaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMediasResponse> DescribeMediasOutcome;
                typedef std::future<DescribeMediasOutcome> DescribeMediasOutcomeCallable;
                typedef std::function<void(const IvldClient*, const Model::DescribeMediasRequest&, DescribeMediasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMediasAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskResponse> DescribeTaskOutcome;
                typedef std::future<DescribeTaskOutcome> DescribeTaskOutcomeCallable;
                typedef std::function<void(const IvldClient*, const Model::DescribeTaskRequest&, DescribeTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskDetailResponse> DescribeTaskDetailOutcome;
                typedef std::future<DescribeTaskDetailOutcome> DescribeTaskDetailOutcomeCallable;
                typedef std::function<void(const IvldClient*, const Model::DescribeTaskDetailRequest&, DescribeTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTasksResponse> DescribeTasksOutcome;
                typedef std::future<DescribeTasksOutcome> DescribeTasksOutcomeCallable;
                typedef std::function<void(const IvldClient*, const Model::DescribeTasksRequest&, DescribeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::ImportMediaResponse> ImportMediaOutcome;
                typedef std::future<ImportMediaOutcome> ImportMediaOutcomeCallable;
                typedef std::function<void(const IvldClient*, const Model::ImportMediaRequest&, ImportMediaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImportMediaAsyncHandler;



                /**
                 *创建智能标签任务。

请注意，本接口为异步接口，**返回TaskId只代表任务创建成功，不代表任务执行成功**。

                 * @param req CreateTaskRequest
                 * @return CreateTaskOutcome
                 */
                CreateTaskOutcome CreateTask(const Model::CreateTaskRequest &request);
                void CreateTaskAsync(const Model::CreateTaskRequest& request, const CreateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTaskOutcomeCallable CreateTaskCallable(const Model::CreateTaskRequest& request);

                /**
                 *将MediaId对应的媒资文件从系统中删除。

**请注意，本接口仅删除媒资文件，媒资文件对应的视频分析结果不会被删除**。如您需要删除结构化分析结果，请调用DeleteTask接口。
                 * @param req DeleteMediaRequest
                 * @return DeleteMediaOutcome
                 */
                DeleteMediaOutcome DeleteMedia(const Model::DeleteMediaRequest &request);
                void DeleteMediaAsync(const Model::DeleteMediaRequest& request, const DeleteMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMediaOutcomeCallable DeleteMediaCallable(const Model::DeleteMediaRequest& request);

                /**
                 *描述媒资文件信息，包括媒资状态，分辨率，帧率等。

如果媒资文件未完成导入，本接口将仅输出媒资文件的状态信息；导入完成后，本接口还将输出媒资文件的其他元信息。
                 * @param req DescribeMediaRequest
                 * @return DescribeMediaOutcome
                 */
                DescribeMediaOutcome DescribeMedia(const Model::DescribeMediaRequest &request);
                void DescribeMediaAsync(const Model::DescribeMediaRequest& request, const DescribeMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMediaOutcomeCallable DescribeMediaCallable(const Model::DescribeMediaRequest& request);

                /**
                 *依照输入条件，描述命中的媒资文件信息，包括媒资状态，分辨率，帧率等。

请注意，本接口最多支持同时描述**50**个媒资文件

如果媒资文件未完成导入，本接口将仅输出媒资文件的状态信息；导入完成后，本接口还将输出媒资文件的其他元信息。
                 * @param req DescribeMediasRequest
                 * @return DescribeMediasOutcome
                 */
                DescribeMediasOutcome DescribeMedias(const Model::DescribeMediasRequest &request);
                void DescribeMediasAsync(const Model::DescribeMediasRequest& request, const DescribeMediasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMediasOutcomeCallable DescribeMediasCallable(const Model::DescribeMediasRequest& request);

                /**
                 *描述智能标签任务进度。

请注意，**此接口仅返回任务执行状态信息，不返回任务执行结果**


                 * @param req DescribeTaskRequest
                 * @return DescribeTaskOutcome
                 */
                DescribeTaskOutcome DescribeTask(const Model::DescribeTaskRequest &request);
                void DescribeTaskAsync(const Model::DescribeTaskRequest& request, const DescribeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskOutcomeCallable DescribeTaskCallable(const Model::DescribeTaskRequest& request);

                /**
                 *描述任务信息，如果任务成功完成，还将返回任务结果
                 * @param req DescribeTaskDetailRequest
                 * @return DescribeTaskDetailOutcome
                 */
                DescribeTaskDetailOutcome DescribeTaskDetail(const Model::DescribeTaskDetailRequest &request);
                void DescribeTaskDetailAsync(const Model::DescribeTaskDetailRequest& request, const DescribeTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskDetailOutcomeCallable DescribeTaskDetailCallable(const Model::DescribeTaskDetailRequest& request);

                /**
                 *依照输入条件，描述命中的任务信息，包括任务创建时间，处理时间信息等。

请注意，本接口最多支持同时描述**50**个任务信息
                 * @param req DescribeTasksRequest
                 * @return DescribeTasksOutcome
                 */
                DescribeTasksOutcome DescribeTasks(const Model::DescribeTasksRequest &request);
                void DescribeTasksAsync(const Model::DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTasksOutcomeCallable DescribeTasksCallable(const Model::DescribeTasksRequest& request);

                /**
                 *将URL指向的媒资视频文件导入系统之中。

**请注意，本接口为异步接口**。接口返回MediaId仅代表导入视频任务发起，不代表任务完成，您可调用读接口(DescribeMedia/DescribeMedias)接口查询MediaId对应的媒资文件的状态。

当前URL只支持COS地址，其形式为`https://${Bucket}-${AppId}.cos.${Region}.myqcloud.com/${ObjectKey}`，其中`${Bucket}`为您的COS桶名称，Region为COS桶所在[可用区](https://cloud.tencent.com/document/product/213/6091)，`${ObjectKey}`为指向存储在COS桶内的待分析的视频的[ObjectKey](https://cloud.tencent.com/document/product/436/13324)

分析完成后，本产品将在您的`${Bucket}`桶内创建名为`${ObjectKey}-${task-start-time}`的目录(`task-start-time`形式为1970-01-01T08:08:08)并将分析结果将回传回该目录，也即，结构化分析结果(包括图片，JSON等数据)将会写回`https://${Bucket}-${AppId}.cos.${Region}.myqcloud.com/${ObjectKey}-${task-start-time}`目录

                 * @param req ImportMediaRequest
                 * @return ImportMediaOutcome
                 */
                ImportMediaOutcome ImportMedia(const Model::ImportMediaRequest &request);
                void ImportMediaAsync(const Model::ImportMediaRequest& request, const ImportMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImportMediaOutcomeCallable ImportMediaCallable(const Model::ImportMediaRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_IVLDCLIENT_H_
