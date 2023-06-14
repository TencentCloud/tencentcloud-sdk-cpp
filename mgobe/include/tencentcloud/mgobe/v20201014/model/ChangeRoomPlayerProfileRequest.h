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

#ifndef TENCENTCLOUD_MGOBE_V20201014_MODEL_CHANGEROOMPLAYERPROFILEREQUEST_H_
#define TENCENTCLOUD_MGOBE_V20201014_MODEL_CHANGEROOMPLAYERPROFILEREQUEST_H_

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
                * ChangeRoomPlayerProfile请求参数结构体
                */
                class ChangeRoomPlayerProfileRequest : public AbstractModel
                {
                public:
                    ChangeRoomPlayerProfileRequest();
                    ~ChangeRoomPlayerProfileRequest() = default;
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
                     * 获取发起修改的玩家Id。
                     * @return PlayerId 发起修改的玩家Id。
                     * 
                     */
                    std::string GetPlayerId() const;

                    /**
                     * 设置发起修改的玩家Id。
                     * @param _playerId 发起修改的玩家Id。
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
                     * 获取需要修改的玩家自定义属性。
                     * @return CustomProfile 需要修改的玩家自定义属性。
                     * 
                     */
                    std::string GetCustomProfile() const;

                    /**
                     * 设置需要修改的玩家自定义属性。
                     * @param _customProfile 需要修改的玩家自定义属性。
                     * 
                     */
                    void SetCustomProfile(const std::string& _customProfile);

                    /**
                     * 判断参数 CustomProfile 是否已赋值
                     * @return CustomProfile 是否已赋值
                     * 
                     */
                    bool CustomProfileHasBeenSet() const;

                private:

                    /**
                     * 游戏资源Id。
                     */
                    std::string m_gameId;
                    bool m_gameIdHasBeenSet;

                    /**
                     * 发起修改的玩家Id。
                     */
                    std::string m_playerId;
                    bool m_playerIdHasBeenSet;

                    /**
                     * 需要修改的玩家自定义属性。
                     */
                    std::string m_customProfile;
                    bool m_customProfileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MGOBE_V20201014_MODEL_CHANGEROOMPLAYERPROFILEREQUEST_H_
