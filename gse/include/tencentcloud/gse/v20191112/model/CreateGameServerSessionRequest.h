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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_CREATEGAMESERVERSESSIONREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_CREATEGAMESERVERSESSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gse/v20191112/model/GameProperty.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * CreateGameServerSession请求参数结构体
                */
                class CreateGameServerSessionRequest : public AbstractModel
                {
                public:
                    CreateGameServerSessionRequest();
                    ~CreateGameServerSessionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取最大玩家数量
                     * @return MaximumPlayerSessionCount 最大玩家数量
                     */
                    uint64_t GetMaximumPlayerSessionCount() const;

                    /**
                     * 设置最大玩家数量
                     * @param MaximumPlayerSessionCount 最大玩家数量
                     */
                    void SetMaximumPlayerSessionCount(const uint64_t& _maximumPlayerSessionCount);

                    /**
                     * 判断参数 MaximumPlayerSessionCount 是否已赋值
                     * @return MaximumPlayerSessionCount 是否已赋值
                     */
                    bool MaximumPlayerSessionCountHasBeenSet() const;

                    /**
                     * 获取别名ID。每个请求需要指定别名ID 或者舰队 ID，如果两个同时指定时，优先选择舰队 ID
                     * @return AliasId 别名ID。每个请求需要指定别名ID 或者舰队 ID，如果两个同时指定时，优先选择舰队 ID
                     */
                    std::string GetAliasId() const;

                    /**
                     * 设置别名ID。每个请求需要指定别名ID 或者舰队 ID，如果两个同时指定时，优先选择舰队 ID
                     * @param AliasId 别名ID。每个请求需要指定别名ID 或者舰队 ID，如果两个同时指定时，优先选择舰队 ID
                     */
                    void SetAliasId(const std::string& _aliasId);

                    /**
                     * 判断参数 AliasId 是否已赋值
                     * @return AliasId 是否已赋值
                     */
                    bool AliasIdHasBeenSet() const;

                    /**
                     * 获取创建者ID
                     * @return CreatorId 创建者ID
                     */
                    std::string GetCreatorId() const;

                    /**
                     * 设置创建者ID
                     * @param CreatorId 创建者ID
                     */
                    void SetCreatorId(const std::string& _creatorId);

                    /**
                     * 判断参数 CreatorId 是否已赋值
                     * @return CreatorId 是否已赋值
                     */
                    bool CreatorIdHasBeenSet() const;

                    /**
                     * 获取舰队ID。每个请求需要指定别名ID 或者舰队 ID，如果两个同时指定时，优先选择舰队 ID
                     * @return FleetId 舰队ID。每个请求需要指定别名ID 或者舰队 ID，如果两个同时指定时，优先选择舰队 ID
                     */
                    std::string GetFleetId() const;

                    /**
                     * 设置舰队ID。每个请求需要指定别名ID 或者舰队 ID，如果两个同时指定时，优先选择舰队 ID
                     * @param FleetId 舰队ID。每个请求需要指定别名ID 或者舰队 ID，如果两个同时指定时，优先选择舰队 ID
                     */
                    void SetFleetId(const std::string& _fleetId);

                    /**
                     * 判断参数 FleetId 是否已赋值
                     * @return FleetId 是否已赋值
                     */
                    bool FleetIdHasBeenSet() const;

                    /**
                     * 获取游戏属性
                     * @return GameProperties 游戏属性
                     */
                    std::vector<GameProperty> GetGameProperties() const;

                    /**
                     * 设置游戏属性
                     * @param GameProperties 游戏属性
                     */
                    void SetGameProperties(const std::vector<GameProperty>& _gameProperties);

                    /**
                     * 判断参数 GameProperties 是否已赋值
                     * @return GameProperties 是否已赋值
                     */
                    bool GamePropertiesHasBeenSet() const;

                    /**
                     * 获取游戏服务器会话属性详情
                     * @return GameServerSessionData 游戏服务器会话属性详情
                     */
                    std::string GetGameServerSessionData() const;

                    /**
                     * 设置游戏服务器会话属性详情
                     * @param GameServerSessionData 游戏服务器会话属性详情
                     */
                    void SetGameServerSessionData(const std::string& _gameServerSessionData);

                    /**
                     * 判断参数 GameServerSessionData 是否已赋值
                     * @return GameServerSessionData 是否已赋值
                     */
                    bool GameServerSessionDataHasBeenSet() const;

                    /**
                     * 获取游戏服务器会话自定义ID
                     * @return GameServerSessionId 游戏服务器会话自定义ID
                     */
                    std::string GetGameServerSessionId() const;

                    /**
                     * 设置游戏服务器会话自定义ID
                     * @param GameServerSessionId 游戏服务器会话自定义ID
                     */
                    void SetGameServerSessionId(const std::string& _gameServerSessionId);

                    /**
                     * 判断参数 GameServerSessionId 是否已赋值
                     * @return GameServerSessionId 是否已赋值
                     */
                    bool GameServerSessionIdHasBeenSet() const;

                    /**
                     * 获取幂等token
                     * @return IdempotencyToken 幂等token
                     */
                    std::string GetIdempotencyToken() const;

                    /**
                     * 设置幂等token
                     * @param IdempotencyToken 幂等token
                     */
                    void SetIdempotencyToken(const std::string& _idempotencyToken);

                    /**
                     * 判断参数 IdempotencyToken 是否已赋值
                     * @return IdempotencyToken 是否已赋值
                     */
                    bool IdempotencyTokenHasBeenSet() const;

                    /**
                     * 获取游戏服务器会话名称
                     * @return Name 游戏服务器会话名称
                     */
                    std::string GetName() const;

                    /**
                     * 设置游戏服务器会话名称
                     * @param Name 游戏服务器会话名称
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 最大玩家数量
                     */
                    uint64_t m_maximumPlayerSessionCount;
                    bool m_maximumPlayerSessionCountHasBeenSet;

                    /**
                     * 别名ID。每个请求需要指定别名ID 或者舰队 ID，如果两个同时指定时，优先选择舰队 ID
                     */
                    std::string m_aliasId;
                    bool m_aliasIdHasBeenSet;

                    /**
                     * 创建者ID
                     */
                    std::string m_creatorId;
                    bool m_creatorIdHasBeenSet;

                    /**
                     * 舰队ID。每个请求需要指定别名ID 或者舰队 ID，如果两个同时指定时，优先选择舰队 ID
                     */
                    std::string m_fleetId;
                    bool m_fleetIdHasBeenSet;

                    /**
                     * 游戏属性
                     */
                    std::vector<GameProperty> m_gameProperties;
                    bool m_gamePropertiesHasBeenSet;

                    /**
                     * 游戏服务器会话属性详情
                     */
                    std::string m_gameServerSessionData;
                    bool m_gameServerSessionDataHasBeenSet;

                    /**
                     * 游戏服务器会话自定义ID
                     */
                    std::string m_gameServerSessionId;
                    bool m_gameServerSessionIdHasBeenSet;

                    /**
                     * 幂等token
                     */
                    std::string m_idempotencyToken;
                    bool m_idempotencyTokenHasBeenSet;

                    /**
                     * 游戏服务器会话名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_CREATEGAMESERVERSESSIONREQUEST_H_
