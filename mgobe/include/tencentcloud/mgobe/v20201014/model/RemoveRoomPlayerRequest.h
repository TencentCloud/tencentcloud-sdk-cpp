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

#ifndef TENCENTCLOUD_MGOBE_V20201014_MODEL_REMOVEROOMPLAYERREQUEST_H_
#define TENCENTCLOUD_MGOBE_V20201014_MODEL_REMOVEROOMPLAYERREQUEST_H_

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
                * RemoveRoomPlayer请求参数结构体
                */
                class RemoveRoomPlayerRequest : public AbstractModel
                {
                public:
                    RemoveRoomPlayerRequest();
                    ~RemoveRoomPlayerRequest() = default;
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
                     * 获取被踢出房间的玩家Id。
                     * @return RemovePlayerId 被踢出房间的玩家Id。
                     * 
                     */
                    std::string GetRemovePlayerId() const;

                    /**
                     * 设置被踢出房间的玩家Id。
                     * @param _removePlayerId 被踢出房间的玩家Id。
                     * 
                     */
                    void SetRemovePlayerId(const std::string& _removePlayerId);

                    /**
                     * 判断参数 RemovePlayerId 是否已赋值
                     * @return RemovePlayerId 是否已赋值
                     * 
                     */
                    bool RemovePlayerIdHasBeenSet() const;

                private:

                    /**
                     * 游戏资源Id。
                     */
                    std::string m_gameId;
                    bool m_gameIdHasBeenSet;

                    /**
                     * 被踢出房间的玩家Id。
                     */
                    std::string m_removePlayerId;
                    bool m_removePlayerIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MGOBE_V20201014_MODEL_REMOVEROOMPLAYERREQUEST_H_
