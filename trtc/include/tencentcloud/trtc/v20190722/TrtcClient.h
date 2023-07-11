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
#include <tencentcloud/trtc/v20190722/model/CreateCloudRecordingRequest.h>
#include <tencentcloud/trtc/v20190722/model/CreateCloudRecordingResponse.h>
#include <tencentcloud/trtc/v20190722/model/CreatePictureRequest.h>
#include <tencentcloud/trtc/v20190722/model/CreatePictureResponse.h>
#include <tencentcloud/trtc/v20190722/model/DeleteCloudRecordingRequest.h>
#include <tencentcloud/trtc/v20190722/model/DeleteCloudRecordingResponse.h>
#include <tencentcloud/trtc/v20190722/model/DeletePictureRequest.h>
#include <tencentcloud/trtc/v20190722/model/DeletePictureResponse.h>
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
#include <tencentcloud/trtc/v20190722/model/DescribeTRTCMarketQualityMetricDataRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeTRTCMarketQualityMetricDataResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeTRTCMarketScaleMetricDataRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeTRTCMarketScaleMetricDataResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeTRTCRealTimeQualityMetricDataRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeTRTCRealTimeQualityMetricDataResponse.h>
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
#include <tencentcloud/trtc/v20190722/model/DismissRoomRequest.h>
#include <tencentcloud/trtc/v20190722/model/DismissRoomResponse.h>
#include <tencentcloud/trtc/v20190722/model/DismissRoomByStrRoomIdRequest.h>
#include <tencentcloud/trtc/v20190722/model/DismissRoomByStrRoomIdResponse.h>
#include <tencentcloud/trtc/v20190722/model/ModifyCloudRecordingRequest.h>
#include <tencentcloud/trtc/v20190722/model/ModifyCloudRecordingResponse.h>
#include <tencentcloud/trtc/v20190722/model/ModifyPictureRequest.h>
#include <tencentcloud/trtc/v20190722/model/ModifyPictureResponse.h>
#include <tencentcloud/trtc/v20190722/model/RemoveUserRequest.h>
#include <tencentcloud/trtc/v20190722/model/RemoveUserResponse.h>
#include <tencentcloud/trtc/v20190722/model/RemoveUserByStrRoomIdRequest.h>
#include <tencentcloud/trtc/v20190722/model/RemoveUserByStrRoomIdResponse.h>
#include <tencentcloud/trtc/v20190722/model/StartMCUMixTranscodeRequest.h>
#include <tencentcloud/trtc/v20190722/model/StartMCUMixTranscodeResponse.h>
#include <tencentcloud/trtc/v20190722/model/StartMCUMixTranscodeByStrRoomIdRequest.h>
#include <tencentcloud/trtc/v20190722/model/StartMCUMixTranscodeByStrRoomIdResponse.h>
#include <tencentcloud/trtc/v20190722/model/StartPublishCdnStreamRequest.h>
#include <tencentcloud/trtc/v20190722/model/StartPublishCdnStreamResponse.h>
#include <tencentcloud/trtc/v20190722/model/StopMCUMixTranscodeRequest.h>
#include <tencentcloud/trtc/v20190722/model/StopMCUMixTranscodeResponse.h>
#include <tencentcloud/trtc/v20190722/model/StopMCUMixTranscodeByStrRoomIdRequest.h>
#include <tencentcloud/trtc/v20190722/model/StopMCUMixTranscodeByStrRoomIdResponse.h>
#include <tencentcloud/trtc/v20190722/model/StopPublishCdnStreamRequest.h>
#include <tencentcloud/trtc/v20190722/model/StopPublishCdnStreamResponse.h>
#include <tencentcloud/trtc/v20190722/model/UpdatePublishCdnStreamRequest.h>
#include <tencentcloud/trtc/v20190722/model/UpdatePublishCdnStreamResponse.h>


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

                typedef Outcome<Core::Error, Model::CreateCloudRecordingResponse> CreateCloudRecordingOutcome;
                typedef std::future<CreateCloudRecordingOutcome> CreateCloudRecordingOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::CreateCloudRecordingRequest&, CreateCloudRecordingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudRecordingAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePictureResponse> CreatePictureOutcome;
                typedef std::future<CreatePictureOutcome> CreatePictureOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::CreatePictureRequest&, CreatePictureOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePictureAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCloudRecordingResponse> DeleteCloudRecordingOutcome;
                typedef std::future<DeleteCloudRecordingOutcome> DeleteCloudRecordingOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DeleteCloudRecordingRequest&, DeleteCloudRecordingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCloudRecordingAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePictureResponse> DeletePictureOutcome;
                typedef std::future<DeletePictureOutcome> DeletePictureOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DeletePictureRequest&, DeletePictureOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePictureAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeTRTCMarketQualityMetricDataResponse> DescribeTRTCMarketQualityMetricDataOutcome;
                typedef std::future<DescribeTRTCMarketQualityMetricDataOutcome> DescribeTRTCMarketQualityMetricDataOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeTRTCMarketQualityMetricDataRequest&, DescribeTRTCMarketQualityMetricDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTRTCMarketQualityMetricDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTRTCMarketScaleMetricDataResponse> DescribeTRTCMarketScaleMetricDataOutcome;
                typedef std::future<DescribeTRTCMarketScaleMetricDataOutcome> DescribeTRTCMarketScaleMetricDataOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeTRTCMarketScaleMetricDataRequest&, DescribeTRTCMarketScaleMetricDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTRTCMarketScaleMetricDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTRTCRealTimeQualityMetricDataResponse> DescribeTRTCRealTimeQualityMetricDataOutcome;
                typedef std::future<DescribeTRTCRealTimeQualityMetricDataOutcome> DescribeTRTCRealTimeQualityMetricDataOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeTRTCRealTimeQualityMetricDataRequest&, DescribeTRTCRealTimeQualityMetricDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTRTCRealTimeQualityMetricDataAsyncHandler;
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
                typedef Outcome<Core::Error, Model::RemoveUserResponse> RemoveUserOutcome;
                typedef std::future<RemoveUserOutcome> RemoveUserOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::RemoveUserRequest&, RemoveUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveUserAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveUserByStrRoomIdResponse> RemoveUserByStrRoomIdOutcome;
                typedef std::future<RemoveUserByStrRoomIdOutcome> RemoveUserByStrRoomIdOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::RemoveUserByStrRoomIdRequest&, RemoveUserByStrRoomIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveUserByStrRoomIdAsyncHandler;
                typedef Outcome<Core::Error, Model::StartMCUMixTranscodeResponse> StartMCUMixTranscodeOutcome;
                typedef std::future<StartMCUMixTranscodeOutcome> StartMCUMixTranscodeOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::StartMCUMixTranscodeRequest&, StartMCUMixTranscodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartMCUMixTranscodeAsyncHandler;
                typedef Outcome<Core::Error, Model::StartMCUMixTranscodeByStrRoomIdResponse> StartMCUMixTranscodeByStrRoomIdOutcome;
                typedef std::future<StartMCUMixTranscodeByStrRoomIdOutcome> StartMCUMixTranscodeByStrRoomIdOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::StartMCUMixTranscodeByStrRoomIdRequest&, StartMCUMixTranscodeByStrRoomIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartMCUMixTranscodeByStrRoomIdAsyncHandler;
                typedef Outcome<Core::Error, Model::StartPublishCdnStreamResponse> StartPublishCdnStreamOutcome;
                typedef std::future<StartPublishCdnStreamOutcome> StartPublishCdnStreamOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::StartPublishCdnStreamRequest&, StartPublishCdnStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartPublishCdnStreamAsyncHandler;
                typedef Outcome<Core::Error, Model::StopMCUMixTranscodeResponse> StopMCUMixTranscodeOutcome;
                typedef std::future<StopMCUMixTranscodeOutcome> StopMCUMixTranscodeOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::StopMCUMixTranscodeRequest&, StopMCUMixTranscodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopMCUMixTranscodeAsyncHandler;
                typedef Outcome<Core::Error, Model::StopMCUMixTranscodeByStrRoomIdResponse> StopMCUMixTranscodeByStrRoomIdOutcome;
                typedef std::future<StopMCUMixTranscodeByStrRoomIdOutcome> StopMCUMixTranscodeByStrRoomIdOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::StopMCUMixTranscodeByStrRoomIdRequest&, StopMCUMixTranscodeByStrRoomIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopMCUMixTranscodeByStrRoomIdAsyncHandler;
                typedef Outcome<Core::Error, Model::StopPublishCdnStreamResponse> StopPublishCdnStreamOutcome;
                typedef std::future<StopPublishCdnStreamOutcome> StopPublishCdnStreamOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::StopPublishCdnStreamRequest&, StopPublishCdnStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopPublishCdnStreamAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdatePublishCdnStreamResponse> UpdatePublishCdnStreamOutcome;
                typedef std::future<UpdatePublishCdnStreamOutcome> UpdatePublishCdnStreamOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::UpdatePublishCdnStreamRequest&, UpdatePublishCdnStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePublishCdnStreamAsyncHandler;



                /**
                 *接口说明：
启动云端录制功能，完成房间内的音视频录制，并上传到指定的云存储。您可以通过此 API 接口把TRTC 房间中的每一路音视频流做单独的录制又或者多路视频画面混流一路。

您可以通过此接口实现如下目标：
* 指定订阅流参数（RecordParams）来指定需要录制的主播的黑名单或者白名单。
* 指定第三方存储的参数（StorageParams）来指定上传到您希望的云存储，目前支持云点播VOD和对象存储COS
* 指定混流模式下的音视频转码详细参数（MixTranscodeParams），包括视频分辨率、视频码率、视频帧率、以及声音质量等
* 指定混流模式各路画面的位置和布局或者也可以指定自动模板的方式来配置。

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
                 *查询指定时间内的用户列表及用户通话质量数据，可查询14天内数据。DataType 不为null，查询起止时间不超过1个小时，查询用户不超过6个，支持跨天查询。DataType为null时，查询起止时间不超过4个小时， 默认查询6个用户，同时支持每页查询100以内用户个数（PageSize不超过100）。接口用于查询质量问题，不推荐作为计费使用。（同老接口DescribeCallDetail）
**注意**：
1.该接口只用于历史数据统计或核对数据使用，实时类关键业务逻辑不能使用。
2.该接口目前免费提供中，监控仪表盘商业化计费后该接口需要订阅付费版后方可调用，仪表盘商业化说明请见：https://cloud.tencent.com/document/product/647/77735
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
                 *查询SdkAppId下的房间列表。默认返回10条通话，一次最多返回100条通话。可查询14天内的数据。（同老接口DescribeRoomInformation）
**注意**：
1.该接口只用于历史数据统计或核对数据使用，实时类关键业务逻辑不能使用。
2.该接口目前免费提供中，监控仪表盘商业化计费后该接口需要订阅付费版后方可调用，仪表盘商业化说明请见：https://cloud.tencent.com/document/product/647/77735
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
- 该接口只用于历史用量数据统计或核对数据使用，关键业务逻辑不能使用。
- 默认接口请求频率限制：1次/15秒。
                 * @param req DescribeTrtcRoomUsageRequest
                 * @return DescribeTrtcRoomUsageOutcome
                 */
                DescribeTrtcRoomUsageOutcome DescribeTrtcRoomUsage(const Model::DescribeTrtcRoomUsageRequest &request);
                void DescribeTrtcRoomUsageAsync(const Model::DescribeTrtcRoomUsageRequest& request, const DescribeTrtcRoomUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTrtcRoomUsageOutcomeCallable DescribeTrtcRoomUsageCallable(const Model::DescribeTrtcRoomUsageRequest& request);

                /**
                 *获取TRTC音视频互动的用量明细。
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
                 *查询指定时间内的用户列表，可查询14天内数据，查询起止时间不超过4小时。默认每页查询6个用户，支持每页最大查询100个用户PageSize不超过100）。（同老接口DescribeUserInformation）
**注意**：
1.该接口只用于历史数据统计或核对数据使用，实时类关键业务逻辑不能使用。
2.该接口目前免费提供中，监控仪表盘商业化计费后该接口需要订阅付费版后方可调用，仪表盘商业化说明请见：https://cloud.tencent.com/document/product/647/77735
                 * @param req DescribeUserInfoRequest
                 * @return DescribeUserInfoOutcome
                 */
                DescribeUserInfoOutcome DescribeUserInfo(const Model::DescribeUserInfoRequest &request);
                void DescribeUserInfoAsync(const Model::DescribeUserInfoRequest& request, const DescribeUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserInfoOutcomeCallable DescribeUserInfoCallable(const Model::DescribeUserInfoRequest& request);

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
                 *接口说明：启动旁路以及混流转推任务。TRTC 的房间中可能会同时存在多路音视频流，您可以通过此API接口，实现以下几种效果：
1、支持将单个主播的音视频流发布（也称作“转推”）到直播CDN上，请参考示例2（发起单流音视频旁路转推）和示例3（发起单流纯音频旁路转推）。
2、支持将同个房间多个主播或者不同房间多个主播的音视频混合成1路后再发布到直播CDN上，您可以通过AudioParams.SubscribeAudioList和VideoParams.LayoutParams调整参与混音的用户列表以及指定各路混流画面的布局位置。请参考示例1（发起混流转推）。
3、支持预先设置一个房间的混流模板，将该房间中的多个音视频混合成1路发布到直播CDN，腾讯云后台实时监控TRTC房间中的主播变化，自动按照混流模板调整布局。目前已经支持了如下几种混流预设模板：
     - 悬浮模板：第一个进入房间的用户的视频画面会铺满整个屏幕，其他用户的视频画面从左下角依次水平排列，显示为小画面，最多4行，每行4个，小画面悬浮于大画面之上。最多支持1个大画面和15个小画面。
     - 九宫格模板：所有用户的视频画面大小一致，平分整个屏幕，人数越多，每个画面的尺寸越小，最多支持16个画面。
     - 屏幕分享模板：适合视频会议和在线教育场景的布局，屏幕分享（或者主讲的摄像头）始终占据屏幕左侧的大画面位置，其他用户依次垂直排列于右侧，最多两列，每列最多8个小画面。最多支持1个大画面和15个小画面。若上行分辨率宽高比与画面输出宽高比不一致时，左侧大画面为了保持内容的完整性采用缩放方式处理，右侧小画面采用裁剪方式处理。
4、支持同时将音视频流发布到最多10个直播CDN上。您可以通过PublishCdnParams.PublishCdnUrl指定转推CDN的url，如果您想转推到腾讯云CDN，PublishCdnParams.IsTencentCdn填为1。
5、支持通过配置服务端回调，实时将转推状态以HTTP/HTTPS POST 请求发送给您的服务器，如果您需要接入转推事件回调，请联系腾讯云技术支持。
6、云API调用支持广州、上海、北京、香港四个地域，如果您想转推海外，请选择香港地域。
7、国内站默认只支持转推腾讯云CDN，如您有转推第三方CDN的需求，请联系腾讯云技术支持，由后台进行评估。
注意：
1、**混流转码为收费功能，调用接口将产生云端混流转码费用，详见[云端混流转推计费说明](https://cloud.tencent.com/document/product/647/49446)。**
2、**转推非腾讯云CDN将产生云端转推费用，详见[云端混流转推计费说明](https://cloud.tencent.com/document/product/647/82155)。**

其他使用说明如下：
1、使用混流转推接口时，您需要先调用启动转推任务接口（StartPublishCdnStream），获取启动转推任务响应中的任务ID标识（TaskId）。后续传入任务ID标识（TaskId）来更新转推任务（UpdatePublishCdnStream）和停止转推任务（StopPublishCdnStream）。
2、为了确保转推链接的稳定，同一个转推任务不支持纯音频、音视频、纯视频之间的切换。
3、为了确保转推链接的稳定，更新转推任务接口（UpdatePublishCdnStream）时不支持更改视频参数（codec）和音频参数（codec、采样率、码率、声道数），其余参数建议全量带齐，如您有转码/非转码切换，其余参数则必须全量带齐。
4、发起单流旁路任务时，AudioParams和VideoParams都填写表示音视频旁路，如果仅填写AudioParams表示纯音频旁路，任务进行过程中不支持纯音频到音视频的切换。音视频旁路时，VideoParams中的Width、Height、Fps、BitRate、Gop需要按照真实上行参数填写。
5、更新转推任务（UpdatePublishCdnStream）必须携带SequenceNumber参数，用于防止请求乱序。客户保证对同一个任务更新时的SequenceNumber参数递增：腾讯云返回InternalError错误码时，需重试请求（不换SequenceNumber）；腾讯云返回FailedOperation.OutdateRequest过期错误码时，无需处理即可。
6、您可以在主播进房前，提前创建转推任务，结束转推任务时需要主动调用停止接口。如果您没有调用停止转推任务接口时，腾讯云后台会按照所有参与混流的用户没有任何数据上行的时间算起，直到超过启动转推任务时设置的超时时间（AgentParams.MaxIdleTime）为止，自动停止混流转推任务。
                 * @param req StartPublishCdnStreamRequest
                 * @return StartPublishCdnStreamOutcome
                 */
                StartPublishCdnStreamOutcome StartPublishCdnStream(const Model::StartPublishCdnStreamRequest &request);
                void StartPublishCdnStreamAsync(const Model::StartPublishCdnStreamRequest& request, const StartPublishCdnStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartPublishCdnStreamOutcomeCallable StartPublishCdnStreamCallable(const Model::StartPublishCdnStreamRequest& request);

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
                 *停止转推任务。
                 * @param req StopPublishCdnStreamRequest
                 * @return StopPublishCdnStreamOutcome
                 */
                StopPublishCdnStreamOutcome StopPublishCdnStream(const Model::StopPublishCdnStreamRequest &request);
                void StopPublishCdnStreamAsync(const Model::StopPublishCdnStreamRequest& request, const StopPublishCdnStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopPublishCdnStreamOutcomeCallable StopPublishCdnStreamCallable(const Model::StopPublishCdnStreamRequest& request);

                /**
                 *更新转推任务。
注：请参见启动转推任务的接口说明和使用说明。
                 * @param req UpdatePublishCdnStreamRequest
                 * @return UpdatePublishCdnStreamOutcome
                 */
                UpdatePublishCdnStreamOutcome UpdatePublishCdnStream(const Model::UpdatePublishCdnStreamRequest &request);
                void UpdatePublishCdnStreamAsync(const Model::UpdatePublishCdnStreamRequest& request, const UpdatePublishCdnStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdatePublishCdnStreamOutcomeCallable UpdatePublishCdnStreamCallable(const Model::UpdatePublishCdnStreamRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_TRTCCLIENT_H_
