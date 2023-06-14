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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_GAMESERVERSESSION_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_GAMESERVERSESSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 游戏会话详情
                */
                class GameServerSession : public AbstractModel
                {
                public:
                    GameServerSession();
                    ~GameServerSession() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取游戏服务器会话创建时间
                     * @return CreationTime 游戏服务器会话创建时间
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置游戏服务器会话创建时间
                     * @param _creationTime 游戏服务器会话创建时间
                     * 
                     */
                    void SetCreationTime(const std::string& _creationTime);

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     * 
                     */
                    bool CreationTimeHasBeenSet() const;

                    /**
                     * 获取创建者ID，最大长度不超过1024个ASCII字符
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatorId 创建者ID，最大长度不超过1024个ASCII字符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatorId() const;

                    /**
                     * 设置创建者ID，最大长度不超过1024个ASCII字符
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creatorId 创建者ID，最大长度不超过1024个ASCII字符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatorId(const std::string& _creatorId);

                    /**
                     * 判断参数 CreatorId 是否已赋值
                     * @return CreatorId 是否已赋值
                     * 
                     */
                    bool CreatorIdHasBeenSet() const;

                    /**
                     * 获取当前玩家数量，最小值不小于0
                     * @return CurrentPlayerSessionCount 当前玩家数量，最小值不小于0
                     * 
                     */
                    uint64_t GetCurrentPlayerSessionCount() const;

                    /**
                     * 设置当前玩家数量，最小值不小于0
                     * @param _currentPlayerSessionCount 当前玩家数量，最小值不小于0
                     * 
                     */
                    void SetCurrentPlayerSessionCount(const uint64_t& _currentPlayerSessionCount);

                    /**
                     * 判断参数 CurrentPlayerSessionCount 是否已赋值
                     * @return CurrentPlayerSessionCount 是否已赋值
                     * 
                     */
                    bool CurrentPlayerSessionCountHasBeenSet() const;

                    /**
                     * 获取CVM的DNS标识符
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DnsName CVM的DNS标识符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDnsName() const;

                    /**
                     * 设置CVM的DNS标识符
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dnsName CVM的DNS标识符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDnsName(const std::string& _dnsName);

                    /**
                     * 判断参数 DnsName 是否已赋值
                     * @return DnsName 是否已赋值
                     * 
                     */
                    bool DnsNameHasBeenSet() const;

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
                     * 获取游戏属性，最大长度不超过16组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GameProperties 游戏属性，最大长度不超过16组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<GameProperty> GetGameProperties() const;

                    /**
                     * 设置游戏属性，最大长度不超过16组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gameProperties 游戏属性，最大长度不超过16组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGameProperties(const std::vector<GameProperty>& _gameProperties);

                    /**
                     * 判断参数 GameProperties 是否已赋值
                     * @return GameProperties 是否已赋值
                     * 
                     */
                    bool GamePropertiesHasBeenSet() const;

                    /**
                     * 获取游戏服务器会话属性详情，最大长度不超过4096个ASCII字符
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GameServerSessionData 游戏服务器会话属性详情，最大长度不超过4096个ASCII字符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGameServerSessionData() const;

                    /**
                     * 设置游戏服务器会话属性详情，最大长度不超过4096个ASCII字符
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gameServerSessionData 游戏服务器会话属性详情，最大长度不超过4096个ASCII字符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGameServerSessionData(const std::string& _gameServerSessionData);

                    /**
                     * 判断参数 GameServerSessionData 是否已赋值
                     * @return GameServerSessionData 是否已赋值
                     * 
                     */
                    bool GameServerSessionDataHasBeenSet() const;

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
                     * 获取CVM IP地址
                     * @return IpAddress CVM IP地址
                     * 
                     */
                    std::string GetIpAddress() const;

                    /**
                     * 设置CVM IP地址
                     * @param _ipAddress CVM IP地址
                     * 
                     */
                    void SetIpAddress(const std::string& _ipAddress);

                    /**
                     * 判断参数 IpAddress 是否已赋值
                     * @return IpAddress 是否已赋值
                     * 
                     */
                    bool IpAddressHasBeenSet() const;

                    /**
                     * 获取对战进程详情，最大长度不超过400000个ASCII字符
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MatchmakerData 对战进程详情，最大长度不超过400000个ASCII字符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMatchmakerData() const;

                    /**
                     * 设置对战进程详情，最大长度不超过400000个ASCII字符
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _matchmakerData 对战进程详情，最大长度不超过400000个ASCII字符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMatchmakerData(const std::string& _matchmakerData);

                    /**
                     * 判断参数 MatchmakerData 是否已赋值
                     * @return MatchmakerData 是否已赋值
                     * 
                     */
                    bool MatchmakerDataHasBeenSet() const;

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
                     * 获取游戏服务器会话名称，最大长度不超过1024个ASCII字符
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 游戏服务器会话名称，最大长度不超过1024个ASCII字符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置游戏服务器会话名称，最大长度不超过1024个ASCII字符
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 游戏服务器会话名称，最大长度不超过1024个ASCII字符
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取玩家会话创建策略（ACCEPT_ALL,DENY_ALL）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PlayerSessionCreationPolicy 玩家会话创建策略（ACCEPT_ALL,DENY_ALL）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPlayerSessionCreationPolicy() const;

                    /**
                     * 设置玩家会话创建策略（ACCEPT_ALL,DENY_ALL）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _playerSessionCreationPolicy 玩家会话创建策略（ACCEPT_ALL,DENY_ALL）
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取端口号，最小值不小于1，最大值不超过60000
                     * @return Port 端口号，最小值不小于1，最大值不超过60000
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置端口号，最小值不小于1，最大值不超过60000
                     * @param _port 端口号，最小值不小于1，最大值不超过60000
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取游戏服务器会话状态（ACTIVE,ACTIVATING,TERMINATED,TERMINATING,ERROR）
                     * @return Status 游戏服务器会话状态（ACTIVE,ACTIVATING,TERMINATED,TERMINATING,ERROR）
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置游戏服务器会话状态（ACTIVE,ACTIVATING,TERMINATED,TERMINATING,ERROR）
                     * @param _status 游戏服务器会话状态（ACTIVE,ACTIVATING,TERMINATED,TERMINATING,ERROR）
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取游戏服务器会话状态附加信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusReason 游戏服务器会话状态附加信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatusReason() const;

                    /**
                     * 设置游戏服务器会话状态附加信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statusReason 游戏服务器会话状态附加信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatusReason(const std::string& _statusReason);

                    /**
                     * 判断参数 StatusReason 是否已赋值
                     * @return StatusReason 是否已赋值
                     * 
                     */
                    bool StatusReasonHasBeenSet() const;

                    /**
                     * 获取终止的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TerminationTime 终止的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTerminationTime() const;

                    /**
                     * 设置终止的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _terminationTime 终止的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTerminationTime(const std::string& _terminationTime);

                    /**
                     * 判断参数 TerminationTime 是否已赋值
                     * @return TerminationTime 是否已赋值
                     * 
                     */
                    bool TerminationTimeHasBeenSet() const;

                    /**
                     * 获取实例类型，最大长度不超过128个ASCII字符
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceType 实例类型，最大长度不超过128个ASCII字符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例类型，最大长度不超过128个ASCII字符
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceType 实例类型，最大长度不超过128个ASCII字符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取当前自定义数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CurrentCustomCount 当前自定义数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCurrentCustomCount() const;

                    /**
                     * 设置当前自定义数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _currentCustomCount 当前自定义数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCurrentCustomCount(const int64_t& _currentCustomCount);

                    /**
                     * 判断参数 CurrentCustomCount 是否已赋值
                     * @return CurrentCustomCount 是否已赋值
                     * 
                     */
                    bool CurrentCustomCountHasBeenSet() const;

                    /**
                     * 获取最大自定义数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxCustomCount 最大自定义数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxCustomCount() const;

                    /**
                     * 设置最大自定义数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxCustomCount 最大自定义数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxCustomCount(const int64_t& _maxCustomCount);

                    /**
                     * 判断参数 MaxCustomCount 是否已赋值
                     * @return MaxCustomCount 是否已赋值
                     * 
                     */
                    bool MaxCustomCountHasBeenSet() const;

                    /**
                     * 获取权重
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Weight 权重
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置权重
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _weight 权重
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取会话可用性状态，是否被屏蔽（Enable,Disable）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AvailabilityStatus 会话可用性状态，是否被屏蔽（Enable,Disable）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAvailabilityStatus() const;

                    /**
                     * 设置会话可用性状态，是否被屏蔽（Enable,Disable）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _availabilityStatus 会话可用性状态，是否被屏蔽（Enable,Disable）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAvailabilityStatus(const std::string& _availabilityStatus);

                    /**
                     * 判断参数 AvailabilityStatus 是否已赋值
                     * @return AvailabilityStatus 是否已赋值
                     * 
                     */
                    bool AvailabilityStatusHasBeenSet() const;

                private:

                    /**
                     * 游戏服务器会话创建时间
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * 创建者ID，最大长度不超过1024个ASCII字符
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creatorId;
                    bool m_creatorIdHasBeenSet;

                    /**
                     * 当前玩家数量，最小值不小于0
                     */
                    uint64_t m_currentPlayerSessionCount;
                    bool m_currentPlayerSessionCountHasBeenSet;

                    /**
                     * CVM的DNS标识符
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dnsName;
                    bool m_dnsNameHasBeenSet;

                    /**
                     * 舰队ID
                     */
                    std::string m_fleetId;
                    bool m_fleetIdHasBeenSet;

                    /**
                     * 游戏属性，最大长度不超过16组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<GameProperty> m_gameProperties;
                    bool m_gamePropertiesHasBeenSet;

                    /**
                     * 游戏服务器会话属性详情，最大长度不超过4096个ASCII字符
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_gameServerSessionData;
                    bool m_gameServerSessionDataHasBeenSet;

                    /**
                     * 游戏服务器会话ID，最小长度不小于1个ASCII字符，最大长度不超过48个ASCII字符
                     */
                    std::string m_gameServerSessionId;
                    bool m_gameServerSessionIdHasBeenSet;

                    /**
                     * CVM IP地址
                     */
                    std::string m_ipAddress;
                    bool m_ipAddressHasBeenSet;

                    /**
                     * 对战进程详情，最大长度不超过400000个ASCII字符
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_matchmakerData;
                    bool m_matchmakerDataHasBeenSet;

                    /**
                     * 最大玩家数量，最小值不小于0
                     */
                    uint64_t m_maximumPlayerSessionCount;
                    bool m_maximumPlayerSessionCountHasBeenSet;

                    /**
                     * 游戏服务器会话名称，最大长度不超过1024个ASCII字符
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 玩家会话创建策略（ACCEPT_ALL,DENY_ALL）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_playerSessionCreationPolicy;
                    bool m_playerSessionCreationPolicyHasBeenSet;

                    /**
                     * 端口号，最小值不小于1，最大值不超过60000
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 游戏服务器会话状态（ACTIVE,ACTIVATING,TERMINATED,TERMINATING,ERROR）
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 游戏服务器会话状态附加信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_statusReason;
                    bool m_statusReasonHasBeenSet;

                    /**
                     * 终止的时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_terminationTime;
                    bool m_terminationTimeHasBeenSet;

                    /**
                     * 实例类型，最大长度不超过128个ASCII字符
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 当前自定义数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_currentCustomCount;
                    bool m_currentCustomCountHasBeenSet;

                    /**
                     * 最大自定义数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxCustomCount;
                    bool m_maxCustomCountHasBeenSet;

                    /**
                     * 权重
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * 会话可用性状态，是否被屏蔽（Enable,Disable）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_availabilityStatus;
                    bool m_availabilityStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_GAMESERVERSESSION_H_
