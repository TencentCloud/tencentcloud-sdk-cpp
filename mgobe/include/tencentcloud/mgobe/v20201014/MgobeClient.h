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

#ifndef TENCENTCLOUD_MGOBE_V20201014_MGOBECLIENT_H_
#define TENCENTCLOUD_MGOBE_V20201014_MGOBECLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/mgobe/v20201014/model/ChangeRoomPlayerProfileRequest.h>
#include <tencentcloud/mgobe/v20201014/model/ChangeRoomPlayerProfileResponse.h>
#include <tencentcloud/mgobe/v20201014/model/ChangeRoomPlayerStatusRequest.h>
#include <tencentcloud/mgobe/v20201014/model/ChangeRoomPlayerStatusResponse.h>
#include <tencentcloud/mgobe/v20201014/model/DescribePlayerRequest.h>
#include <tencentcloud/mgobe/v20201014/model/DescribePlayerResponse.h>
#include <tencentcloud/mgobe/v20201014/model/DescribeRoomRequest.h>
#include <tencentcloud/mgobe/v20201014/model/DescribeRoomResponse.h>
#include <tencentcloud/mgobe/v20201014/model/DismissRoomRequest.h>
#include <tencentcloud/mgobe/v20201014/model/DismissRoomResponse.h>
#include <tencentcloud/mgobe/v20201014/model/ModifyRoomRequest.h>
#include <tencentcloud/mgobe/v20201014/model/ModifyRoomResponse.h>
#include <tencentcloud/mgobe/v20201014/model/RemoveRoomPlayerRequest.h>
#include <tencentcloud/mgobe/v20201014/model/RemoveRoomPlayerResponse.h>


