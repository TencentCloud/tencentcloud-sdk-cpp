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
#include <tencentcloud/trtc/v20190722/model/CreateTroubleInfoRequest.h>
#include <tencentcloud/trtc/v20190722/model/CreateTroubleInfoResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeAbnormalEventRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeAbnormalEventResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeCallDetailRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeCallDetailResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeDetailEventRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeDetailEventResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeHistoryScaleRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeHistoryScaleResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeRealtimeNetworkRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeRealtimeNetworkResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeRealtimeQualityRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeRealtimeQualityResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeRealtimeScaleRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeRealtimeScaleResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeRoomInformationRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeRoomInformationResponse.h>
#include <tencentcloud/trtc/v20190722/model/DismissRoomRequest.h>
#include <tencentcloud/trtc/v20190722/model/DismissRoomResponse.h>
#include <tencentcloud/trtc/v20190722/model/RemoveUserRequest.h>
#include <tencentcloud/trtc/v20190722/model/RemoveUserResponse.h>
#include <tencentcloud/trtc/v20190722/model/StartMCUMixTranscodeRequest.h>
#include <tencentcloud/trtc/v20190722/model/StartMCUMixTranscodeResponse.h>
#include <tencentcloud/trtc/v20190722/model/StopMCUMixTranscodeRequest.h>
#include <tencentcloud/trtc/v20190722/model/StopMCUMixTranscodeResponse.h>


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

                typedef Outcome<Error, Model::CreateTroubleInfoResponse> CreateTroubleInfoOutcome;
                typedef std::future<CreateTroubleInfoOutcome> CreateTroubleInfoOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::CreateTroubleInfoRequest&, CreateTroubleInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTroubleInfoAsyncHandler;
                typedef Outcome<Error, Model::DescribeAbnormalEventResponse> DescribeAbnormalEventOutcome;
                typedef std::future<DescribeAbnormalEventOutcome> DescribeAbnormalEventOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeAbnormalEventRequest&, DescribeAbnormalEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAbnormalEventAsyncHandler;
                typedef Outcome<Error, Model::DescribeCallDetailResponse> DescribeCallDetailOutcome;
                typedef std::future<DescribeCallDetailOutcome> DescribeCallDetailOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeCallDetailRequest&, DescribeCallDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCallDetailAsyncHandler;
                typedef Outcome<Error, Model::DescribeDetailEventResponse> DescribeDetailEventOutcome;
                typedef std::future<DescribeDetailEventOutcome> DescribeDetailEventOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeDetailEventRequest&, DescribeDetailEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDetailEventAsyncHandler;
                typedef Outcome<Error, Model::DescribeHistoryScaleResponse> DescribeHistoryScaleOutcome;
                typedef std::future<DescribeHistoryScaleOutcome> DescribeHistoryScaleOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeHistoryScaleRequest&, DescribeHistoryScaleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHistoryScaleAsyncHandler;
                typedef Outcome<Error, Model::DescribeRealtimeNetworkResponse> DescribeRealtimeNetworkOutcome;
                typedef std::future<DescribeRealtimeNetworkOutcome> DescribeRealtimeNetworkOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeRealtimeNetworkRequest&, DescribeRealtimeNetworkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRealtimeNetworkAsyncHandler;
                typedef Outcome<Error, Model::DescribeRealtimeQualityResponse> DescribeRealtimeQualityOutcome;
                typedef std::future<DescribeRealtimeQualityOutcome> DescribeRealtimeQualityOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeRealtimeQualityRequest&, DescribeRealtimeQualityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRealtimeQualityAsyncHandler;
                typedef Outcome<Error, Model::DescribeRealtimeScaleResponse> DescribeRealtimeScaleOutcome;
                typedef std::future<DescribeRealtimeScaleOutcome> DescribeRealtimeScaleOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeRealtimeScaleRequest&, DescribeRealtimeScaleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRealtimeScaleAsyncHandler;
                typedef Outcome<Error, Model::DescribeRoomInformationResponse> DescribeRoomInformationOutcome;
                typedef std::future<DescribeRoomInformationOutcome> DescribeRoomInformationOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeRoomInformationRequest&, DescribeRoomInformationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRoomInformationAsyncHandler;
                typedef Outcome<Error, Model::DismissRoomResponse> DismissRoomOutcome;
                typedef std::future<DismissRoomOutcome> DismissRoomOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DismissRoomRequest&, DismissRoomOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DismissRoomAsyncHandler;
                typedef Outcome<Error, Model::RemoveUserResponse> RemoveUserOutcome;
                typedef std::future<RemoveUserOutcome> RemoveUserOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::RemoveUserRequest&, RemoveUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveUserAsyncHandler;
                typedef Outcome<Error, Model::StartMCUMixTranscodeResponse> StartMCUMixTranscodeOutcome;
                typedef std::future<StartMCUMixTranscodeOutcome> StartMCUMixTranscodeOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::StartMCUMixTranscodeRequest&, StartMCUMixTranscodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartMCUMixTranscodeAsyncHandler;
                typedef Outcome<Error, Model::StopMCUMixTranscodeResponse> StopMCUMixTranscodeOutcome;
                typedef std::future<StopMCUMixTranscodeOutcome> StopMCUMixTranscodeOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::StopMCUMixTranscodeRequest&, StopMCUMixTranscodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopMCUMixTranscodeAsyncHandler;



                /**
                 *创建异常信息
                 * @param req CreateTroubleInfoRequest
                 * @return CreateTroubleInfoOutcome
                 */
                CreateTroubleInfoOutcome CreateTroubleInfo(const Model::CreateTroubleInfoRequest &request);
                void CreateTroubleInfoAsync(const Model::CreateTroubleInfoRequest& request, const CreateTroubleInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTroubleInfoOutcomeCallable CreateTroubleInfoCallable(const Model::CreateTroubleInfoRequest& request);

                /**
                 *查询SDKAppID下用户的异常体验事件，返回异常体验ID与可能产生异常体验的原因。可查询24小时内数据，查询起止时间不超过1个小时。支持跨天查询。异常体验ID映射见：https://cloud.tencent.com/document/product/647/44916
                 * @param req DescribeAbnormalEventRequest
                 * @return DescribeAbnormalEventOutcome
                 */
                DescribeAbnormalEventOutcome DescribeAbnormalEvent(const Model::DescribeAbnormalEventRequest &request);
                void DescribeAbnormalEventAsync(const Model::DescribeAbnormalEventRequest& request, const DescribeAbnormalEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAbnormalEventOutcomeCallable DescribeAbnormalEventCallable(const Model::DescribeAbnormalEventRequest& request);

                /**
                 *查询指定时间内的用户列表及用户通话质量数据。可查询5天内数据，查询起止时间不超过1个小时，查询用户不超过6个，不支持跨天查询。
                 * @param req DescribeCallDetailRequest
                 * @return DescribeCallDetailOutcome
                 */
                DescribeCallDetailOutcome DescribeCallDetail(const Model::DescribeCallDetailRequest &request);
                void DescribeCallDetailAsync(const Model::DescribeCallDetailRequest& request, const DescribeCallDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCallDetailOutcomeCallable DescribeCallDetailCallable(const Model::DescribeCallDetailRequest& request);

                /**
                 *查询用户某次通话内的进退房，视频开关等详细事件。可查询5天内数据。
                 * @param req DescribeDetailEventRequest
                 * @return DescribeDetailEventOutcome
                 */
                DescribeDetailEventOutcome DescribeDetailEvent(const Model::DescribeDetailEventRequest &request);
                void DescribeDetailEventAsync(const Model::DescribeDetailEventRequest& request, const DescribeDetailEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDetailEventOutcomeCallable DescribeDetailEventCallable(const Model::DescribeDetailEventRequest& request);

                /**
                 *可查询sdkqppid 每天的房间数和用户数，每分钟1次，可查询最近5天的数据。当天未结束，无法查到当天的房间数与用户数。
                 * @param req DescribeHistoryScaleRequest
                 * @return DescribeHistoryScaleOutcome
                 */
                DescribeHistoryScaleOutcome DescribeHistoryScale(const Model::DescribeHistoryScaleRequest &request);
                void DescribeHistoryScaleAsync(const Model::DescribeHistoryScaleRequest& request, const DescribeHistoryScaleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHistoryScaleOutcomeCallable DescribeHistoryScaleCallable(const Model::DescribeHistoryScaleRequest& request);

                /**
                 *查询sdkappid维度下实时网络状态，包括上行丢包与下行丢包。可查询24小时内数据，查询起止时间不超过1个小时。
                 * @param req DescribeRealtimeNetworkRequest
                 * @return DescribeRealtimeNetworkOutcome
                 */
                DescribeRealtimeNetworkOutcome DescribeRealtimeNetwork(const Model::DescribeRealtimeNetworkRequest &request);
                void DescribeRealtimeNetworkAsync(const Model::DescribeRealtimeNetworkRequest& request, const DescribeRealtimeNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRealtimeNetworkOutcomeCallable DescribeRealtimeNetworkCallable(const Model::DescribeRealtimeNetworkRequest& request);

                /**
                 *查询sdkappid维度下实时质量数据，包括：进房成功率，首帧秒开率，音频卡顿率，视频卡顿率。可查询24小时内数据，查询起止时间不超过1个小时。
                 * @param req DescribeRealtimeQualityRequest
                 * @return DescribeRealtimeQualityOutcome
                 */
                DescribeRealtimeQualityOutcome DescribeRealtimeQuality(const Model::DescribeRealtimeQualityRequest &request);
                void DescribeRealtimeQualityAsync(const Model::DescribeRealtimeQualityRequest& request, const DescribeRealtimeQualityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRealtimeQualityOutcomeCallable DescribeRealtimeQualityCallable(const Model::DescribeRealtimeQualityRequest& request);

                /**
                 *查询sdkappid维度下实时规模，可查询24小时内数据，查询起止时间不超过1个小时。
                 * @param req DescribeRealtimeScaleRequest
                 * @return DescribeRealtimeScaleOutcome
                 */
                DescribeRealtimeScaleOutcome DescribeRealtimeScale(const Model::DescribeRealtimeScaleRequest &request);
                void DescribeRealtimeScaleAsync(const Model::DescribeRealtimeScaleRequest& request, const DescribeRealtimeScaleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRealtimeScaleOutcomeCallable DescribeRealtimeScaleCallable(const Model::DescribeRealtimeScaleRequest& request);

                /**
                 *查询sdkappid下的房间列表。默认返回10条通话，一次最多返回100条通话。可查询5天内的数据。
                 * @param req DescribeRoomInformationRequest
                 * @return DescribeRoomInformationOutcome
                 */
                DescribeRoomInformationOutcome DescribeRoomInformation(const Model::DescribeRoomInformationRequest &request);
                void DescribeRoomInformationAsync(const Model::DescribeRoomInformationRequest& request, const DescribeRoomInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRoomInformationOutcomeCallable DescribeRoomInformationCallable(const Model::DescribeRoomInformationRequest& request);

                /**
                 *接口说明：把房间所有用户从房间移出，解散房间。支持所有平台，Android、iOS、Windows 和 macOS 需升级到 TRTC SDK 6.6及以上版本。
                 * @param req DismissRoomRequest
                 * @return DismissRoomOutcome
                 */
                DismissRoomOutcome DismissRoom(const Model::DismissRoomRequest &request);
                void DismissRoomAsync(const Model::DismissRoomRequest& request, const DismissRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DismissRoomOutcomeCallable DismissRoomCallable(const Model::DismissRoomRequest& request);

                /**
                 *接口说明：将用户从房间移出，适用于主播/房主/管理员踢人等场景。支持所有平台，Android、iOS、Windows 和 macOS 需升级到 TRTC SDK 6.6及以上版本。
                 * @param req RemoveUserRequest
                 * @return RemoveUserOutcome
                 */
                RemoveUserOutcome RemoveUser(const Model::RemoveUserRequest &request);
                void RemoveUserAsync(const Model::RemoveUserRequest& request, const RemoveUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveUserOutcomeCallable RemoveUserCallable(const Model::RemoveUserRequest& request);

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
- 屏幕分享模板：适合视频会议和在线教育场景的布局，屏幕分享（或者主讲的摄像头）始终占据屏幕左侧的大画面位置，其他用户依次垂直排列于右侧，最多两列，每列最多8个小画面。最多支持1个大画面和15个小画面，如果用户只发送音频，仍然会占用画面位置。
                 * @param req StartMCUMixTranscodeRequest
                 * @return StartMCUMixTranscodeOutcome
                 */
                StartMCUMixTranscodeOutcome StartMCUMixTranscode(const Model::StartMCUMixTranscodeRequest &request);
                void StartMCUMixTranscodeAsync(const Model::StartMCUMixTranscodeRequest& request, const StartMCUMixTranscodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartMCUMixTranscodeOutcomeCallable StartMCUMixTranscodeCallable(const Model::StartMCUMixTranscodeRequest& request);

                /**
                 *接口说明：结束云端混流
                 * @param req StopMCUMixTranscodeRequest
                 * @return StopMCUMixTranscodeOutcome
                 */
                StopMCUMixTranscodeOutcome StopMCUMixTranscode(const Model::StopMCUMixTranscodeRequest &request);
                void StopMCUMixTranscodeAsync(const Model::StopMCUMixTranscodeRequest& request, const StopMCUMixTranscodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopMCUMixTranscodeOutcomeCallable StopMCUMixTranscodeCallable(const Model::StopMCUMixTranscodeRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_TRTCCLIENT_H_
