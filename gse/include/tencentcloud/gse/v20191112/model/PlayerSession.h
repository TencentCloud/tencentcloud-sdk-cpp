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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_PLAYERSESSION_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_PLAYERSESSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 玩家会话详情
                */
                class PlayerSession : public AbstractModel
                {
                public:
                    PlayerSession();
                    ~PlayerSession() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取玩家会话创建时间
                     * @return CreationTime 玩家会话创建时间
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置玩家会话创建时间
                     * @param _creationTime 玩家会话创建时间
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
                     * 获取游戏服务器会话运行的DNS标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DnsName 游戏服务器会话运行的DNS标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDnsName() const;

                    /**
                     * 设置游戏服务器会话运行的DNS标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dnsName 游戏服务器会话运行的DNS标识
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
                     * 获取游戏服务器会话运行的CVM地址
                     * @return IpAddress 游戏服务器会话运行的CVM地址
                     * 
                     */
                    std::string GetIpAddress() const;

                    /**
                     * 设置游戏服务器会话运行的CVM地址
                     * @param _ipAddress 游戏服务器会话运行的CVM地址
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
                     * 获取玩家自定义数据，最大长度2048个ASCII字符
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PlayerData 玩家自定义数据，最大长度2048个ASCII字符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPlayerData() const;

                    /**
                     * 设置玩家自定义数据，最大长度2048个ASCII字符
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _playerData 玩家自定义数据，最大长度2048个ASCII字符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPlayerData(const std::string& _playerData);

                    /**
                     * 判断参数 PlayerData 是否已赋值
                     * @return PlayerData 是否已赋值
                     * 
                     */
                    bool PlayerDataHasBeenSet() const;

                    /**
                     * 获取玩家ID，最大长度1024个ASCII字符
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PlayerId 玩家ID，最大长度1024个ASCII字符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPlayerId() const;

                    /**
                     * 设置玩家ID，最大长度1024个ASCII字符
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _playerId 玩家ID，最大长度1024个ASCII字符
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取玩家会话ID
                     * @return PlayerSessionId 玩家会话ID
                     * 
                     */
                    std::string GetPlayerSessionId() const;

                    /**
                     * 设置玩家会话ID
                     * @param _playerSessionId 玩家会话ID
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
                     * 获取玩家会话的状态（RESERVED = 1,ACTIVE = 2,COMPLETED = 3,TIMEDOUT = 4）
                     * @return Status 玩家会话的状态（RESERVED = 1,ACTIVE = 2,COMPLETED = 3,TIMEDOUT = 4）
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置玩家会话的状态（RESERVED = 1,ACTIVE = 2,COMPLETED = 3,TIMEDOUT = 4）
                     * @param _status 玩家会话的状态（RESERVED = 1,ACTIVE = 2,COMPLETED = 3,TIMEDOUT = 4）
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
                     * 获取玩家会话终止时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TerminationTime 玩家会话终止时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTerminationTime() const;

                    /**
                     * 设置玩家会话终止时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _terminationTime 玩家会话终止时间
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

                private:

                    /**
                     * 玩家会话创建时间
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * 游戏服务器会话运行的DNS标识
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
                     * 游戏服务器会话ID，最小长度1个ASCII字符，最大长度不超过256个ASCII字符
                     */
                    std::string m_gameServerSessionId;
                    bool m_gameServerSessionIdHasBeenSet;

                    /**
                     * 游戏服务器会话运行的CVM地址
                     */
                    std::string m_ipAddress;
                    bool m_ipAddressHasBeenSet;

                    /**
                     * 玩家自定义数据，最大长度2048个ASCII字符
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_playerData;
                    bool m_playerDataHasBeenSet;

                    /**
                     * 玩家ID，最大长度1024个ASCII字符
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_playerId;
                    bool m_playerIdHasBeenSet;

                    /**
                     * 玩家会话ID
                     */
                    std::string m_playerSessionId;
                    bool m_playerSessionIdHasBeenSet;

                    /**
                     * 端口号，最小值不小于1，最大值不超过60000
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 玩家会话的状态（RESERVED = 1,ACTIVE = 2,COMPLETED = 3,TIMEDOUT = 4）
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 玩家会话终止时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_terminationTime;
                    bool m_terminationTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_PLAYERSESSION_H_
