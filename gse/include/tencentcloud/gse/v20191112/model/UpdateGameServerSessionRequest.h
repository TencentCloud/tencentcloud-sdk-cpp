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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_UPDATEGAMESERVERSESSIONREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_UPDATEGAMESERVERSESSIONREQUEST_H_

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
                * UpdateGameServerSession请求参数结构体
                */
                class UpdateGameServerSessionRequest : public AbstractModel
                {
                public:
                    UpdateGameServerSessionRequest();
                    ~UpdateGameServerSessionRequest() = default;
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
                     * 获取最大玩家数量，最小值不小于0
                     * @return MaximumPlayerSessionCount 最大玩家数量，最小值不小于0
                     * 
                     */
                    uint64_t GetMaximumPlayerSessionCount() const;

                    /**
                     * 设置最大玩家数量，最小值不小于0
                     * @param _maximumPlayerSessionCount 最大玩家数量，最小值不小于0
                     * 
                     */
                    void SetMaximumPlayerSessionCount(const uint64_t& _maximumPlayerSessionCount);

                    /**
                     * 判断参数 MaximumPlayerSessionCount 是否已赋值
                     * @return MaximumPlayerSessionCount 是否已赋值
                     * 
                     */
                    bool MaximumPlayerSessionCountHasBeenSet() const;

                    /**
                     * 获取游戏服务器会话名称，最小长度不小于1个ASCII字符，最大长度不超过1024个ASCII字符
                     * @return Name 游戏服务器会话名称，最小长度不小于1个ASCII字符，最大长度不超过1024个ASCII字符
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置游戏服务器会话名称，最小长度不小于1个ASCII字符，最大长度不超过1024个ASCII字符
                     * @param _name 游戏服务器会话名称，最小长度不小于1个ASCII字符，最大长度不超过1024个ASCII字符
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取玩家会话创建策略，包括允许所有玩家加入和禁止所有玩家加入（ACCEPT_ALL,DENY_ALL）
                     * @return PlayerSessionCreationPolicy 玩家会话创建策略，包括允许所有玩家加入和禁止所有玩家加入（ACCEPT_ALL,DENY_ALL）
                     * 
                     */
                    std::string GetPlayerSessionCreationPolicy() const;

                    /**
                     * 设置玩家会话创建策略，包括允许所有玩家加入和禁止所有玩家加入（ACCEPT_ALL,DENY_ALL）
                     * @param _playerSessionCreationPolicy 玩家会话创建策略，包括允许所有玩家加入和禁止所有玩家加入（ACCEPT_ALL,DENY_ALL）
                     * 
                     */
                    void SetPlayerSessionCreationPolicy(const std::string& _playerSessionCreationPolicy);

                    /**
                     * 判断参数 PlayerSessionCreationPolicy 是否已赋值
                     * @return PlayerSessionCreationPolicy 是否已赋值
                     * 
                     */
                    bool PlayerSessionCreationPolicyHasBeenSet() const;

                    /**
                     * 获取保护策略，包括不保护、时限保护和完全保护(NoProtection,TimeLimitProtection,FullProtection)
                     * @return ProtectionPolicy 保护策略，包括不保护、时限保护和完全保护(NoProtection,TimeLimitProtection,FullProtection)
                     * 
                     */
                    std::string GetProtectionPolicy() const;

                    /**
                     * 设置保护策略，包括不保护、时限保护和完全保护(NoProtection,TimeLimitProtection,FullProtection)
                     * @param _protectionPolicy 保护策略，包括不保护、时限保护和完全保护(NoProtection,TimeLimitProtection,FullProtection)
                     * 
                     */
                    void SetProtectionPolicy(const std::string& _protectionPolicy);

                    /**
                     * 判断参数 ProtectionPolicy 是否已赋值
                     * @return ProtectionPolicy 是否已赋值
                     * 
                     */
                    bool ProtectionPolicyHasBeenSet() const;

                private:

                    /**
                     * 游戏服务器会话ID，最小长度1个ASCII字符，最大长度不超过256个ASCII字符
                     */
                    std::string m_gameServerSessionId;
                    bool m_gameServerSessionIdHasBeenSet;

                    /**
                     * 最大玩家数量，最小值不小于0
                     */
                    uint64_t m_maximumPlayerSessionCount;
                    bool m_maximumPlayerSessionCountHasBeenSet;

                    /**
                     * 游戏服务器会话名称，最小长度不小于1个ASCII字符，最大长度不超过1024个ASCII字符
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 玩家会话创建策略，包括允许所有玩家加入和禁止所有玩家加入（ACCEPT_ALL,DENY_ALL）
                     */
                    std::string m_playerSessionCreationPolicy;
                    bool m_playerSessionCreationPolicyHasBeenSet;

                    /**
                     * 保护策略，包括不保护、时限保护和完全保护(NoProtection,TimeLimitProtection,FullProtection)
                     */
                    std::string m_protectionPolicy;
                    bool m_protectionPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_UPDATEGAMESERVERSESSIONREQUEST_H_
