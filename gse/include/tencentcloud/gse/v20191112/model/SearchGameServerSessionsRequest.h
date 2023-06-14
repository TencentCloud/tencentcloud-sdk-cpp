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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_SEARCHGAMESERVERSESSIONSREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_SEARCHGAMESERVERSESSIONSREQUEST_H_

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
                * SearchGameServerSessions请求参数结构体
                */
                class SearchGameServerSessionsRequest : public AbstractModel
                {
                public:
                    SearchGameServerSessionsRequest();
                    ~SearchGameServerSessionsRequest() = default;
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
                     * 获取搜索条件表达式，支持如下变量
gameServerSessionName 游戏会话名称 String
gameServerSessionId 游戏会话ID String
maximumSessions 最大的玩家会话数 Number
creationTimeMillis 创建时间，单位：毫秒 Number
playerSessionCount 当前玩家会话数 Number
hasAvailablePlayerSessions 是否有可用玩家数 String 取值true或false
gameServerSessionProperties 游戏会话属性 String

表达式String类型 等于=，不等于<>判断
表示Number类型支持 =,<>,>,>=,<,<=

例如：
FilterExpression取值
playerSessionCount>=2 AND hasAvailablePlayerSessions=true"
表示查找至少有两个玩家，而且有可用玩家会话的游戏会话。
FilterExpression取值
gameServerSessionProperties.K1 = 'V1' AND gameServerSessionProperties.K2 = 'V2' OR gameServerSessionProperties.K3 = 'V3'

表示
查询满足如下游戏服务器会话属性的游戏会话
{
    "GameProperties":[
        {
            "Key":"K1",
            "Value":"V1"
        },
        {
            "Key":"K2",
            "Value":"V2"
        },
        {
            "Key":"K3",
            "Value":"V3"
        }
    ]
}
                     * @return FilterExpression 搜索条件表达式，支持如下变量
gameServerSessionName 游戏会话名称 String
gameServerSessionId 游戏会话ID String
maximumSessions 最大的玩家会话数 Number
creationTimeMillis 创建时间，单位：毫秒 Number
playerSessionCount 当前玩家会话数 Number
hasAvailablePlayerSessions 是否有可用玩家数 String 取值true或false
gameServerSessionProperties 游戏会话属性 String

表达式String类型 等于=，不等于<>判断
表示Number类型支持 =,<>,>,>=,<,<=

例如：
FilterExpression取值
playerSessionCount>=2 AND hasAvailablePlayerSessions=true"
表示查找至少有两个玩家，而且有可用玩家会话的游戏会话。
FilterExpression取值
gameServerSessionProperties.K1 = 'V1' AND gameServerSessionProperties.K2 = 'V2' OR gameServerSessionProperties.K3 = 'V3'

表示
查询满足如下游戏服务器会话属性的游戏会话
{
    "GameProperties":[
        {
            "Key":"K1",
            "Value":"V1"
        },
        {
            "Key":"K2",
            "Value":"V2"
        },
        {
            "Key":"K3",
            "Value":"V3"
        }
    ]
}
                     * 
                     */
                    std::string GetFilterExpression() const;

                    /**
                     * 设置搜索条件表达式，支持如下变量
gameServerSessionName 游戏会话名称 String
gameServerSessionId 游戏会话ID String
maximumSessions 最大的玩家会话数 Number
creationTimeMillis 创建时间，单位：毫秒 Number
playerSessionCount 当前玩家会话数 Number
hasAvailablePlayerSessions 是否有可用玩家数 String 取值true或false
gameServerSessionProperties 游戏会话属性 String

表达式String类型 等于=，不等于<>判断
表示Number类型支持 =,<>,>,>=,<,<=

例如：
FilterExpression取值
playerSessionCount>=2 AND hasAvailablePlayerSessions=true"
表示查找至少有两个玩家，而且有可用玩家会话的游戏会话。
FilterExpression取值
gameServerSessionProperties.K1 = 'V1' AND gameServerSessionProperties.K2 = 'V2' OR gameServerSessionProperties.K3 = 'V3'

表示
查询满足如下游戏服务器会话属性的游戏会话
{
    "GameProperties":[
        {
            "Key":"K1",
            "Value":"V1"
        },
        {
            "Key":"K2",
            "Value":"V2"
        },
        {
            "Key":"K3",
            "Value":"V3"
        }
    ]
}
                     * @param _filterExpression 搜索条件表达式，支持如下变量
gameServerSessionName 游戏会话名称 String
gameServerSessionId 游戏会话ID String
maximumSessions 最大的玩家会话数 Number
creationTimeMillis 创建时间，单位：毫秒 Number
playerSessionCount 当前玩家会话数 Number
hasAvailablePlayerSessions 是否有可用玩家数 String 取值true或false
gameServerSessionProperties 游戏会话属性 String

表达式String类型 等于=，不等于<>判断
表示Number类型支持 =,<>,>,>=,<,<=

例如：
FilterExpression取值
playerSessionCount>=2 AND hasAvailablePlayerSessions=true"
表示查找至少有两个玩家，而且有可用玩家会话的游戏会话。
FilterExpression取值
gameServerSessionProperties.K1 = 'V1' AND gameServerSessionProperties.K2 = 'V2' OR gameServerSessionProperties.K3 = 'V3'

表示
查询满足如下游戏服务器会话属性的游戏会话
{
    "GameProperties":[
        {
            "Key":"K1",
            "Value":"V1"
        },
        {
            "Key":"K2",
            "Value":"V2"
        },
        {
            "Key":"K3",
            "Value":"V3"
        }
    ]
}
                     * 
                     */
                    void SetFilterExpression(const std::string& _filterExpression);

                    /**
                     * 判断参数 FilterExpression 是否已赋值
                     * @return FilterExpression 是否已赋值
                     * 
                     */
                    bool FilterExpressionHasBeenSet() const;

                    /**
                     * 获取排序条件关键字
支持排序字段
gameServerSessionName 游戏会话名称 String
gameServerSessionId 游戏会话ID String
maximumSessions 最大的玩家会话数 Number
creationTimeMillis 创建时间，单位：毫秒 Number
playerSessionCount 当前玩家会话数 Number
                     * @return SortExpression 排序条件关键字
支持排序字段
gameServerSessionName 游戏会话名称 String
gameServerSessionId 游戏会话ID String
maximumSessions 最大的玩家会话数 Number
creationTimeMillis 创建时间，单位：毫秒 Number
playerSessionCount 当前玩家会话数 Number
                     * 
                     */
                    std::string GetSortExpression() const;

                    /**
                     * 设置排序条件关键字
支持排序字段
gameServerSessionName 游戏会话名称 String
gameServerSessionId 游戏会话ID String
maximumSessions 最大的玩家会话数 Number
creationTimeMillis 创建时间，单位：毫秒 Number
playerSessionCount 当前玩家会话数 Number
                     * @param _sortExpression 排序条件关键字
支持排序字段
gameServerSessionName 游戏会话名称 String
gameServerSessionId 游戏会话ID String
maximumSessions 最大的玩家会话数 Number
creationTimeMillis 创建时间，单位：毫秒 Number
playerSessionCount 当前玩家会话数 Number
                     * 
                     */
                    void SetSortExpression(const std::string& _sortExpression);

                    /**
                     * 判断参数 SortExpression 是否已赋值
                     * @return SortExpression 是否已赋值
                     * 
                     */
                    bool SortExpressionHasBeenSet() const;

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
                     * 搜索条件表达式，支持如下变量
gameServerSessionName 游戏会话名称 String
gameServerSessionId 游戏会话ID String
maximumSessions 最大的玩家会话数 Number
creationTimeMillis 创建时间，单位：毫秒 Number
playerSessionCount 当前玩家会话数 Number
hasAvailablePlayerSessions 是否有可用玩家数 String 取值true或false
gameServerSessionProperties 游戏会话属性 String

表达式String类型 等于=，不等于<>判断
表示Number类型支持 =,<>,>,>=,<,<=

例如：
FilterExpression取值
playerSessionCount>=2 AND hasAvailablePlayerSessions=true"
表示查找至少有两个玩家，而且有可用玩家会话的游戏会话。
FilterExpression取值
gameServerSessionProperties.K1 = 'V1' AND gameServerSessionProperties.K2 = 'V2' OR gameServerSessionProperties.K3 = 'V3'

表示
查询满足如下游戏服务器会话属性的游戏会话
{
    "GameProperties":[
        {
            "Key":"K1",
            "Value":"V1"
        },
        {
            "Key":"K2",
            "Value":"V2"
        },
        {
            "Key":"K3",
            "Value":"V3"
        }
    ]
}
                     */
                    std::string m_filterExpression;
                    bool m_filterExpressionHasBeenSet;

                    /**
                     * 排序条件关键字
支持排序字段
gameServerSessionName 游戏会话名称 String
gameServerSessionId 游戏会话ID String
maximumSessions 最大的玩家会话数 Number
creationTimeMillis 创建时间，单位：毫秒 Number
playerSessionCount 当前玩家会话数 Number
                     */
                    std::string m_sortExpression;
                    bool m_sortExpressionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_SEARCHGAMESERVERSESSIONSREQUEST_H_
