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

#ifndef TENCENTCLOUD_MGOBE_V20201014_MODEL_CHANGEROOMPLAYERSTATUSREQUEST_H_
#define TENCENTCLOUD_MGOBE_V20201014_MODEL_CHANGEROOMPLAYERSTATUSREQUEST_H_

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
                * ChangeRoomPlayerStatus请求参数结构体
                */
                class ChangeRoomPlayerStatusRequest : public AbstractModel
                {
                public:
                    ChangeRoomPlayerStatusRequest();
                    ~ChangeRoomPlayerStatusRequest() = default;
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
                     * 获取玩家自定义状态。
                     * @return CustomStatus 玩家自定义状态。
                     * 
                     */
                    uint64_t GetCustomStatus() const;

                    /**
                     * 设置玩家自定义状态。
                     * @param _customStatus 玩家自定义状态。
                     * 
                     */
                    void SetCustomStatus(const uint64_t& _customStatus);

                    /**
                     * 判断参数 CustomStatus 是否已赋值
                     * @return CustomStatus 是否已赋值
                     * 
                     */
                    bool CustomStatusHasBeenSet() const;

                    /**
                     * 获取玩家id。
                     * @return PlayerId 玩家id。
                     * 
                     */
                    std::string GetPlayerId() const;

                    /**
                     * 设置玩家id。
                     * @param _playerId 玩家id。
                     * 
                     */
                    void SetPlayerId(const std::string& _playerId);

                    /**
                     * 判断参数 PlayerId 是否已赋值
                     * @return PlayerId 是否已赋值
                     * 
                     */
                    bool PlayerIdHasBeenSet() const;

                private:

                    /**
                     * 游戏资源Id。
                     */
                    std::string m_gameId;
                    bool m_gameIdHasBeenSet;

                    /**
                     * 玩家自定义状态。
                     */
                    uint64_t m_customStatus;
                    bool m_customStatusHasBeenSet;

                    /**
                     * 玩家id。
                     */
                    std::string m_playerId;
                    bool m_playerIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MGOBE_V20201014_MODEL_CHANGEROOMPLAYERSTATUSREQUEST_H_