namespace TencentCloud
{
    namespace Mgobe
    {
        namespace V20201014
        {
            class MgobeClient : public AbstractClient
            {
            public:
                MgobeClient(const Credential &credential, const std::string &region);
                MgobeClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ChangeRoomPlayerProfileResponse> ChangeRoomPlayerProfileOutcome;
                typedef std::future<ChangeRoomPlayerProfileOutcome> ChangeRoomPlayerProfileOutcomeCallable;
                typedef std::function<void(const MgobeClient*, const Model::ChangeRoomPlayerProfileRequest&, ChangeRoomPlayerProfileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChangeRoomPlayerProfileAsyncHandler;
                typedef Outcome<Core::Error, Model::ChangeRoomPlayerStatusResponse> ChangeRoomPlayerStatusOutcome;
                typedef std::future<ChangeRoomPlayerStatusOutcome> ChangeRoomPlayerStatusOutcomeCallable;
                typedef std::function<void(const MgobeClient*, const Model::ChangeRoomPlayerStatusRequest&, ChangeRoomPlayerStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChangeRoomPlayerStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePlayerResponse> DescribePlayerOutcome;
                typedef std::future<DescribePlayerOutcome> DescribePlayerOutcomeCallable;
                typedef std::function<void(const MgobeClient*, const Model::DescribePlayerRequest&, DescribePlayerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePlayerAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRoomResponse> DescribeRoomOutcome;
                typedef std::future<DescribeRoomOutcome> DescribeRoomOutcomeCallable;
                typedef std::function<void(const MgobeClient*, const Model::DescribeRoomRequest&, DescribeRoomOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRoomAsyncHandler;
                typedef Outcome<Core::Error, Model::DismissRoomResponse> DismissRoomOutcome;
                typedef std::future<DismissRoomOutcome> DismissRoomOutcomeCallable;
                typedef std::function<void(const MgobeClient*, const Model::DismissRoomRequest&, DismissRoomOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DismissRoomAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRoomResponse> ModifyRoomOutcome;
                typedef std::future<ModifyRoomOutcome> ModifyRoomOutcomeCallable;
                typedef std::function<void(const MgobeClient*, const Model::ModifyRoomRequest&, ModifyRoomOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRoomAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveRoomPlayerResponse> RemoveRoomPlayerOutcome;
                typedef std::future<RemoveRoomPlayerOutcome> RemoveRoomPlayerOutcomeCallable;
                typedef std::function<void(const MgobeClient*, const Model::RemoveRoomPlayerRequest&, RemoveRoomPlayerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveRoomPlayerAsyncHandler;



                /**
                 *此接口无法使用，游戏联机对战引擎MGOBE已于6.1正式下架，感谢您的支持

修改房间玩家自定义属性
                 * @param req ChangeRoomPlayerProfileRequest
                 * @return ChangeRoomPlayerProfileOutcome
                 */
                ChangeRoomPlayerProfileOutcome ChangeRoomPlayerProfile(const Model::ChangeRoomPlayerProfileRequest &request);
                void ChangeRoomPlayerProfileAsync(const Model::ChangeRoomPlayerProfileRequest& request, const ChangeRoomPlayerProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChangeRoomPlayerProfileOutcomeCallable ChangeRoomPlayerProfileCallable(const Model::ChangeRoomPlayerProfileRequest& request);

                /**
                 *此接口无法使用，游戏联机对战引擎MGOBE已于6.1正式下架，感谢您的支持

修改玩家自定义状态
                 * @param req ChangeRoomPlayerStatusRequest
                 * @return ChangeRoomPlayerStatusOutcome
                 */
                ChangeRoomPlayerStatusOutcome ChangeRoomPlayerStatus(const Model::ChangeRoomPlayerStatusRequest &request);
                void ChangeRoomPlayerStatusAsync(const Model::ChangeRoomPlayerStatusRequest& request, const ChangeRoomPlayerStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChangeRoomPlayerStatusOutcomeCallable ChangeRoomPlayerStatusCallable(const Model::ChangeRoomPlayerStatusRequest& request);

                /**
                 *此接口无法使用，游戏联机对战引擎MGOBE已于6.1正式下架，感谢您的支持

该接口用于查询玩家信息。支持两种用法，当OpenId不传的时候，PlayerId必传，传入PlayerId可以查询当前PlayerId的玩家信息，当OpenId传入的时候，PlayerId可不传，按照OpenId查询玩家信息。
                 * @param req DescribePlayerRequest
                 * @return DescribePlayerOutcome
                 */
                DescribePlayerOutcome DescribePlayer(const Model::DescribePlayerRequest &request);
                void DescribePlayerAsync(const Model::DescribePlayerRequest& request, const DescribePlayerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePlayerOutcomeCallable DescribePlayerCallable(const Model::DescribePlayerRequest& request);

                /**
                 *此接口无法使用，游戏联机对战引擎MGOBE已于6.1正式下架，感谢您的支持

该接口用于查询房间信息。支持两种用法，当房间Id不传的时候，玩家Id必传，传入玩家Id可以查询当前玩家所在的房间信息，当房间Id传入的时候，玩家Id可不传，按照房间Id查询房间信息。
                 * @param req DescribeRoomRequest
                 * @return DescribeRoomOutcome
                 */
                DescribeRoomOutcome DescribeRoom(const Model::DescribeRoomRequest &request);
                void DescribeRoomAsync(const Model::DescribeRoomRequest& request, const DescribeRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRoomOutcomeCallable DescribeRoomCallable(const Model::DescribeRoomRequest& request);

                /**
                 *此接口无法使用，游戏联机对战引擎MGOBE已于6.1正式下架，感谢您的支持

通过game_id、room_id解散房间
                 * @param req DismissRoomRequest
                 * @return DismissRoomOutcome
                 */
                DismissRoomOutcome DismissRoom(const Model::DismissRoomRequest &request);
                void DismissRoomAsync(const Model::DismissRoomRequest& request, const DismissRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DismissRoomOutcomeCallable DismissRoomCallable(const Model::DismissRoomRequest& request);

                /**
                 *此接口无法使用，游戏联机对战引擎MGOBE已于6.1正式下架，感谢您的支持

修改房间
                 * @param req ModifyRoomRequest
                 * @return ModifyRoomOutcome
                 */
                ModifyRoomOutcome ModifyRoom(const Model::ModifyRoomRequest &request);
                void ModifyRoomAsync(const Model::ModifyRoomRequest& request, const ModifyRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRoomOutcomeCallable ModifyRoomCallable(const Model::ModifyRoomRequest& request);

                /**
                 *此接口无法使用，游戏联机对战引擎MGOBE已于6.1正式下架，感谢您的支持

踢出房间玩家
                 * @param req RemoveRoomPlayerRequest
                 * @return RemoveRoomPlayerOutcome
                 */
                RemoveRoomPlayerOutcome RemoveRoomPlayer(const Model::RemoveRoomPlayerRequest &request);
                void RemoveRoomPlayerAsync(const Model::RemoveRoomPlayerRequest& request, const RemoveRoomPlayerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveRoomPlayerOutcomeCallable RemoveRoomPlayerCallable(const Model::RemoveRoomPlayerRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_MGOBE_V20201014_MGOBECLIENT_H_
