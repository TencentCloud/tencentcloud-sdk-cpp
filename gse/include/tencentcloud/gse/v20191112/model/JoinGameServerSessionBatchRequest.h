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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_JOINGAMESERVERSESSIONBATCHREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_JOINGAMESERVERSESSIONBATCHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gse/v20191112/model/PlayerDataMap.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * JoinGameServerSessionBatch请求参数结构体
                */
                class JoinGameServerSessionBatchRequest : public AbstractModel
                {
                public:
                    JoinGameServerSessionBatchRequest();
                    ~JoinGameServerSessionBatchRequest() = default;
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
                     * 获取玩家ID列表，最小1组，最大25组
                     * @return PlayerIds 玩家ID列表，最小1组，最大25组
                     * 
                     */
                    std::vector<std::string> GetPlayerIds() const;

                    /**
                     * 设置玩家ID列表，最小1组，最大25组
                     * @param _playerIds 玩家ID列表，最小1组，最大25组
                     * 
                     */
                    void SetPlayerIds(const std::vector<std::string>& _playerIds);

                    /**
                     * 判断参数 PlayerIds 是否已赋值
                     * @return PlayerIds 是否已赋值
                     * 
                     */
                    bool PlayerIdsHasBeenSet() const;

                    /**
                     * 获取玩家自定义数据
                     * @return PlayerDataMap 玩家自定义数据
                     * 
                     */
                    PlayerDataMap GetPlayerDataMap() const;

                    /**
                     * 设置玩家自定义数据
                     * @param _playerDataMap 玩家自定义数据
                     * 
                     */
                    void SetPlayerDataMap(const PlayerDataMap& _playerDataMap);

                    /**
                     * 判断参数 PlayerDataMap 是否已赋值
                     * @return PlayerDataMap 是否已赋值
                     * 
                     */
                    bool PlayerDataMapHasBeenSet() const;

                private:

                    /**
                     * 游戏服务器会话ID，最小长度1个ASCII字符，最大长度不超过256个ASCII字符
                     */
                    std::string m_gameServerSessionId;
                    bool m_gameServerSessionIdHasBeenSet;

                    /**
                     * 玩家ID列表，最小1组，最大25组
                     */
                    std::vector<std::string> m_playerIds;
                    bool m_playerIdsHasBeenSet;

                    /**
                     * 玩家自定义数据
                     */
                    PlayerDataMap m_playerDataMap;
                    bool m_playerDataMapHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_JOINGAMESERVERSESSIONBATCHREQUEST_H_
