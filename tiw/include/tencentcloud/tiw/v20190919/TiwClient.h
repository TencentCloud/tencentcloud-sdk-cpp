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

#ifndef TENCENTCLOUD_TIW_V20190919_TIWCLIENT_H_
#define TENCENTCLOUD_TIW_V20190919_TIWCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tiw/v20190919/model/CreatePPTCheckTaskRequest.h>
#include <tencentcloud/tiw/v20190919/model/CreatePPTCheckTaskResponse.h>
#include <tencentcloud/tiw/v20190919/model/CreateSnapshotTaskRequest.h>
#include <tencentcloud/tiw/v20190919/model/CreateSnapshotTaskResponse.h>
#include <tencentcloud/tiw/v20190919/model/CreateTranscodeRequest.h>
#include <tencentcloud/tiw/v20190919/model/CreateTranscodeResponse.h>
#include <tencentcloud/tiw/v20190919/model/CreateVideoGenerationTaskRequest.h>
#include <tencentcloud/tiw/v20190919/model/CreateVideoGenerationTaskResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeOnlineRecordRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeOnlineRecordResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeOnlineRecordCallbackRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeOnlineRecordCallbackResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribePPTCheckRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribePPTCheckResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribePPTCheckCallbackRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribePPTCheckCallbackResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeRunningTasksRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeRunningTasksResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeSnapshotTaskRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeSnapshotTaskResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeTranscodeRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeTranscodeResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeTranscodeByUrlRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeTranscodeByUrlResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeTranscodeCallbackRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeTranscodeCallbackResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeVideoGenerationTaskRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeVideoGenerationTaskResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeVideoGenerationTaskCallbackRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeVideoGenerationTaskCallbackResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeWarningCallbackRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeWarningCallbackResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeWhiteboardPushRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeWhiteboardPushResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeWhiteboardPushCallbackRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeWhiteboardPushCallbackResponse.h>
#include <tencentcloud/tiw/v20190919/model/PauseOnlineRecordRequest.h>
#include <tencentcloud/tiw/v20190919/model/PauseOnlineRecordResponse.h>
#include <tencentcloud/tiw/v20190919/model/ResumeOnlineRecordRequest.h>
#include <tencentcloud/tiw/v20190919/model/ResumeOnlineRecordResponse.h>
#include <tencentcloud/tiw/v20190919/model/SetOnlineRecordCallbackRequest.h>
#include <tencentcloud/tiw/v20190919/model/SetOnlineRecordCallbackResponse.h>
#include <tencentcloud/tiw/v20190919/model/SetOnlineRecordCallbackKeyRequest.h>
#include <tencentcloud/tiw/v20190919/model/SetOnlineRecordCallbackKeyResponse.h>
#include <tencentcloud/tiw/v20190919/model/SetPPTCheckCallbackRequest.h>
#include <tencentcloud/tiw/v20190919/model/SetPPTCheckCallbackResponse.h>
#include <tencentcloud/tiw/v20190919/model/SetPPTCheckCallbackKeyRequest.h>
#include <tencentcloud/tiw/v20190919/model/SetPPTCheckCallbackKeyResponse.h>
#include <tencentcloud/tiw/v20190919/model/SetTranscodeCallbackRequest.h>
#include <tencentcloud/tiw/v20190919/model/SetTranscodeCallbackResponse.h>
#include <tencentcloud/tiw/v20190919/model/SetTranscodeCallbackKeyRequest.h>
#include <tencentcloud/tiw/v20190919/model/SetTranscodeCallbackKeyResponse.h>
#include <tencentcloud/tiw/v20190919/model/SetVideoGenerationTaskCallbackRequest.h>
#include <tencentcloud/tiw/v20190919/model/SetVideoGenerationTaskCallbackResponse.h>
#include <tencentcloud/tiw/v20190919/model/SetVideoGenerationTaskCallbackKeyRequest.h>
#include <tencentcloud/tiw/v20190919/model/SetVideoGenerationTaskCallbackKeyResponse.h>
#include <tencentcloud/tiw/v20190919/model/SetWarningCallbackRequest.h>
#include <tencentcloud/tiw/v20190919/model/SetWarningCallbackResponse.h>
#include <tencentcloud/tiw/v20190919/model/SetWhiteboardPushCallbackRequest.h>
#include <tencentcloud/tiw/v20190919/model/SetWhiteboardPushCallbackResponse.h>
#include <tencentcloud/tiw/v20190919/model/SetWhiteboardPushCallbackKeyRequest.h>
#include <tencentcloud/tiw/v20190919/model/SetWhiteboardPushCallbackKeyResponse.h>
#include <tencentcloud/tiw/v20190919/model/StartOnlineRecordRequest.h>
#include <tencentcloud/tiw/v20190919/model/StartOnlineRecordResponse.h>
#include <tencentcloud/tiw/v20190919/model/StartWhiteboardPushRequest.h>
#include <tencentcloud/tiw/v20190919/model/StartWhiteboardPushResponse.h>
#include <tencentcloud/tiw/v20190919/model/StopOnlineRecordRequest.h>
#include <tencentcloud/tiw/v20190919/model/StopOnlineRecordResponse.h>
#include <tencentcloud/tiw/v20190919/model/StopWhiteboardPushRequest.h>
#include <tencentcloud/tiw/v20190919/model/StopWhiteboardPushResponse.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            class TiwClient : public AbstractClient
            {
            public:
                TiwClient(const Credential &credential, const std::string &region);
                TiwClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreatePPTCheckTaskResponse> CreatePPTCheckTaskOutcome;
                typedef std::future<CreatePPTCheckTaskOutcome> CreatePPTCheckTaskOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::CreatePPTCheckTaskRequest&, CreatePPTCheckTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePPTCheckTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSnapshotTaskResponse> CreateSnapshotTaskOutcome;
                typedef std::future<CreateSnapshotTaskOutcome> CreateSnapshotTaskOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::CreateSnapshotTaskRequest&, CreateSnapshotTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSnapshotTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTranscodeResponse> CreateTranscodeOutcome;
                typedef std::future<CreateTranscodeOutcome> CreateTranscodeOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::CreateTranscodeRequest&, CreateTranscodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTranscodeAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVideoGenerationTaskResponse> CreateVideoGenerationTaskOutcome;
                typedef std::future<CreateVideoGenerationTaskOutcome> CreateVideoGenerationTaskOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::CreateVideoGenerationTaskRequest&, CreateVideoGenerationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVideoGenerationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOnlineRecordResponse> DescribeOnlineRecordOutcome;
                typedef std::future<DescribeOnlineRecordOutcome> DescribeOnlineRecordOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeOnlineRecordRequest&, DescribeOnlineRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOnlineRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOnlineRecordCallbackResponse> DescribeOnlineRecordCallbackOutcome;
                typedef std::future<DescribeOnlineRecordCallbackOutcome> DescribeOnlineRecordCallbackOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeOnlineRecordCallbackRequest&, DescribeOnlineRecordCallbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOnlineRecordCallbackAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePPTCheckResponse> DescribePPTCheckOutcome;
                typedef std::future<DescribePPTCheckOutcome> DescribePPTCheckOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribePPTCheckRequest&, DescribePPTCheckOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePPTCheckAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePPTCheckCallbackResponse> DescribePPTCheckCallbackOutcome;
                typedef std::future<DescribePPTCheckCallbackOutcome> DescribePPTCheckCallbackOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribePPTCheckCallbackRequest&, DescribePPTCheckCallbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePPTCheckCallbackAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRunningTasksResponse> DescribeRunningTasksOutcome;
                typedef std::future<DescribeRunningTasksOutcome> DescribeRunningTasksOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeRunningTasksRequest&, DescribeRunningTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRunningTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSnapshotTaskResponse> DescribeSnapshotTaskOutcome;
                typedef std::future<DescribeSnapshotTaskOutcome> DescribeSnapshotTaskOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeSnapshotTaskRequest&, DescribeSnapshotTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnapshotTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTranscodeResponse> DescribeTranscodeOutcome;
                typedef std::future<DescribeTranscodeOutcome> DescribeTranscodeOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeTranscodeRequest&, DescribeTranscodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTranscodeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTranscodeByUrlResponse> DescribeTranscodeByUrlOutcome;
                typedef std::future<DescribeTranscodeByUrlOutcome> DescribeTranscodeByUrlOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeTranscodeByUrlRequest&, DescribeTranscodeByUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTranscodeByUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTranscodeCallbackResponse> DescribeTranscodeCallbackOutcome;
                typedef std::future<DescribeTranscodeCallbackOutcome> DescribeTranscodeCallbackOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeTranscodeCallbackRequest&, DescribeTranscodeCallbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTranscodeCallbackAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVideoGenerationTaskResponse> DescribeVideoGenerationTaskOutcome;
                typedef std::future<DescribeVideoGenerationTaskOutcome> DescribeVideoGenerationTaskOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeVideoGenerationTaskRequest&, DescribeVideoGenerationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVideoGenerationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVideoGenerationTaskCallbackResponse> DescribeVideoGenerationTaskCallbackOutcome;
                typedef std::future<DescribeVideoGenerationTaskCallbackOutcome> DescribeVideoGenerationTaskCallbackOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeVideoGenerationTaskCallbackRequest&, DescribeVideoGenerationTaskCallbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVideoGenerationTaskCallbackAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWarningCallbackResponse> DescribeWarningCallbackOutcome;
                typedef std::future<DescribeWarningCallbackOutcome> DescribeWarningCallbackOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeWarningCallbackRequest&, DescribeWarningCallbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWarningCallbackAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWhiteboardPushResponse> DescribeWhiteboardPushOutcome;
                typedef std::future<DescribeWhiteboardPushOutcome> DescribeWhiteboardPushOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeWhiteboardPushRequest&, DescribeWhiteboardPushOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWhiteboardPushAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWhiteboardPushCallbackResponse> DescribeWhiteboardPushCallbackOutcome;
                typedef std::future<DescribeWhiteboardPushCallbackOutcome> DescribeWhiteboardPushCallbackOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeWhiteboardPushCallbackRequest&, DescribeWhiteboardPushCallbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWhiteboardPushCallbackAsyncHandler;
                typedef Outcome<Core::Error, Model::PauseOnlineRecordResponse> PauseOnlineRecordOutcome;
                typedef std::future<PauseOnlineRecordOutcome> PauseOnlineRecordOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::PauseOnlineRecordRequest&, PauseOnlineRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PauseOnlineRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::ResumeOnlineRecordResponse> ResumeOnlineRecordOutcome;
                typedef std::future<ResumeOnlineRecordOutcome> ResumeOnlineRecordOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::ResumeOnlineRecordRequest&, ResumeOnlineRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResumeOnlineRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::SetOnlineRecordCallbackResponse> SetOnlineRecordCallbackOutcome;
                typedef std::future<SetOnlineRecordCallbackOutcome> SetOnlineRecordCallbackOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::SetOnlineRecordCallbackRequest&, SetOnlineRecordCallbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetOnlineRecordCallbackAsyncHandler;
                typedef Outcome<Core::Error, Model::SetOnlineRecordCallbackKeyResponse> SetOnlineRecordCallbackKeyOutcome;
                typedef std::future<SetOnlineRecordCallbackKeyOutcome> SetOnlineRecordCallbackKeyOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::SetOnlineRecordCallbackKeyRequest&, SetOnlineRecordCallbackKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetOnlineRecordCallbackKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::SetPPTCheckCallbackResponse> SetPPTCheckCallbackOutcome;
                typedef std::future<SetPPTCheckCallbackOutcome> SetPPTCheckCallbackOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::SetPPTCheckCallbackRequest&, SetPPTCheckCallbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetPPTCheckCallbackAsyncHandler;
                typedef Outcome<Core::Error, Model::SetPPTCheckCallbackKeyResponse> SetPPTCheckCallbackKeyOutcome;
                typedef std::future<SetPPTCheckCallbackKeyOutcome> SetPPTCheckCallbackKeyOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::SetPPTCheckCallbackKeyRequest&, SetPPTCheckCallbackKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetPPTCheckCallbackKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::SetTranscodeCallbackResponse> SetTranscodeCallbackOutcome;
                typedef std::future<SetTranscodeCallbackOutcome> SetTranscodeCallbackOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::SetTranscodeCallbackRequest&, SetTranscodeCallbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetTranscodeCallbackAsyncHandler;
                typedef Outcome<Core::Error, Model::SetTranscodeCallbackKeyResponse> SetTranscodeCallbackKeyOutcome;
                typedef std::future<SetTranscodeCallbackKeyOutcome> SetTranscodeCallbackKeyOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::SetTranscodeCallbackKeyRequest&, SetTranscodeCallbackKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetTranscodeCallbackKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::SetVideoGenerationTaskCallbackResponse> SetVideoGenerationTaskCallbackOutcome;
                typedef std::future<SetVideoGenerationTaskCallbackOutcome> SetVideoGenerationTaskCallbackOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::SetVideoGenerationTaskCallbackRequest&, SetVideoGenerationTaskCallbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetVideoGenerationTaskCallbackAsyncHandler;
                typedef Outcome<Core::Error, Model::SetVideoGenerationTaskCallbackKeyResponse> SetVideoGenerationTaskCallbackKeyOutcome;
                typedef std::future<SetVideoGenerationTaskCallbackKeyOutcome> SetVideoGenerationTaskCallbackKeyOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::SetVideoGenerationTaskCallbackKeyRequest&, SetVideoGenerationTaskCallbackKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetVideoGenerationTaskCallbackKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::SetWarningCallbackResponse> SetWarningCallbackOutcome;
                typedef std::future<SetWarningCallbackOutcome> SetWarningCallbackOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::SetWarningCallbackRequest&, SetWarningCallbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetWarningCallbackAsyncHandler;
                typedef Outcome<Core::Error, Model::SetWhiteboardPushCallbackResponse> SetWhiteboardPushCallbackOutcome;
                typedef std::future<SetWhiteboardPushCallbackOutcome> SetWhiteboardPushCallbackOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::SetWhiteboardPushCallbackRequest&, SetWhiteboardPushCallbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetWhiteboardPushCallbackAsyncHandler;
                typedef Outcome<Core::Error, Model::SetWhiteboardPushCallbackKeyResponse> SetWhiteboardPushCallbackKeyOutcome;
                typedef std::future<SetWhiteboardPushCallbackKeyOutcome> SetWhiteboardPushCallbackKeyOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::SetWhiteboardPushCallbackKeyRequest&, SetWhiteboardPushCallbackKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetWhiteboardPushCallbackKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::StartOnlineRecordResponse> StartOnlineRecordOutcome;
                typedef std::future<StartOnlineRecordOutcome> StartOnlineRecordOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::StartOnlineRecordRequest&, StartOnlineRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartOnlineRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::StartWhiteboardPushResponse> StartWhiteboardPushOutcome;
                typedef std::future<StartWhiteboardPushOutcome> StartWhiteboardPushOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::StartWhiteboardPushRequest&, StartWhiteboardPushOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartWhiteboardPushAsyncHandler;
                typedef Outcome<Core::Error, Model::StopOnlineRecordResponse> StopOnlineRecordOutcome;
                typedef std::future<StopOnlineRecordOutcome> StopOnlineRecordOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::StopOnlineRecordRequest&, StopOnlineRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopOnlineRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::StopWhiteboardPushResponse> StopWhiteboardPushOutcome;
                typedef std::future<StopWhiteboardPushOutcome> StopWhiteboardPushOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::StopWhiteboardPushRequest&, StopWhiteboardPushOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopWhiteboardPushAsyncHandler;



                /**
                 *检测PPT文件，识别PPT中包含的动态转码任务（Transcode）不支持的元素
                 * @param req CreatePPTCheckTaskRequest
                 * @return CreatePPTCheckTaskOutcome
                 */
                CreatePPTCheckTaskOutcome CreatePPTCheckTask(const Model::CreatePPTCheckTaskRequest &request);
                void CreatePPTCheckTaskAsync(const Model::CreatePPTCheckTaskRequest& request, const CreatePPTCheckTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePPTCheckTaskOutcomeCallable CreatePPTCheckTaskCallable(const Model::CreatePPTCheckTaskRequest& request);

                /**
                 *创建白板板书生成任务, 在任务结束后，如果提供了回调地址，将通过回调地址通知板书生成结果
                 * @param req CreateSnapshotTaskRequest
                 * @return CreateSnapshotTaskOutcome
                 */
                CreateSnapshotTaskOutcome CreateSnapshotTask(const Model::CreateSnapshotTaskRequest &request);
                void CreateSnapshotTaskAsync(const Model::CreateSnapshotTaskRequest& request, const CreateSnapshotTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSnapshotTaskOutcomeCallable CreateSnapshotTaskCallable(const Model::CreateSnapshotTaskRequest& request);

                /**
                 *创建一个文档转码任务
                 * @param req CreateTranscodeRequest
                 * @return CreateTranscodeOutcome
                 */
                CreateTranscodeOutcome CreateTranscode(const Model::CreateTranscodeRequest &request);
                void CreateTranscodeAsync(const Model::CreateTranscodeRequest& request, const CreateTranscodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTranscodeOutcomeCallable CreateTranscodeCallable(const Model::CreateTranscodeRequest& request);

                /**
                 *创建视频生成任务
                 * @param req CreateVideoGenerationTaskRequest
                 * @return CreateVideoGenerationTaskOutcome
                 */
                CreateVideoGenerationTaskOutcome CreateVideoGenerationTask(const Model::CreateVideoGenerationTaskRequest &request);
                void CreateVideoGenerationTaskAsync(const Model::CreateVideoGenerationTaskRequest& request, const CreateVideoGenerationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVideoGenerationTaskOutcomeCallable CreateVideoGenerationTaskCallable(const Model::CreateVideoGenerationTaskRequest& request);

                /**
                 *查询录制任务状态与结果
                 * @param req DescribeOnlineRecordRequest
                 * @return DescribeOnlineRecordOutcome
                 */
                DescribeOnlineRecordOutcome DescribeOnlineRecord(const Model::DescribeOnlineRecordRequest &request);
                void DescribeOnlineRecordAsync(const Model::DescribeOnlineRecordRequest& request, const DescribeOnlineRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOnlineRecordOutcomeCallable DescribeOnlineRecordCallable(const Model::DescribeOnlineRecordRequest& request);

                /**
                 *查询实时录制回调地址
                 * @param req DescribeOnlineRecordCallbackRequest
                 * @return DescribeOnlineRecordCallbackOutcome
                 */
                DescribeOnlineRecordCallbackOutcome DescribeOnlineRecordCallback(const Model::DescribeOnlineRecordCallbackRequest &request);
                void DescribeOnlineRecordCallbackAsync(const Model::DescribeOnlineRecordCallbackRequest& request, const DescribeOnlineRecordCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOnlineRecordCallbackOutcomeCallable DescribeOnlineRecordCallbackCallable(const Model::DescribeOnlineRecordCallbackRequest& request);

                /**
                 *查询PPT检测任务的执行进度或结果，支持查询最近半年内的任务结果
                 * @param req DescribePPTCheckRequest
                 * @return DescribePPTCheckOutcome
                 */
                DescribePPTCheckOutcome DescribePPTCheck(const Model::DescribePPTCheckRequest &request);
                void DescribePPTCheckAsync(const Model::DescribePPTCheckRequest& request, const DescribePPTCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePPTCheckOutcomeCallable DescribePPTCheckCallable(const Model::DescribePPTCheckRequest& request);

                /**
                 *查询PPT检测任务回调地址
                 * @param req DescribePPTCheckCallbackRequest
                 * @return DescribePPTCheckCallbackOutcome
                 */
                DescribePPTCheckCallbackOutcome DescribePPTCheckCallback(const Model::DescribePPTCheckCallbackRequest &request);
                void DescribePPTCheckCallbackAsync(const Model::DescribePPTCheckCallbackRequest& request, const DescribePPTCheckCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePPTCheckCallbackOutcomeCallable DescribePPTCheckCallbackCallable(const Model::DescribePPTCheckCallbackRequest& request);

                /**
                 *根据指定的任务类型，获取当前正在执行中的任务列表。只能查询最近3天内创建的任务。
                 * @param req DescribeRunningTasksRequest
                 * @return DescribeRunningTasksOutcome
                 */
                DescribeRunningTasksOutcome DescribeRunningTasks(const Model::DescribeRunningTasksRequest &request);
                void DescribeRunningTasksAsync(const Model::DescribeRunningTasksRequest& request, const DescribeRunningTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRunningTasksOutcomeCallable DescribeRunningTasksCallable(const Model::DescribeRunningTasksRequest& request);

                /**
                 *获取指定白板板书生成任务信息
                 * @param req DescribeSnapshotTaskRequest
                 * @return DescribeSnapshotTaskOutcome
                 */
                DescribeSnapshotTaskOutcome DescribeSnapshotTask(const Model::DescribeSnapshotTaskRequest &request);
                void DescribeSnapshotTaskAsync(const Model::DescribeSnapshotTaskRequest& request, const DescribeSnapshotTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSnapshotTaskOutcomeCallable DescribeSnapshotTaskCallable(const Model::DescribeSnapshotTaskRequest& request);

                /**
                 *查询文档转码任务的执行进度与转码结果
                 * @param req DescribeTranscodeRequest
                 * @return DescribeTranscodeOutcome
                 */
                DescribeTranscodeOutcome DescribeTranscode(const Model::DescribeTranscodeRequest &request);
                void DescribeTranscodeAsync(const Model::DescribeTranscodeRequest& request, const DescribeTranscodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTranscodeOutcomeCallable DescribeTranscodeCallable(const Model::DescribeTranscodeRequest& request);

                /**
                 *通过文档URL查询转码任务，返回最近一天内最新的转码任务状态
                 * @param req DescribeTranscodeByUrlRequest
                 * @return DescribeTranscodeByUrlOutcome
                 */
                DescribeTranscodeByUrlOutcome DescribeTranscodeByUrl(const Model::DescribeTranscodeByUrlRequest &request);
                void DescribeTranscodeByUrlAsync(const Model::DescribeTranscodeByUrlRequest& request, const DescribeTranscodeByUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTranscodeByUrlOutcomeCallable DescribeTranscodeByUrlCallable(const Model::DescribeTranscodeByUrlRequest& request);

                /**
                 *查询文档转码回调地址
                 * @param req DescribeTranscodeCallbackRequest
                 * @return DescribeTranscodeCallbackOutcome
                 */
                DescribeTranscodeCallbackOutcome DescribeTranscodeCallback(const Model::DescribeTranscodeCallbackRequest &request);
                void DescribeTranscodeCallbackAsync(const Model::DescribeTranscodeCallbackRequest& request, const DescribeTranscodeCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTranscodeCallbackOutcomeCallable DescribeTranscodeCallbackCallable(const Model::DescribeTranscodeCallbackRequest& request);

                /**
                 *查询录制视频生成任务状态与结果
                 * @param req DescribeVideoGenerationTaskRequest
                 * @return DescribeVideoGenerationTaskOutcome
                 */
                DescribeVideoGenerationTaskOutcome DescribeVideoGenerationTask(const Model::DescribeVideoGenerationTaskRequest &request);
                void DescribeVideoGenerationTaskAsync(const Model::DescribeVideoGenerationTaskRequest& request, const DescribeVideoGenerationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVideoGenerationTaskOutcomeCallable DescribeVideoGenerationTaskCallable(const Model::DescribeVideoGenerationTaskRequest& request);

                /**
                 *查询录制视频生成回调地址
                 * @param req DescribeVideoGenerationTaskCallbackRequest
                 * @return DescribeVideoGenerationTaskCallbackOutcome
                 */
                DescribeVideoGenerationTaskCallbackOutcome DescribeVideoGenerationTaskCallback(const Model::DescribeVideoGenerationTaskCallbackRequest &request);
                void DescribeVideoGenerationTaskCallbackAsync(const Model::DescribeVideoGenerationTaskCallbackRequest& request, const DescribeVideoGenerationTaskCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVideoGenerationTaskCallbackOutcomeCallable DescribeVideoGenerationTaskCallbackCallable(const Model::DescribeVideoGenerationTaskCallbackRequest& request);

                /**
                 *查询告警回调地址。此功能需要申请白名单使用。
                 * @param req DescribeWarningCallbackRequest
                 * @return DescribeWarningCallbackOutcome
                 */
                DescribeWarningCallbackOutcome DescribeWarningCallback(const Model::DescribeWarningCallbackRequest &request);
                void DescribeWarningCallbackAsync(const Model::DescribeWarningCallbackRequest& request, const DescribeWarningCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWarningCallbackOutcomeCallable DescribeWarningCallbackCallable(const Model::DescribeWarningCallbackRequest& request);

                /**
                 *查询推流任务状态与结果
                 * @param req DescribeWhiteboardPushRequest
                 * @return DescribeWhiteboardPushOutcome
                 */
                DescribeWhiteboardPushOutcome DescribeWhiteboardPush(const Model::DescribeWhiteboardPushRequest &request);
                void DescribeWhiteboardPushAsync(const Model::DescribeWhiteboardPushRequest& request, const DescribeWhiteboardPushAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWhiteboardPushOutcomeCallable DescribeWhiteboardPushCallable(const Model::DescribeWhiteboardPushRequest& request);

                /**
                 *查询白板推流回调地址
                 * @param req DescribeWhiteboardPushCallbackRequest
                 * @return DescribeWhiteboardPushCallbackOutcome
                 */
                DescribeWhiteboardPushCallbackOutcome DescribeWhiteboardPushCallback(const Model::DescribeWhiteboardPushCallbackRequest &request);
                void DescribeWhiteboardPushCallbackAsync(const Model::DescribeWhiteboardPushCallbackRequest& request, const DescribeWhiteboardPushCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWhiteboardPushCallbackOutcomeCallable DescribeWhiteboardPushCallbackCallable(const Model::DescribeWhiteboardPushCallbackRequest& request);

                /**
                 *暂停实时录制
                 * @param req PauseOnlineRecordRequest
                 * @return PauseOnlineRecordOutcome
                 */
                PauseOnlineRecordOutcome PauseOnlineRecord(const Model::PauseOnlineRecordRequest &request);
                void PauseOnlineRecordAsync(const Model::PauseOnlineRecordRequest& request, const PauseOnlineRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PauseOnlineRecordOutcomeCallable PauseOnlineRecordCallable(const Model::PauseOnlineRecordRequest& request);

                /**
                 *恢复实时录制
                 * @param req ResumeOnlineRecordRequest
                 * @return ResumeOnlineRecordOutcome
                 */
                ResumeOnlineRecordOutcome ResumeOnlineRecord(const Model::ResumeOnlineRecordRequest &request);
                void ResumeOnlineRecordAsync(const Model::ResumeOnlineRecordRequest& request, const ResumeOnlineRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResumeOnlineRecordOutcomeCallable ResumeOnlineRecordCallable(const Model::ResumeOnlineRecordRequest& request);

                /**
                 *设置实时录制回调地址，回调数据格式请参考文档：https://cloud.tencent.com/document/product/1137/40258
                 * @param req SetOnlineRecordCallbackRequest
                 * @return SetOnlineRecordCallbackOutcome
                 */
                SetOnlineRecordCallbackOutcome SetOnlineRecordCallback(const Model::SetOnlineRecordCallbackRequest &request);
                void SetOnlineRecordCallbackAsync(const Model::SetOnlineRecordCallbackRequest& request, const SetOnlineRecordCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetOnlineRecordCallbackOutcomeCallable SetOnlineRecordCallbackCallable(const Model::SetOnlineRecordCallbackRequest& request);

                /**
                 *设置实时录制回调鉴权密钥，回调鉴权方式请参考文档：https://cloud.tencent.com/document/product/1137/40257
                 * @param req SetOnlineRecordCallbackKeyRequest
                 * @return SetOnlineRecordCallbackKeyOutcome
                 */
                SetOnlineRecordCallbackKeyOutcome SetOnlineRecordCallbackKey(const Model::SetOnlineRecordCallbackKeyRequest &request);
                void SetOnlineRecordCallbackKeyAsync(const Model::SetOnlineRecordCallbackKeyRequest& request, const SetOnlineRecordCallbackKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetOnlineRecordCallbackKeyOutcomeCallable SetOnlineRecordCallbackKeyCallable(const Model::SetOnlineRecordCallbackKeyRequest& request);

                /**
                 *设置PPT检测任务回调地址，回调数据格式请参考文档：https://cloud.tencent.com/document/product/1137/40260#c9cbe05f-fe1a-4410-b4dc-40cc301c7b81
                 * @param req SetPPTCheckCallbackRequest
                 * @return SetPPTCheckCallbackOutcome
                 */
                SetPPTCheckCallbackOutcome SetPPTCheckCallback(const Model::SetPPTCheckCallbackRequest &request);
                void SetPPTCheckCallbackAsync(const Model::SetPPTCheckCallbackRequest& request, const SetPPTCheckCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetPPTCheckCallbackOutcomeCallable SetPPTCheckCallbackCallable(const Model::SetPPTCheckCallbackRequest& request);

                /**
                 *设置PPT检测任务回调密钥，回调鉴权方式请参考文档：https://cloud.tencent.com/document/product/1137/40257
                 * @param req SetPPTCheckCallbackKeyRequest
                 * @return SetPPTCheckCallbackKeyOutcome
                 */
                SetPPTCheckCallbackKeyOutcome SetPPTCheckCallbackKey(const Model::SetPPTCheckCallbackKeyRequest &request);
                void SetPPTCheckCallbackKeyAsync(const Model::SetPPTCheckCallbackKeyRequest& request, const SetPPTCheckCallbackKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetPPTCheckCallbackKeyOutcomeCallable SetPPTCheckCallbackKeyCallable(const Model::SetPPTCheckCallbackKeyRequest& request);

                /**
                 *设置文档转码回调地址，回调数据格式请参考文档：https://cloud.tencent.com/document/product/1137/40260
                 * @param req SetTranscodeCallbackRequest
                 * @return SetTranscodeCallbackOutcome
                 */
                SetTranscodeCallbackOutcome SetTranscodeCallback(const Model::SetTranscodeCallbackRequest &request);
                void SetTranscodeCallbackAsync(const Model::SetTranscodeCallbackRequest& request, const SetTranscodeCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetTranscodeCallbackOutcomeCallable SetTranscodeCallbackCallable(const Model::SetTranscodeCallbackRequest& request);

                /**
                 *设置文档转码回调鉴权密钥，回调鉴权方式请参考文档：https://cloud.tencent.com/document/product/1137/40257
                 * @param req SetTranscodeCallbackKeyRequest
                 * @return SetTranscodeCallbackKeyOutcome
                 */
                SetTranscodeCallbackKeyOutcome SetTranscodeCallbackKey(const Model::SetTranscodeCallbackKeyRequest &request);
                void SetTranscodeCallbackKeyAsync(const Model::SetTranscodeCallbackKeyRequest& request, const SetTranscodeCallbackKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetTranscodeCallbackKeyOutcomeCallable SetTranscodeCallbackKeyCallable(const Model::SetTranscodeCallbackKeyRequest& request);

                /**
                 *设置录制视频生成回调地址
                 * @param req SetVideoGenerationTaskCallbackRequest
                 * @return SetVideoGenerationTaskCallbackOutcome
                 */
                SetVideoGenerationTaskCallbackOutcome SetVideoGenerationTaskCallback(const Model::SetVideoGenerationTaskCallbackRequest &request);
                void SetVideoGenerationTaskCallbackAsync(const Model::SetVideoGenerationTaskCallbackRequest& request, const SetVideoGenerationTaskCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetVideoGenerationTaskCallbackOutcomeCallable SetVideoGenerationTaskCallbackCallable(const Model::SetVideoGenerationTaskCallbackRequest& request);

                /**
                 *设置视频生成回调鉴权密钥
                 * @param req SetVideoGenerationTaskCallbackKeyRequest
                 * @return SetVideoGenerationTaskCallbackKeyOutcome
                 */
                SetVideoGenerationTaskCallbackKeyOutcome SetVideoGenerationTaskCallbackKey(const Model::SetVideoGenerationTaskCallbackKeyRequest &request);
                void SetVideoGenerationTaskCallbackKeyAsync(const Model::SetVideoGenerationTaskCallbackKeyRequest& request, const SetVideoGenerationTaskCallbackKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetVideoGenerationTaskCallbackKeyOutcomeCallable SetVideoGenerationTaskCallbackKeyCallable(const Model::SetVideoGenerationTaskCallbackKeyRequest& request);

                /**
                 *设置告警回调地址。此功能需要申请白名单使用。
                 * @param req SetWarningCallbackRequest
                 * @return SetWarningCallbackOutcome
                 */
                SetWarningCallbackOutcome SetWarningCallback(const Model::SetWarningCallbackRequest &request);
                void SetWarningCallbackAsync(const Model::SetWarningCallbackRequest& request, const SetWarningCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetWarningCallbackOutcomeCallable SetWarningCallbackCallable(const Model::SetWarningCallbackRequest& request);

                /**
                 *设置白板推流回调地址，回调数据格式请参考文档：https://cloud.tencent.com/document/product/1137/40257
                 * @param req SetWhiteboardPushCallbackRequest
                 * @return SetWhiteboardPushCallbackOutcome
                 */
                SetWhiteboardPushCallbackOutcome SetWhiteboardPushCallback(const Model::SetWhiteboardPushCallbackRequest &request);
                void SetWhiteboardPushCallbackAsync(const Model::SetWhiteboardPushCallbackRequest& request, const SetWhiteboardPushCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetWhiteboardPushCallbackOutcomeCallable SetWhiteboardPushCallbackCallable(const Model::SetWhiteboardPushCallbackRequest& request);

                /**
                 *设置白板推流回调鉴权密钥，回调鉴权方式请参考文档：https://cloud.tencent.com/document/product/1137/40257
                 * @param req SetWhiteboardPushCallbackKeyRequest
                 * @return SetWhiteboardPushCallbackKeyOutcome
                 */
                SetWhiteboardPushCallbackKeyOutcome SetWhiteboardPushCallbackKey(const Model::SetWhiteboardPushCallbackKeyRequest &request);
                void SetWhiteboardPushCallbackKeyAsync(const Model::SetWhiteboardPushCallbackKeyRequest& request, const SetWhiteboardPushCallbackKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetWhiteboardPushCallbackKeyOutcomeCallable SetWhiteboardPushCallbackKeyCallable(const Model::SetWhiteboardPushCallbackKeyRequest& request);

                /**
                 *发起一个实时录制任务
                 * @param req StartOnlineRecordRequest
                 * @return StartOnlineRecordOutcome
                 */
                StartOnlineRecordOutcome StartOnlineRecord(const Model::StartOnlineRecordRequest &request);
                void StartOnlineRecordAsync(const Model::StartOnlineRecordRequest& request, const StartOnlineRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartOnlineRecordOutcomeCallable StartOnlineRecordCallable(const Model::StartOnlineRecordRequest& request);

                /**
                 *发起一个白板推流任务
                 * @param req StartWhiteboardPushRequest
                 * @return StartWhiteboardPushOutcome
                 */
                StartWhiteboardPushOutcome StartWhiteboardPush(const Model::StartWhiteboardPushRequest &request);
                void StartWhiteboardPushAsync(const Model::StartWhiteboardPushRequest& request, const StartWhiteboardPushAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartWhiteboardPushOutcomeCallable StartWhiteboardPushCallable(const Model::StartWhiteboardPushRequest& request);

                /**
                 *停止实时录制
                 * @param req StopOnlineRecordRequest
                 * @return StopOnlineRecordOutcome
                 */
                StopOnlineRecordOutcome StopOnlineRecord(const Model::StopOnlineRecordRequest &request);
                void StopOnlineRecordAsync(const Model::StopOnlineRecordRequest& request, const StopOnlineRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopOnlineRecordOutcomeCallable StopOnlineRecordCallable(const Model::StopOnlineRecordRequest& request);

                /**
                 *停止白板推流任务
                 * @param req StopWhiteboardPushRequest
                 * @return StopWhiteboardPushOutcome
                 */
                StopWhiteboardPushOutcome StopWhiteboardPush(const Model::StopWhiteboardPushRequest &request);
                void StopWhiteboardPushAsync(const Model::StopWhiteboardPushRequest& request, const StopWhiteboardPushAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopWhiteboardPushOutcomeCallable StopWhiteboardPushCallable(const Model::StopWhiteboardPushRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_TIWCLIENT_H_
