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
#include <tencentcloud/trtc/v20190722/model/DescribeCallDetailRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeCallDetailResponse.h>
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

                typedef Outcome<Error, Model::DescribeCallDetailResponse> DescribeCallDetailOutcome;
                typedef std::future<DescribeCallDetailOutcome> DescribeCallDetailOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeCallDetailRequest&, DescribeCallDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCallDetailAsyncHandler;
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



                /**
                 *查询指定时间内的用户列表及用户通话质量数据。
                 * @param req DescribeCallDetailRequest
                 * @return DescribeCallDetailOutcome
                 */
                DescribeCallDetailOutcome DescribeCallDetail(const Model::DescribeCallDetailRequest &request);
                void DescribeCallDetailAsync(const Model::DescribeCallDetailRequest& request, const DescribeCallDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCallDetailOutcomeCallable DescribeCallDetailCallable(const Model::DescribeCallDetailRequest& request);

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
                 *查询sdkappid下的房间列表。默认返回10条通话，一次最多返回100条通话。可查询最近5天的数据。
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

            };
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_TRTCCLIENT_H_
