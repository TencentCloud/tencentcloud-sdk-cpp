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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEPLAYERSESSIONSREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEPLAYERSESSIONSREQUEST_H_

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
                * DescribePlayerSessions请求参数结构体
                */
                class DescribePlayerSessionsRequest : public AbstractModel
                {
                public:
                    DescribePlayerSessionsRequest();
                    ~DescribePlayerSessionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取游戏服务器会话ID，最小长度不小于1个ASCII字符，最大长度不超过48个ASCII字符
                     * @return GameServerSessionId 游戏服务器会话ID，最小长度不小于1个ASCII字符，最大长度不超过48个ASCII字符
                     * 
                     */
                    std::string GetGameServerSessionId() const;

                    /**
                     * 设置游戏服务器会话ID，最小长度不小于1个ASCII字符，最大长度不超过48个ASCII字符
                     * @param _gameServerSessionId 游戏服务器会话ID，最小长度不小于1个ASCII字符，最大长度不超过48个ASCII字符
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
                     * 获取单次查询记录数上限
                     * @return Limit 单次查询记录数上限
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置单次查询记录数上限
                     * @param _limit 单次查询记录数上限
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取页偏移，用于查询下一页，最小长度不小于1个ASCII字符，最大长度不超过1024个ASCII字符
                     * @return NextToken 页偏移，用于查询下一页，最小长度不小于1个ASCII字符，最大长度不超过1024个ASCII字符
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 设置页偏移，用于查询下一页，最小长度不小于1个ASCII字符，最大长度不超过1024个ASCII字符
                     * @param _nextToken 页偏移，用于查询下一页，最小长度不小于1个ASCII字符，最大长度不超过1024个ASCII字符
                     * 
                     */
                    void SetNextToken(const std::string& _nextToken);

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

                    /**
                     * 获取玩家ID，最小长度不小于1个ASCII字符，最大长度不超过1024个ASCII字符
                     * @return PlayerId 玩家ID，最小长度不小于1个ASCII字符，最大长度不超过1024个ASCII字符
                     * 
                     */
                    std::string GetPlayerId() const;

                    /**
                     * 设置玩家ID，最小长度不小于1个ASCII字符，最大长度不超过1024个ASCII字符
                     * @param _playerId 玩家ID，最小长度不小于1个ASCII字符，最大长度不超过1024个ASCII字符
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
                     * 获取玩家会话ID，最小长度不小于1个ASCII字符，最大长度不超过1024个ASCII字符
                     * @return PlayerSessionId 玩家会话ID，最小长度不小于1个ASCII字符，最大长度不超过1024个ASCII字符
                     * 
                     */
                    std::string GetPlayerSessionId() const;

                    /**
                     * 设置玩家会话ID，最小长度不小于1个ASCII字符，最大长度不超过1024个ASCII字符
                     * @param _playerSessionId 玩家会话ID，最小长度不小于1个ASCII字符，最大长度不超过1024个ASCII字符
                     * 
                     */
                    void SetPlayerSessionId(const std::string& _playerSessionId);

                    /**
                     * 判断参数 PlayerSessionId 是否已赋值
                     * @return PlayerSessionId 是否已赋值
                     * 
                     */
                    bool PlayerSessionIdHasBeenSet() const;

                    /**
                     * 获取玩家会话状态（RESERVED,ACTIVE,COMPLETED,TIMEDOUT）
                     * @return PlayerSessionStatusFilter 玩家会话状态（RESERVED,ACTIVE,COMPLETED,TIMEDOUT）
                     * 
                     */
                    std::string GetPlayerSessionStatusFilter() const;

                    /**
                     * 设置玩家会话状态（RESERVED,ACTIVE,COMPLETED,TIMEDOUT）
                     * @param _playerSessionStatusFilter 玩家会话状态（RESERVED,ACTIVE,COMPLETED,TIMEDOUT）
                     * 
                     */
                    void SetPlayerSessionStatusFilter(const std::string& _playerSessionStatusFilter);

                    /**
                     * 判断参数 PlayerSessionStatusFilter 是否已赋值
                     * @return PlayerSessionStatusFilter 是否已赋值
                     * 
                     */
                    bool PlayerSessionStatusFilterHasBeenSet() const;

                private:

                    /**
                     * 游戏服务器会话ID，最小长度不小于1个ASCII字符，最大长度不超过48个ASCII字符
                     */
                    std::string m_gameServerSessionId;
                    bool m_gameServerSessionIdHasBeenSet;

                    /**
                     * 单次查询记录数上限
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 页偏移，用于查询下一页，最小长度不小于1个ASCII字符，最大长度不超过1024个ASCII字符
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                    /**
                     * 玩家ID，最小长度不小于1个ASCII字符，最大长度不超过1024个ASCII字符
                     */
                    std::string m_playerId;
                    bool m_playerIdHasBeenSet;

                    /**
                     * 玩家会话ID，最小长度不小于1个ASCII字符，最大长度不超过1024个ASCII字符
                     */
                    std::string m_playerSessionId;
                    bool m_playerSessionIdHasBeenSet;

                    /**
                     * 玩家会话状态（RESERVED,ACTIVE,COMPLETED,TIMEDOUT）
                     */
                    std::string m_playerSessionStatusFilter;
                    bool m_playerSessionStatusFilterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEPLAYERSESSIONSREQUEST_H_
