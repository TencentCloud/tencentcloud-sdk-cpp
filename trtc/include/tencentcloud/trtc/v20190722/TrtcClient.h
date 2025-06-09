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

#ifndef TENCENTCLOUD_TRTC_V20190722_TRTCCLIENT_H_
#define TENCENTCLOUD_TRTC_V20190722_TRTCCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/trtc/v20190722/model/ControlAIConversationRequest.h>
#include <tencentcloud/trtc/v20190722/model/ControlAIConversationResponse.h>
#include <tencentcloud/trtc/v20190722/model/CreateBasicModerationRequest.h>
#include <tencentcloud/trtc/v20190722/model/CreateBasicModerationResponse.h>
#include <tencentcloud/trtc/v20190722/model/CreateCloudRecordingRequest.h>
#include <tencentcloud/trtc/v20190722/model/CreateCloudRecordingResponse.h>
#include <tencentcloud/trtc/v20190722/model/CreatePictureRequest.h>
#include <tencentcloud/trtc/v20190722/model/CreatePictureResponse.h>
#include <tencentcloud/trtc/v20190722/model/DeleteBasicModerationRequest.h>
#include <tencentcloud/trtc/v20190722/model/DeleteBasicModerationResponse.h>
#include <tencentcloud/trtc/v20190722/model/DeleteCloudRecordingRequest.h>
#include <tencentcloud/trtc/v20190722/model/DeleteCloudRecordingResponse.h>
#include <tencentcloud/trtc/v20190722/model/DeletePictureRequest.h>
#include <tencentcloud/trtc/v20190722/model/DeletePictureResponse.h>
#include <tencentcloud/trtc/v20190722/model/DeleteVoicePrintRequest.h>
#include <tencentcloud/trtc/v20190722/model/DeleteVoicePrintResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeAIConversationRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeAIConversationResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeAITranscriptionRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeAITranscriptionResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeCallDetailInfoRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeCallDetailInfoResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeCloudRecordingRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeCloudRecordingResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeMixTranscodingUsageRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeMixTranscodingUsageResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribePictureRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribePictureResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeRecordStatisticRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeRecordStatisticResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeRecordingUsageRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeRecordingUsageResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeRelayUsageRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeRelayUsageResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeRoomInfoRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeRoomInfoResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeScaleInfoRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeScaleInfoResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeStreamIngestRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeStreamIngestResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeTRTCMarketQualityDataRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeTRTCMarketQualityDataResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeTRTCMarketQualityMetricDataRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeTRTCMarketQualityMetricDataResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeTRTCMarketScaleDataRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeTRTCMarketScaleDataResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeTRTCMarketScaleMetricDataRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeTRTCMarketScaleMetricDataResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeTRTCRealTimeQualityDataRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeTRTCRealTimeQualityDataResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeTRTCRealTimeQualityMetricDataRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeTRTCRealTimeQualityMetricDataResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeTRTCRealTimeScaleDataRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeTRTCRealTimeScaleDataResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeTRTCRealTimeScaleMetricDataRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeTRTCRealTimeScaleMetricDataResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeTrtcMcuTranscodeTimeRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeTrtcMcuTranscodeTimeResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeTrtcRoomUsageRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeTrtcRoomUsageResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeTrtcUsageRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeTrtcUsageResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeUnusualEventRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeUnusualEventResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeUserEventRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeUserEventResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeUserInfoRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeUserInfoResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeVoicePrintRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeVoicePrintResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeWebRecordRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeWebRecordResponse.h>
#include <tencentcloud/trtc/v20190722/model/DismissRoomRequest.h>
#include <tencentcloud/trtc/v20190722/model/DismissRoomResponse.h>
#include <tencentcloud/trtc/v20190722/model/DismissRoomByStrRoomIdRequest.h>
#include <tencentcloud/trtc/v20190722/model/DismissRoomByStrRoomIdResponse.h>
#include <tencentcloud/trtc/v20190722/model/ModifyCloudRecordingRequest.h>
#include <tencentcloud/trtc/v20190722/model/ModifyCloudRecordingResponse.h>
#include <tencentcloud/trtc/v20190722/model/ModifyPictureRequest.h>
#include <tencentcloud/trtc/v20190722/model/ModifyPictureResponse.h>
#include <tencentcloud/trtc/v20190722/model/RegisterVoicePrintRequest.h>
#include <tencentcloud/trtc/v20190722/model/RegisterVoicePrintResponse.h>
#include <tencentcloud/trtc/v20190722/model/RemoveUserRequest.h>
#include <tencentcloud/trtc/v20190722/model/RemoveUserResponse.h>
#include <tencentcloud/trtc/v20190722/model/RemoveUserByStrRoomIdRequest.h>
#include <tencentcloud/trtc/v20190722/model/RemoveUserByStrRoomIdResponse.h>
#include <tencentcloud/trtc/v20190722/model/StartAIConversationRequest.h>
#include <tencentcloud/trtc/v20190722/model/StartAIConversationResponse.h>
#include <tencentcloud/trtc/v20190722/model/StartAITranscriptionRequest.h>
#include <tencentcloud/trtc/v20190722/model/StartAITranscriptionResponse.h>
#include <tencentcloud/trtc/v20190722/model/StartMCUMixTranscodeRequest.h>
#include <tencentcloud/trtc/v20190722/model/StartMCUMixTranscodeResponse.h>
#include <tencentcloud/trtc/v20190722/model/StartMCUMixTranscodeByStrRoomIdRequest.h>
#include <tencentcloud/trtc/v20190722/model/StartMCUMixTranscodeByStrRoomIdResponse.h>
#include <tencentcloud/trtc/v20190722/model/StartPublishCdnStreamRequest.h>
#include <tencentcloud/trtc/v20190722/model/StartPublishCdnStreamResponse.h>
#include <tencentcloud/trtc/v20190722/model/StartStreamIngestRequest.h>
#include <tencentcloud/trtc/v20190722/model/StartStreamIngestResponse.h>
#include <tencentcloud/trtc/v20190722/model/StartWebRecordRequest.h>
#include <tencentcloud/trtc/v20190722/model/StartWebRecordResponse.h>
#include <tencentcloud/trtc/v20190722/model/StopAIConversationRequest.h>
#include <tencentcloud/trtc/v20190722/model/StopAIConversationResponse.h>
#include <tencentcloud/trtc/v20190722/model/StopAITranscriptionRequest.h>
#include <tencentcloud/trtc/v20190722/model/StopAITranscriptionResponse.h>
#include <tencentcloud/trtc/v20190722/model/StopMCUMixTranscodeRequest.h>
#include <tencentcloud/trtc/v20190722/model/StopMCUMixTranscodeResponse.h>
#include <tencentcloud/trtc/v20190722/model/StopMCUMixTranscodeByStrRoomIdRequest.h>
#include <tencentcloud/trtc/v20190722/model/StopMCUMixTranscodeByStrRoomIdResponse.h>
#include <tencentcloud/trtc/v20190722/model/StopPublishCdnStreamRequest.h>
#include <tencentcloud/trtc/v20190722/model/StopPublishCdnStreamResponse.h>
#include <tencentcloud/trtc/v20190722/model/StopStreamIngestRequest.h>
#include <tencentcloud/trtc/v20190722/model/StopStreamIngestResponse.h>
#include <tencentcloud/trtc/v20190722/model/StopWebRecordRequest.h>
#include <tencentcloud/trtc/v20190722/model/StopWebRecordResponse.h>
#include <tencentcloud/trtc/v20190722/model/UpdateAIConversationRequest.h>
#include <tencentcloud/trtc/v20190722/model/UpdateAIConversationResponse.h>
#include <tencentcloud/trtc/v20190722/model/UpdatePublishCdnStreamRequest.h>
#include <tencentcloud/trtc/v20190722/model/UpdatePublishCdnStreamResponse.h>
#include <tencentcloud/trtc/v20190722/model/UpdateStreamIngestRequest.h>
#include <tencentcloud/trtc/v20190722/model/UpdateStreamIngestResponse.h>
#include <tencentcloud/trtc/v20190722/model/UpdateVoicePrintRequest.h>
#include <tencentcloud/trtc/v20190722/model/UpdateVoicePrintResponse.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            class TrtcClient : public AbstractClient
            {
            public:
                TrtcClient(const Credential &credential, const std::string &region);
                TrtcClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ControlAIConversationResponse> ControlAIConversationOutcome;
                typedef std::future<ControlAIConversationOutcome> ControlAIConversationOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::ControlAIConversationRequest&, ControlAIConversationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ControlAIConversationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBasicModerationResponse> CreateBasicModerationOutcome;
                typedef std::future<CreateBasicModerationOutcome> CreateBasicModerationOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::CreateBasicModerationRequest&, CreateBasicModerationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBasicModerationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCloudRecordingResponse> CreateCloudRecordingOutcome;
                typedef std::future<CreateCloudRecordingOutcome> CreateCloudRecordingOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::CreateCloudRecordingRequest&, CreateCloudRecordingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudRecordingAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePictureResponse> CreatePictureOutcome;
                typedef std::future<CreatePictureOutcome> CreatePictureOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::CreatePictureRequest&, CreatePictureOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePictureAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBasicModerationResponse> DeleteBasicModerationOutcome;
                typedef std::future<DeleteBasicModerationOutcome> DeleteBasicModerationOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DeleteBasicModerationRequest&, DeleteBasicModerationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBasicModerationAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCloudRecordingResponse> DeleteCloudRecordingOutcome;
                typedef std::future<DeleteCloudRecordingOutcome> DeleteCloudRecordingOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DeleteCloudRecordingRequest&, DeleteCloudRecordingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCloudRecordingAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePictureResponse> DeletePictureOutcome;
                typedef std::future<DeletePictureOutcome> DeletePictureOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DeletePictureRequest&, DeletePictureOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePictureAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteVoicePrintResponse> DeleteVoicePrintOutcome;
                typedef std::future<DeleteVoicePrintOutcome> DeleteVoicePrintOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DeleteVoicePrintRequest&, DeleteVoicePrintOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVoicePrintAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIConversationResponse> DescribeAIConversationOutcome;
                typedef std::future<DescribeAIConversationOutcome> DescribeAIConversationOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeAIConversationRequest&, DescribeAIConversationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIConversationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAITranscriptionResponse> DescribeAITranscriptionOutcome;
                typedef std::future<DescribeAITranscriptionOutcome> DescribeAITranscriptionOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeAITranscriptionRequest&, DescribeAITranscriptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAITranscriptionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCallDetailInfoResponse> DescribeCallDetailInfoOutcome;
                typedef std::future<DescribeCallDetailInfoOutcome> DescribeCallDetailInfoOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeCallDetailInfoRequest&, DescribeCallDetailInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCallDetailInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudRecordingResponse> DescribeCloudRecordingOutcome;
                typedef std::future<DescribeCloudRecordingOutcome> DescribeCloudRecordingOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeCloudRecordingRequest&, DescribeCloudRecordingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudRecordingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMixTranscodingUsageResponse> DescribeMixTranscodingUsageOutcome;
                typedef std::future<DescribeMixTranscodingUsageOutcome> DescribeMixTranscodingUsageOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeMixTranscodingUsageRequest&, DescribeMixTranscodingUsageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMixTranscodingUsageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePictureResponse> DescribePictureOutcome;
                typedef std::future<DescribePictureOutcome> DescribePictureOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribePictureRequest&, DescribePictureOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePictureAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRecordStatisticResponse> DescribeRecordStatisticOutcome;
                typedef std::future<DescribeRecordStatisticOutcome> DescribeRecordStatisticOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeRecordStatisticRequest&, DescribeRecordStatisticOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecordStatisticAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRecordingUsageResponse> DescribeRecordingUsageOutcome;
                typedef std::future<DescribeRecordingUsageOutcome> DescribeRecordingUsageOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeRecordingUsageRequest&, DescribeRecordingUsageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecordingUsageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRelayUsageResponse> DescribeRelayUsageOutcome;
                typedef std::future<DescribeRelayUsageOutcome> DescribeRelayUsageOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeRelayUsageRequest&, DescribeRelayUsageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRelayUsageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRoomInfoResponse> DescribeRoomInfoOutcome;
                typedef std::future<DescribeRoomInfoOutcome> DescribeRoomInfoOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeRoomInfoRequest&, DescribeRoomInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRoomInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScaleInfoResponse> DescribeScaleInfoOutcome;
                typedef std::future<DescribeScaleInfoOutcome> DescribeScaleInfoOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeScaleInfoRequest&, DescribeScaleInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScaleInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamIngestResponse> DescribeStreamIngestOutcome;
                typedef std::future<DescribeStreamIngestOutcome> DescribeStreamIngestOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeStreamIngestRequest&, DescribeStreamIngestOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamIngestAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTRTCMarketQualityDataResponse> DescribeTRTCMarketQualityDataOutcome;
                typedef std::future<DescribeTRTCMarketQualityDataOutcome> DescribeTRTCMarketQualityDataOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeTRTCMarketQualityDataRequest&, DescribeTRTCMarketQualityDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTRTCMarketQualityDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTRTCMarketQualityMetricDataResponse> DescribeTRTCMarketQualityMetricDataOutcome;
                typedef std::future<DescribeTRTCMarketQualityMetricDataOutcome> DescribeTRTCMarketQualityMetricDataOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeTRTCMarketQualityMetricDataRequest&, DescribeTRTCMarketQualityMetricDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTRTCMarketQualityMetricDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTRTCMarketScaleDataResponse> DescribeTRTCMarketScaleDataOutcome;
                typedef std::future<DescribeTRTCMarketScaleDataOutcome> DescribeTRTCMarketScaleDataOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeTRTCMarketScaleDataRequest&, DescribeTRTCMarketScaleDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTRTCMarketScaleDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTRTCMarketScaleMetricDataResponse> DescribeTRTCMarketScaleMetricDataOutcome;
                typedef std::future<DescribeTRTCMarketScaleMetricDataOutcome> DescribeTRTCMarketScaleMetricDataOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeTRTCMarketScaleMetricDataRequest&, DescribeTRTCMarketScaleMetricDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTRTCMarketScaleMetricDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTRTCRealTimeQualityDataResponse> DescribeTRTCRealTimeQualityDataOutcome;
                typedef std::future<DescribeTRTCRealTimeQualityDataOutcome> DescribeTRTCRealTimeQualityDataOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeTRTCRealTimeQualityDataRequest&, DescribeTRTCRealTimeQualityDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTRTCRealTimeQualityDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTRTCRealTimeQualityMetricDataResponse> DescribeTRTCRealTimeQualityMetricDataOutcome;
                typedef std::future<DescribeTRTCRealTimeQualityMetricDataOutcome> DescribeTRTCRealTimeQualityMetricDataOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeTRTCRealTimeQualityMetricDataRequest&, DescribeTRTCRealTimeQualityMetricDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTRTCRealTimeQualityMetricDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTRTCRealTimeScaleDataResponse> DescribeTRTCRealTimeScaleDataOutcome;
                typedef std::future<DescribeTRTCRealTimeScaleDataOutcome> DescribeTRTCRealTimeScaleDataOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeTRTCRealTimeScaleDataRequest&, DescribeTRTCRealTimeScaleDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTRTCRealTimeScaleDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTRTCRealTimeScaleMetricDataResponse> DescribeTRTCRealTimeScaleMetricDataOutcome;
                typedef std::future<DescribeTRTCRealTimeScaleMetricDataOutcome> DescribeTRTCRealTimeScaleMetricDataOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeTRTCRealTimeScaleMetricDataRequest&, DescribeTRTCRealTimeScaleMetricDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTRTCRealTimeScaleMetricDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTrtcMcuTranscodeTimeResponse> DescribeTrtcMcuTranscodeTimeOutcome;
                typedef std::future<DescribeTrtcMcuTranscodeTimeOutcome> DescribeTrtcMcuTranscodeTimeOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeTrtcMcuTranscodeTimeRequest&, DescribeTrtcMcuTranscodeTimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTrtcMcuTranscodeTimeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTrtcRoomUsageResponse> DescribeTrtcRoomUsageOutcome;
                typedef std::future<DescribeTrtcRoomUsageOutcome> DescribeTrtcRoomUsageOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeTrtcRoomUsageRequest&, DescribeTrtcRoomUsageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTrtcRoomUsageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTrtcUsageResponse> DescribeTrtcUsageOutcome;
                typedef std::future<DescribeTrtcUsageOutcome> DescribeTrtcUsageOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeTrtcUsageRequest&, DescribeTrtcUsageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTrtcUsageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUnusualEventResponse> DescribeUnusualEventOutcome;
                typedef std::future<DescribeUnusualEventOutcome> DescribeUnusualEventOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeUnusualEventRequest&, DescribeUnusualEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUnusualEventAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserEventResponse> DescribeUserEventOutcome;
                typedef std::future<DescribeUserEventOutcome> DescribeUserEventOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeUserEventRequest&, DescribeUserEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserEventAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserInfoResponse> DescribeUserInfoOutcome;
                typedef std::future<DescribeUserInfoOutcome> DescribeUserInfoOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeUserInfoRequest&, DescribeUserInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVoicePrintResponse> DescribeVoicePrintOutcome;
                typedef std::future<DescribeVoicePrintOutcome> DescribeVoicePrintOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeVoicePrintRequest&, DescribeVoicePrintOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVoicePrintAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWebRecordResponse> DescribeWebRecordOutcome;
                typedef std::future<DescribeWebRecordOutcome> DescribeWebRecordOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeWebRecordRequest&, DescribeWebRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::DismissRoomResponse> DismissRoomOutcome;
                typedef std::future<DismissRoomOutcome> DismissRoomOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DismissRoomRequest&, DismissRoomOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DismissRoomAsyncHandler;
                typedef Outcome<Core::Error, Model::DismissRoomByStrRoomIdResponse> DismissRoomByStrRoomIdOutcome;
                typedef std::future<DismissRoomByStrRoomIdOutcome> DismissRoomByStrRoomIdOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DismissRoomByStrRoomIdRequest&, DismissRoomByStrRoomIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DismissRoomByStrRoomIdAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCloudRecordingResponse> ModifyCloudRecordingOutcome;
                typedef std::future<ModifyCloudRecordingOutcome> ModifyCloudRecordingOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::ModifyCloudRecordingRequest&, ModifyCloudRecordingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCloudRecordingAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPictureResponse> ModifyPictureOutcome;
                typedef std::future<ModifyPictureOutcome> ModifyPictureOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::ModifyPictureRequest&, ModifyPictureOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPictureAsyncHandler;
                typedef Outcome<Core::Error, Model::RegisterVoicePrintResponse> RegisterVoicePrintOutcome;
                typedef std::future<RegisterVoicePrintOutcome> RegisterVoicePrintOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::RegisterVoicePrintRequest&, RegisterVoicePrintOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RegisterVoicePrintAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveUserResponse> RemoveUserOutcome;
                typedef std::future<RemoveUserOutcome> RemoveUserOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::RemoveUserRequest&, RemoveUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveUserAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveUserByStrRoomIdResponse> RemoveUserByStrRoomIdOutcome;
                typedef std::future<RemoveUserByStrRoomIdOutcome> RemoveUserByStrRoomIdOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::RemoveUserByStrRoomIdRequest&, RemoveUserByStrRoomIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveUserByStrRoomIdAsyncHandler;
                typedef Outcome<Core::Error, Model::StartAIConversationResponse> StartAIConversationOutcome;
                typedef std::future<StartAIConversationOutcome> StartAIConversationOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::StartAIConversationRequest&, StartAIConversationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartAIConversationAsyncHandler;
                typedef Outcome<Core::Error, Model::StartAITranscriptionResponse> StartAITranscriptionOutcome;
                typedef std::future<StartAITranscriptionOutcome> StartAITranscriptionOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::StartAITranscriptionRequest&, StartAITranscriptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartAITranscriptionAsyncHandler;
                typedef Outcome<Core::Error, Model::StartMCUMixTranscodeResponse> StartMCUMixTranscodeOutcome;
                typedef std::future<StartMCUMixTranscodeOutcome> StartMCUMixTranscodeOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::StartMCUMixTranscodeRequest&, StartMCUMixTranscodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartMCUMixTranscodeAsyncHandler;
                typedef Outcome<Core::Error, Model::StartMCUMixTranscodeByStrRoomIdResponse> StartMCUMixTranscodeByStrRoomIdOutcome;
                typedef std::future<StartMCUMixTranscodeByStrRoomIdOutcome> StartMCUMixTranscodeByStrRoomIdOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::StartMCUMixTranscodeByStrRoomIdRequest&, StartMCUMixTranscodeByStrRoomIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartMCUMixTranscodeByStrRoomIdAsyncHandler;
                typedef Outcome<Core::Error, Model::StartPublishCdnStreamResponse> StartPublishCdnStreamOutcome;
                typedef std::future<StartPublishCdnStreamOutcome> StartPublishCdnStreamOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::StartPublishCdnStreamRequest&, StartPublishCdnStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartPublishCdnStreamAsyncHandler;
                typedef Outcome<Core::Error, Model::StartStreamIngestResponse> StartStreamIngestOutcome;
                typedef std::future<StartStreamIngestOutcome> StartStreamIngestOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::StartStreamIngestRequest&, StartStreamIngestOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartStreamIngestAsyncHandler;
                typedef Outcome<Core::Error, Model::StartWebRecordResponse> StartWebRecordOutcome;
                typedef std::future<StartWebRecordOutcome> StartWebRecordOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::StartWebRecordRequest&, StartWebRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartWebRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::StopAIConversationResponse> StopAIConversationOutcome;
                typedef std::future<StopAIConversationOutcome> StopAIConversationOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::StopAIConversationRequest&, StopAIConversationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopAIConversationAsyncHandler;
                typedef Outcome<Core::Error, Model::StopAITranscriptionResponse> StopAITranscriptionOutcome;
                typedef std::future<StopAITranscriptionOutcome> StopAITranscriptionOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::StopAITranscriptionRequest&, StopAITranscriptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopAITranscriptionAsyncHandler;
                typedef Outcome<Core::Error, Model::StopMCUMixTranscodeResponse> StopMCUMixTranscodeOutcome;
                typedef std::future<StopMCUMixTranscodeOutcome> StopMCUMixTranscodeOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::StopMCUMixTranscodeRequest&, StopMCUMixTranscodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopMCUMixTranscodeAsyncHandler;
                typedef Outcome<Core::Error, Model::StopMCUMixTranscodeByStrRoomIdResponse> StopMCUMixTranscodeByStrRoomIdOutcome;
                typedef std::future<StopMCUMixTranscodeByStrRoomIdOutcome> StopMCUMixTranscodeByStrRoomIdOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::StopMCUMixTranscodeByStrRoomIdRequest&, StopMCUMixTranscodeByStrRoomIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopMCUMixTranscodeByStrRoomIdAsyncHandler;
                typedef Outcome<Core::Error, Model::StopPublishCdnStreamResponse> StopPublishCdnStreamOutcome;
                typedef std::future<StopPublishCdnStreamOutcome> StopPublishCdnStreamOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::StopPublishCdnStreamRequest&, StopPublishCdnStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopPublishCdnStreamAsyncHandler;
                typedef Outcome<Core::Error, Model::StopStreamIngestResponse> StopStreamIngestOutcome;
                typedef std::future<StopStreamIngestOutcome> StopStreamIngestOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::StopStreamIngestRequest&, StopStreamIngestOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopStreamIngestAsyncHandler;
                typedef Outcome<Core::Error, Model::StopWebRecordResponse> StopWebRecordOutcome;
                typedef std::future<StopWebRecordOutcome> StopWebRecordOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::StopWebRecordRequest&, StopWebRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopWebRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateAIConversationResponse> UpdateAIConversationOutcome;
                typedef std::future<UpdateAIConversationOutcome> UpdateAIConversationOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::UpdateAIConversationRequest&, UpdateAIConversationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAIConversationAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdatePublishCdnStreamResponse> UpdatePublishCdnStreamOutcome;
                typedef std::future<UpdatePublishCdnStreamOutcome> UpdatePublishCdnStreamOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::UpdatePublishCdnStreamRequest&, UpdatePublishCdnStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePublishCdnStreamAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateStreamIngestResponse> UpdateStreamIngestOutcome;
                typedef std::future<UpdateStreamIngestOutcome> UpdateStreamIngestOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::UpdateStreamIngestRequest&, UpdateStreamIngestOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateStreamIngestAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateVoicePrintResponse> UpdateVoicePrintOutcome;
                typedef std::future<UpdateVoicePrintOutcome> UpdateVoicePrintOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::UpdateVoicePrintRequest&, UpdateVoicePrintOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateVoicePrintAsyncHandler;



                /**
                 *提供服务端控制机器人的功能
                 * @param req ControlAIConversationRequest
                 * @return ControlAIConversationOutcome
                 */
                ControlAIConversationOutcome ControlAIConversation(const Model::ControlAIConversationRequest &request);
                void ControlAIConversationAsync(const Model::ControlAIConversationRequest& request, const ControlAIConversationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ControlAIConversationOutcomeCallable ControlAIConversationCallable(const Model::ControlAIConversationRequest& request);

                /**
                 *接口说明：
启动终端审核功能，完成房间内的音频审核。
                 * @param req CreateBasicModerationRequest
                 * @return CreateBasicModerationOutcome
                 */
                CreateBasicModerationOutcome CreateBasicModeration(const Model::CreateBasicModerationRequest &request);
                void CreateBasicModerationAsync(const Model::CreateBasicModerationRequest& request, const CreateBasicModerationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBasicModerationOutcomeCallable CreateBasicModerationCallable(const Model::CreateBasicModerationRequest& request);

                /**
                 *接口说明：
启动云端录制功能，完成房间内的音视频录制，并上传到指定的云存储。您可以通过此 API 接口把TRTC 房间中的每一路音视频流做单独的录制又或者多路视频画面合流混成一路。

您可以通过此接口实现如下目标：
* 指定订阅流参数（RecordParams）来指定需要录制的主播的黑名单或者白名单。
* 指定录制存储参数（StorageParams）来指定上传到您希望的云存储，目前支持腾讯云（云点播VOD、对象存储COS）和第三方AWS
* 指定合流模式下的音视频转码详细参数（MixTranscodeParams），包括视频分辨率、视频码率、视频帧率、以及声音质量等
* 指定合流模式各路画面的位置和布局或者也可以指定自动模板的方式来配置。

关键名词：
* 单流录制：分别录制房间的订阅UserId的音频和视频，录制服务会实时将录制文件上传至您指定的云存储。
* 合流录制：将房间内订阅UserId的音视频混录成一个视频文件，并将录制文件上传至您指定的云存储。（录制结束后可前往云点播控制台https://console.cloud.tencent.com/vod/media 或 对象存储COS控制台https://console.cloud.tencent.com/cos/bucket查看文件）。
                 * @param req CreateCloudRecordingRequest
                 * @return CreateCloudRecordingOutcome
                 */
                CreateCloudRecordingOutcome CreateCloudRecording(const Model::CreateCloudRecordingRequest &request);
                void CreateCloudRecordingAsync(const Model::CreateCloudRecordingRequest& request, const CreateCloudRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCloudRecordingOutcomeCallable CreateCloudRecordingCallable(const Model::CreateCloudRecordingRequest& request);

                /**
                 *如果您需要在 [云端混流转码](https://cloud.tencent.com/document/product/647/16827) 时频繁新增自定义背景图或水印，可通过此接口上传新的图片素材。无需频繁新增图片的场景，建议直接在 [控制台 > 应用管理 > 素材管理](https://cloud.tencent.com/document/product/647/50769) 中操作。
                 * @param req CreatePictureRequest
                 * @return CreatePictureOutcome
                 */
                CreatePictureOutcome CreatePicture(const Model::CreatePictureRequest &request);
                void CreatePictureAsync(const Model::CreatePictureRequest& request, const CreatePictureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePictureOutcomeCallable CreatePictureCallable(const Model::CreatePictureRequest& request);

                /**
                 *成功开启审核任务后，可以使用此接口来停止任务。
                 * @param req DeleteBasicModerationRequest
                 * @return DeleteBasicModerationOutcome
                 */
                DeleteBasicModerationOutcome DeleteBasicModeration(const Model::DeleteBasicModerationRequest &request);
                void DeleteBasicModerationAsync(const Model::DeleteBasicModerationRequest& request, const DeleteBasicModerationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBasicModerationOutcomeCallable DeleteBasicModerationCallable(const Model::DeleteBasicModerationRequest& request);

                /**
                 *成功开启录制后，可以使用此接口来停止录制任务。停止录制成功后不代表文件全部传输完成，如果未完成后台将会继续上传文件，成功后通过事件回调通知客户文件全部传输完成状态。
                 * @param req DeleteCloudRecordingRequest
                 * @return DeleteCloudRecordingOutcome
                 */
                DeleteCloudRecordingOutcome DeleteCloudRecording(const Model::DeleteCloudRecordingRequest &request);
                void DeleteCloudRecordingAsync(const Model::DeleteCloudRecordingRequest& request, const DeleteCloudRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCloudRecordingOutcomeCallable DeleteCloudRecordingCallable(const Model::DeleteCloudRecordingRequest& request);

                /**
                 *如果您需要在 [云端混流转码](https://cloud.tencent.com/document/product/647/16827) 时频繁删除自定义背景图或水印，可通过此接口删除已上传的图片。无需频繁删除图片的场景，建议直接在 [控制台 > 应用管理 > 素材管理](https://cloud.tencent.com/document/product/647/50769) 中操作。
                 * @param req DeletePictureRequest
                 * @return DeletePictureOutcome
                 */
                DeletePictureOutcome DeletePicture(const Model::DeletePictureRequest &request);
                void DeletePictureAsync(const Model::DeletePictureRequest& request, const DeletePictureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePictureOutcomeCallable DeletePictureCallable(const Model::DeletePictureRequest& request);

                /**
                 *传入声纹ID，删除之前注册的声纹信息
                 * @param req DeleteVoicePrintRequest
                 * @return DeleteVoicePrintOutcome
                 */
                DeleteVoicePrintOutcome DeleteVoicePrint(const Model::DeleteVoicePrintRequest &request);
                void DeleteVoicePrintAsync(const Model::DeleteVoicePrintRequest& request, const DeleteVoicePrintAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteVoicePrintOutcomeCallable DeleteVoicePrintCallable(const Model::DeleteVoicePrintRequest& request);

                /**
                 *查询AI对话任务状态。
                 * @param req DescribeAIConversationRequest
                 * @return DescribeAIConversationOutcome
                 */
                DescribeAIConversationOutcome DescribeAIConversation(const Model::DescribeAIConversationRequest &request);
                void DescribeAIConversationAsync(const Model::DescribeAIConversationRequest& request, const DescribeAIConversationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIConversationOutcomeCallable DescribeAIConversationCallable(const Model::DescribeAIConversationRequest& request);

                /**
                 *查询AI转录任务状态。
                 * @param req DescribeAITranscriptionRequest
                 * @return DescribeAITranscriptionOutcome
                 */
                DescribeAITranscriptionOutcome DescribeAITranscription(const Model::DescribeAITranscriptionRequest &request);
                void DescribeAITranscriptionAsync(const Model::DescribeAITranscriptionRequest& request, const DescribeAITranscriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAITranscriptionOutcomeCallable DescribeAITranscriptionCallable(const Model::DescribeAITranscriptionRequest& request);

                /**
                 *查询指定时间内的用户列表及用户通话质量数据，最大可查询14天内数据。DataType 不为null，查询起止时间不超过1个小时，查询用户不超过6个，支持跨天查询。DataType为null时，查询起止时间不超过4个小时， 默认查询6个用户，同时支持每页查询100以内用户个数（PageSize不超过100）。接口用于查询质量问题，不推荐作为计费使用。（同老接口DescribeCallDetail）
**注意**：
1.该接口只用于历史数据统计或核对数据使用，实时类关键业务逻辑不能使用。
2.该接口自2024年4月1日起正式商业化，需订阅套餐解锁调用能力，提供以下两种解锁方式，可任选其一解锁：
方式一：通过订阅[包月套餐](https://cloud.tencent.com/document/product/647/85386)「尊享版」（可查近7天）和「旗舰版」（可查近14天），[前往订阅](https://buy.cloud.tencent.com/trtc?trtcversion=top)。
方式二：通过订阅[监控仪表盘](https://cloud.tencent.com/document/product/647/81331)商业套餐包「基础版」（可查近7天）和「进阶版」（可查近14天），[前往订阅](https://buy.cloud.tencent.com/trtc_monitor)。
                 * @param req DescribeCallDetailInfoRequest
                 * @return DescribeCallDetailInfoOutcome
                 */
                DescribeCallDetailInfoOutcome DescribeCallDetailInfo(const Model::DescribeCallDetailInfoRequest &request);
                void DescribeCallDetailInfoAsync(const Model::DescribeCallDetailInfoRequest& request, const DescribeCallDetailInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCallDetailInfoOutcomeCallable DescribeCallDetailInfoCallable(const Model::DescribeCallDetailInfoRequest& request);

                /**
                 *成功开启录制后，可以使用此接口来查询录制状态。仅在录制任务进行时有效，录制退出后查询将会返回错误。
录制文件上传到云点播VOD时，StorageFileList中不会返回录制文件信息，请订阅相关录制文件回调事件，获取录制文件信息。
                 * @param req DescribeCloudRecordingRequest
                 * @return DescribeCloudRecordingOutcome
                 */
                DescribeCloudRecordingOutcome DescribeCloudRecording(const Model::DescribeCloudRecordingRequest &request);
                void DescribeCloudRecordingAsync(const Model::DescribeCloudRecordingRequest& request, const DescribeCloudRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudRecordingOutcomeCallable DescribeCloudRecordingCallable(const Model::DescribeCloudRecordingRequest& request);

                /**
                 *获取TRTC混流转码的用量明细。
- 查询时间小于等于1天时，返回每5分钟粒度的数据；查询时间大于1天时，返回按天汇总的数据。
- 单次查询统计区间最多不能超过31天。
- 若查询当天用量，由于统计延迟等原因，返回数据可能不够准确。
- 该接口只用于历史用量数据统计或核对数据使用，关键业务逻辑不能使用。
- 默认接口请求频率限制：5次/秒。
                 * @param req DescribeMixTranscodingUsageRequest
                 * @return DescribeMixTranscodingUsageOutcome
                 */
                DescribeMixTranscodingUsageOutcome DescribeMixTranscodingUsage(const Model::DescribeMixTranscodingUsageRequest &request);
                void DescribeMixTranscodingUsageAsync(const Model::DescribeMixTranscodingUsageRequest& request, const DescribeMixTranscodingUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMixTranscodingUsageOutcomeCallable DescribeMixTranscodingUsageCallable(const Model::DescribeMixTranscodingUsageRequest& request);

                /**
                 *如果您需要在 [云端混流转码](https://cloud.tencent.com/document/product/647/16827) 时频繁查找自定义背景图或水印信息，可通过此接口查找已上传的图片信息。无需频繁查找图片信息的场景，建议直接在 [控制台 > 应用管理 > 素材管理](https://cloud.tencent.com/document/product/647/50769) 中查看。
                 * @param req DescribePictureRequest
                 * @return DescribePictureOutcome
                 */
                DescribePictureOutcome DescribePicture(const Model::DescribePictureRequest &request);
                void DescribePictureAsync(const Model::DescribePictureRequest& request, const DescribePictureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePictureOutcomeCallable DescribePictureCallable(const Model::DescribePictureRequest& request);

                /**
                 *查询云端录制计费时长。

- 查询时间小于等于1天时，返回每5分钟粒度的数据；查询时间大于1天时，返回按天汇总的数据。
- 单次查询统计区间最多不能超过31天。
- 若查询当天用量，由于统计延迟等原因，返回数据可能不够准确。
- 日结后付费将于次日上午推送账单，建议次日上午9点以后再来查询前一天的用量。
                 * @param req DescribeRecordStatisticRequest
                 * @return DescribeRecordStatisticOutcome
                 */
                DescribeRecordStatisticOutcome DescribeRecordStatistic(const Model::DescribeRecordStatisticRequest &request);
                void DescribeRecordStatisticAsync(const Model::DescribeRecordStatisticRequest& request, const DescribeRecordStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRecordStatisticOutcomeCallable DescribeRecordStatisticCallable(const Model::DescribeRecordStatisticRequest& request);

                /**
                 *获取TRTC录制的用量明细。
- 查询时间小于等于1天时，返回每5分钟粒度的数据；查询时间大于1天时，返回按天汇总的数据。
- 单次查询统计区间最多不能超过31天。
- 若查询当天用量，由于统计延迟等原因，返回数据可能不够准确。
- 该接口只用于历史用量数据统计或核对数据使用，关键业务逻辑不能使用。
- 默认接口请求频率限制：5次/秒。
                 * @param req DescribeRecordingUsageRequest
                 * @return DescribeRecordingUsageOutcome
                 */
                DescribeRecordingUsageOutcome DescribeRecordingUsage(const Model::DescribeRecordingUsageRequest &request);
                void DescribeRecordingUsageAsync(const Model::DescribeRecordingUsageRequest& request, const DescribeRecordingUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRecordingUsageOutcomeCallable DescribeRecordingUsageCallable(const Model::DescribeRecordingUsageRequest& request);

                /**
                 *获取TRTC旁路转推的用量明细。
- 查询时间小于等于1天时，返回每5分钟粒度的数据；查询时间大于1天时，返回按天汇总的数据。
- 单次查询统计区间最多不能超过31天。
- 若查询当天用量，由于统计延迟等原因，返回数据可能不够准确。
- 该接口只用于历史用量数据统计或核对数据使用，关键业务逻辑不能使用。
- 默认接口请求频率限制：5次/秒。
                 * @param req DescribeRelayUsageRequest
                 * @return DescribeRelayUsageOutcome
                 */
                DescribeRelayUsageOutcome DescribeRelayUsage(const Model::DescribeRelayUsageRequest &request);
                void DescribeRelayUsageAsync(const Model::DescribeRelayUsageRequest& request, const DescribeRelayUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRelayUsageOutcomeCallable DescribeRelayUsageCallable(const Model::DescribeRelayUsageRequest& request);

                /**
                 *查询SdkAppId下的房间列表。默认返回10条通话，一次最多返回100条通话。最大可查询14天内的数据。（同老接口DescribeRoomInformation）
**注意**：
1.该接口只用于历史数据统计或核对数据使用，实时类关键业务逻辑不能使用。
2.该接口自2024年4月1日起正式商业化，需订阅套餐解锁调用能力，提供以下两种解锁方式，可任意其一解锁：
方式一：通过订阅[包月套餐](https://cloud.tencent.com/document/product/647/85386)「尊享版」（可查近7天）和「旗舰版」（可查近14天），[前往订阅](https://buy.cloud.tencent.com/trtc?trtcversion=top)。
方式二：通过订阅[监控仪表盘](https://cloud.tencent.com/document/product/647/81331)商业套餐包「基础版」（可查近7天）和「进阶版」（可查近14天），[前往订阅](https://buy.cloud.tencent.com/trtc_monitor)。
                 * @param req DescribeRoomInfoRequest
                 * @return DescribeRoomInfoOutcome
                 */
                DescribeRoomInfoOutcome DescribeRoomInfo(const Model::DescribeRoomInfoRequest &request);
                void DescribeRoomInfoAsync(const Model::DescribeRoomInfoRequest& request, const DescribeRoomInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRoomInfoOutcomeCallable DescribeRoomInfoCallable(const Model::DescribeRoomInfoRequest& request);

                /**
                 *可查询SdkAppId每天的房间数和用户数，按天统计，可查询最近14天的数据。当天未结束，数据未统计完成，无法查到当天的房间数与用户数。（同老接口DescribeHistoryScale）
                 * @param req DescribeScaleInfoRequest
                 * @return DescribeScaleInfoOutcome
                 */
                DescribeScaleInfoOutcome DescribeScaleInfo(const Model::DescribeScaleInfoRequest &request);
                void DescribeScaleInfoAsync(const Model::DescribeScaleInfoRequest& request, const DescribeScaleInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScaleInfoOutcomeCallable DescribeScaleInfoCallable(const Model::DescribeScaleInfoRequest& request);

                /**
                 *您可以查询输入在线媒体流任务的状态。
                 * @param req DescribeStreamIngestRequest
                 * @return DescribeStreamIngestOutcome
                 */
                DescribeStreamIngestOutcome DescribeStreamIngest(const Model::DescribeStreamIngestRequest &request);
                void DescribeStreamIngestAsync(const Model::DescribeStreamIngestRequest& request, const DescribeStreamIngestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamIngestOutcomeCallable DescribeStreamIngestCallable(const Model::DescribeStreamIngestRequest& request);

                /**
                 *查询TRTC监控仪表盘-数据大盘质量指标（包括下列指标）
joinSuccessRate：加入频道成功率。
joinSuccessIn5sRate：5s内加入频道成功率。
audioFreezeRate：音频卡顿率。
videoFreezeRate：视频卡顿率。
networkDelay ：网络延迟率。
注意：
1.调用接口需开通监控仪表盘【基础版】和【进阶版】，监控仪表盘【免费版】不支持调用，监控仪表盘[版本功能和计费说明](https://cloud.tencent.com/document/product/647/81331)。
2.查询时间范围根据监控仪表盘功能版本而定，【基础版】可查近30天，【进阶版】可查近60天。
                 * @param req DescribeTRTCMarketQualityDataRequest
                 * @return DescribeTRTCMarketQualityDataOutcome
                 */
                DescribeTRTCMarketQualityDataOutcome DescribeTRTCMarketQualityData(const Model::DescribeTRTCMarketQualityDataRequest &request);
                void DescribeTRTCMarketQualityDataAsync(const Model::DescribeTRTCMarketQualityDataRequest& request, const DescribeTRTCMarketQualityDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTRTCMarketQualityDataOutcomeCallable DescribeTRTCMarketQualityDataCallable(const Model::DescribeTRTCMarketQualityDataRequest& request);

                /**
                 *查询TRTC监控仪表盘-数据大盘质量指标（包括下列指标）
joinSuccessRate：加入频道成功率。
joinSuccessIn5sRate：5s内加入频道成功率。
audioFreezeRate：音频卡顿率。
videoFreezeRate：视频卡顿率。
networkDelay ：网络延迟率。
注意：
1.调用接口需开通监控仪表盘【基础版】和【进阶版】，监控仪表盘【免费版】不支持调用，监控仪表盘版本功能和计费说明：https://cloud.tencent.com/document/product/647/81331。
2.查询时间范围根据监控仪表盘功能版本而定，【基础版】可查近30天，【进阶版】可查近60天。
                 * @param req DescribeTRTCMarketQualityMetricDataRequest
                 * @return DescribeTRTCMarketQualityMetricDataOutcome
                 */
                DescribeTRTCMarketQualityMetricDataOutcome DescribeTRTCMarketQualityMetricData(const Model::DescribeTRTCMarketQualityMetricDataRequest &request);
                void DescribeTRTCMarketQualityMetricDataAsync(const Model::DescribeTRTCMarketQualityMetricDataRequest& request, const DescribeTRTCMarketQualityMetricDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTRTCMarketQualityMetricDataOutcomeCallable DescribeTRTCMarketQualityMetricDataCallable(const Model::DescribeTRTCMarketQualityMetricDataRequest& request);

                /**
                 *查询TRTC监控仪表盘-数据大盘规模指标（会返回通话人数，通话房间数，峰值同时在线人数，峰值同时在线频道数）
userCount：通话人数，
roomCount：通话房间数，从有用户加入频道到所有用户离开频道计为一个通话频道。
peakCurrentChannels：峰值同时在线频道数。
peakCurrentUsers：峰值同时在线人数。
注意：
1.调用接口需开通监控仪表盘【基础版】和【进阶版】，监控仪表盘【免费版】不支持调用，监控仪表盘[版本功能和计费说明](https://cloud.tencent.com/document/product/647/81331)。
2.查询时间范围根据监控仪表盘功能版本而定，【基础版】可查近30天，【进阶版】可查近60天。
                 * @param req DescribeTRTCMarketScaleDataRequest
                 * @return DescribeTRTCMarketScaleDataOutcome
                 */
                DescribeTRTCMarketScaleDataOutcome DescribeTRTCMarketScaleData(const Model::DescribeTRTCMarketScaleDataRequest &request);
                void DescribeTRTCMarketScaleDataAsync(const Model::DescribeTRTCMarketScaleDataRequest& request, const DescribeTRTCMarketScaleDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTRTCMarketScaleDataOutcomeCallable DescribeTRTCMarketScaleDataCallable(const Model::DescribeTRTCMarketScaleDataRequest& request);

                /**
                 *查询TRTC监控仪表盘-数据大盘规模指标（会返回通话人数，通话房间数，峰值同时在线人数，峰值同时在线频道数）
userCount：通话人数，
roomCount：通话房间数，从有用户加入频道到所有用户离开频道计为一个通话频道。
peakCurrentChannels：峰值同时在线频道数。
peakCurrentUsers：峰值同时在线人数。
注意：
1.调用接口需开通监控仪表盘【基础版】和【进阶版】，监控仪表盘【免费版】不支持调用，监控仪表盘版本功能和计费说明：https://cloud.tencent.com/document/product/647/81331。
2.查询时间范围根据监控仪表盘功能版本而定，【基础版】可查近30天，【进阶版】可查近60天。
                 * @param req DescribeTRTCMarketScaleMetricDataRequest
                 * @return DescribeTRTCMarketScaleMetricDataOutcome
                 */
                DescribeTRTCMarketScaleMetricDataOutcome DescribeTRTCMarketScaleMetricData(const Model::DescribeTRTCMarketScaleMetricDataRequest &request);
                void DescribeTRTCMarketScaleMetricDataAsync(const Model::DescribeTRTCMarketScaleMetricDataRequest& request, const DescribeTRTCMarketScaleMetricDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTRTCMarketScaleMetricDataOutcomeCallable DescribeTRTCMarketScaleMetricDataCallable(const Model::DescribeTRTCMarketScaleMetricDataRequest& request);

                /**
                 *查询TRTC监控仪表盘-实时监控质量指标（会返回下列指标）
-视频卡顿率
-音频卡顿率
注意：
1.调用接口需开通监控仪表盘【基础版】和【进阶版】，监控仪表盘【免费版】不支持调用，详情参考[监控仪表盘](https://cloud.tencent.com/document/product/647/81331)。
2.查询时间范围根据监控仪表盘功能版本而定，基础版可查近3小时，进阶版可查近12小时。
                 * @param req DescribeTRTCRealTimeQualityDataRequest
                 * @return DescribeTRTCRealTimeQualityDataOutcome
                 */
                DescribeTRTCRealTimeQualityDataOutcome DescribeTRTCRealTimeQualityData(const Model::DescribeTRTCRealTimeQualityDataRequest &request);
                void DescribeTRTCRealTimeQualityDataAsync(const Model::DescribeTRTCRealTimeQualityDataRequest& request, const DescribeTRTCRealTimeQualityDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTRTCRealTimeQualityDataOutcomeCallable DescribeTRTCRealTimeQualityDataCallable(const Model::DescribeTRTCRealTimeQualityDataRequest& request);

                /**
                 *查询TRTC监控仪表盘-实时监控质量指标（会返回下列指标）
-视频卡顿率
-音频卡顿率
注意：
1.调用接口需开通监控仪表盘【基础版】和【进阶版】，监控仪表盘【免费版】不支持调用，监控仪表盘版本功能和计费说明：https://cloud.tencent.com/document/product/647/81331。
2.查询时间范围根据监控仪表盘功能版本而定，基础版可查近3小时，进阶版可查近12小时。
                 * @param req DescribeTRTCRealTimeQualityMetricDataRequest
                 * @return DescribeTRTCRealTimeQualityMetricDataOutcome
                 */
                DescribeTRTCRealTimeQualityMetricDataOutcome DescribeTRTCRealTimeQualityMetricData(const Model::DescribeTRTCRealTimeQualityMetricDataRequest &request);
                void DescribeTRTCRealTimeQualityMetricDataAsync(const Model::DescribeTRTCRealTimeQualityMetricDataRequest& request, const DescribeTRTCRealTimeQualityMetricDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTRTCRealTimeQualityMetricDataOutcomeCallable DescribeTRTCRealTimeQualityMetricDataCallable(const Model::DescribeTRTCRealTimeQualityMetricDataRequest& request);

                /**
                 *查询TRTC监控仪表盘-实时监控规模指标（会返回下列指标）
-userCount（在线用户数）
-roomCount（在线房间数）
注意：
1.调用接口需开通监控仪表盘【基础版】和【进阶版】，监控仪表盘【免费版】不支持调用，详情参考[监控仪表盘](https://cloud.tencent.com/document/product/647/81331)。
2.查询时间范围根据监控仪表盘功能版本而定，基础版可查近3小时，进阶版可查近12小时。
                 * @param req DescribeTRTCRealTimeScaleDataRequest
                 * @return DescribeTRTCRealTimeScaleDataOutcome
                 */
                DescribeTRTCRealTimeScaleDataOutcome DescribeTRTCRealTimeScaleData(const Model::DescribeTRTCRealTimeScaleDataRequest &request);
                void DescribeTRTCRealTimeScaleDataAsync(const Model::DescribeTRTCRealTimeScaleDataRequest& request, const DescribeTRTCRealTimeScaleDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTRTCRealTimeScaleDataOutcomeCallable DescribeTRTCRealTimeScaleDataCallable(const Model::DescribeTRTCRealTimeScaleDataRequest& request);

                /**
                 *查询TRTC监控仪表盘-实时监控规模指标（会返回下列指标）
-userCount（在线用户数）
-roomCount（在线房间数）
注意：
1.调用接口需开通监控仪表盘【基础版】和【进阶版】，监控仪表盘【免费版】不支持调用，监控仪表盘版本功能和计费说明：https://cloud.tencent.com/document/product/647/81331。
2.查询时间范围根据监控仪表盘功能版本而定，基础版可查近3小时，进阶版可查近12小时。
xa0
3.除此之外您也可以通过订阅TRTC包月套餐(https://buy.cloud.tencent.com/trtc)尊享版或旗舰版解锁此接口（DescribeTRTCRealTimeScaleMetricData）的调用能力，请在开通包月套餐后，请提交工单联系售后解锁调用能力https://console.cloud.tencent.com/workorder/category
                 * @param req DescribeTRTCRealTimeScaleMetricDataRequest
                 * @return DescribeTRTCRealTimeScaleMetricDataOutcome
                 */
                DescribeTRTCRealTimeScaleMetricDataOutcome DescribeTRTCRealTimeScaleMetricData(const Model::DescribeTRTCRealTimeScaleMetricDataRequest &request);
                void DescribeTRTCRealTimeScaleMetricDataAsync(const Model::DescribeTRTCRealTimeScaleMetricDataRequest& request, const DescribeTRTCRealTimeScaleMetricDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTRTCRealTimeScaleMetricDataOutcomeCallable DescribeTRTCRealTimeScaleMetricDataCallable(const Model::DescribeTRTCRealTimeScaleMetricDataRequest& request);

                /**
                 *查询旁路转码计费时长。
- 查询时间小于等于1天时，返回每5分钟粒度的数据；查询时间大于1天时，返回按天汇总的数据。
- 单次查询统计区间最多不能超过31天。
- 若查询当天用量，由于统计延迟等原因，返回数据可能不够准确。
- 日结后付费将于次日上午推送账单，建议次日上午9点以后再来查询前一天的用量。
                 * @param req DescribeTrtcMcuTranscodeTimeRequest
                 * @return DescribeTrtcMcuTranscodeTimeOutcome
                 */
                DescribeTrtcMcuTranscodeTimeOutcome DescribeTrtcMcuTranscodeTime(const Model::DescribeTrtcMcuTranscodeTimeRequest &request);
                void DescribeTrtcMcuTranscodeTimeAsync(const Model::DescribeTrtcMcuTranscodeTimeRequest& request, const DescribeTrtcMcuTranscodeTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTrtcMcuTranscodeTimeOutcomeCallable DescribeTrtcMcuTranscodeTimeCallable(const Model::DescribeTrtcMcuTranscodeTimeRequest& request);

                /**
                 *查询TRTC音视频房间维度用量。
- 单次只能查询一天数据，返回查询时间段内的汇总数据；通过多次查询可以查不同天数据。若查询跨天用量，由于统计延迟等原因，返回数据可能不够准确。
- 该接口只用于历史用量数据统计或核对数据使用，关键业务逻辑不能使用，不可用于账单核对，如需对账请使用账号/应用维度用量API：DescribeTrtcUsage。
- 默认接口请求频率限制：1次/15秒。
- 数据最早可查日期为2023年4月1日0点，最大可查范围近3个月。
                 * @param req DescribeTrtcRoomUsageRequest
                 * @return DescribeTrtcRoomUsageOutcome
                 */
                DescribeTrtcRoomUsageOutcome DescribeTrtcRoomUsage(const Model::DescribeTrtcRoomUsageRequest &request);
                void DescribeTrtcRoomUsageAsync(const Model::DescribeTrtcRoomUsageRequest& request, const DescribeTrtcRoomUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTrtcRoomUsageOutcomeCallable DescribeTrtcRoomUsageCallable(const Model::DescribeTrtcRoomUsageRequest& request);

                /**
                 *获取TRTC音视频互动的用量明细，单位:分钟。
- 查询时间小于等于1天时，返回每5分钟粒度的数据；查询时间大于1天时，返回按天汇总的数据。
- 单次查询统计区间最多不能超过31天。
- 若查询当天用量，由于统计延迟等原因，返回数据可能不够准确。
- 该接口只用于历史用量数据统计或核对数据使用，关键业务逻辑不能使用。
- 默认接口请求频率限制：5次/秒。
                 * @param req DescribeTrtcUsageRequest
                 * @return DescribeTrtcUsageOutcome
                 */
                DescribeTrtcUsageOutcome DescribeTrtcUsage(const Model::DescribeTrtcUsageRequest &request);
                void DescribeTrtcUsageAsync(const Model::DescribeTrtcUsageRequest& request, const DescribeTrtcUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTrtcUsageOutcomeCallable DescribeTrtcUsageCallable(const Model::DescribeTrtcUsageRequest& request);

                /**
                 *查询SdkAppId下任意20条异常体验事件，返回异常体验ID与可能产生异常体验的原因。可查询14天内数据，查询起止时间不超过1个小时。支持跨天查询。（同老接口DescribeAbnormalEvent）
异常体验ID映射见：https://cloud.tencent.com/document/product/647/44916
                 * @param req DescribeUnusualEventRequest
                 * @return DescribeUnusualEventOutcome
                 */
                DescribeUnusualEventOutcome DescribeUnusualEvent(const Model::DescribeUnusualEventRequest &request);
                void DescribeUnusualEventAsync(const Model::DescribeUnusualEventRequest& request, const DescribeUnusualEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUnusualEventOutcomeCallable DescribeUnusualEventCallable(const Model::DescribeUnusualEventRequest& request);

                /**
                 *查询用户某次通话内的进退房，视频开关等详细事件。可查询14天内数据。（同接口DescribeDetailEvent）
                 * @param req DescribeUserEventRequest
                 * @return DescribeUserEventOutcome
                 */
                DescribeUserEventOutcome DescribeUserEvent(const Model::DescribeUserEventRequest &request);
                void DescribeUserEventAsync(const Model::DescribeUserEventRequest& request, const DescribeUserEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserEventOutcomeCallable DescribeUserEventCallable(const Model::DescribeUserEventRequest& request);

                /**
                 *查询指定时间内的用户列表，最大可查询14天内数据，查询起止时间不超过4小时。默认每页查询6个用户，支持每页最大查询100个用户PageSize不超过100）。（同老接口DescribeUserInformation）
**注意**：
1.该接口只用于历史数据统计或核对数据使用，实时类关键业务逻辑不能使用。
2.该接口自2024年4月1日起正式商业化，需订阅套餐解锁调用能力，提供以下两种解锁方式，可任选其一解锁：
方式一：通过订阅[包月套餐](https://cloud.tencent.com/document/product/647/85386)「尊享版」（可查近7天）和「旗舰版」（可查近14天），[前往订阅](https://buy.cloud.tencent.com/trtc?trtcversion=top)。
方式二：通过订阅[监控仪表盘](https://cloud.tencent.com/document/product/647/81331)商业套餐包「基础版」（可查近7天）和「进阶版」（可查近14天），[前往订阅](https://buy.cloud.tencent.com/trtc_monitor)。
                 * @param req DescribeUserInfoRequest
                 * @return DescribeUserInfoOutcome
                 */
                DescribeUserInfoOutcome DescribeUserInfo(const Model::DescribeUserInfoRequest &request);
                void DescribeUserInfoAsync(const Model::DescribeUserInfoRequest& request, const DescribeUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserInfoOutcomeCallable DescribeUserInfoCallable(const Model::DescribeUserInfoRequest& request);

                /**
                 *查询先前注册的声纹信息
                 * @param req DescribeVoicePrintRequest
                 * @return DescribeVoicePrintOutcome
                 */
                DescribeVoicePrintOutcome DescribeVoicePrint(const Model::DescribeVoicePrintRequest &request);
                void DescribeVoicePrintAsync(const Model::DescribeVoicePrintRequest& request, const DescribeVoicePrintAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVoicePrintOutcomeCallable DescribeVoicePrintCallable(const Model::DescribeVoicePrintRequest& request);

                /**
                 *查询页面录制任务
                 * @param req DescribeWebRecordRequest
                 * @return DescribeWebRecordOutcome
                 */
                DescribeWebRecordOutcome DescribeWebRecord(const Model::DescribeWebRecordRequest &request);
                void DescribeWebRecordAsync(const Model::DescribeWebRecordRequest& request, const DescribeWebRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWebRecordOutcomeCallable DescribeWebRecordCallable(const Model::DescribeWebRecordRequest& request);

                /**
                 *接口说明：把房间所有用户从房间移出，解散房间。支持所有平台，Android、iOS、Windows 和 macOS 需升级到 TRTC SDK 6.6及以上版本。
                 * @param req DismissRoomRequest
                 * @return DismissRoomOutcome
                 */
                DismissRoomOutcome DismissRoom(const Model::DismissRoomRequest &request);
                void DismissRoomAsync(const Model::DismissRoomRequest& request, const DismissRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DismissRoomOutcomeCallable DismissRoomCallable(const Model::DismissRoomRequest& request);

                /**
                 *接口说明：把房间所有用户从房间移出，解散房间。支持所有平台，Android、iOS、Windows 和 macOS 需升级到 TRTC SDK 6.6及以上版本。
                 * @param req DismissRoomByStrRoomIdRequest
                 * @return DismissRoomByStrRoomIdOutcome
                 */
                DismissRoomByStrRoomIdOutcome DismissRoomByStrRoomId(const Model::DismissRoomByStrRoomIdRequest &request);
                void DismissRoomByStrRoomIdAsync(const Model::DismissRoomByStrRoomIdRequest& request, const DismissRoomByStrRoomIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DismissRoomByStrRoomIdOutcomeCallable DismissRoomByStrRoomIdCallable(const Model::DismissRoomByStrRoomIdRequest& request);

                /**
                 *成功开启录制后，可以使用此接口来更新录制任务。仅在录制任务进行时有效，录制退出后更新将会返回错误。更新操作是全量覆盖，并不是增量更新的模式，也就是说每次更新都需要携带全量的信息。
                 * @param req ModifyCloudRecordingRequest
                 * @return ModifyCloudRecordingOutcome
                 */
                ModifyCloudRecordingOutcome ModifyCloudRecording(const Model::ModifyCloudRecordingRequest &request);
                void ModifyCloudRecordingAsync(const Model::ModifyCloudRecordingRequest& request, const ModifyCloudRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCloudRecordingOutcomeCallable ModifyCloudRecordingCallable(const Model::ModifyCloudRecordingRequest& request);

                /**
                 *如果您需要在 [云端混流转码](https://cloud.tencent.com/document/product/647/16827) 时频繁修改自定义背景图或水印素材，可通过此接口修改已上传的图片。无需频繁修改图片素材的场景，建议直接在 [控制台 > 应用管理 > 素材管理](https://cloud.tencent.com/document/product/647/50769) 中操作。
                 * @param req ModifyPictureRequest
                 * @return ModifyPictureOutcome
                 */
                ModifyPictureOutcome ModifyPicture(const Model::ModifyPictureRequest &request);
                void ModifyPictureAsync(const Model::ModifyPictureRequest& request, const ModifyPictureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPictureOutcomeCallable ModifyPictureCallable(const Model::ModifyPictureRequest& request);

                /**
                 *传入音频base64串，注册声纹信息，返回声纹ID
                 * @param req RegisterVoicePrintRequest
                 * @return RegisterVoicePrintOutcome
                 */
                RegisterVoicePrintOutcome RegisterVoicePrint(const Model::RegisterVoicePrintRequest &request);
                void RegisterVoicePrintAsync(const Model::RegisterVoicePrintRequest& request, const RegisterVoicePrintAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RegisterVoicePrintOutcomeCallable RegisterVoicePrintCallable(const Model::RegisterVoicePrintRequest& request);

                /**
                 *接口说明：将用户从房间移出，适用于主播/房主/管理员踢人等场景。支持所有平台，Android、iOS、Windows 和 macOS 需升级到 TRTC SDK 6.6及以上版本。
                 * @param req RemoveUserRequest
                 * @return RemoveUserOutcome
                 */
                RemoveUserOutcome RemoveUser(const Model::RemoveUserRequest &request);
                void RemoveUserAsync(const Model::RemoveUserRequest& request, const RemoveUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveUserOutcomeCallable RemoveUserCallable(const Model::RemoveUserRequest& request);

                /**
                 *接口说明：将用户从房间移出，适用于主播/房主/管理员踢人等场景。支持所有平台，Android、iOS、Windows 和 macOS 需升级到 TRTC SDK 6.6及以上版本。
                 * @param req RemoveUserByStrRoomIdRequest
                 * @return RemoveUserByStrRoomIdOutcome
                 */
                RemoveUserByStrRoomIdOutcome RemoveUserByStrRoomId(const Model::RemoveUserByStrRoomIdRequest &request);
                void RemoveUserByStrRoomIdAsync(const Model::RemoveUserByStrRoomIdRequest& request, const RemoveUserByStrRoomIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveUserByStrRoomIdOutcomeCallable RemoveUserByStrRoomIdCallable(const Model::RemoveUserByStrRoomIdRequest& request);

                /**
                 *启动AI对话任务，AI通道机器人进入TRTC房间，与房间内指定的成员进行AI对话，适用于智能客服，AI口语教师等场景

TRTC AI对话功能内置语音转文本能力，同时提供通道服务，即客户可灵活指定第三方AI模型（LLM）服务和文本转音频（TTS)服务，更多[功能说明](https://cloud.tencent.com/document/product/647/108901)。
                 * @param req StartAIConversationRequest
                 * @return StartAIConversationOutcome
                 */
                StartAIConversationOutcome StartAIConversation(const Model::StartAIConversationRequest &request);
                void StartAIConversationAsync(const Model::StartAIConversationRequest& request, const StartAIConversationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartAIConversationOutcomeCallable StartAIConversationCallable(const Model::StartAIConversationRequest& request);

                /**
                 *启动转录机器人，后台会通过机器人拉流进行实时进行语音识别并下发字幕和转录消息。
转录机器人支持两种拉流方式，通过TranscriptionMode字段控制：
- 拉取全房间的流。
- 拉取特定用户的流。

服务端通过TRTC的自定义消息实时下发字幕以及转录消息，CmdId固定是1。客户端只需监听自定义消息的回调即可，比如[c++回调](https://cloud.tencent.com/document/product/647/79637#4cd82f4edb24992a15a25187089e1565)。其他客户端比如安卓、Web等同样可在该链接处找到。


**注意：**
TranscriptionMode为0时，需要保证一个房间内只发起一个任务，如果发起多个任务，则机器人之间会相互订阅，除非主动停止任务，否则只有10小时后任务才会超时退出，这种情况下建议填写SessionId，保证后续重复发起的任务失败。
                 * @param req StartAITranscriptionRequest
                 * @return StartAITranscriptionOutcome
                 */
                StartAITranscriptionOutcome StartAITranscription(const Model::StartAITranscriptionRequest &request);
                void StartAITranscriptionAsync(const Model::StartAITranscriptionRequest& request, const StartAITranscriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartAITranscriptionOutcomeCallable StartAITranscriptionCallable(const Model::StartAITranscriptionRequest& request);

                /**
                 *接口说明：启动云端混流，并指定混流画面中各路画面的布局位置。

TRTC 的一个房间中可能会同时存在多路音视频流，您可以通过此 API 接口，通知腾讯云服务端将多路视频画面合成一路，并指定每一路画面的位置，同时将多路声音进行混音，最终形成一路音视频流，以便用于录制和直播观看。房间销毁后混流自动结束。

您可以通过此接口实现如下目标：
- 设置最终直播流的画质和音质，包括视频分辨率、视频码率、视频帧率、以及声音质量等。
- 设置各路画面的位置和布局，您只需要在启动时设置一次，排版引擎会自动完成后续的画面排布。
- 设置录制文件名，用于二次回放。
- 设置 CDN 直播流 ID，用于在 CDN 进行直播观看。

目前已经支持了如下几种布局模板：
- 悬浮模板：第一个进入房间的用户的视频画面会铺满整个屏幕，其他用户的视频画面从左下角依次水平排列，显示为小画面，最多4行，每行4个，小画面悬浮于大画面之上。最多支持1个大画面和15个小画面，如果用户只发送音频，仍然会占用画面位置。
- 九宫格模板：所有用户的视频画面大小一致，平分整个屏幕，人数越多，每个画面的尺寸越小。最多支持16个画面，如果用户只发送音频，仍然会占用画面位置。
- 屏幕分享模板：适合视频会议和在线教育场景的布局，屏幕分享（或者主讲的摄像头）始终占据屏幕左侧的大画面位置，其他用户依次垂直排列于右侧，最多两列，每列最多8个小画面。最多支持1个大画面和15个小画面。若上行分辨率宽高比与画面输出宽高比不一致时，左侧大画面为了保持内容的完整性采用缩放方式处理，右侧小画面采用裁剪方式处理。
- 画中画模板：适用于混合大小两路视频画面和其他用户混音，或者混合一路大画面和其他用户混音的场景。小画面悬浮于大画面之上，可以指定大小画面的用户以及小画面的显示位置，最多支持2个画面。
- 自定义模板：适用于在混流中指定用户的画面位置，或者预设视频画面位置的场景。当预设位置指定用户时，排版引擎会为该用户预留位置；当预设位置未指定用户时，排版引擎会根据进房间顺序自动填充。预设位置填满时，不再混合其他用户的画面和声音。自定义模板启用占位图功能时（LayoutParams中的PlaceHolderMode设置成1），在预设位置的用户没有上行视频时可显示对应的占位图（PlaceImageId）。

注意：
1、**混流转码为收费功能，调用接口将产生云端混流转码费用，详见[云端混流转码计费说明](https://cloud.tencent.com/document/product/647/49446)。**
2、2020年1月9号及以后创建的应用才能直接调用此接口。2020年1月9日之前创建的应用默认使用云直播的云端混流，如需切换至MCU混流，请[提交工单](https://console.cloud.tencent.com/workorder/category)寻求帮助。
3、客户端混流和服务端混流不能混用。
                 * @param req StartMCUMixTranscodeRequest
                 * @return StartMCUMixTranscodeOutcome
                 */
                StartMCUMixTranscodeOutcome StartMCUMixTranscode(const Model::StartMCUMixTranscodeRequest &request);
                void StartMCUMixTranscodeAsync(const Model::StartMCUMixTranscodeRequest& request, const StartMCUMixTranscodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartMCUMixTranscodeOutcomeCallable StartMCUMixTranscodeCallable(const Model::StartMCUMixTranscodeRequest& request);

                /**
                 *接口说明：启动云端混流，并指定混流画面中各路画面的布局位置。

TRTC 的一个房间中可能会同时存在多路音视频流，您可以通过此 API 接口，通知腾讯云服务端将多路视频画面合成一路，并指定每一路画面的位置，同时将多路声音进行混音，最终形成一路音视频流，以便用于录制和直播观看。

您可以通过此接口实现如下目标：
- 设置最终直播流的画质和音质，包括视频分辨率、视频码率、视频帧率、以及声音质量等。
- 设置各路画面的位置和布局，您只需要在启动时设置一次，排版引擎会自动完成后续的画面排布。
- 设置录制文件名，用于二次回放。
- 设置 CDN 直播流 ID，用于在 CDN 进行直播观看。

目前已经支持了如下几种布局模板：
- 悬浮模板：第一个进入房间的用户的视频画面会铺满整个屏幕，其他用户的视频画面从左下角依次水平排列，显示为小画面，最多4行，每行4个，小画面悬浮于大画面之上。最多支持1个大画面和15个小画面，如果用户只发送音频，仍然会占用画面位置。
- 九宫格模板：所有用户的视频画面大小一致，平分整个屏幕，人数越多，每个画面的尺寸越小。最多支持16个画面，如果用户只发送音频，仍然会占用画面位置。
- 屏幕分享模板：适合视频会议和在线教育场景的布局，屏幕分享（或者主讲的摄像头）始终占据屏幕左侧的大画面位置，其他用户依次垂直排列于右侧，最多两列，每列最多8个小画面。最多支持1个大画面和15个小画面。若上行分辨率宽高比与画面输出宽高比不一致时，左侧大画面为了保持内容的完整性采用缩放方式处理，右侧小画面采用裁剪方式处理。
- 画中画模板：适用于混合大小两路视频画面和其他用户混音，或者混合一路大画面和其他用户混音的场景。小画面悬浮于大画面之上，可以指定大小画面的用户以及小画面的显示位置。
- 自定义模板：适用于在混流中指定用户的画面位置，或者预设视频画面位置的场景。当预设位置指定用户时，排版引擎会为该用户预留位置；当预设位置未指定用户时，排版引擎会根据进房间顺序自动填充。预设位置填满时，不再混合其他用户的画面和声音。自定义模板启用占位图功能时（LayoutParams中的PlaceHolderMode设置成1），在预设位置的用户没有上行视频时可显示对应的占位图（PlaceImageId）。

注意：
1、**混流转码为收费功能，调用接口将产生云端混流转码费用，详见[云端混流转码计费说明](https://cloud.tencent.com/document/product/647/49446)。**
2、2020年1月9号及以后创建的应用才能直接调用此接口。2020年1月9日之前创建的应用默认使用云直播的云端混流，如需切换至MCU混流，请[提交工单](https://console.cloud.tencent.com/workorder/category)寻求帮助。
3、客户端混流和服务端混流不能混用。
                 * @param req StartMCUMixTranscodeByStrRoomIdRequest
                 * @return StartMCUMixTranscodeByStrRoomIdOutcome
                 */
                StartMCUMixTranscodeByStrRoomIdOutcome StartMCUMixTranscodeByStrRoomId(const Model::StartMCUMixTranscodeByStrRoomIdRequest &request);
                void StartMCUMixTranscodeByStrRoomIdAsync(const Model::StartMCUMixTranscodeByStrRoomIdRequest& request, const StartMCUMixTranscodeByStrRoomIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartMCUMixTranscodeByStrRoomIdOutcomeCallable StartMCUMixTranscodeByStrRoomIdCallable(const Model::StartMCUMixTranscodeByStrRoomIdRequest& request);

                /**
                 *接口说明：  
启动一个混流转推任务，将  TRTC 房间的多路音视频流混成一路音视频流，编码后推到直播 CDN 或者回推到 TRTC 房间。也支持不转码直接转推 TRTC 房间的单路流。启动成功后，会返回一个 SdkAppid 维度唯一的任务 Id（TaskId）。您需要保存该 TaskId，后续需要依赖此 TaskId 更新和结束任务。可以参考文档： [功能说明](https://cloud.tencent.com/document/product/647/84721#b9a855f4-e38c-4616-9b07-fc44e0e8282a) 和 [常见问题](https://cloud.tencent.com/document/product/647/62620)

注意：
您可以在控制台开通旁路转推回调功能，对转推 CDN 状态的事件进行监控，回调请参考文档：[旁路转推回调说明](https://cloud.tencent.com/document/product/647/88552)  
您发起混流转推任务时，可能会产生如下费用：  
MCU 混流转码费用，请参考文档：[云端混流转码计费说明](https://cloud.tencent.com/document/product/647/49446)  
转推非腾讯云 CDN 费用，请参考文档：[云端转推计费说明](https://cloud.tencent.com/document/product/647/82155)
                 * @param req StartPublishCdnStreamRequest
                 * @return StartPublishCdnStreamOutcome
                 */
                StartPublishCdnStreamOutcome StartPublishCdnStream(const Model::StartPublishCdnStreamRequest &request);
                void StartPublishCdnStreamAsync(const Model::StartPublishCdnStreamRequest& request, const StartPublishCdnStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartPublishCdnStreamOutcomeCallable StartPublishCdnStreamCallable(const Model::StartPublishCdnStreamRequest& request);

                /**
                 *将一个在线媒体流推到TRTC房间，更多功能说明见[输入媒体流进房](https://cloud.tencent.com/document/product/647/102957#50940aad-d90f-4473-9f46-d5dd46917653)。
使用输入在线媒体流功能需先订阅 [尊享版或旗舰版套餐包](https://cloud.tencent.com/document/product/647/85386) 解锁能力位。
                 * @param req StartStreamIngestRequest
                 * @return StartStreamIngestOutcome
                 */
                StartStreamIngestOutcome StartStreamIngest(const Model::StartStreamIngestRequest &request);
                void StartStreamIngestAsync(const Model::StartStreamIngestRequest& request, const StartStreamIngestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartStreamIngestOutcomeCallable StartStreamIngestCallable(const Model::StartStreamIngestRequest& request);

                /**
                 *通过此接口可以发起 WEB 页面录制任务，在接口参数中指定录制 URL，录制分辨率，录制结果存储等参数。
因为参数或API逻辑问题会立即返回结果。而因为页面问题，如页面无法访问，会在回调中返回结果，请关注。
                 * @param req StartWebRecordRequest
                 * @return StartWebRecordOutcome
                 */
                StartWebRecordOutcome StartWebRecord(const Model::StartWebRecordRequest &request);
                void StartWebRecordAsync(const Model::StartWebRecordRequest& request, const StartWebRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartWebRecordOutcomeCallable StartWebRecordCallable(const Model::StartWebRecordRequest& request);

                /**
                 *停止AI对话任务
                 * @param req StopAIConversationRequest
                 * @return StopAIConversationOutcome
                 */
                StopAIConversationOutcome StopAIConversation(const Model::StopAIConversationRequest &request);
                void StopAIConversationAsync(const Model::StopAIConversationRequest& request, const StopAIConversationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopAIConversationOutcomeCallable StopAIConversationCallable(const Model::StopAIConversationRequest& request);

                /**
                 *停止AI转录任务。
                 * @param req StopAITranscriptionRequest
                 * @return StopAITranscriptionOutcome
                 */
                StopAITranscriptionOutcome StopAITranscription(const Model::StopAITranscriptionRequest &request);
                void StopAITranscriptionAsync(const Model::StopAITranscriptionRequest& request, const StopAITranscriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopAITranscriptionOutcomeCallable StopAITranscriptionCallable(const Model::StopAITranscriptionRequest& request);

                /**
                 *接口说明：结束云端混流
                 * @param req StopMCUMixTranscodeRequest
                 * @return StopMCUMixTranscodeOutcome
                 */
                StopMCUMixTranscodeOutcome StopMCUMixTranscode(const Model::StopMCUMixTranscodeRequest &request);
                void StopMCUMixTranscodeAsync(const Model::StopMCUMixTranscodeRequest& request, const StopMCUMixTranscodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopMCUMixTranscodeOutcomeCallable StopMCUMixTranscodeCallable(const Model::StopMCUMixTranscodeRequest& request);

                /**
                 *接口说明：结束云端混流
                 * @param req StopMCUMixTranscodeByStrRoomIdRequest
                 * @return StopMCUMixTranscodeByStrRoomIdOutcome
                 */
                StopMCUMixTranscodeByStrRoomIdOutcome StopMCUMixTranscodeByStrRoomId(const Model::StopMCUMixTranscodeByStrRoomIdRequest &request);
                void StopMCUMixTranscodeByStrRoomIdAsync(const Model::StopMCUMixTranscodeByStrRoomIdRequest& request, const StopMCUMixTranscodeByStrRoomIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopMCUMixTranscodeByStrRoomIdOutcomeCallable StopMCUMixTranscodeByStrRoomIdCallable(const Model::StopMCUMixTranscodeByStrRoomIdRequest& request);

                /**
                 *接口说明：
停止指定的混流转推任务。如果没有调用 Stop 接口停止任务，所有参与混流转推的主播离开 TRTC 房间超过 AgentParams.MaxIdleTime 设置的时间后，任务也会自动停止。
                 * @param req StopPublishCdnStreamRequest
                 * @return StopPublishCdnStreamOutcome
                 */
                StopPublishCdnStreamOutcome StopPublishCdnStream(const Model::StopPublishCdnStreamRequest &request);
                void StopPublishCdnStreamAsync(const Model::StopPublishCdnStreamRequest& request, const StopPublishCdnStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopPublishCdnStreamOutcomeCallable StopPublishCdnStreamCallable(const Model::StopPublishCdnStreamRequest& request);

                /**
                 *停止一个输入在线媒体流任务。
                 * @param req StopStreamIngestRequest
                 * @return StopStreamIngestOutcome
                 */
                StopStreamIngestOutcome StopStreamIngest(const Model::StopStreamIngestRequest &request);
                void StopStreamIngestAsync(const Model::StopStreamIngestRequest& request, const StopStreamIngestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopStreamIngestOutcomeCallable StopStreamIngestCallable(const Model::StopStreamIngestRequest& request);

                /**
                 *停止页面录制任务
                 * @param req StopWebRecordRequest
                 * @return StopWebRecordOutcome
                 */
                StopWebRecordOutcome StopWebRecord(const Model::StopWebRecordRequest &request);
                void StopWebRecordAsync(const Model::StopWebRecordRequest& request, const StopWebRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopWebRecordOutcomeCallable StopWebRecordCallable(const Model::StopWebRecordRequest& request);

                /**
                 *更新AIConversation参数
                 * @param req UpdateAIConversationRequest
                 * @return UpdateAIConversationOutcome
                 */
                UpdateAIConversationOutcome UpdateAIConversation(const Model::UpdateAIConversationRequest &request);
                void UpdateAIConversationAsync(const Model::UpdateAIConversationRequest& request, const UpdateAIConversationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateAIConversationOutcomeCallable UpdateAIConversationCallable(const Model::UpdateAIConversationRequest& request);

                /**
                 *接口说明：
成功发起混流转推后，可以使用此接口来更新任务。仅在任务进行时有效，任务退出后更新将会返回错误。更新操作为增量更新模式。
注意：为了保障推流的稳定性，更新不支持任务在纯音频、音视频、纯视频之间进行切换。
                 * @param req UpdatePublishCdnStreamRequest
                 * @return UpdatePublishCdnStreamOutcome
                 */
                UpdatePublishCdnStreamOutcome UpdatePublishCdnStream(const Model::UpdatePublishCdnStreamRequest &request);
                void UpdatePublishCdnStreamAsync(const Model::UpdatePublishCdnStreamRequest& request, const UpdatePublishCdnStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdatePublishCdnStreamOutcomeCallable UpdatePublishCdnStreamCallable(const Model::UpdatePublishCdnStreamRequest& request);

                /**
                 *更新输入在线媒体流任务的StreamUrl
                 * @param req UpdateStreamIngestRequest
                 * @return UpdateStreamIngestOutcome
                 */
                UpdateStreamIngestOutcome UpdateStreamIngest(const Model::UpdateStreamIngestRequest &request);
                void UpdateStreamIngestAsync(const Model::UpdateStreamIngestRequest& request, const UpdateStreamIngestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateStreamIngestOutcomeCallable UpdateStreamIngestCallable(const Model::UpdateStreamIngestRequest& request);

                /**
                 *传入声纹ID以及对应音频信息，更新对应声纹信息
                 * @param req UpdateVoicePrintRequest
                 * @return UpdateVoicePrintOutcome
                 */
                UpdateVoicePrintOutcome UpdateVoicePrint(const Model::UpdateVoicePrintRequest &request);
                void UpdateVoicePrintAsync(const Model::UpdateVoicePrintRequest& request, const UpdateVoicePrintAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateVoicePrintOutcomeCallable UpdateVoicePrintCallable(const Model::UpdateVoicePrintRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_TRTCCLIENT_H_
