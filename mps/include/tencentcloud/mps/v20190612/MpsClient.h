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

#ifndef TENCENTCLOUD_MPS_V20190612_MPSCLIENT_H_
#define TENCENTCLOUD_MPS_V20190612_MPSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/mps/v20190612/model/CreateAnimatedGraphicsTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateAnimatedGraphicsTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateImageSpriteTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateImageSpriteTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateSampleSnapshotTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateSampleSnapshotTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateSnapshotByTimeOffsetTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateSnapshotByTimeOffsetTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateTranscodeTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateTranscodeTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateWatermarkTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateWatermarkTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateWorkflowRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateWorkflowResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteAnimatedGraphicsTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteAnimatedGraphicsTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteImageSpriteTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteImageSpriteTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteSampleSnapshotTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteSampleSnapshotTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteSnapshotByTimeOffsetTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteSnapshotByTimeOffsetTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteTranscodeTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteTranscodeTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteWatermarkTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteWatermarkTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteWorkflowRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteWorkflowResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeAnimatedGraphicsTemplatesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeAnimatedGraphicsTemplatesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeImageSpriteTemplatesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeImageSpriteTemplatesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeSampleSnapshotTemplatesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeSampleSnapshotTemplatesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeSnapshotByTimeOffsetTemplatesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeSnapshotByTimeOffsetTemplatesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeTaskDetailRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeTaskDetailResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeTasksRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeTasksResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeTranscodeTemplatesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeTranscodeTemplatesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeUserInfoRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeUserInfoResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeWatermarkTemplatesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeWatermarkTemplatesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeWorkflowsRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeWorkflowsResponse.h>
#include <tencentcloud/mps/v20190612/model/DisableWorkflowRequest.h>
#include <tencentcloud/mps/v20190612/model/DisableWorkflowResponse.h>
#include <tencentcloud/mps/v20190612/model/EnableWorkflowRequest.h>
#include <tencentcloud/mps/v20190612/model/EnableWorkflowResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyAnimatedGraphicsTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyAnimatedGraphicsTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyImageSpriteTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyImageSpriteTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifySampleSnapshotTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifySampleSnapshotTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifySnapshotByTimeOffsetTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifySnapshotByTimeOffsetTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyTranscodeTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyTranscodeTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyWatermarkTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyWatermarkTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/ProcessLiveMediaRequest.h>
#include <tencentcloud/mps/v20190612/model/ProcessLiveMediaResponse.h>
#include <tencentcloud/mps/v20190612/model/ProcessMediaRequest.h>
#include <tencentcloud/mps/v20190612/model/ProcessMediaResponse.h>
#include <tencentcloud/mps/v20190612/model/ResetWorkflowRequest.h>
#include <tencentcloud/mps/v20190612/model/ResetWorkflowResponse.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            class MpsClient : public AbstractClient
            {
            public:
                MpsClient(const Credential &credential, const std::string &region);
                MpsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::CreateAnimatedGraphicsTemplateResponse> CreateAnimatedGraphicsTemplateOutcome;
                typedef std::future<CreateAnimatedGraphicsTemplateOutcome> CreateAnimatedGraphicsTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateAnimatedGraphicsTemplateRequest&, CreateAnimatedGraphicsTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAnimatedGraphicsTemplateAsyncHandler;
                typedef Outcome<Error, Model::CreateImageSpriteTemplateResponse> CreateImageSpriteTemplateOutcome;
                typedef std::future<CreateImageSpriteTemplateOutcome> CreateImageSpriteTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateImageSpriteTemplateRequest&, CreateImageSpriteTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageSpriteTemplateAsyncHandler;
                typedef Outcome<Error, Model::CreateSampleSnapshotTemplateResponse> CreateSampleSnapshotTemplateOutcome;
                typedef std::future<CreateSampleSnapshotTemplateOutcome> CreateSampleSnapshotTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateSampleSnapshotTemplateRequest&, CreateSampleSnapshotTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSampleSnapshotTemplateAsyncHandler;
                typedef Outcome<Error, Model::CreateSnapshotByTimeOffsetTemplateResponse> CreateSnapshotByTimeOffsetTemplateOutcome;
                typedef std::future<CreateSnapshotByTimeOffsetTemplateOutcome> CreateSnapshotByTimeOffsetTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateSnapshotByTimeOffsetTemplateRequest&, CreateSnapshotByTimeOffsetTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSnapshotByTimeOffsetTemplateAsyncHandler;
                typedef Outcome<Error, Model::CreateTranscodeTemplateResponse> CreateTranscodeTemplateOutcome;
                typedef std::future<CreateTranscodeTemplateOutcome> CreateTranscodeTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateTranscodeTemplateRequest&, CreateTranscodeTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTranscodeTemplateAsyncHandler;
                typedef Outcome<Error, Model::CreateWatermarkTemplateResponse> CreateWatermarkTemplateOutcome;
                typedef std::future<CreateWatermarkTemplateOutcome> CreateWatermarkTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateWatermarkTemplateRequest&, CreateWatermarkTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWatermarkTemplateAsyncHandler;
                typedef Outcome<Error, Model::CreateWorkflowResponse> CreateWorkflowOutcome;
                typedef std::future<CreateWorkflowOutcome> CreateWorkflowOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateWorkflowRequest&, CreateWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWorkflowAsyncHandler;
                typedef Outcome<Error, Model::DeleteAnimatedGraphicsTemplateResponse> DeleteAnimatedGraphicsTemplateOutcome;
                typedef std::future<DeleteAnimatedGraphicsTemplateOutcome> DeleteAnimatedGraphicsTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteAnimatedGraphicsTemplateRequest&, DeleteAnimatedGraphicsTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAnimatedGraphicsTemplateAsyncHandler;
                typedef Outcome<Error, Model::DeleteImageSpriteTemplateResponse> DeleteImageSpriteTemplateOutcome;
                typedef std::future<DeleteImageSpriteTemplateOutcome> DeleteImageSpriteTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteImageSpriteTemplateRequest&, DeleteImageSpriteTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImageSpriteTemplateAsyncHandler;
                typedef Outcome<Error, Model::DeleteSampleSnapshotTemplateResponse> DeleteSampleSnapshotTemplateOutcome;
                typedef std::future<DeleteSampleSnapshotTemplateOutcome> DeleteSampleSnapshotTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteSampleSnapshotTemplateRequest&, DeleteSampleSnapshotTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSampleSnapshotTemplateAsyncHandler;
                typedef Outcome<Error, Model::DeleteSnapshotByTimeOffsetTemplateResponse> DeleteSnapshotByTimeOffsetTemplateOutcome;
                typedef std::future<DeleteSnapshotByTimeOffsetTemplateOutcome> DeleteSnapshotByTimeOffsetTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteSnapshotByTimeOffsetTemplateRequest&, DeleteSnapshotByTimeOffsetTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSnapshotByTimeOffsetTemplateAsyncHandler;
                typedef Outcome<Error, Model::DeleteTranscodeTemplateResponse> DeleteTranscodeTemplateOutcome;
                typedef std::future<DeleteTranscodeTemplateOutcome> DeleteTranscodeTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteTranscodeTemplateRequest&, DeleteTranscodeTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTranscodeTemplateAsyncHandler;
                typedef Outcome<Error, Model::DeleteWatermarkTemplateResponse> DeleteWatermarkTemplateOutcome;
                typedef std::future<DeleteWatermarkTemplateOutcome> DeleteWatermarkTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteWatermarkTemplateRequest&, DeleteWatermarkTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWatermarkTemplateAsyncHandler;
                typedef Outcome<Error, Model::DeleteWorkflowResponse> DeleteWorkflowOutcome;
                typedef std::future<DeleteWorkflowOutcome> DeleteWorkflowOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteWorkflowRequest&, DeleteWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWorkflowAsyncHandler;
                typedef Outcome<Error, Model::DescribeAnimatedGraphicsTemplatesResponse> DescribeAnimatedGraphicsTemplatesOutcome;
                typedef std::future<DescribeAnimatedGraphicsTemplatesOutcome> DescribeAnimatedGraphicsTemplatesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeAnimatedGraphicsTemplatesRequest&, DescribeAnimatedGraphicsTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAnimatedGraphicsTemplatesAsyncHandler;
                typedef Outcome<Error, Model::DescribeImageSpriteTemplatesResponse> DescribeImageSpriteTemplatesOutcome;
                typedef std::future<DescribeImageSpriteTemplatesOutcome> DescribeImageSpriteTemplatesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeImageSpriteTemplatesRequest&, DescribeImageSpriteTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageSpriteTemplatesAsyncHandler;
                typedef Outcome<Error, Model::DescribeSampleSnapshotTemplatesResponse> DescribeSampleSnapshotTemplatesOutcome;
                typedef std::future<DescribeSampleSnapshotTemplatesOutcome> DescribeSampleSnapshotTemplatesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeSampleSnapshotTemplatesRequest&, DescribeSampleSnapshotTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSampleSnapshotTemplatesAsyncHandler;
                typedef Outcome<Error, Model::DescribeSnapshotByTimeOffsetTemplatesResponse> DescribeSnapshotByTimeOffsetTemplatesOutcome;
                typedef std::future<DescribeSnapshotByTimeOffsetTemplatesOutcome> DescribeSnapshotByTimeOffsetTemplatesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeSnapshotByTimeOffsetTemplatesRequest&, DescribeSnapshotByTimeOffsetTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnapshotByTimeOffsetTemplatesAsyncHandler;
                typedef Outcome<Error, Model::DescribeTaskDetailResponse> DescribeTaskDetailOutcome;
                typedef std::future<DescribeTaskDetailOutcome> DescribeTaskDetailOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeTaskDetailRequest&, DescribeTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskDetailAsyncHandler;
                typedef Outcome<Error, Model::DescribeTasksResponse> DescribeTasksOutcome;
                typedef std::future<DescribeTasksOutcome> DescribeTasksOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeTasksRequest&, DescribeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTasksAsyncHandler;
                typedef Outcome<Error, Model::DescribeTranscodeTemplatesResponse> DescribeTranscodeTemplatesOutcome;
                typedef std::future<DescribeTranscodeTemplatesOutcome> DescribeTranscodeTemplatesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeTranscodeTemplatesRequest&, DescribeTranscodeTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTranscodeTemplatesAsyncHandler;
                typedef Outcome<Error, Model::DescribeUserInfoResponse> DescribeUserInfoOutcome;
                typedef std::future<DescribeUserInfoOutcome> DescribeUserInfoOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeUserInfoRequest&, DescribeUserInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserInfoAsyncHandler;
                typedef Outcome<Error, Model::DescribeWatermarkTemplatesResponse> DescribeWatermarkTemplatesOutcome;
                typedef std::future<DescribeWatermarkTemplatesOutcome> DescribeWatermarkTemplatesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeWatermarkTemplatesRequest&, DescribeWatermarkTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWatermarkTemplatesAsyncHandler;
                typedef Outcome<Error, Model::DescribeWorkflowsResponse> DescribeWorkflowsOutcome;
                typedef std::future<DescribeWorkflowsOutcome> DescribeWorkflowsOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeWorkflowsRequest&, DescribeWorkflowsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkflowsAsyncHandler;
                typedef Outcome<Error, Model::DisableWorkflowResponse> DisableWorkflowOutcome;
                typedef std::future<DisableWorkflowOutcome> DisableWorkflowOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DisableWorkflowRequest&, DisableWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableWorkflowAsyncHandler;
                typedef Outcome<Error, Model::EnableWorkflowResponse> EnableWorkflowOutcome;
                typedef std::future<EnableWorkflowOutcome> EnableWorkflowOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::EnableWorkflowRequest&, EnableWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableWorkflowAsyncHandler;
                typedef Outcome<Error, Model::ModifyAnimatedGraphicsTemplateResponse> ModifyAnimatedGraphicsTemplateOutcome;
                typedef std::future<ModifyAnimatedGraphicsTemplateOutcome> ModifyAnimatedGraphicsTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyAnimatedGraphicsTemplateRequest&, ModifyAnimatedGraphicsTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAnimatedGraphicsTemplateAsyncHandler;
                typedef Outcome<Error, Model::ModifyImageSpriteTemplateResponse> ModifyImageSpriteTemplateOutcome;
                typedef std::future<ModifyImageSpriteTemplateOutcome> ModifyImageSpriteTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyImageSpriteTemplateRequest&, ModifyImageSpriteTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyImageSpriteTemplateAsyncHandler;
                typedef Outcome<Error, Model::ModifySampleSnapshotTemplateResponse> ModifySampleSnapshotTemplateOutcome;
                typedef std::future<ModifySampleSnapshotTemplateOutcome> ModifySampleSnapshotTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifySampleSnapshotTemplateRequest&, ModifySampleSnapshotTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySampleSnapshotTemplateAsyncHandler;
                typedef Outcome<Error, Model::ModifySnapshotByTimeOffsetTemplateResponse> ModifySnapshotByTimeOffsetTemplateOutcome;
                typedef std::future<ModifySnapshotByTimeOffsetTemplateOutcome> ModifySnapshotByTimeOffsetTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifySnapshotByTimeOffsetTemplateRequest&, ModifySnapshotByTimeOffsetTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySnapshotByTimeOffsetTemplateAsyncHandler;
                typedef Outcome<Error, Model::ModifyTranscodeTemplateResponse> ModifyTranscodeTemplateOutcome;
                typedef std::future<ModifyTranscodeTemplateOutcome> ModifyTranscodeTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyTranscodeTemplateRequest&, ModifyTranscodeTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTranscodeTemplateAsyncHandler;
                typedef Outcome<Error, Model::ModifyWatermarkTemplateResponse> ModifyWatermarkTemplateOutcome;
                typedef std::future<ModifyWatermarkTemplateOutcome> ModifyWatermarkTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyWatermarkTemplateRequest&, ModifyWatermarkTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWatermarkTemplateAsyncHandler;
                typedef Outcome<Error, Model::ProcessLiveMediaResponse> ProcessLiveMediaOutcome;
                typedef std::future<ProcessLiveMediaOutcome> ProcessLiveMediaOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ProcessLiveMediaRequest&, ProcessLiveMediaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ProcessLiveMediaAsyncHandler;
                typedef Outcome<Error, Model::ProcessMediaResponse> ProcessMediaOutcome;
                typedef std::future<ProcessMediaOutcome> ProcessMediaOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ProcessMediaRequest&, ProcessMediaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ProcessMediaAsyncHandler;
                typedef Outcome<Error, Model::ResetWorkflowResponse> ResetWorkflowOutcome;
                typedef std::future<ResetWorkflowOutcome> ResetWorkflowOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ResetWorkflowRequest&, ResetWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetWorkflowAsyncHandler;



                /**
                 *创建用户自定义转动图模板，数量上限：16。
                 * @param req CreateAnimatedGraphicsTemplateRequest
                 * @return CreateAnimatedGraphicsTemplateOutcome
                 */
                CreateAnimatedGraphicsTemplateOutcome CreateAnimatedGraphicsTemplate(const Model::CreateAnimatedGraphicsTemplateRequest &request);
                void CreateAnimatedGraphicsTemplateAsync(const Model::CreateAnimatedGraphicsTemplateRequest& request, const CreateAnimatedGraphicsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAnimatedGraphicsTemplateOutcomeCallable CreateAnimatedGraphicsTemplateCallable(const Model::CreateAnimatedGraphicsTemplateRequest& request);

                /**
                 *创建用户自定义雪碧图模板，数量上限：16。
                 * @param req CreateImageSpriteTemplateRequest
                 * @return CreateImageSpriteTemplateOutcome
                 */
                CreateImageSpriteTemplateOutcome CreateImageSpriteTemplate(const Model::CreateImageSpriteTemplateRequest &request);
                void CreateImageSpriteTemplateAsync(const Model::CreateImageSpriteTemplateRequest& request, const CreateImageSpriteTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageSpriteTemplateOutcomeCallable CreateImageSpriteTemplateCallable(const Model::CreateImageSpriteTemplateRequest& request);

                /**
                 *创建用户自定义采样截图模板，数量上限：16。
                 * @param req CreateSampleSnapshotTemplateRequest
                 * @return CreateSampleSnapshotTemplateOutcome
                 */
                CreateSampleSnapshotTemplateOutcome CreateSampleSnapshotTemplate(const Model::CreateSampleSnapshotTemplateRequest &request);
                void CreateSampleSnapshotTemplateAsync(const Model::CreateSampleSnapshotTemplateRequest& request, const CreateSampleSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSampleSnapshotTemplateOutcomeCallable CreateSampleSnapshotTemplateCallable(const Model::CreateSampleSnapshotTemplateRequest& request);

                /**
                 *创建用户自定义指定时间点截图模板，数量上限：16。
                 * @param req CreateSnapshotByTimeOffsetTemplateRequest
                 * @return CreateSnapshotByTimeOffsetTemplateOutcome
                 */
                CreateSnapshotByTimeOffsetTemplateOutcome CreateSnapshotByTimeOffsetTemplate(const Model::CreateSnapshotByTimeOffsetTemplateRequest &request);
                void CreateSnapshotByTimeOffsetTemplateAsync(const Model::CreateSnapshotByTimeOffsetTemplateRequest& request, const CreateSnapshotByTimeOffsetTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSnapshotByTimeOffsetTemplateOutcomeCallable CreateSnapshotByTimeOffsetTemplateCallable(const Model::CreateSnapshotByTimeOffsetTemplateRequest& request);

                /**
                 *创建用户自定义转码模板，数量上限：1000。
                 * @param req CreateTranscodeTemplateRequest
                 * @return CreateTranscodeTemplateOutcome
                 */
                CreateTranscodeTemplateOutcome CreateTranscodeTemplate(const Model::CreateTranscodeTemplateRequest &request);
                void CreateTranscodeTemplateAsync(const Model::CreateTranscodeTemplateRequest& request, const CreateTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTranscodeTemplateOutcomeCallable CreateTranscodeTemplateCallable(const Model::CreateTranscodeTemplateRequest& request);

                /**
                 *创建用户自定义水印模板，数量上限：1000。
                 * @param req CreateWatermarkTemplateRequest
                 * @return CreateWatermarkTemplateOutcome
                 */
                CreateWatermarkTemplateOutcome CreateWatermarkTemplate(const Model::CreateWatermarkTemplateRequest &request);
                void CreateWatermarkTemplateAsync(const Model::CreateWatermarkTemplateRequest& request, const CreateWatermarkTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWatermarkTemplateOutcomeCallable CreateWatermarkTemplateCallable(const Model::CreateWatermarkTemplateRequest& request);

                /**
                 *对 COS 中指定 Bucket 的目录下上传的媒体文件，设置处理规则，包括：
1. 视频转码（带水印）；
2. 视频转动图；
3. 对视频按指定时间点截图；
4. 对视频采样截图；
5. 对视频截图雪碧图；
6. 对视频转自适应码流。

注意：创建工作流成功后是禁用状态，需要手动启用。
                 * @param req CreateWorkflowRequest
                 * @return CreateWorkflowOutcome
                 */
                CreateWorkflowOutcome CreateWorkflow(const Model::CreateWorkflowRequest &request);
                void CreateWorkflowAsync(const Model::CreateWorkflowRequest& request, const CreateWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWorkflowOutcomeCallable CreateWorkflowCallable(const Model::CreateWorkflowRequest& request);

                /**
                 *删除用户自定义转动图模板。
                 * @param req DeleteAnimatedGraphicsTemplateRequest
                 * @return DeleteAnimatedGraphicsTemplateOutcome
                 */
                DeleteAnimatedGraphicsTemplateOutcome DeleteAnimatedGraphicsTemplate(const Model::DeleteAnimatedGraphicsTemplateRequest &request);
                void DeleteAnimatedGraphicsTemplateAsync(const Model::DeleteAnimatedGraphicsTemplateRequest& request, const DeleteAnimatedGraphicsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAnimatedGraphicsTemplateOutcomeCallable DeleteAnimatedGraphicsTemplateCallable(const Model::DeleteAnimatedGraphicsTemplateRequest& request);

                /**
                 *删除雪碧图模板。
                 * @param req DeleteImageSpriteTemplateRequest
                 * @return DeleteImageSpriteTemplateOutcome
                 */
                DeleteImageSpriteTemplateOutcome DeleteImageSpriteTemplate(const Model::DeleteImageSpriteTemplateRequest &request);
                void DeleteImageSpriteTemplateAsync(const Model::DeleteImageSpriteTemplateRequest& request, const DeleteImageSpriteTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteImageSpriteTemplateOutcomeCallable DeleteImageSpriteTemplateCallable(const Model::DeleteImageSpriteTemplateRequest& request);

                /**
                 *删除用户自定义采样截图模板。
                 * @param req DeleteSampleSnapshotTemplateRequest
                 * @return DeleteSampleSnapshotTemplateOutcome
                 */
                DeleteSampleSnapshotTemplateOutcome DeleteSampleSnapshotTemplate(const Model::DeleteSampleSnapshotTemplateRequest &request);
                void DeleteSampleSnapshotTemplateAsync(const Model::DeleteSampleSnapshotTemplateRequest& request, const DeleteSampleSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSampleSnapshotTemplateOutcomeCallable DeleteSampleSnapshotTemplateCallable(const Model::DeleteSampleSnapshotTemplateRequest& request);

                /**
                 *删除用户自定义指定时间点截图模板。
                 * @param req DeleteSnapshotByTimeOffsetTemplateRequest
                 * @return DeleteSnapshotByTimeOffsetTemplateOutcome
                 */
                DeleteSnapshotByTimeOffsetTemplateOutcome DeleteSnapshotByTimeOffsetTemplate(const Model::DeleteSnapshotByTimeOffsetTemplateRequest &request);
                void DeleteSnapshotByTimeOffsetTemplateAsync(const Model::DeleteSnapshotByTimeOffsetTemplateRequest& request, const DeleteSnapshotByTimeOffsetTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSnapshotByTimeOffsetTemplateOutcomeCallable DeleteSnapshotByTimeOffsetTemplateCallable(const Model::DeleteSnapshotByTimeOffsetTemplateRequest& request);

                /**
                 *删除用户自定义转码模板。
                 * @param req DeleteTranscodeTemplateRequest
                 * @return DeleteTranscodeTemplateOutcome
                 */
                DeleteTranscodeTemplateOutcome DeleteTranscodeTemplate(const Model::DeleteTranscodeTemplateRequest &request);
                void DeleteTranscodeTemplateAsync(const Model::DeleteTranscodeTemplateRequest& request, const DeleteTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTranscodeTemplateOutcomeCallable DeleteTranscodeTemplateCallable(const Model::DeleteTranscodeTemplateRequest& request);

                /**
                 *删除用户自定义水印模板。
                 * @param req DeleteWatermarkTemplateRequest
                 * @return DeleteWatermarkTemplateOutcome
                 */
                DeleteWatermarkTemplateOutcome DeleteWatermarkTemplate(const Model::DeleteWatermarkTemplateRequest &request);
                void DeleteWatermarkTemplateAsync(const Model::DeleteWatermarkTemplateRequest& request, const DeleteWatermarkTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWatermarkTemplateOutcomeCallable DeleteWatermarkTemplateCallable(const Model::DeleteWatermarkTemplateRequest& request);

                /**
                 *删除工作流。对于已启用的工作流，需要禁用后才能删除。
                 * @param req DeleteWorkflowRequest
                 * @return DeleteWorkflowOutcome
                 */
                DeleteWorkflowOutcome DeleteWorkflow(const Model::DeleteWorkflowRequest &request);
                void DeleteWorkflowAsync(const Model::DeleteWorkflowRequest& request, const DeleteWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWorkflowOutcomeCallable DeleteWorkflowCallable(const Model::DeleteWorkflowRequest& request);

                /**
                 *查询转动图模板列表，支持根据条件，分页查询。
                 * @param req DescribeAnimatedGraphicsTemplatesRequest
                 * @return DescribeAnimatedGraphicsTemplatesOutcome
                 */
                DescribeAnimatedGraphicsTemplatesOutcome DescribeAnimatedGraphicsTemplates(const Model::DescribeAnimatedGraphicsTemplatesRequest &request);
                void DescribeAnimatedGraphicsTemplatesAsync(const Model::DescribeAnimatedGraphicsTemplatesRequest& request, const DescribeAnimatedGraphicsTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAnimatedGraphicsTemplatesOutcomeCallable DescribeAnimatedGraphicsTemplatesCallable(const Model::DescribeAnimatedGraphicsTemplatesRequest& request);

                /**
                 *查询雪碧图模板，支持根据条件，分页查询。
                 * @param req DescribeImageSpriteTemplatesRequest
                 * @return DescribeImageSpriteTemplatesOutcome
                 */
                DescribeImageSpriteTemplatesOutcome DescribeImageSpriteTemplates(const Model::DescribeImageSpriteTemplatesRequest &request);
                void DescribeImageSpriteTemplatesAsync(const Model::DescribeImageSpriteTemplatesRequest& request, const DescribeImageSpriteTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageSpriteTemplatesOutcomeCallable DescribeImageSpriteTemplatesCallable(const Model::DescribeImageSpriteTemplatesRequest& request);

                /**
                 *查询采样截图模板，支持根据条件，分页查询。
                 * @param req DescribeSampleSnapshotTemplatesRequest
                 * @return DescribeSampleSnapshotTemplatesOutcome
                 */
                DescribeSampleSnapshotTemplatesOutcome DescribeSampleSnapshotTemplates(const Model::DescribeSampleSnapshotTemplatesRequest &request);
                void DescribeSampleSnapshotTemplatesAsync(const Model::DescribeSampleSnapshotTemplatesRequest& request, const DescribeSampleSnapshotTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSampleSnapshotTemplatesOutcomeCallable DescribeSampleSnapshotTemplatesCallable(const Model::DescribeSampleSnapshotTemplatesRequest& request);

                /**
                 *查询指定时间点截图模板，支持根据条件，分页查询。
                 * @param req DescribeSnapshotByTimeOffsetTemplatesRequest
                 * @return DescribeSnapshotByTimeOffsetTemplatesOutcome
                 */
                DescribeSnapshotByTimeOffsetTemplatesOutcome DescribeSnapshotByTimeOffsetTemplates(const Model::DescribeSnapshotByTimeOffsetTemplatesRequest &request);
                void DescribeSnapshotByTimeOffsetTemplatesAsync(const Model::DescribeSnapshotByTimeOffsetTemplatesRequest& request, const DescribeSnapshotByTimeOffsetTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSnapshotByTimeOffsetTemplatesOutcomeCallable DescribeSnapshotByTimeOffsetTemplatesCallable(const Model::DescribeSnapshotByTimeOffsetTemplatesRequest& request);

                /**
                 *通过任务 ID 查询任务的执行状态和结果的详细信息（最多可以查询3天之内提交的任务）。
                 * @param req DescribeTaskDetailRequest
                 * @return DescribeTaskDetailOutcome
                 */
                DescribeTaskDetailOutcome DescribeTaskDetail(const Model::DescribeTaskDetailRequest &request);
                void DescribeTaskDetailAsync(const Model::DescribeTaskDetailRequest& request, const DescribeTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskDetailOutcomeCallable DescribeTaskDetailCallable(const Model::DescribeTaskDetailRequest& request);

                /**
                 ** 该接口用于查询任务列表；
* 当列表数据比较多时，单次接口调用无法拉取整个列表，可通过 ScrollToken 参数，分批拉取；
* 只能查询到最近三天（72 小时）内的任务。
                 * @param req DescribeTasksRequest
                 * @return DescribeTasksOutcome
                 */
                DescribeTasksOutcome DescribeTasks(const Model::DescribeTasksRequest &request);
                void DescribeTasksAsync(const Model::DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTasksOutcomeCallable DescribeTasksCallable(const Model::DescribeTasksRequest& request);

                /**
                 *根据转码模板唯一标识，获取转码模板详情列表。返回结果包含符合条件的所有用户自定义模板及[系统预置转码模板](https://cloud.tencent.com/document/product/266/33476#.E9.A2.84.E7.BD.AE.E8.BD.AC.E7.A0.81.E6.A8.A1.E6.9D.BF)。
                 * @param req DescribeTranscodeTemplatesRequest
                 * @return DescribeTranscodeTemplatesOutcome
                 */
                DescribeTranscodeTemplatesOutcome DescribeTranscodeTemplates(const Model::DescribeTranscodeTemplatesRequest &request);
                void DescribeTranscodeTemplatesAsync(const Model::DescribeTranscodeTemplatesRequest& request, const DescribeTranscodeTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTranscodeTemplatesOutcomeCallable DescribeTranscodeTemplatesCallable(const Model::DescribeTranscodeTemplatesRequest& request);

                /**
                 *用户服务信息查询，返回用户状态和计费类型；若未注册则返回相应错误提示。
                 * @param req DescribeUserInfoRequest
                 * @return DescribeUserInfoOutcome
                 */
                DescribeUserInfoOutcome DescribeUserInfo(const Model::DescribeUserInfoRequest &request);
                void DescribeUserInfoAsync(const Model::DescribeUserInfoRequest& request, const DescribeUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserInfoOutcomeCallable DescribeUserInfoCallable(const Model::DescribeUserInfoRequest& request);

                /**
                 *查询用户自定义水印模板，支持根据条件，分页查询。
                 * @param req DescribeWatermarkTemplatesRequest
                 * @return DescribeWatermarkTemplatesOutcome
                 */
                DescribeWatermarkTemplatesOutcome DescribeWatermarkTemplates(const Model::DescribeWatermarkTemplatesRequest &request);
                void DescribeWatermarkTemplatesAsync(const Model::DescribeWatermarkTemplatesRequest& request, const DescribeWatermarkTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWatermarkTemplatesOutcomeCallable DescribeWatermarkTemplatesCallable(const Model::DescribeWatermarkTemplatesRequest& request);

                /**
                 *根据工作流 ID，获取工作流详情列表。
                 * @param req DescribeWorkflowsRequest
                 * @return DescribeWorkflowsOutcome
                 */
                DescribeWorkflowsOutcome DescribeWorkflows(const Model::DescribeWorkflowsRequest &request);
                void DescribeWorkflowsAsync(const Model::DescribeWorkflowsRequest& request, const DescribeWorkflowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWorkflowsOutcomeCallable DescribeWorkflowsCallable(const Model::DescribeWorkflowsRequest& request);

                /**
                 *禁用工作流。
                 * @param req DisableWorkflowRequest
                 * @return DisableWorkflowOutcome
                 */
                DisableWorkflowOutcome DisableWorkflow(const Model::DisableWorkflowRequest &request);
                void DisableWorkflowAsync(const Model::DisableWorkflowRequest& request, const DisableWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableWorkflowOutcomeCallable DisableWorkflowCallable(const Model::DisableWorkflowRequest& request);

                /**
                 *启用工作流。
                 * @param req EnableWorkflowRequest
                 * @return EnableWorkflowOutcome
                 */
                EnableWorkflowOutcome EnableWorkflow(const Model::EnableWorkflowRequest &request);
                void EnableWorkflowAsync(const Model::EnableWorkflowRequest& request, const EnableWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableWorkflowOutcomeCallable EnableWorkflowCallable(const Model::EnableWorkflowRequest& request);

                /**
                 *修改用户自定义转动图模板。
                 * @param req ModifyAnimatedGraphicsTemplateRequest
                 * @return ModifyAnimatedGraphicsTemplateOutcome
                 */
                ModifyAnimatedGraphicsTemplateOutcome ModifyAnimatedGraphicsTemplate(const Model::ModifyAnimatedGraphicsTemplateRequest &request);
                void ModifyAnimatedGraphicsTemplateAsync(const Model::ModifyAnimatedGraphicsTemplateRequest& request, const ModifyAnimatedGraphicsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAnimatedGraphicsTemplateOutcomeCallable ModifyAnimatedGraphicsTemplateCallable(const Model::ModifyAnimatedGraphicsTemplateRequest& request);

                /**
                 *修改用户自定义雪碧图模板。
                 * @param req ModifyImageSpriteTemplateRequest
                 * @return ModifyImageSpriteTemplateOutcome
                 */
                ModifyImageSpriteTemplateOutcome ModifyImageSpriteTemplate(const Model::ModifyImageSpriteTemplateRequest &request);
                void ModifyImageSpriteTemplateAsync(const Model::ModifyImageSpriteTemplateRequest& request, const ModifyImageSpriteTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyImageSpriteTemplateOutcomeCallable ModifyImageSpriteTemplateCallable(const Model::ModifyImageSpriteTemplateRequest& request);

                /**
                 *修改用户自定义采样截图模板。
                 * @param req ModifySampleSnapshotTemplateRequest
                 * @return ModifySampleSnapshotTemplateOutcome
                 */
                ModifySampleSnapshotTemplateOutcome ModifySampleSnapshotTemplate(const Model::ModifySampleSnapshotTemplateRequest &request);
                void ModifySampleSnapshotTemplateAsync(const Model::ModifySampleSnapshotTemplateRequest& request, const ModifySampleSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySampleSnapshotTemplateOutcomeCallable ModifySampleSnapshotTemplateCallable(const Model::ModifySampleSnapshotTemplateRequest& request);

                /**
                 *修改用户自定义指定时间点截图模板。
                 * @param req ModifySnapshotByTimeOffsetTemplateRequest
                 * @return ModifySnapshotByTimeOffsetTemplateOutcome
                 */
                ModifySnapshotByTimeOffsetTemplateOutcome ModifySnapshotByTimeOffsetTemplate(const Model::ModifySnapshotByTimeOffsetTemplateRequest &request);
                void ModifySnapshotByTimeOffsetTemplateAsync(const Model::ModifySnapshotByTimeOffsetTemplateRequest& request, const ModifySnapshotByTimeOffsetTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySnapshotByTimeOffsetTemplateOutcomeCallable ModifySnapshotByTimeOffsetTemplateCallable(const Model::ModifySnapshotByTimeOffsetTemplateRequest& request);

                /**
                 *修改用户自定义转码模板信息。
                 * @param req ModifyTranscodeTemplateRequest
                 * @return ModifyTranscodeTemplateOutcome
                 */
                ModifyTranscodeTemplateOutcome ModifyTranscodeTemplate(const Model::ModifyTranscodeTemplateRequest &request);
                void ModifyTranscodeTemplateAsync(const Model::ModifyTranscodeTemplateRequest& request, const ModifyTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTranscodeTemplateOutcomeCallable ModifyTranscodeTemplateCallable(const Model::ModifyTranscodeTemplateRequest& request);

                /**
                 *修改用户自定义水印模板，水印类型不允许修改。
                 * @param req ModifyWatermarkTemplateRequest
                 * @return ModifyWatermarkTemplateOutcome
                 */
                ModifyWatermarkTemplateOutcome ModifyWatermarkTemplate(const Model::ModifyWatermarkTemplateRequest &request);
                void ModifyWatermarkTemplateAsync(const Model::ModifyWatermarkTemplateRequest& request, const ModifyWatermarkTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWatermarkTemplateOutcomeCallable ModifyWatermarkTemplateCallable(const Model::ModifyWatermarkTemplateRequest& request);

                /**
                 *对直播流媒体发起处理任务，功能包括：

1. 智能内容识别（人脸、文本全文、文本关键词、语音全文、语音关键词、物体）。
2. 智能内容分析（精彩集锦）。

直播流处理事件通知实时写入用户指定的消息队列 CMQ 中，用户需要从消息队列 CMQ 中获取事件通知结果，同时处理过程中存在输出文件的，会写入用户指定的输出文件的目标存储中。
                 * @param req ProcessLiveMediaRequest
                 * @return ProcessLiveMediaOutcome
                 */
                ProcessLiveMediaOutcome ProcessLiveMedia(const Model::ProcessLiveMediaRequest &request);
                void ProcessLiveMediaAsync(const Model::ProcessLiveMediaRequest& request, const ProcessLiveMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ProcessLiveMediaOutcomeCallable ProcessLiveMediaCallable(const Model::ProcessLiveMediaRequest& request);

                /**
                 *对 COS 中的媒体文件发起处理任务，功能包括：
1. 视频转码（带水印）；
2. 视频转动图；
3. 对视频按指定时间点截图；
4. 对视频采样截图；
5. 对视频截图雪碧图；
6. 对视频转自适应码流。
                 * @param req ProcessMediaRequest
                 * @return ProcessMediaOutcome
                 */
                ProcessMediaOutcome ProcessMedia(const Model::ProcessMediaRequest &request);
                void ProcessMediaAsync(const Model::ProcessMediaRequest& request, const ProcessMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ProcessMediaOutcomeCallable ProcessMediaCallable(const Model::ProcessMediaRequest& request);

                /**
                 *重新设置一个已经存在且处于禁用状态的工作流。
                 * @param req ResetWorkflowRequest
                 * @return ResetWorkflowOutcome
                 */
                ResetWorkflowOutcome ResetWorkflow(const Model::ResetWorkflowRequest &request);
                void ResetWorkflowAsync(const Model::ResetWorkflowRequest& request, const ResetWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetWorkflowOutcomeCallable ResetWorkflowCallable(const Model::ResetWorkflowRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MPSCLIENT_H_
