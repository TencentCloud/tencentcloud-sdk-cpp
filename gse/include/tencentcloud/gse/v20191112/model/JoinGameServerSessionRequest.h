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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_JOINGAMESERVERSESSIONREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_JOINGAMESERVERSESSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * JoinGameServerSession请求参数结构体
                */
                class JoinGameServerSessionRequest : public AbstractModel
                {
                public:
                    JoinGameServerSessionRequest();
                    ~JoinGameServerSessionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取游戏服务器会话ID，最小长度1个ASCII字符，最大长度不超过256个ASCII字符
                     * @return GameServerSessionId 游戏服务器会话ID，最小长度1个ASCII字符，最大长度不超过256个ASCII字符
                     * 
                     */
                    std::string GetGameServerSessionId() const;

                    /**
                     * 设置游戏服务器会话ID，最小长度1个ASCII字符，最大长度不超过256个ASCII字符
                     * @param _gameServerSessionId 游戏服务器会话ID，最小长度1个ASCII字符，最大长度不超过256个ASCII字符
                     * 
                     */
                    void SetGameServerSessionId(const std::string& _gameServerSessionId);

                    /**
                     * 判断参数 GameServerSessionId 是否已赋值
                     * @return GameServerSessionId 是否已赋值
                     * 
                     */
                    bool GameServerSessionIdHasBeenSet() const;

                    /**
                     * 获取玩家ID，最大长度1024个ASCII字符
                     * @return PlayerId 玩家ID，最大长度1024个ASCII字符
                     * 
                     */
                    std::string GetPlayerId() const;

                    /**
                     * 设置玩家ID，最大长度1024个ASCII字符
                     * @param _playerId 玩家ID，最大长度1024个ASCII字符
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
                     * 获取玩家自定义数据，最大长度2048个ASCII字符
                     * @return PlayerData 玩家自定义数据，最大长度2048个ASCII字符
                     * 
                     */
                    std::string GetPlayerData() const;

                    /**
                     * 设置玩家自定义数据，最大长度2048个ASCII字符
                     * @param _playerData 玩家自定义数据，最大长度2048个ASCII字符
                     * 
                     */
                    void SetPlayerData(const std::string& _playerData);

                    /**
                     * 判断参数 PlayerData 是否已赋值
                     * @return PlayerData 是否已赋值
                     * 
                     */
                    bool PlayerDataHasBeenSet() const;

                private:

                    /**
                     * 游戏服务器会话ID，最小长度1个ASCII字符，最大长度不超过256个ASCII字符
                     */
                    std::string m_gameServerSessionId;
                    bool m_gameServerSessionIdHasBeenSet;

                    /**
                     * 玩家ID，最大长度1024个ASCII字符
                     */
                    std::string m_playerId;
                    bool m_playerIdHasBeenSet;

                    /**
                     * 玩家自定义数据，最大长度2048个ASCII字符
                     */
                    std::string m_playerData;
                    bool m_playerDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_JOINGAMESERVERSESSIONREQUEST_H_
