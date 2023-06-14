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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEGAMESERVERSESSIONSREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEGAMESERVERSESSIONSREQUEST_H_

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
                * DescribeGameServerSessions请求参数结构体
                */
                class DescribeGameServerSessionsRequest : public AbstractModel
                {
                public:
                    DescribeGameServerSessionsRequest();
                    ~DescribeGameServerSessionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取别名ID
                     * @return AliasId 别名ID
                     * 
                     */
                    std::string GetAliasId() const;

                    /**
                     * 设置别名ID
                     * @param _aliasId 别名ID
                     * 
                     */
                    void SetAliasId(const std::string& _aliasId);

                    /**
                     * 判断参数 AliasId 是否已赋值
                     * @return AliasId 是否已赋值
                     * 
                     */
                    bool AliasIdHasBeenSet() const;

                    /**
                     * 获取舰队ID
                     * @return FleetId 舰队ID
                     * 
                     */
                    std::string GetFleetId() const;

                    /**
                     * 设置舰队ID
                     * @param _fleetId 舰队ID
                     * 
                     */
                    void SetFleetId(const std::string& _fleetId);

                    /**
                     * 判断参数 FleetId 是否已赋值
                     * @return FleetId 是否已赋值
                     * 
                     */
                    bool FleetIdHasBeenSet() const;

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
                     * 获取游戏服务器会话状态(ACTIVE,ACTIVATING,TERMINATED,TERMINATING,ERROR)
                     * @return StatusFilter 游戏服务器会话状态(ACTIVE,ACTIVATING,TERMINATED,TERMINATING,ERROR)
                     * 
                     */
                    std::string GetStatusFilter() const;

                    /**
                     * 设置游戏服务器会话状态(ACTIVE,ACTIVATING,TERMINATED,TERMINATING,ERROR)
                     * @param _statusFilter 游戏服务器会话状态(ACTIVE,ACTIVATING,TERMINATED,TERMINATING,ERROR)
                     * 
                     */
                    void SetStatusFilter(const std::string& _statusFilter);

                    /**
                     * 判断参数 StatusFilter 是否已赋值
                     * @return StatusFilter 是否已赋值
                     * 
                     */
                    bool StatusFilterHasBeenSet() const;

                private:

                    /**
                     * 别名ID
                     */
                    std::string m_aliasId;
                    bool m_aliasIdHasBeenSet;

                    /**
                     * 舰队ID
                     */
                    std::string m_fleetId;
                    bool m_fleetIdHasBeenSet;

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
                     * 游戏服务器会话状态(ACTIVE,ACTIVATING,TERMINATED,TERMINATING,ERROR)
                     */
                    std::string m_statusFilter;
                    bool m_statusFilterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEGAMESERVERSESSIONSREQUEST_H_
