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
#include <tencentcloud/mps/v20190612/model/CreateAIAnalysisTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateAIAnalysisTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateAIRecognitionTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateAIRecognitionTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateAdaptiveDynamicStreamingTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateAdaptiveDynamicStreamingTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateAnimatedGraphicsTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateAnimatedGraphicsTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateContentReviewTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateContentReviewTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateImageSpriteTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateImageSpriteTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/CreatePersonSampleRequest.h>
#include <tencentcloud/mps/v20190612/model/CreatePersonSampleResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateSampleSnapshotTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateSampleSnapshotTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateScheduleRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateScheduleResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateSnapshotByTimeOffsetTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateSnapshotByTimeOffsetTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateStreamLinkFlowRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateStreamLinkFlowResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateStreamLinkOutputInfoRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateStreamLinkOutputInfoResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateTranscodeTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateTranscodeTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateWatermarkTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateWatermarkTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateWordSamplesRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateWordSamplesResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateWorkflowRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateWorkflowResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteAIAnalysisTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteAIAnalysisTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteAIRecognitionTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteAIRecognitionTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteAdaptiveDynamicStreamingTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteAdaptiveDynamicStreamingTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteAnimatedGraphicsTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteAnimatedGraphicsTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteContentReviewTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteContentReviewTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteImageSpriteTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteImageSpriteTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/DeletePersonSampleRequest.h>
#include <tencentcloud/mps/v20190612/model/DeletePersonSampleResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteSampleSnapshotTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteSampleSnapshotTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteScheduleRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteScheduleResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteSnapshotByTimeOffsetTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteSnapshotByTimeOffsetTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteStreamLinkFlowRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteStreamLinkFlowResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteStreamLinkOutputRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteStreamLinkOutputResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteTranscodeTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteTranscodeTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteWatermarkTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteWatermarkTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteWordSamplesRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteWordSamplesResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteWorkflowRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteWorkflowResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeAIAnalysisTemplatesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeAIAnalysisTemplatesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeAIRecognitionTemplatesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeAIRecognitionTemplatesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeAdaptiveDynamicStreamingTemplatesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeAdaptiveDynamicStreamingTemplatesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeAnimatedGraphicsTemplatesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeAnimatedGraphicsTemplatesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeContentReviewTemplatesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeContentReviewTemplatesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeImageSpriteTemplatesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeImageSpriteTemplatesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeMediaMetaDataRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeMediaMetaDataResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribePersonSamplesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribePersonSamplesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeSampleSnapshotTemplatesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeSampleSnapshotTemplatesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeSchedulesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeSchedulesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeSnapshotByTimeOffsetTemplatesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeSnapshotByTimeOffsetTemplatesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamLinkActivateStateRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamLinkActivateStateResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamLinkFlowRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamLinkFlowResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamLinkFlowLogsRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamLinkFlowLogsResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamLinkFlowMediaStatisticsRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamLinkFlowMediaStatisticsResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamLinkFlowRealtimeStatusRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamLinkFlowRealtimeStatusResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamLinkFlowSRTStatisticsRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamLinkFlowSRTStatisticsResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamLinkFlowStatisticsRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamLinkFlowStatisticsResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamLinkFlowsRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamLinkFlowsResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamLinkRegionsRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamLinkRegionsResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeTaskDetailRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeTaskDetailResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeTasksRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeTasksResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeTranscodeTemplatesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeTranscodeTemplatesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeWatermarkTemplatesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeWatermarkTemplatesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeWordSamplesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeWordSamplesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeWorkflowsRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeWorkflowsResponse.h>
#include <tencentcloud/mps/v20190612/model/DisableScheduleRequest.h>
#include <tencentcloud/mps/v20190612/model/DisableScheduleResponse.h>
#include <tencentcloud/mps/v20190612/model/DisableWorkflowRequest.h>
#include <tencentcloud/mps/v20190612/model/DisableWorkflowResponse.h>
#include <tencentcloud/mps/v20190612/model/EditMediaRequest.h>
#include <tencentcloud/mps/v20190612/model/EditMediaResponse.h>
#include <tencentcloud/mps/v20190612/model/EnableScheduleRequest.h>
#include <tencentcloud/mps/v20190612/model/EnableScheduleResponse.h>
#include <tencentcloud/mps/v20190612/model/EnableWorkflowRequest.h>
#include <tencentcloud/mps/v20190612/model/EnableWorkflowResponse.h>
#include <tencentcloud/mps/v20190612/model/ExecuteFunctionRequest.h>
#include <tencentcloud/mps/v20190612/model/ExecuteFunctionResponse.h>
#include <tencentcloud/mps/v20190612/model/ManageTaskRequest.h>
#include <tencentcloud/mps/v20190612/model/ManageTaskResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyAIAnalysisTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyAIAnalysisTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyAIRecognitionTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyAIRecognitionTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyAdaptiveDynamicStreamingTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyAdaptiveDynamicStreamingTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyAnimatedGraphicsTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyAnimatedGraphicsTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyContentReviewTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyContentReviewTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyImageSpriteTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyImageSpriteTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyPersonSampleRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyPersonSampleResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifySampleSnapshotTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifySampleSnapshotTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyScheduleRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyScheduleResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifySnapshotByTimeOffsetTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifySnapshotByTimeOffsetTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyStreamLinkFlowRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyStreamLinkFlowResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyStreamLinkInputRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyStreamLinkInputResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyStreamLinkOutputInfoRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyStreamLinkOutputInfoResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyTranscodeTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyTranscodeTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyWatermarkTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyWatermarkTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyWordSampleRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyWordSampleResponse.h>
#include <tencentcloud/mps/v20190612/model/ParseLiveStreamProcessNotificationRequest.h>
#include <tencentcloud/mps/v20190612/model/ParseLiveStreamProcessNotificationResponse.h>
#include <tencentcloud/mps/v20190612/model/ParseNotificationRequest.h>
#include <tencentcloud/mps/v20190612/model/ParseNotificationResponse.h>
#include <tencentcloud/mps/v20190612/model/ProcessLiveStreamRequest.h>
#include <tencentcloud/mps/v20190612/model/ProcessLiveStreamResponse.h>
#include <tencentcloud/mps/v20190612/model/ProcessMediaRequest.h>
#include <tencentcloud/mps/v20190612/model/ProcessMediaResponse.h>
#include <tencentcloud/mps/v20190612/model/RecognizeMediaForZhiXueRequest.h>
#include <tencentcloud/mps/v20190612/model/RecognizeMediaForZhiXueResponse.h>
#include <tencentcloud/mps/v20190612/model/ResetWorkflowRequest.h>
#include <tencentcloud/mps/v20190612/model/ResetWorkflowResponse.h>
#include <tencentcloud/mps/v20190612/model/StartStreamLinkFlowRequest.h>
#include <tencentcloud/mps/v20190612/model/StartStreamLinkFlowResponse.h>
#include <tencentcloud/mps/v20190612/model/StopStreamLinkFlowRequest.h>
#include <tencentcloud/mps/v20190612/model/StopStreamLinkFlowResponse.h>
#include <tencentcloud/mps/v20190612/model/WithdrawsWatermarkRequest.h>
#include <tencentcloud/mps/v20190612/model/WithdrawsWatermarkResponse.h>


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

                typedef Outcome<Core::Error, Model::CreateAIAnalysisTemplateResponse> CreateAIAnalysisTemplateOutcome;
                typedef std::future<CreateAIAnalysisTemplateOutcome> CreateAIAnalysisTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateAIAnalysisTemplateRequest&, CreateAIAnalysisTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAIAnalysisTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAIRecognitionTemplateResponse> CreateAIRecognitionTemplateOutcome;
                typedef std::future<CreateAIRecognitionTemplateOutcome> CreateAIRecognitionTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateAIRecognitionTemplateRequest&, CreateAIRecognitionTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAIRecognitionTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAdaptiveDynamicStreamingTemplateResponse> CreateAdaptiveDynamicStreamingTemplateOutcome;
                typedef std::future<CreateAdaptiveDynamicStreamingTemplateOutcome> CreateAdaptiveDynamicStreamingTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateAdaptiveDynamicStreamingTemplateRequest&, CreateAdaptiveDynamicStreamingTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAdaptiveDynamicStreamingTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAnimatedGraphicsTemplateResponse> CreateAnimatedGraphicsTemplateOutcome;
                typedef std::future<CreateAnimatedGraphicsTemplateOutcome> CreateAnimatedGraphicsTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateAnimatedGraphicsTemplateRequest&, CreateAnimatedGraphicsTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAnimatedGraphicsTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateContentReviewTemplateResponse> CreateContentReviewTemplateOutcome;
                typedef std::future<CreateContentReviewTemplateOutcome> CreateContentReviewTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateContentReviewTemplateRequest&, CreateContentReviewTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateContentReviewTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImageSpriteTemplateResponse> CreateImageSpriteTemplateOutcome;
                typedef std::future<CreateImageSpriteTemplateOutcome> CreateImageSpriteTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateImageSpriteTemplateRequest&, CreateImageSpriteTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageSpriteTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePersonSampleResponse> CreatePersonSampleOutcome;
                typedef std::future<CreatePersonSampleOutcome> CreatePersonSampleOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreatePersonSampleRequest&, CreatePersonSampleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePersonSampleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSampleSnapshotTemplateResponse> CreateSampleSnapshotTemplateOutcome;
                typedef std::future<CreateSampleSnapshotTemplateOutcome> CreateSampleSnapshotTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateSampleSnapshotTemplateRequest&, CreateSampleSnapshotTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSampleSnapshotTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateScheduleResponse> CreateScheduleOutcome;
                typedef std::future<CreateScheduleOutcome> CreateScheduleOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateScheduleRequest&, CreateScheduleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateScheduleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSnapshotByTimeOffsetTemplateResponse> CreateSnapshotByTimeOffsetTemplateOutcome;
                typedef std::future<CreateSnapshotByTimeOffsetTemplateOutcome> CreateSnapshotByTimeOffsetTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateSnapshotByTimeOffsetTemplateRequest&, CreateSnapshotByTimeOffsetTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSnapshotByTimeOffsetTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateStreamLinkFlowResponse> CreateStreamLinkFlowOutcome;
                typedef std::future<CreateStreamLinkFlowOutcome> CreateStreamLinkFlowOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateStreamLinkFlowRequest&, CreateStreamLinkFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStreamLinkFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateStreamLinkOutputInfoResponse> CreateStreamLinkOutputInfoOutcome;
                typedef std::future<CreateStreamLinkOutputInfoOutcome> CreateStreamLinkOutputInfoOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateStreamLinkOutputInfoRequest&, CreateStreamLinkOutputInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStreamLinkOutputInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTranscodeTemplateResponse> CreateTranscodeTemplateOutcome;
                typedef std::future<CreateTranscodeTemplateOutcome> CreateTranscodeTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateTranscodeTemplateRequest&, CreateTranscodeTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTranscodeTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWatermarkTemplateResponse> CreateWatermarkTemplateOutcome;
                typedef std::future<CreateWatermarkTemplateOutcome> CreateWatermarkTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateWatermarkTemplateRequest&, CreateWatermarkTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWatermarkTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWordSamplesResponse> CreateWordSamplesOutcome;
                typedef std::future<CreateWordSamplesOutcome> CreateWordSamplesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateWordSamplesRequest&, CreateWordSamplesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWordSamplesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWorkflowResponse> CreateWorkflowOutcome;
                typedef std::future<CreateWorkflowOutcome> CreateWorkflowOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateWorkflowRequest&, CreateWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWorkflowAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAIAnalysisTemplateResponse> DeleteAIAnalysisTemplateOutcome;
                typedef std::future<DeleteAIAnalysisTemplateOutcome> DeleteAIAnalysisTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteAIAnalysisTemplateRequest&, DeleteAIAnalysisTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAIAnalysisTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAIRecognitionTemplateResponse> DeleteAIRecognitionTemplateOutcome;
                typedef std::future<DeleteAIRecognitionTemplateOutcome> DeleteAIRecognitionTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteAIRecognitionTemplateRequest&, DeleteAIRecognitionTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAIRecognitionTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAdaptiveDynamicStreamingTemplateResponse> DeleteAdaptiveDynamicStreamingTemplateOutcome;
                typedef std::future<DeleteAdaptiveDynamicStreamingTemplateOutcome> DeleteAdaptiveDynamicStreamingTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteAdaptiveDynamicStreamingTemplateRequest&, DeleteAdaptiveDynamicStreamingTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAdaptiveDynamicStreamingTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAnimatedGraphicsTemplateResponse> DeleteAnimatedGraphicsTemplateOutcome;
                typedef std::future<DeleteAnimatedGraphicsTemplateOutcome> DeleteAnimatedGraphicsTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteAnimatedGraphicsTemplateRequest&, DeleteAnimatedGraphicsTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAnimatedGraphicsTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteContentReviewTemplateResponse> DeleteContentReviewTemplateOutcome;
                typedef std::future<DeleteContentReviewTemplateOutcome> DeleteContentReviewTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteContentReviewTemplateRequest&, DeleteContentReviewTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteContentReviewTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteImageSpriteTemplateResponse> DeleteImageSpriteTemplateOutcome;
                typedef std::future<DeleteImageSpriteTemplateOutcome> DeleteImageSpriteTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteImageSpriteTemplateRequest&, DeleteImageSpriteTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImageSpriteTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePersonSampleResponse> DeletePersonSampleOutcome;
                typedef std::future<DeletePersonSampleOutcome> DeletePersonSampleOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeletePersonSampleRequest&, DeletePersonSampleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePersonSampleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSampleSnapshotTemplateResponse> DeleteSampleSnapshotTemplateOutcome;
                typedef std::future<DeleteSampleSnapshotTemplateOutcome> DeleteSampleSnapshotTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteSampleSnapshotTemplateRequest&, DeleteSampleSnapshotTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSampleSnapshotTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteScheduleResponse> DeleteScheduleOutcome;
                typedef std::future<DeleteScheduleOutcome> DeleteScheduleOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteScheduleRequest&, DeleteScheduleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteScheduleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSnapshotByTimeOffsetTemplateResponse> DeleteSnapshotByTimeOffsetTemplateOutcome;
                typedef std::future<DeleteSnapshotByTimeOffsetTemplateOutcome> DeleteSnapshotByTimeOffsetTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteSnapshotByTimeOffsetTemplateRequest&, DeleteSnapshotByTimeOffsetTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSnapshotByTimeOffsetTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteStreamLinkFlowResponse> DeleteStreamLinkFlowOutcome;
                typedef std::future<DeleteStreamLinkFlowOutcome> DeleteStreamLinkFlowOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteStreamLinkFlowRequest&, DeleteStreamLinkFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStreamLinkFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteStreamLinkOutputResponse> DeleteStreamLinkOutputOutcome;
                typedef std::future<DeleteStreamLinkOutputOutcome> DeleteStreamLinkOutputOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteStreamLinkOutputRequest&, DeleteStreamLinkOutputOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStreamLinkOutputAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTranscodeTemplateResponse> DeleteTranscodeTemplateOutcome;
                typedef std::future<DeleteTranscodeTemplateOutcome> DeleteTranscodeTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteTranscodeTemplateRequest&, DeleteTranscodeTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTranscodeTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWatermarkTemplateResponse> DeleteWatermarkTemplateOutcome;
                typedef std::future<DeleteWatermarkTemplateOutcome> DeleteWatermarkTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteWatermarkTemplateRequest&, DeleteWatermarkTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWatermarkTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWordSamplesResponse> DeleteWordSamplesOutcome;
                typedef std::future<DeleteWordSamplesOutcome> DeleteWordSamplesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteWordSamplesRequest&, DeleteWordSamplesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWordSamplesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWorkflowResponse> DeleteWorkflowOutcome;
                typedef std::future<DeleteWorkflowOutcome> DeleteWorkflowOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteWorkflowRequest&, DeleteWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWorkflowAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIAnalysisTemplatesResponse> DescribeAIAnalysisTemplatesOutcome;
                typedef std::future<DescribeAIAnalysisTemplatesOutcome> DescribeAIAnalysisTemplatesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeAIAnalysisTemplatesRequest&, DescribeAIAnalysisTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIAnalysisTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIRecognitionTemplatesResponse> DescribeAIRecognitionTemplatesOutcome;
                typedef std::future<DescribeAIRecognitionTemplatesOutcome> DescribeAIRecognitionTemplatesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeAIRecognitionTemplatesRequest&, DescribeAIRecognitionTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIRecognitionTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAdaptiveDynamicStreamingTemplatesResponse> DescribeAdaptiveDynamicStreamingTemplatesOutcome;
                typedef std::future<DescribeAdaptiveDynamicStreamingTemplatesOutcome> DescribeAdaptiveDynamicStreamingTemplatesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeAdaptiveDynamicStreamingTemplatesRequest&, DescribeAdaptiveDynamicStreamingTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAdaptiveDynamicStreamingTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAnimatedGraphicsTemplatesResponse> DescribeAnimatedGraphicsTemplatesOutcome;
                typedef std::future<DescribeAnimatedGraphicsTemplatesOutcome> DescribeAnimatedGraphicsTemplatesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeAnimatedGraphicsTemplatesRequest&, DescribeAnimatedGraphicsTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAnimatedGraphicsTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeContentReviewTemplatesResponse> DescribeContentReviewTemplatesOutcome;
                typedef std::future<DescribeContentReviewTemplatesOutcome> DescribeContentReviewTemplatesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeContentReviewTemplatesRequest&, DescribeContentReviewTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeContentReviewTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageSpriteTemplatesResponse> DescribeImageSpriteTemplatesOutcome;
                typedef std::future<DescribeImageSpriteTemplatesOutcome> DescribeImageSpriteTemplatesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeImageSpriteTemplatesRequest&, DescribeImageSpriteTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageSpriteTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMediaMetaDataResponse> DescribeMediaMetaDataOutcome;
                typedef std::future<DescribeMediaMetaDataOutcome> DescribeMediaMetaDataOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeMediaMetaDataRequest&, DescribeMediaMetaDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMediaMetaDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePersonSamplesResponse> DescribePersonSamplesOutcome;
                typedef std::future<DescribePersonSamplesOutcome> DescribePersonSamplesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribePersonSamplesRequest&, DescribePersonSamplesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePersonSamplesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSampleSnapshotTemplatesResponse> DescribeSampleSnapshotTemplatesOutcome;
                typedef std::future<DescribeSampleSnapshotTemplatesOutcome> DescribeSampleSnapshotTemplatesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeSampleSnapshotTemplatesRequest&, DescribeSampleSnapshotTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSampleSnapshotTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSchedulesResponse> DescribeSchedulesOutcome;
                typedef std::future<DescribeSchedulesOutcome> DescribeSchedulesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeSchedulesRequest&, DescribeSchedulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSchedulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSnapshotByTimeOffsetTemplatesResponse> DescribeSnapshotByTimeOffsetTemplatesOutcome;
                typedef std::future<DescribeSnapshotByTimeOffsetTemplatesOutcome> DescribeSnapshotByTimeOffsetTemplatesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeSnapshotByTimeOffsetTemplatesRequest&, DescribeSnapshotByTimeOffsetTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnapshotByTimeOffsetTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamLinkActivateStateResponse> DescribeStreamLinkActivateStateOutcome;
                typedef std::future<DescribeStreamLinkActivateStateOutcome> DescribeStreamLinkActivateStateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeStreamLinkActivateStateRequest&, DescribeStreamLinkActivateStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamLinkActivateStateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamLinkFlowResponse> DescribeStreamLinkFlowOutcome;
                typedef std::future<DescribeStreamLinkFlowOutcome> DescribeStreamLinkFlowOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeStreamLinkFlowRequest&, DescribeStreamLinkFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamLinkFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamLinkFlowLogsResponse> DescribeStreamLinkFlowLogsOutcome;
                typedef std::future<DescribeStreamLinkFlowLogsOutcome> DescribeStreamLinkFlowLogsOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeStreamLinkFlowLogsRequest&, DescribeStreamLinkFlowLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamLinkFlowLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamLinkFlowMediaStatisticsResponse> DescribeStreamLinkFlowMediaStatisticsOutcome;
                typedef std::future<DescribeStreamLinkFlowMediaStatisticsOutcome> DescribeStreamLinkFlowMediaStatisticsOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeStreamLinkFlowMediaStatisticsRequest&, DescribeStreamLinkFlowMediaStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamLinkFlowMediaStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamLinkFlowRealtimeStatusResponse> DescribeStreamLinkFlowRealtimeStatusOutcome;
                typedef std::future<DescribeStreamLinkFlowRealtimeStatusOutcome> DescribeStreamLinkFlowRealtimeStatusOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeStreamLinkFlowRealtimeStatusRequest&, DescribeStreamLinkFlowRealtimeStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamLinkFlowRealtimeStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamLinkFlowSRTStatisticsResponse> DescribeStreamLinkFlowSRTStatisticsOutcome;
                typedef std::future<DescribeStreamLinkFlowSRTStatisticsOutcome> DescribeStreamLinkFlowSRTStatisticsOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeStreamLinkFlowSRTStatisticsRequest&, DescribeStreamLinkFlowSRTStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamLinkFlowSRTStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamLinkFlowStatisticsResponse> DescribeStreamLinkFlowStatisticsOutcome;
                typedef std::future<DescribeStreamLinkFlowStatisticsOutcome> DescribeStreamLinkFlowStatisticsOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeStreamLinkFlowStatisticsRequest&, DescribeStreamLinkFlowStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamLinkFlowStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamLinkFlowsResponse> DescribeStreamLinkFlowsOutcome;
                typedef std::future<DescribeStreamLinkFlowsOutcome> DescribeStreamLinkFlowsOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeStreamLinkFlowsRequest&, DescribeStreamLinkFlowsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamLinkFlowsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamLinkRegionsResponse> DescribeStreamLinkRegionsOutcome;
                typedef std::future<DescribeStreamLinkRegionsOutcome> DescribeStreamLinkRegionsOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeStreamLinkRegionsRequest&, DescribeStreamLinkRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamLinkRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskDetailResponse> DescribeTaskDetailOutcome;
                typedef std::future<DescribeTaskDetailOutcome> DescribeTaskDetailOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeTaskDetailRequest&, DescribeTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTasksResponse> DescribeTasksOutcome;
                typedef std::future<DescribeTasksOutcome> DescribeTasksOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeTasksRequest&, DescribeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTranscodeTemplatesResponse> DescribeTranscodeTemplatesOutcome;
                typedef std::future<DescribeTranscodeTemplatesOutcome> DescribeTranscodeTemplatesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeTranscodeTemplatesRequest&, DescribeTranscodeTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTranscodeTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWatermarkTemplatesResponse> DescribeWatermarkTemplatesOutcome;
                typedef std::future<DescribeWatermarkTemplatesOutcome> DescribeWatermarkTemplatesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeWatermarkTemplatesRequest&, DescribeWatermarkTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWatermarkTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWordSamplesResponse> DescribeWordSamplesOutcome;
                typedef std::future<DescribeWordSamplesOutcome> DescribeWordSamplesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeWordSamplesRequest&, DescribeWordSamplesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWordSamplesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWorkflowsResponse> DescribeWorkflowsOutcome;
                typedef std::future<DescribeWorkflowsOutcome> DescribeWorkflowsOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeWorkflowsRequest&, DescribeWorkflowsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkflowsAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableScheduleResponse> DisableScheduleOutcome;
                typedef std::future<DisableScheduleOutcome> DisableScheduleOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DisableScheduleRequest&, DisableScheduleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableScheduleAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableWorkflowResponse> DisableWorkflowOutcome;
                typedef std::future<DisableWorkflowOutcome> DisableWorkflowOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DisableWorkflowRequest&, DisableWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableWorkflowAsyncHandler;
                typedef Outcome<Core::Error, Model::EditMediaResponse> EditMediaOutcome;
                typedef std::future<EditMediaOutcome> EditMediaOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::EditMediaRequest&, EditMediaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EditMediaAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableScheduleResponse> EnableScheduleOutcome;
                typedef std::future<EnableScheduleOutcome> EnableScheduleOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::EnableScheduleRequest&, EnableScheduleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableScheduleAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableWorkflowResponse> EnableWorkflowOutcome;
                typedef std::future<EnableWorkflowOutcome> EnableWorkflowOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::EnableWorkflowRequest&, EnableWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableWorkflowAsyncHandler;
                typedef Outcome<Core::Error, Model::ExecuteFunctionResponse> ExecuteFunctionOutcome;
                typedef std::future<ExecuteFunctionOutcome> ExecuteFunctionOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ExecuteFunctionRequest&, ExecuteFunctionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteFunctionAsyncHandler;
                typedef Outcome<Core::Error, Model::ManageTaskResponse> ManageTaskOutcome;
                typedef std::future<ManageTaskOutcome> ManageTaskOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ManageTaskRequest&, ManageTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ManageTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAIAnalysisTemplateResponse> ModifyAIAnalysisTemplateOutcome;
                typedef std::future<ModifyAIAnalysisTemplateOutcome> ModifyAIAnalysisTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyAIAnalysisTemplateRequest&, ModifyAIAnalysisTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAIAnalysisTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAIRecognitionTemplateResponse> ModifyAIRecognitionTemplateOutcome;
                typedef std::future<ModifyAIRecognitionTemplateOutcome> ModifyAIRecognitionTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyAIRecognitionTemplateRequest&, ModifyAIRecognitionTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAIRecognitionTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAdaptiveDynamicStreamingTemplateResponse> ModifyAdaptiveDynamicStreamingTemplateOutcome;
                typedef std::future<ModifyAdaptiveDynamicStreamingTemplateOutcome> ModifyAdaptiveDynamicStreamingTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyAdaptiveDynamicStreamingTemplateRequest&, ModifyAdaptiveDynamicStreamingTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAdaptiveDynamicStreamingTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAnimatedGraphicsTemplateResponse> ModifyAnimatedGraphicsTemplateOutcome;
                typedef std::future<ModifyAnimatedGraphicsTemplateOutcome> ModifyAnimatedGraphicsTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyAnimatedGraphicsTemplateRequest&, ModifyAnimatedGraphicsTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAnimatedGraphicsTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyContentReviewTemplateResponse> ModifyContentReviewTemplateOutcome;
                typedef std::future<ModifyContentReviewTemplateOutcome> ModifyContentReviewTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyContentReviewTemplateRequest&, ModifyContentReviewTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyContentReviewTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyImageSpriteTemplateResponse> ModifyImageSpriteTemplateOutcome;
                typedef std::future<ModifyImageSpriteTemplateOutcome> ModifyImageSpriteTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyImageSpriteTemplateRequest&, ModifyImageSpriteTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyImageSpriteTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPersonSampleResponse> ModifyPersonSampleOutcome;
                typedef std::future<ModifyPersonSampleOutcome> ModifyPersonSampleOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyPersonSampleRequest&, ModifyPersonSampleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPersonSampleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySampleSnapshotTemplateResponse> ModifySampleSnapshotTemplateOutcome;
                typedef std::future<ModifySampleSnapshotTemplateOutcome> ModifySampleSnapshotTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifySampleSnapshotTemplateRequest&, ModifySampleSnapshotTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySampleSnapshotTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyScheduleResponse> ModifyScheduleOutcome;
                typedef std::future<ModifyScheduleOutcome> ModifyScheduleOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyScheduleRequest&, ModifyScheduleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyScheduleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySnapshotByTimeOffsetTemplateResponse> ModifySnapshotByTimeOffsetTemplateOutcome;
                typedef std::future<ModifySnapshotByTimeOffsetTemplateOutcome> ModifySnapshotByTimeOffsetTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifySnapshotByTimeOffsetTemplateRequest&, ModifySnapshotByTimeOffsetTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySnapshotByTimeOffsetTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyStreamLinkFlowResponse> ModifyStreamLinkFlowOutcome;
                typedef std::future<ModifyStreamLinkFlowOutcome> ModifyStreamLinkFlowOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyStreamLinkFlowRequest&, ModifyStreamLinkFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStreamLinkFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyStreamLinkInputResponse> ModifyStreamLinkInputOutcome;
                typedef std::future<ModifyStreamLinkInputOutcome> ModifyStreamLinkInputOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyStreamLinkInputRequest&, ModifyStreamLinkInputOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStreamLinkInputAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyStreamLinkOutputInfoResponse> ModifyStreamLinkOutputInfoOutcome;
                typedef std::future<ModifyStreamLinkOutputInfoOutcome> ModifyStreamLinkOutputInfoOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyStreamLinkOutputInfoRequest&, ModifyStreamLinkOutputInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStreamLinkOutputInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTranscodeTemplateResponse> ModifyTranscodeTemplateOutcome;
                typedef std::future<ModifyTranscodeTemplateOutcome> ModifyTranscodeTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyTranscodeTemplateRequest&, ModifyTranscodeTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTranscodeTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWatermarkTemplateResponse> ModifyWatermarkTemplateOutcome;
                typedef std::future<ModifyWatermarkTemplateOutcome> ModifyWatermarkTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyWatermarkTemplateRequest&, ModifyWatermarkTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWatermarkTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWordSampleResponse> ModifyWordSampleOutcome;
                typedef std::future<ModifyWordSampleOutcome> ModifyWordSampleOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyWordSampleRequest&, ModifyWordSampleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWordSampleAsyncHandler;
                typedef Outcome<Core::Error, Model::ParseLiveStreamProcessNotificationResponse> ParseLiveStreamProcessNotificationOutcome;
                typedef std::future<ParseLiveStreamProcessNotificationOutcome> ParseLiveStreamProcessNotificationOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ParseLiveStreamProcessNotificationRequest&, ParseLiveStreamProcessNotificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ParseLiveStreamProcessNotificationAsyncHandler;
                typedef Outcome<Core::Error, Model::ParseNotificationResponse> ParseNotificationOutcome;
                typedef std::future<ParseNotificationOutcome> ParseNotificationOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ParseNotificationRequest&, ParseNotificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ParseNotificationAsyncHandler;
                typedef Outcome<Core::Error, Model::ProcessLiveStreamResponse> ProcessLiveStreamOutcome;
                typedef std::future<ProcessLiveStreamOutcome> ProcessLiveStreamOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ProcessLiveStreamRequest&, ProcessLiveStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ProcessLiveStreamAsyncHandler;
                typedef Outcome<Core::Error, Model::ProcessMediaResponse> ProcessMediaOutcome;
                typedef std::future<ProcessMediaOutcome> ProcessMediaOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ProcessMediaRequest&, ProcessMediaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ProcessMediaAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizeMediaForZhiXueResponse> RecognizeMediaForZhiXueOutcome;
                typedef std::future<RecognizeMediaForZhiXueOutcome> RecognizeMediaForZhiXueOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::RecognizeMediaForZhiXueRequest&, RecognizeMediaForZhiXueOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeMediaForZhiXueAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetWorkflowResponse> ResetWorkflowOutcome;
                typedef std::future<ResetWorkflowOutcome> ResetWorkflowOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ResetWorkflowRequest&, ResetWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetWorkflowAsyncHandler;
                typedef Outcome<Core::Error, Model::StartStreamLinkFlowResponse> StartStreamLinkFlowOutcome;
                typedef std::future<StartStreamLinkFlowOutcome> StartStreamLinkFlowOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::StartStreamLinkFlowRequest&, StartStreamLinkFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartStreamLinkFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::StopStreamLinkFlowResponse> StopStreamLinkFlowOutcome;
                typedef std::future<StopStreamLinkFlowOutcome> StopStreamLinkFlowOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::StopStreamLinkFlowRequest&, StopStreamLinkFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopStreamLinkFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::WithdrawsWatermarkResponse> WithdrawsWatermarkOutcome;
                typedef std::future<WithdrawsWatermarkOutcome> WithdrawsWatermarkOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::WithdrawsWatermarkRequest&, WithdrawsWatermarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> WithdrawsWatermarkAsyncHandler;



                /**
                 *创建用户自定义内容分析模板，数量上限：50。
                 * @param req CreateAIAnalysisTemplateRequest
                 * @return CreateAIAnalysisTemplateOutcome
                 */
                CreateAIAnalysisTemplateOutcome CreateAIAnalysisTemplate(const Model::CreateAIAnalysisTemplateRequest &request);
                void CreateAIAnalysisTemplateAsync(const Model::CreateAIAnalysisTemplateRequest& request, const CreateAIAnalysisTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAIAnalysisTemplateOutcomeCallable CreateAIAnalysisTemplateCallable(const Model::CreateAIAnalysisTemplateRequest& request);

                /**
                 *创建用户自定义内容识别模板，数量上限：50。
                 * @param req CreateAIRecognitionTemplateRequest
                 * @return CreateAIRecognitionTemplateOutcome
                 */
                CreateAIRecognitionTemplateOutcome CreateAIRecognitionTemplate(const Model::CreateAIRecognitionTemplateRequest &request);
                void CreateAIRecognitionTemplateAsync(const Model::CreateAIRecognitionTemplateRequest& request, const CreateAIRecognitionTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAIRecognitionTemplateOutcomeCallable CreateAIRecognitionTemplateCallable(const Model::CreateAIRecognitionTemplateRequest& request);

                /**
                 *创建转自适应码流模板，数量上限：100。
                 * @param req CreateAdaptiveDynamicStreamingTemplateRequest
                 * @return CreateAdaptiveDynamicStreamingTemplateOutcome
                 */
                CreateAdaptiveDynamicStreamingTemplateOutcome CreateAdaptiveDynamicStreamingTemplate(const Model::CreateAdaptiveDynamicStreamingTemplateRequest &request);
                void CreateAdaptiveDynamicStreamingTemplateAsync(const Model::CreateAdaptiveDynamicStreamingTemplateRequest& request, const CreateAdaptiveDynamicStreamingTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAdaptiveDynamicStreamingTemplateOutcomeCallable CreateAdaptiveDynamicStreamingTemplateCallable(const Model::CreateAdaptiveDynamicStreamingTemplateRequest& request);

                /**
                 *创建用户自定义转动图模板，数量上限：16。
                 * @param req CreateAnimatedGraphicsTemplateRequest
                 * @return CreateAnimatedGraphicsTemplateOutcome
                 */
                CreateAnimatedGraphicsTemplateOutcome CreateAnimatedGraphicsTemplate(const Model::CreateAnimatedGraphicsTemplateRequest &request);
                void CreateAnimatedGraphicsTemplateAsync(const Model::CreateAnimatedGraphicsTemplateRequest& request, const CreateAnimatedGraphicsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAnimatedGraphicsTemplateOutcomeCallable CreateAnimatedGraphicsTemplateCallable(const Model::CreateAnimatedGraphicsTemplateRequest& request);

                /**
                 *创建用户自定义内容审核模板，数量上限：50。
                 * @param req CreateContentReviewTemplateRequest
                 * @return CreateContentReviewTemplateOutcome
                 */
                CreateContentReviewTemplateOutcome CreateContentReviewTemplate(const Model::CreateContentReviewTemplateRequest &request);
                void CreateContentReviewTemplateAsync(const Model::CreateContentReviewTemplateRequest& request, const CreateContentReviewTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateContentReviewTemplateOutcomeCallable CreateContentReviewTemplateCallable(const Model::CreateContentReviewTemplateRequest& request);

                /**
                 *创建用户自定义雪碧图模板，数量上限：16。
                 * @param req CreateImageSpriteTemplateRequest
                 * @return CreateImageSpriteTemplateOutcome
                 */
                CreateImageSpriteTemplateOutcome CreateImageSpriteTemplate(const Model::CreateImageSpriteTemplateRequest &request);
                void CreateImageSpriteTemplateAsync(const Model::CreateImageSpriteTemplateRequest& request, const CreateImageSpriteTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageSpriteTemplateOutcomeCallable CreateImageSpriteTemplateCallable(const Model::CreateImageSpriteTemplateRequest& request);

                /**
                 *该接口用于创建素材样本，用于通过五官定位等技术，进行内容识别、内容不适宜等视频处理。
                 * @param req CreatePersonSampleRequest
                 * @return CreatePersonSampleOutcome
                 */
                CreatePersonSampleOutcome CreatePersonSample(const Model::CreatePersonSampleRequest &request);
                void CreatePersonSampleAsync(const Model::CreatePersonSampleRequest& request, const CreatePersonSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePersonSampleOutcomeCallable CreatePersonSampleCallable(const Model::CreatePersonSampleRequest& request);

                /**
                 *创建用户自定义采样截图模板，数量上限：16。
                 * @param req CreateSampleSnapshotTemplateRequest
                 * @return CreateSampleSnapshotTemplateOutcome
                 */
                CreateSampleSnapshotTemplateOutcome CreateSampleSnapshotTemplate(const Model::CreateSampleSnapshotTemplateRequest &request);
                void CreateSampleSnapshotTemplateAsync(const Model::CreateSampleSnapshotTemplateRequest& request, const CreateSampleSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSampleSnapshotTemplateOutcomeCallable CreateSampleSnapshotTemplateCallable(const Model::CreateSampleSnapshotTemplateRequest& request);

                /**
                 *对 COS 中指定 Bucket 的目录下上传的媒体文件，设置处理规则，包括：
1. 视频转码（带水印）；
2. 视频转动图；
3. 对视频按指定时间点截图；
4. 对视频采样截图；
5. 对视频截图雪碧图；
6. 对视频转自适应码流；
7. 智能内容审核（鉴黄、敏感信息检测）；
8. 智能内容分析（标签、分类、封面、按帧标签）；
9. 智能内容识别（人脸、文本全文、文本关键词、语音全文、语音关键词）。

注意：创建编排成功后是禁用状态，需要手动启用。
                 * @param req CreateScheduleRequest
                 * @return CreateScheduleOutcome
                 */
                CreateScheduleOutcome CreateSchedule(const Model::CreateScheduleRequest &request);
                void CreateScheduleAsync(const Model::CreateScheduleRequest& request, const CreateScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateScheduleOutcomeCallable CreateScheduleCallable(const Model::CreateScheduleRequest& request);

                /**
                 *创建用户自定义指定时间点截图模板，数量上限：16。
                 * @param req CreateSnapshotByTimeOffsetTemplateRequest
                 * @return CreateSnapshotByTimeOffsetTemplateOutcome
                 */
                CreateSnapshotByTimeOffsetTemplateOutcome CreateSnapshotByTimeOffsetTemplate(const Model::CreateSnapshotByTimeOffsetTemplateRequest &request);
                void CreateSnapshotByTimeOffsetTemplateAsync(const Model::CreateSnapshotByTimeOffsetTemplateRequest& request, const CreateSnapshotByTimeOffsetTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSnapshotByTimeOffsetTemplateOutcomeCallable CreateSnapshotByTimeOffsetTemplateCallable(const Model::CreateSnapshotByTimeOffsetTemplateRequest& request);

                /**
                 *创建媒体传输的传输流配置。
                 * @param req CreateStreamLinkFlowRequest
                 * @return CreateStreamLinkFlowOutcome
                 */
                CreateStreamLinkFlowOutcome CreateStreamLinkFlow(const Model::CreateStreamLinkFlowRequest &request);
                void CreateStreamLinkFlowAsync(const Model::CreateStreamLinkFlowRequest& request, const CreateStreamLinkFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStreamLinkFlowOutcomeCallable CreateStreamLinkFlowCallable(const Model::CreateStreamLinkFlowRequest& request);

                /**
                 *创建媒体传输流的输出信息。
                 * @param req CreateStreamLinkOutputInfoRequest
                 * @return CreateStreamLinkOutputInfoOutcome
                 */
                CreateStreamLinkOutputInfoOutcome CreateStreamLinkOutputInfo(const Model::CreateStreamLinkOutputInfoRequest &request);
                void CreateStreamLinkOutputInfoAsync(const Model::CreateStreamLinkOutputInfoRequest& request, const CreateStreamLinkOutputInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStreamLinkOutputInfoOutcomeCallable CreateStreamLinkOutputInfoCallable(const Model::CreateStreamLinkOutputInfoRequest& request);

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
                 *该接口用于批量创建关键词样本，样本用于通过OCR、ASR技术，进行不适宜内容识别、内容识别等视频处理。
                 * @param req CreateWordSamplesRequest
                 * @return CreateWordSamplesOutcome
                 */
                CreateWordSamplesOutcome CreateWordSamples(const Model::CreateWordSamplesRequest &request);
                void CreateWordSamplesAsync(const Model::CreateWordSamplesRequest& request, const CreateWordSamplesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWordSamplesOutcomeCallable CreateWordSamplesCallable(const Model::CreateWordSamplesRequest& request);

                /**
                 *对 COS 中指定 Bucket 的目录下上传的媒体文件，设置处理规则，包括：
1. 视频转码（带水印）；
2. 视频转动图；
3. 对视频按指定时间点截图；
4. 对视频采样截图；
5. 对视频截图雪碧图；
6. 对视频转自适应码流；
7. 智能内容审核（鉴黄、敏感信息检测）；
8. 智能内容分析（标签、分类、封面、按帧标签）；
9. 智能内容识别（人脸、文本全文、文本关键词、语音全文、语音关键词）。

注意：创建工作流成功后是禁用状态，需要手动启用。
                 * @param req CreateWorkflowRequest
                 * @return CreateWorkflowOutcome
                 */
                CreateWorkflowOutcome CreateWorkflow(const Model::CreateWorkflowRequest &request);
                void CreateWorkflowAsync(const Model::CreateWorkflowRequest& request, const CreateWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWorkflowOutcomeCallable CreateWorkflowCallable(const Model::CreateWorkflowRequest& request);

                /**
                 *删除用户自定义内容分析模板。

注意：模板 ID 为 10000 以下的为系统预置模板，不允许删除。
                 * @param req DeleteAIAnalysisTemplateRequest
                 * @return DeleteAIAnalysisTemplateOutcome
                 */
                DeleteAIAnalysisTemplateOutcome DeleteAIAnalysisTemplate(const Model::DeleteAIAnalysisTemplateRequest &request);
                void DeleteAIAnalysisTemplateAsync(const Model::DeleteAIAnalysisTemplateRequest& request, const DeleteAIAnalysisTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAIAnalysisTemplateOutcomeCallable DeleteAIAnalysisTemplateCallable(const Model::DeleteAIAnalysisTemplateRequest& request);

                /**
                 *删除用户自定义内容识别模板。
                 * @param req DeleteAIRecognitionTemplateRequest
                 * @return DeleteAIRecognitionTemplateOutcome
                 */
                DeleteAIRecognitionTemplateOutcome DeleteAIRecognitionTemplate(const Model::DeleteAIRecognitionTemplateRequest &request);
                void DeleteAIRecognitionTemplateAsync(const Model::DeleteAIRecognitionTemplateRequest& request, const DeleteAIRecognitionTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAIRecognitionTemplateOutcomeCallable DeleteAIRecognitionTemplateCallable(const Model::DeleteAIRecognitionTemplateRequest& request);

                /**
                 *删除转自适应码流模板
                 * @param req DeleteAdaptiveDynamicStreamingTemplateRequest
                 * @return DeleteAdaptiveDynamicStreamingTemplateOutcome
                 */
                DeleteAdaptiveDynamicStreamingTemplateOutcome DeleteAdaptiveDynamicStreamingTemplate(const Model::DeleteAdaptiveDynamicStreamingTemplateRequest &request);
                void DeleteAdaptiveDynamicStreamingTemplateAsync(const Model::DeleteAdaptiveDynamicStreamingTemplateRequest& request, const DeleteAdaptiveDynamicStreamingTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAdaptiveDynamicStreamingTemplateOutcomeCallable DeleteAdaptiveDynamicStreamingTemplateCallable(const Model::DeleteAdaptiveDynamicStreamingTemplateRequest& request);

                /**
                 *删除用户自定义转动图模板。
                 * @param req DeleteAnimatedGraphicsTemplateRequest
                 * @return DeleteAnimatedGraphicsTemplateOutcome
                 */
                DeleteAnimatedGraphicsTemplateOutcome DeleteAnimatedGraphicsTemplate(const Model::DeleteAnimatedGraphicsTemplateRequest &request);
                void DeleteAnimatedGraphicsTemplateAsync(const Model::DeleteAnimatedGraphicsTemplateRequest& request, const DeleteAnimatedGraphicsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAnimatedGraphicsTemplateOutcomeCallable DeleteAnimatedGraphicsTemplateCallable(const Model::DeleteAnimatedGraphicsTemplateRequest& request);

                /**
                 *删除用户自定义内容审核模板。
                 * @param req DeleteContentReviewTemplateRequest
                 * @return DeleteContentReviewTemplateOutcome
                 */
                DeleteContentReviewTemplateOutcome DeleteContentReviewTemplate(const Model::DeleteContentReviewTemplateRequest &request);
                void DeleteContentReviewTemplateAsync(const Model::DeleteContentReviewTemplateRequest& request, const DeleteContentReviewTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteContentReviewTemplateOutcomeCallable DeleteContentReviewTemplateCallable(const Model::DeleteContentReviewTemplateRequest& request);

                /**
                 *删除雪碧图模板。
                 * @param req DeleteImageSpriteTemplateRequest
                 * @return DeleteImageSpriteTemplateOutcome
                 */
                DeleteImageSpriteTemplateOutcome DeleteImageSpriteTemplate(const Model::DeleteImageSpriteTemplateRequest &request);
                void DeleteImageSpriteTemplateAsync(const Model::DeleteImageSpriteTemplateRequest& request, const DeleteImageSpriteTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteImageSpriteTemplateOutcomeCallable DeleteImageSpriteTemplateCallable(const Model::DeleteImageSpriteTemplateRequest& request);

                /**
                 *该接口用于根据素材 ID，删除素材样本。
                 * @param req DeletePersonSampleRequest
                 * @return DeletePersonSampleOutcome
                 */
                DeletePersonSampleOutcome DeletePersonSample(const Model::DeletePersonSampleRequest &request);
                void DeletePersonSampleAsync(const Model::DeletePersonSampleRequest& request, const DeletePersonSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePersonSampleOutcomeCallable DeletePersonSampleCallable(const Model::DeletePersonSampleRequest& request);

                /**
                 *删除用户自定义采样截图模板。
                 * @param req DeleteSampleSnapshotTemplateRequest
                 * @return DeleteSampleSnapshotTemplateOutcome
                 */
                DeleteSampleSnapshotTemplateOutcome DeleteSampleSnapshotTemplate(const Model::DeleteSampleSnapshotTemplateRequest &request);
                void DeleteSampleSnapshotTemplateAsync(const Model::DeleteSampleSnapshotTemplateRequest& request, const DeleteSampleSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSampleSnapshotTemplateOutcomeCallable DeleteSampleSnapshotTemplateCallable(const Model::DeleteSampleSnapshotTemplateRequest& request);

                /**
                 *删除编排
                 * @param req DeleteScheduleRequest
                 * @return DeleteScheduleOutcome
                 */
                DeleteScheduleOutcome DeleteSchedule(const Model::DeleteScheduleRequest &request);
                void DeleteScheduleAsync(const Model::DeleteScheduleRequest& request, const DeleteScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteScheduleOutcomeCallable DeleteScheduleCallable(const Model::DeleteScheduleRequest& request);

                /**
                 *删除用户自定义指定时间点截图模板。
                 * @param req DeleteSnapshotByTimeOffsetTemplateRequest
                 * @return DeleteSnapshotByTimeOffsetTemplateOutcome
                 */
                DeleteSnapshotByTimeOffsetTemplateOutcome DeleteSnapshotByTimeOffsetTemplate(const Model::DeleteSnapshotByTimeOffsetTemplateRequest &request);
                void DeleteSnapshotByTimeOffsetTemplateAsync(const Model::DeleteSnapshotByTimeOffsetTemplateRequest& request, const DeleteSnapshotByTimeOffsetTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSnapshotByTimeOffsetTemplateOutcomeCallable DeleteSnapshotByTimeOffsetTemplateCallable(const Model::DeleteSnapshotByTimeOffsetTemplateRequest& request);

                /**
                 *删除媒体传输的传输流配置。
                 * @param req DeleteStreamLinkFlowRequest
                 * @return DeleteStreamLinkFlowOutcome
                 */
                DeleteStreamLinkFlowOutcome DeleteStreamLinkFlow(const Model::DeleteStreamLinkFlowRequest &request);
                void DeleteStreamLinkFlowAsync(const Model::DeleteStreamLinkFlowRequest& request, const DeleteStreamLinkFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteStreamLinkFlowOutcomeCallable DeleteStreamLinkFlowCallable(const Model::DeleteStreamLinkFlowRequest& request);

                /**
                 *删除媒体传输流的输出配置。
                 * @param req DeleteStreamLinkOutputRequest
                 * @return DeleteStreamLinkOutputOutcome
                 */
                DeleteStreamLinkOutputOutcome DeleteStreamLinkOutput(const Model::DeleteStreamLinkOutputRequest &request);
                void DeleteStreamLinkOutputAsync(const Model::DeleteStreamLinkOutputRequest& request, const DeleteStreamLinkOutputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteStreamLinkOutputOutcomeCallable DeleteStreamLinkOutputCallable(const Model::DeleteStreamLinkOutputRequest& request);

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
                 *该接口用于批量删除关键词样本。
                 * @param req DeleteWordSamplesRequest
                 * @return DeleteWordSamplesOutcome
                 */
                DeleteWordSamplesOutcome DeleteWordSamples(const Model::DeleteWordSamplesRequest &request);
                void DeleteWordSamplesAsync(const Model::DeleteWordSamplesRequest& request, const DeleteWordSamplesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWordSamplesOutcomeCallable DeleteWordSamplesCallable(const Model::DeleteWordSamplesRequest& request);

                /**
                 *删除工作流。对于已启用的工作流，需要禁用后才能删除。
                 * @param req DeleteWorkflowRequest
                 * @return DeleteWorkflowOutcome
                 */
                DeleteWorkflowOutcome DeleteWorkflow(const Model::DeleteWorkflowRequest &request);
                void DeleteWorkflowAsync(const Model::DeleteWorkflowRequest& request, const DeleteWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWorkflowOutcomeCallable DeleteWorkflowCallable(const Model::DeleteWorkflowRequest& request);

                /**
                 *根据内容分析模板唯一标识，获取内容分析模板详情列表。返回结果包含符合条件的所有用户自定义内容分析模板及系统预置视频内容分析模板
                 * @param req DescribeAIAnalysisTemplatesRequest
                 * @return DescribeAIAnalysisTemplatesOutcome
                 */
                DescribeAIAnalysisTemplatesOutcome DescribeAIAnalysisTemplates(const Model::DescribeAIAnalysisTemplatesRequest &request);
                void DescribeAIAnalysisTemplatesAsync(const Model::DescribeAIAnalysisTemplatesRequest& request, const DescribeAIAnalysisTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIAnalysisTemplatesOutcomeCallable DescribeAIAnalysisTemplatesCallable(const Model::DescribeAIAnalysisTemplatesRequest& request);

                /**
                 *根据内容识别模板唯一标识，获取内容识别模板详情列表。返回结果包含符合条件的所有用户自定义内容识别模板及系统预置视频内容识别模板
                 * @param req DescribeAIRecognitionTemplatesRequest
                 * @return DescribeAIRecognitionTemplatesOutcome
                 */
                DescribeAIRecognitionTemplatesOutcome DescribeAIRecognitionTemplates(const Model::DescribeAIRecognitionTemplatesRequest &request);
                void DescribeAIRecognitionTemplatesAsync(const Model::DescribeAIRecognitionTemplatesRequest& request, const DescribeAIRecognitionTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIRecognitionTemplatesOutcomeCallable DescribeAIRecognitionTemplatesCallable(const Model::DescribeAIRecognitionTemplatesRequest& request);

                /**
                 *查询转自适应码流模板，支持根据条件，分页查询。
                 * @param req DescribeAdaptiveDynamicStreamingTemplatesRequest
                 * @return DescribeAdaptiveDynamicStreamingTemplatesOutcome
                 */
                DescribeAdaptiveDynamicStreamingTemplatesOutcome DescribeAdaptiveDynamicStreamingTemplates(const Model::DescribeAdaptiveDynamicStreamingTemplatesRequest &request);
                void DescribeAdaptiveDynamicStreamingTemplatesAsync(const Model::DescribeAdaptiveDynamicStreamingTemplatesRequest& request, const DescribeAdaptiveDynamicStreamingTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAdaptiveDynamicStreamingTemplatesOutcomeCallable DescribeAdaptiveDynamicStreamingTemplatesCallable(const Model::DescribeAdaptiveDynamicStreamingTemplatesRequest& request);

                /**
                 *查询转动图模板列表，支持根据条件，分页查询。
                 * @param req DescribeAnimatedGraphicsTemplatesRequest
                 * @return DescribeAnimatedGraphicsTemplatesOutcome
                 */
                DescribeAnimatedGraphicsTemplatesOutcome DescribeAnimatedGraphicsTemplates(const Model::DescribeAnimatedGraphicsTemplatesRequest &request);
                void DescribeAnimatedGraphicsTemplatesAsync(const Model::DescribeAnimatedGraphicsTemplatesRequest& request, const DescribeAnimatedGraphicsTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAnimatedGraphicsTemplatesOutcomeCallable DescribeAnimatedGraphicsTemplatesCallable(const Model::DescribeAnimatedGraphicsTemplatesRequest& request);

                /**
                 *根据智能审核模板唯一标识，获取智能审核模板详情列表。返回结果包含符合条件的所有用户自定义模板及系统预置智能审核模板。
                 * @param req DescribeContentReviewTemplatesRequest
                 * @return DescribeContentReviewTemplatesOutcome
                 */
                DescribeContentReviewTemplatesOutcome DescribeContentReviewTemplates(const Model::DescribeContentReviewTemplatesRequest &request);
                void DescribeContentReviewTemplatesAsync(const Model::DescribeContentReviewTemplatesRequest& request, const DescribeContentReviewTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeContentReviewTemplatesOutcomeCallable DescribeContentReviewTemplatesCallable(const Model::DescribeContentReviewTemplatesRequest& request);

                /**
                 *查询雪碧图模板，支持根据条件，分页查询。
                 * @param req DescribeImageSpriteTemplatesRequest
                 * @return DescribeImageSpriteTemplatesOutcome
                 */
                DescribeImageSpriteTemplatesOutcome DescribeImageSpriteTemplates(const Model::DescribeImageSpriteTemplatesRequest &request);
                void DescribeImageSpriteTemplatesAsync(const Model::DescribeImageSpriteTemplatesRequest& request, const DescribeImageSpriteTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageSpriteTemplatesOutcomeCallable DescribeImageSpriteTemplatesCallable(const Model::DescribeImageSpriteTemplatesRequest& request);

                /**
                 *获取媒体的元信息，包括视频画面宽、高、编码格式、时长、帧率等。
                 * @param req DescribeMediaMetaDataRequest
                 * @return DescribeMediaMetaDataOutcome
                 */
                DescribeMediaMetaDataOutcome DescribeMediaMetaData(const Model::DescribeMediaMetaDataRequest &request);
                void DescribeMediaMetaDataAsync(const Model::DescribeMediaMetaDataRequest& request, const DescribeMediaMetaDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMediaMetaDataOutcomeCallable DescribeMediaMetaDataCallable(const Model::DescribeMediaMetaDataRequest& request);

                /**
                 *该接口用于查询素材样本信息，支持根据素材 ID、名称、标签，分页查询。
                 * @param req DescribePersonSamplesRequest
                 * @return DescribePersonSamplesOutcome
                 */
                DescribePersonSamplesOutcome DescribePersonSamples(const Model::DescribePersonSamplesRequest &request);
                void DescribePersonSamplesAsync(const Model::DescribePersonSamplesRequest& request, const DescribePersonSamplesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePersonSamplesOutcomeCallable DescribePersonSamplesCallable(const Model::DescribePersonSamplesRequest& request);

                /**
                 *查询采样截图模板，支持根据条件，分页查询。
                 * @param req DescribeSampleSnapshotTemplatesRequest
                 * @return DescribeSampleSnapshotTemplatesOutcome
                 */
                DescribeSampleSnapshotTemplatesOutcome DescribeSampleSnapshotTemplates(const Model::DescribeSampleSnapshotTemplatesRequest &request);
                void DescribeSampleSnapshotTemplatesAsync(const Model::DescribeSampleSnapshotTemplatesRequest& request, const DescribeSampleSnapshotTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSampleSnapshotTemplatesOutcomeCallable DescribeSampleSnapshotTemplatesCallable(const Model::DescribeSampleSnapshotTemplatesRequest& request);

                /**
                 *查询编排。
                 * @param req DescribeSchedulesRequest
                 * @return DescribeSchedulesOutcome
                 */
                DescribeSchedulesOutcome DescribeSchedules(const Model::DescribeSchedulesRequest &request);
                void DescribeSchedulesAsync(const Model::DescribeSchedulesRequest& request, const DescribeSchedulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSchedulesOutcomeCallable DescribeSchedulesCallable(const Model::DescribeSchedulesRequest& request);

                /**
                 *查询指定时间点截图模板，支持根据条件，分页查询。
                 * @param req DescribeSnapshotByTimeOffsetTemplatesRequest
                 * @return DescribeSnapshotByTimeOffsetTemplatesOutcome
                 */
                DescribeSnapshotByTimeOffsetTemplatesOutcome DescribeSnapshotByTimeOffsetTemplates(const Model::DescribeSnapshotByTimeOffsetTemplatesRequest &request);
                void DescribeSnapshotByTimeOffsetTemplatesAsync(const Model::DescribeSnapshotByTimeOffsetTemplatesRequest& request, const DescribeSnapshotByTimeOffsetTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSnapshotByTimeOffsetTemplatesOutcomeCallable DescribeSnapshotByTimeOffsetTemplatesCallable(const Model::DescribeSnapshotByTimeOffsetTemplatesRequest& request);

                /**
                 *查询媒体传输开通状态。
                 * @param req DescribeStreamLinkActivateStateRequest
                 * @return DescribeStreamLinkActivateStateOutcome
                 */
                DescribeStreamLinkActivateStateOutcome DescribeStreamLinkActivateState(const Model::DescribeStreamLinkActivateStateRequest &request);
                void DescribeStreamLinkActivateStateAsync(const Model::DescribeStreamLinkActivateStateRequest& request, const DescribeStreamLinkActivateStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamLinkActivateStateOutcomeCallable DescribeStreamLinkActivateStateCallable(const Model::DescribeStreamLinkActivateStateRequest& request);

                /**
                 *查询媒体输入流的配置信息。
                 * @param req DescribeStreamLinkFlowRequest
                 * @return DescribeStreamLinkFlowOutcome
                 */
                DescribeStreamLinkFlowOutcome DescribeStreamLinkFlow(const Model::DescribeStreamLinkFlowRequest &request);
                void DescribeStreamLinkFlowAsync(const Model::DescribeStreamLinkFlowRequest& request, const DescribeStreamLinkFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamLinkFlowOutcomeCallable DescribeStreamLinkFlowCallable(const Model::DescribeStreamLinkFlowRequest& request);

                /**
                 *查询媒体传输流的日志信息。
                 * @param req DescribeStreamLinkFlowLogsRequest
                 * @return DescribeStreamLinkFlowLogsOutcome
                 */
                DescribeStreamLinkFlowLogsOutcome DescribeStreamLinkFlowLogs(const Model::DescribeStreamLinkFlowLogsRequest &request);
                void DescribeStreamLinkFlowLogsAsync(const Model::DescribeStreamLinkFlowLogsRequest& request, const DescribeStreamLinkFlowLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamLinkFlowLogsOutcomeCallable DescribeStreamLinkFlowLogsCallable(const Model::DescribeStreamLinkFlowLogsRequest& request);

                /**
                 *查询媒体传输流的媒体质量数据。

                 * @param req DescribeStreamLinkFlowMediaStatisticsRequest
                 * @return DescribeStreamLinkFlowMediaStatisticsOutcome
                 */
                DescribeStreamLinkFlowMediaStatisticsOutcome DescribeStreamLinkFlowMediaStatistics(const Model::DescribeStreamLinkFlowMediaStatisticsRequest &request);
                void DescribeStreamLinkFlowMediaStatisticsAsync(const Model::DescribeStreamLinkFlowMediaStatisticsRequest& request, const DescribeStreamLinkFlowMediaStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamLinkFlowMediaStatisticsOutcomeCallable DescribeStreamLinkFlowMediaStatisticsCallable(const Model::DescribeStreamLinkFlowMediaStatisticsRequest& request);

                /**
                 *实时查询流的当前状态
                 * @param req DescribeStreamLinkFlowRealtimeStatusRequest
                 * @return DescribeStreamLinkFlowRealtimeStatusOutcome
                 */
                DescribeStreamLinkFlowRealtimeStatusOutcome DescribeStreamLinkFlowRealtimeStatus(const Model::DescribeStreamLinkFlowRealtimeStatusRequest &request);
                void DescribeStreamLinkFlowRealtimeStatusAsync(const Model::DescribeStreamLinkFlowRealtimeStatusRequest& request, const DescribeStreamLinkFlowRealtimeStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamLinkFlowRealtimeStatusOutcomeCallable DescribeStreamLinkFlowRealtimeStatusCallable(const Model::DescribeStreamLinkFlowRealtimeStatusRequest& request);

                /**
                 *查询媒体传输流的SRT质量数据。
                 * @param req DescribeStreamLinkFlowSRTStatisticsRequest
                 * @return DescribeStreamLinkFlowSRTStatisticsOutcome
                 */
                DescribeStreamLinkFlowSRTStatisticsOutcome DescribeStreamLinkFlowSRTStatistics(const Model::DescribeStreamLinkFlowSRTStatisticsRequest &request);
                void DescribeStreamLinkFlowSRTStatisticsAsync(const Model::DescribeStreamLinkFlowSRTStatisticsRequest& request, const DescribeStreamLinkFlowSRTStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamLinkFlowSRTStatisticsOutcomeCallable DescribeStreamLinkFlowSRTStatisticsCallable(const Model::DescribeStreamLinkFlowSRTStatisticsRequest& request);

                /**
                 *查询媒体传输流的媒体质量数据。

                 * @param req DescribeStreamLinkFlowStatisticsRequest
                 * @return DescribeStreamLinkFlowStatisticsOutcome
                 */
                DescribeStreamLinkFlowStatisticsOutcome DescribeStreamLinkFlowStatistics(const Model::DescribeStreamLinkFlowStatisticsRequest &request);
                void DescribeStreamLinkFlowStatisticsAsync(const Model::DescribeStreamLinkFlowStatisticsRequest& request, const DescribeStreamLinkFlowStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamLinkFlowStatisticsOutcomeCallable DescribeStreamLinkFlowStatisticsCallable(const Model::DescribeStreamLinkFlowStatisticsRequest& request);

                /**
                 *批量查询媒体输入流的配置信息。
                 * @param req DescribeStreamLinkFlowsRequest
                 * @return DescribeStreamLinkFlowsOutcome
                 */
                DescribeStreamLinkFlowsOutcome DescribeStreamLinkFlows(const Model::DescribeStreamLinkFlowsRequest &request);
                void DescribeStreamLinkFlowsAsync(const Model::DescribeStreamLinkFlowsRequest& request, const DescribeStreamLinkFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamLinkFlowsOutcomeCallable DescribeStreamLinkFlowsCallable(const Model::DescribeStreamLinkFlowsRequest& request);

                /**
                 *查询媒体传输所有地区。
                 * @param req DescribeStreamLinkRegionsRequest
                 * @return DescribeStreamLinkRegionsOutcome
                 */
                DescribeStreamLinkRegionsOutcome DescribeStreamLinkRegions(const Model::DescribeStreamLinkRegionsRequest &request);
                void DescribeStreamLinkRegionsAsync(const Model::DescribeStreamLinkRegionsRequest& request, const DescribeStreamLinkRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamLinkRegionsOutcomeCallable DescribeStreamLinkRegionsCallable(const Model::DescribeStreamLinkRegionsRequest& request);

                /**
                 *通过任务 ID 查询任务的执行状态和结果的详细信息（最多可以查询7天之内提交的任务）。
                 * @param req DescribeTaskDetailRequest
                 * @return DescribeTaskDetailOutcome
                 */
                DescribeTaskDetailOutcome DescribeTaskDetail(const Model::DescribeTaskDetailRequest &request);
                void DescribeTaskDetailAsync(const Model::DescribeTaskDetailRequest& request, const DescribeTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskDetailOutcomeCallable DescribeTaskDetailCallable(const Model::DescribeTaskDetailRequest& request);

                /**
                 ** 该接口用于查询任务列表；
* 当列表数据比较多时，单次接口调用无法拉取整个列表，可通过 ScrollToken 参数，分批拉取；
* 只能查询到最近七天（168小时）内的任务。
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
                 *查询用户自定义水印模板，支持根据条件，分页查询。
                 * @param req DescribeWatermarkTemplatesRequest
                 * @return DescribeWatermarkTemplatesOutcome
                 */
                DescribeWatermarkTemplatesOutcome DescribeWatermarkTemplates(const Model::DescribeWatermarkTemplatesRequest &request);
                void DescribeWatermarkTemplatesAsync(const Model::DescribeWatermarkTemplatesRequest& request, const DescribeWatermarkTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWatermarkTemplatesOutcomeCallable DescribeWatermarkTemplatesCallable(const Model::DescribeWatermarkTemplatesRequest& request);

                /**
                 *该接口用于根据应用场景、关键词、标签，分页查询关键词样本信息。
                 * @param req DescribeWordSamplesRequest
                 * @return DescribeWordSamplesOutcome
                 */
                DescribeWordSamplesOutcome DescribeWordSamples(const Model::DescribeWordSamplesRequest &request);
                void DescribeWordSamplesAsync(const Model::DescribeWordSamplesRequest& request, const DescribeWordSamplesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWordSamplesOutcomeCallable DescribeWordSamplesCallable(const Model::DescribeWordSamplesRequest& request);

                /**
                 *根据工作流 ID，获取工作流详情列表。
                 * @param req DescribeWorkflowsRequest
                 * @return DescribeWorkflowsOutcome
                 */
                DescribeWorkflowsOutcome DescribeWorkflows(const Model::DescribeWorkflowsRequest &request);
                void DescribeWorkflowsAsync(const Model::DescribeWorkflowsRequest& request, const DescribeWorkflowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWorkflowsOutcomeCallable DescribeWorkflowsCallable(const Model::DescribeWorkflowsRequest& request);

                /**
                 *禁用自动化触发编排任务。
                 * @param req DisableScheduleRequest
                 * @return DisableScheduleOutcome
                 */
                DisableScheduleOutcome DisableSchedule(const Model::DisableScheduleRequest &request);
                void DisableScheduleAsync(const Model::DisableScheduleRequest& request, const DisableScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableScheduleOutcomeCallable DisableScheduleCallable(const Model::DisableScheduleRequest& request);

                /**
                 *禁用工作流。
                 * @param req DisableWorkflowRequest
                 * @return DisableWorkflowOutcome
                 */
                DisableWorkflowOutcome DisableWorkflow(const Model::DisableWorkflowRequest &request);
                void DisableWorkflowAsync(const Model::DisableWorkflowRequest& request, const DisableWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableWorkflowOutcomeCallable DisableWorkflowCallable(const Model::DisableWorkflowRequest& request);

                /**
                 *对视频进行编辑（剪辑、拼接等），生成一个新的点播视频。编辑的功能包括：

1. 对一个文件进行剪辑，生成一个新的视频；
2. 对多个文件进行拼接，生成一个新的视频；
3. 对多个文件进行剪辑，然后再拼接，生成一个新的视频。
                 * @param req EditMediaRequest
                 * @return EditMediaOutcome
                 */
                EditMediaOutcome EditMedia(const Model::EditMediaRequest &request);
                void EditMediaAsync(const Model::EditMediaRequest& request, const EditMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EditMediaOutcomeCallable EditMediaCallable(const Model::EditMediaRequest& request);

                /**
                 *启用自动化触发编排任务。
                 * @param req EnableScheduleRequest
                 * @return EnableScheduleOutcome
                 */
                EnableScheduleOutcome EnableSchedule(const Model::EnableScheduleRequest &request);
                void EnableScheduleAsync(const Model::EnableScheduleRequest& request, const EnableScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableScheduleOutcomeCallable EnableScheduleCallable(const Model::EnableScheduleRequest& request);

                /**
                 *启用工作流。
                 * @param req EnableWorkflowRequest
                 * @return EnableWorkflowOutcome
                 */
                EnableWorkflowOutcome EnableWorkflow(const Model::EnableWorkflowRequest &request);
                void EnableWorkflowAsync(const Model::EnableWorkflowRequest& request, const EnableWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableWorkflowOutcomeCallable EnableWorkflowCallable(const Model::EnableWorkflowRequest& request);

                /**
                 *本接口仅用于定制开发的特殊场景，除非云媒体处理客服人员主动告知您需要使用本接口，其它情况请勿调用。
                 * @param req ExecuteFunctionRequest
                 * @return ExecuteFunctionOutcome
                 */
                ExecuteFunctionOutcome ExecuteFunction(const Model::ExecuteFunctionRequest &request);
                void ExecuteFunctionAsync(const Model::ExecuteFunctionRequest& request, const ExecuteFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExecuteFunctionOutcomeCallable ExecuteFunctionCallable(const Model::ExecuteFunctionRequest& request);

                /**
                 *对已发起的任务进行管理。
                 * @param req ManageTaskRequest
                 * @return ManageTaskOutcome
                 */
                ManageTaskOutcome ManageTask(const Model::ManageTaskRequest &request);
                void ManageTaskAsync(const Model::ManageTaskRequest& request, const ManageTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ManageTaskOutcomeCallable ManageTaskCallable(const Model::ManageTaskRequest& request);

                /**
                 *修改用户自定义内容分析模板。

注意：模板 ID 10000 以下的为系统预置模板，不允许修改。
                 * @param req ModifyAIAnalysisTemplateRequest
                 * @return ModifyAIAnalysisTemplateOutcome
                 */
                ModifyAIAnalysisTemplateOutcome ModifyAIAnalysisTemplate(const Model::ModifyAIAnalysisTemplateRequest &request);
                void ModifyAIAnalysisTemplateAsync(const Model::ModifyAIAnalysisTemplateRequest& request, const ModifyAIAnalysisTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAIAnalysisTemplateOutcomeCallable ModifyAIAnalysisTemplateCallable(const Model::ModifyAIAnalysisTemplateRequest& request);

                /**
                 *修改用户自定义内容识别模板。
                 * @param req ModifyAIRecognitionTemplateRequest
                 * @return ModifyAIRecognitionTemplateOutcome
                 */
                ModifyAIRecognitionTemplateOutcome ModifyAIRecognitionTemplate(const Model::ModifyAIRecognitionTemplateRequest &request);
                void ModifyAIRecognitionTemplateAsync(const Model::ModifyAIRecognitionTemplateRequest& request, const ModifyAIRecognitionTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAIRecognitionTemplateOutcomeCallable ModifyAIRecognitionTemplateCallable(const Model::ModifyAIRecognitionTemplateRequest& request);

                /**
                 *修改转自适应码流模板
                 * @param req ModifyAdaptiveDynamicStreamingTemplateRequest
                 * @return ModifyAdaptiveDynamicStreamingTemplateOutcome
                 */
                ModifyAdaptiveDynamicStreamingTemplateOutcome ModifyAdaptiveDynamicStreamingTemplate(const Model::ModifyAdaptiveDynamicStreamingTemplateRequest &request);
                void ModifyAdaptiveDynamicStreamingTemplateAsync(const Model::ModifyAdaptiveDynamicStreamingTemplateRequest& request, const ModifyAdaptiveDynamicStreamingTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAdaptiveDynamicStreamingTemplateOutcomeCallable ModifyAdaptiveDynamicStreamingTemplateCallable(const Model::ModifyAdaptiveDynamicStreamingTemplateRequest& request);

                /**
                 *修改用户自定义转动图模板。
                 * @param req ModifyAnimatedGraphicsTemplateRequest
                 * @return ModifyAnimatedGraphicsTemplateOutcome
                 */
                ModifyAnimatedGraphicsTemplateOutcome ModifyAnimatedGraphicsTemplate(const Model::ModifyAnimatedGraphicsTemplateRequest &request);
                void ModifyAnimatedGraphicsTemplateAsync(const Model::ModifyAnimatedGraphicsTemplateRequest& request, const ModifyAnimatedGraphicsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAnimatedGraphicsTemplateOutcomeCallable ModifyAnimatedGraphicsTemplateCallable(const Model::ModifyAnimatedGraphicsTemplateRequest& request);

                /**
                 *修改用户自定义内容审核模板。
                 * @param req ModifyContentReviewTemplateRequest
                 * @return ModifyContentReviewTemplateOutcome
                 */
                ModifyContentReviewTemplateOutcome ModifyContentReviewTemplate(const Model::ModifyContentReviewTemplateRequest &request);
                void ModifyContentReviewTemplateAsync(const Model::ModifyContentReviewTemplateRequest& request, const ModifyContentReviewTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyContentReviewTemplateOutcomeCallable ModifyContentReviewTemplateCallable(const Model::ModifyContentReviewTemplateRequest& request);

                /**
                 *修改用户自定义雪碧图模板。
                 * @param req ModifyImageSpriteTemplateRequest
                 * @return ModifyImageSpriteTemplateOutcome
                 */
                ModifyImageSpriteTemplateOutcome ModifyImageSpriteTemplate(const Model::ModifyImageSpriteTemplateRequest &request);
                void ModifyImageSpriteTemplateAsync(const Model::ModifyImageSpriteTemplateRequest& request, const ModifyImageSpriteTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyImageSpriteTemplateOutcomeCallable ModifyImageSpriteTemplateCallable(const Model::ModifyImageSpriteTemplateRequest& request);

                /**
                 *该接口用于根据素材 ID，修改素材样本信息，包括名称、描述的修改，以及五官、标签的添加、删除、重置操作。五官删除操作需保证至少剩余 1 张图片，否则，请使用重置操作。
                 * @param req ModifyPersonSampleRequest
                 * @return ModifyPersonSampleOutcome
                 */
                ModifyPersonSampleOutcome ModifyPersonSample(const Model::ModifyPersonSampleRequest &request);
                void ModifyPersonSampleAsync(const Model::ModifyPersonSampleRequest& request, const ModifyPersonSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPersonSampleOutcomeCallable ModifyPersonSampleCallable(const Model::ModifyPersonSampleRequest& request);

                /**
                 *修改用户自定义采样截图模板。
                 * @param req ModifySampleSnapshotTemplateRequest
                 * @return ModifySampleSnapshotTemplateOutcome
                 */
                ModifySampleSnapshotTemplateOutcome ModifySampleSnapshotTemplate(const Model::ModifySampleSnapshotTemplateRequest &request);
                void ModifySampleSnapshotTemplateAsync(const Model::ModifySampleSnapshotTemplateRequest& request, const ModifySampleSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySampleSnapshotTemplateOutcomeCallable ModifySampleSnapshotTemplateCallable(const Model::ModifySampleSnapshotTemplateRequest& request);

                /**
                 *修改编排
                 * @param req ModifyScheduleRequest
                 * @return ModifyScheduleOutcome
                 */
                ModifyScheduleOutcome ModifySchedule(const Model::ModifyScheduleRequest &request);
                void ModifyScheduleAsync(const Model::ModifyScheduleRequest& request, const ModifyScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyScheduleOutcomeCallable ModifyScheduleCallable(const Model::ModifyScheduleRequest& request);

                /**
                 *修改用户自定义指定时间点截图模板。
                 * @param req ModifySnapshotByTimeOffsetTemplateRequest
                 * @return ModifySnapshotByTimeOffsetTemplateOutcome
                 */
                ModifySnapshotByTimeOffsetTemplateOutcome ModifySnapshotByTimeOffsetTemplate(const Model::ModifySnapshotByTimeOffsetTemplateRequest &request);
                void ModifySnapshotByTimeOffsetTemplateAsync(const Model::ModifySnapshotByTimeOffsetTemplateRequest& request, const ModifySnapshotByTimeOffsetTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySnapshotByTimeOffsetTemplateOutcomeCallable ModifySnapshotByTimeOffsetTemplateCallable(const Model::ModifySnapshotByTimeOffsetTemplateRequest& request);

                /**
                 *修改媒体传输的传输流配置信息。
                 * @param req ModifyStreamLinkFlowRequest
                 * @return ModifyStreamLinkFlowOutcome
                 */
                ModifyStreamLinkFlowOutcome ModifyStreamLinkFlow(const Model::ModifyStreamLinkFlowRequest &request);
                void ModifyStreamLinkFlowAsync(const Model::ModifyStreamLinkFlowRequest& request, const ModifyStreamLinkFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyStreamLinkFlowOutcomeCallable ModifyStreamLinkFlowCallable(const Model::ModifyStreamLinkFlowRequest& request);

                /**
                 *修改媒体传输流的输入信息。
                 * @param req ModifyStreamLinkInputRequest
                 * @return ModifyStreamLinkInputOutcome
                 */
                ModifyStreamLinkInputOutcome ModifyStreamLinkInput(const Model::ModifyStreamLinkInputRequest &request);
                void ModifyStreamLinkInputAsync(const Model::ModifyStreamLinkInputRequest& request, const ModifyStreamLinkInputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyStreamLinkInputOutcomeCallable ModifyStreamLinkInputCallable(const Model::ModifyStreamLinkInputRequest& request);

                /**
                 *修改媒体传输流的输出配置。
                 * @param req ModifyStreamLinkOutputInfoRequest
                 * @return ModifyStreamLinkOutputInfoOutcome
                 */
                ModifyStreamLinkOutputInfoOutcome ModifyStreamLinkOutputInfo(const Model::ModifyStreamLinkOutputInfoRequest &request);
                void ModifyStreamLinkOutputInfoAsync(const Model::ModifyStreamLinkOutputInfoRequest& request, const ModifyStreamLinkOutputInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyStreamLinkOutputInfoOutcomeCallable ModifyStreamLinkOutputInfoCallable(const Model::ModifyStreamLinkOutputInfoRequest& request);

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
                 *该接口用于修改关键词的应用场景、标签，关键词本身不可修改，如需修改，可删除重建。
                 * @param req ModifyWordSampleRequest
                 * @return ModifyWordSampleOutcome
                 */
                ModifyWordSampleOutcome ModifyWordSample(const Model::ModifyWordSampleRequest &request);
                void ModifyWordSampleAsync(const Model::ModifyWordSampleRequest& request, const ModifyWordSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWordSampleOutcomeCallable ModifyWordSampleCallable(const Model::ModifyWordSampleRequest& request);

                /**
                 *从 CMQ 获取到消息后，从消息的 msgBody 字段中解析出 MPS 直播流处理事件通知的内容。
该接口不用于发起网络调用，而是用来帮助生成各个语言平台的 SDK，您可以参考 SDK 的中解析函数的实现事件通知的解析。
                 * @param req ParseLiveStreamProcessNotificationRequest
                 * @return ParseLiveStreamProcessNotificationOutcome
                 */
                ParseLiveStreamProcessNotificationOutcome ParseLiveStreamProcessNotification(const Model::ParseLiveStreamProcessNotificationRequest &request);
                void ParseLiveStreamProcessNotificationAsync(const Model::ParseLiveStreamProcessNotificationRequest& request, const ParseLiveStreamProcessNotificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ParseLiveStreamProcessNotificationOutcomeCallable ParseLiveStreamProcessNotificationCallable(const Model::ParseLiveStreamProcessNotificationRequest& request);

                /**
                 *从 CMQ 获取到消息后，从消息的 msgBody 字段中解析出 MPS 事件通知的内容。
该接口不用于发起网络调用，而是用来帮助生成各个语言平台的 SDK，您可以参考 SDK 的中解析函数的实现事件通知的解析。
                 * @param req ParseNotificationRequest
                 * @return ParseNotificationOutcome
                 */
                ParseNotificationOutcome ParseNotification(const Model::ParseNotificationRequest &request);
                void ParseNotificationAsync(const Model::ParseNotificationRequest& request, const ParseNotificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ParseNotificationOutcomeCallable ParseNotificationCallable(const Model::ParseNotificationRequest& request);

                /**
                 *对直播流媒体发起处理任务，功能包括：

* 智能内容审核（画面鉴黄、敏感信息检测、声音鉴黄）；
* 智能内容识别（人脸、文本全文、文本关键词、语音全文、语音关键词、语音实时翻译）。

直播流处理事件通知实时写入用户指定的消息队列 CMQ 中，用户需要从消息队列 CMQ 中获取事件通知结果，同时处理过程中存在输出文件的，会写入用户指定的输出文件的目标存储中。
                 * @param req ProcessLiveStreamRequest
                 * @return ProcessLiveStreamOutcome
                 */
                ProcessLiveStreamOutcome ProcessLiveStream(const Model::ProcessLiveStreamRequest &request);
                void ProcessLiveStreamAsync(const Model::ProcessLiveStreamRequest& request, const ProcessLiveStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ProcessLiveStreamOutcomeCallable ProcessLiveStreamCallable(const Model::ProcessLiveStreamRequest& request);

                /**
                 *对 URL视频链接 或 COS 中的媒体文件发起处理任务，功能包括：
1. 视频转码（普通转码、极速高清转码、音视频增强）；
2. 视频转动图；
3. 对视频按指定时间点截图；
4. 对视频采样截图；
5. 对视频截图雪碧图；
6. 对视频转自适应码流；
7. 智能内容审核（鉴黄、敏感信息检测）；
8. 智能内容分析（标签、分类、封面、按帧标签、拆条、集锦、片头片尾）；
9. 智能内容识别（人脸、文本全文、文本关键词、语音全文、语音关键词、语音翻译、物体识别）。
                 * @param req ProcessMediaRequest
                 * @return ProcessMediaOutcome
                 */
                ProcessMediaOutcome ProcessMedia(const Model::ProcessMediaRequest &request);
                void ProcessMediaAsync(const Model::ProcessMediaRequest& request, const ProcessMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ProcessMediaOutcomeCallable ProcessMediaCallable(const Model::ProcessMediaRequest& request);

                /**
                 *智能媒体识别，包含表情和动作识别。仅用于智学，其他调用无效。
                 * @param req RecognizeMediaForZhiXueRequest
                 * @return RecognizeMediaForZhiXueOutcome
                 */
                RecognizeMediaForZhiXueOutcome RecognizeMediaForZhiXue(const Model::RecognizeMediaForZhiXueRequest &request);
                void RecognizeMediaForZhiXueAsync(const Model::RecognizeMediaForZhiXueRequest& request, const RecognizeMediaForZhiXueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizeMediaForZhiXueOutcomeCallable RecognizeMediaForZhiXueCallable(const Model::RecognizeMediaForZhiXueRequest& request);

                /**
                 *重新设置一个已经存在且处于禁用状态的工作流。
                 * @param req ResetWorkflowRequest
                 * @return ResetWorkflowOutcome
                 */
                ResetWorkflowOutcome ResetWorkflow(const Model::ResetWorkflowRequest &request);
                void ResetWorkflowAsync(const Model::ResetWorkflowRequest& request, const ResetWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetWorkflowOutcomeCallable ResetWorkflowCallable(const Model::ResetWorkflowRequest& request);

                /**
                 *启动媒体传输流。
                 * @param req StartStreamLinkFlowRequest
                 * @return StartStreamLinkFlowOutcome
                 */
                StartStreamLinkFlowOutcome StartStreamLinkFlow(const Model::StartStreamLinkFlowRequest &request);
                void StartStreamLinkFlowAsync(const Model::StartStreamLinkFlowRequest& request, const StartStreamLinkFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartStreamLinkFlowOutcomeCallable StartStreamLinkFlowCallable(const Model::StartStreamLinkFlowRequest& request);

                /**
                 *停止媒体传输流。
                 * @param req StopStreamLinkFlowRequest
                 * @return StopStreamLinkFlowOutcome
                 */
                StopStreamLinkFlowOutcome StopStreamLinkFlow(const Model::StopStreamLinkFlowRequest &request);
                void StopStreamLinkFlowAsync(const Model::StopStreamLinkFlowRequest& request, const StopStreamLinkFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopStreamLinkFlowOutcomeCallable StopStreamLinkFlowCallable(const Model::StopStreamLinkFlowRequest& request);

                /**
                 *提取视频中的盲水印。
                 * @param req WithdrawsWatermarkRequest
                 * @return WithdrawsWatermarkOutcome
                 */
                WithdrawsWatermarkOutcome WithdrawsWatermark(const Model::WithdrawsWatermarkRequest &request);
                void WithdrawsWatermarkAsync(const Model::WithdrawsWatermarkRequest& request, const WithdrawsWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                WithdrawsWatermarkOutcomeCallable WithdrawsWatermarkCallable(const Model::WithdrawsWatermarkRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MPSCLIENT_H_
