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

#ifndef TENCENTCLOUD_MGOBE_V20201014_MODEL_DESCRIBEROOMREQUEST_H_
#define TENCENTCLOUD_MGOBE_V20201014_MODEL_DESCRIBEROOMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mgobe
    {
        namespace V20201014
        {
            namespace Model
            {
                /**
                * DescribeRoom请求参数结构体
                */
                class DescribeRoomRequest : public AbstractModel
                {
                public:
                    DescribeRoomRequest();
                    ~DescribeRoomRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取游戏资源Id。
                     * @return GameId 游戏资源Id。
                     * 
                     */
                    std::string GetGameId() const;

                    /**
                     * 设置游戏资源Id。
                     * @param _gameId 游戏资源Id。
                     * 
                     */
                    void SetGameId(const std::string& _gameId);

                    /**
                     * 判断参数 GameId 是否已赋值
                     * @return GameId 是否已赋值
                     * 
                     */
                    bool GameIdHasBeenSet() const;

                    /**
                     * 获取玩家Id。当房间Id不传的时候，玩家Id必传，传入玩家Id可以查询当前玩家所在的房间信息，当房间Id传入的时候，优先按照房间Id查询房间信息。
                     * @return PlayerId 玩家Id。当房间Id不传的时候，玩家Id必传，传入玩家Id可以查询当前玩家所在的房间信息，当房间Id传入的时候，优先按照房间Id查询房间信息。
                     * 
                     */
                    std::string GetPlayerId() const;

                    /**
                     * 设置玩家Id。当房间Id不传的时候，玩家Id必传，传入玩家Id可以查询当前玩家所在的房间信息，当房间Id传入的时候，优先按照房间Id查询房间信息。
                     * @param _playerId 玩家Id。当房间Id不传的时候，玩家Id必传，传入玩家Id可以查询当前玩家所在的房间信息，当房间Id传入的时候，优先按照房间Id查询房间信息。
                     * 
                     */
                    void SetPlayerId(const std::string& _playerId);

                    /**
                     * 判断参数 PlayerId 是否已赋值
                     * @return PlayerId 是否已赋值
                     * 
                     */
                    bool PlayerIdHasBeenSet() const;

                    /**
                     * 获取房间Id。
                     * @return RoomId 房间Id。
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置房间Id。
                     * @param _roomId 房间Id。
                     * 
                     */
                    void SetRoomId(const std::string& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                private:

                    /**
                     * 游戏资源Id。
                     */
                    std::string m_gameId;
                    bool m_gameIdHasBeenSet;

                    /**
                     * 玩家Id。当房间Id不传的时候，玩家Id必传，传入玩家Id可以查询当前玩家所在的房间信息，当房间Id传入的时候，优先按照房间Id查询房间信息。
                     */
                    std::string m_playerId;
                    bool m_playerIdHasBeenSet;

                    /**
                     * 房间Id。
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MGOBE_V20201014_MODEL_DESCRIBEROOMREQUEST_H_
