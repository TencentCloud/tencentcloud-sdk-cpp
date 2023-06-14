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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_GAMESERVERSESSIONPLACEMENT_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_GAMESERVERSESSIONPLACEMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gse/v20191112/model/PlayerLatency.h>
#include <tencentcloud/gse/v20191112/model/GameProperty.h>
#include <tencentcloud/gse/v20191112/model/PlacedPlayerSession.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * 游戏会话部署对象
                */
                class GameServerSessionPlacement : public AbstractModel
                {
                public:
                    GameServerSessionPlacement();
                    ~GameServerSessionPlacement() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取部署Id
                     * @return PlacementId 部署Id
                     * 
                     */
                    std::string GetPlacementId() const;

                    /**
                     * 设置部署Id
                     * @param _placementId 部署Id
                     * 
                     */
                    void SetPlacementId(const std::string& _placementId);

                    /**
                     * 判断参数 PlacementId 是否已赋值
                     * @return PlacementId 是否已赋值
                     * 
                     */
                    bool PlacementIdHasBeenSet() const;

                    /**
                     * 获取服务部署组名称
                     * @return GameServerSessionQueueName 服务部署组名称
                     * 
                     */
                    std::string GetGameServerSessionQueueName() const;

                    /**
                     * 设置服务部署组名称
                     * @param _gameServerSessionQueueName 服务部署组名称
                     * 
                     */
                    void SetGameServerSessionQueueName(const std::string& _gameServerSessionQueueName);

                    /**
                     * 判断参数 GameServerSessionQueueName 是否已赋值
                     * @return GameServerSessionQueueName 是否已赋值
                     * 
                     */
                    bool GameServerSessionQueueNameHasBeenSet() const;

                    /**
                     * 获取玩家延迟
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PlayerLatencies 玩家延迟
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PlayerLatency> GetPlayerLatencies() const;

                    /**
                     * 设置玩家延迟
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _playerLatencies 玩家延迟
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPlayerLatencies(const std::vector<PlayerLatency>& _playerLatencies);

                    /**
                     * 判断参数 PlayerLatencies 是否已赋值
                     * @return PlayerLatencies 是否已赋值
                     * 
                     */
                    bool PlayerLatenciesHasBeenSet() const;

                    /**
                     * 获取服务部署状态
                     * @return Status 服务部署状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置服务部署状态
                     * @param _status 服务部署状态
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
                     * 获取分配给正在运行游戏会话的实例的DNS标识符
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DnsName 分配给正在运行游戏会话的实例的DNS标识符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDnsName() const;

                    /**
                     * 设置分配给正在运行游戏会话的实例的DNS标识符
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dnsName 分配给正在运行游戏会话的实例的DNS标识符
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
                     * 获取游戏会话Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GameServerSessionId 游戏会话Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGameServerSessionId() const;

                    /**
                     * 设置游戏会话Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gameServerSessionId 游戏会话Id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取游戏会话名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GameServerSessionName 游戏会话名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGameServerSessionName() const;

                    /**
                     * 设置游戏会话名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gameServerSessionName 游戏会话名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGameServerSessionName(const std::string& _gameServerSessionName);

                    /**
                     * 判断参数 GameServerSessionName 是否已赋值
                     * @return GameServerSessionName 是否已赋值
                     * 
                     */
                    bool GameServerSessionNameHasBeenSet() const;

                    /**
                     * 获取服务部署区域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GameServerSessionRegion 服务部署区域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGameServerSessionRegion() const;

                    /**
                     * 设置服务部署区域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gameServerSessionRegion 服务部署区域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGameServerSessionRegion(const std::string& _gameServerSessionRegion);

                    /**
                     * 判断参数 GameServerSessionRegion 是否已赋值
                     * @return GameServerSessionRegion 是否已赋值
                     * 
                     */
                    bool GameServerSessionRegionHasBeenSet() const;

                    /**
                     * 获取游戏属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GameProperties 游戏属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<GameProperty> GetGameProperties() const;

                    /**
                     * 设置游戏属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gameProperties 游戏属性
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
                     * 获取游戏服务器允许同时连接到游戏会话的最大玩家数量，最小值1，最大值为玩家会话最大限额
                     * @return MaximumPlayerSessionCount 游戏服务器允许同时连接到游戏会话的最大玩家数量，最小值1，最大值为玩家会话最大限额
                     * 
                     */
                    uint64_t GetMaximumPlayerSessionCount() const;

                    /**
                     * 设置游戏服务器允许同时连接到游戏会话的最大玩家数量，最小值1，最大值为玩家会话最大限额
                     * @param _maximumPlayerSessionCount 游戏服务器允许同时连接到游戏会话的最大玩家数量，最小值1，最大值为玩家会话最大限额
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
                     * 获取游戏会话数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GameServerSessionData 游戏会话数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGameServerSessionData() const;

                    /**
                     * 设置游戏会话数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gameServerSessionData 游戏会话数据
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
                     * 获取运行游戏会话的实例的IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpAddress 运行游戏会话的实例的IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIpAddress() const;

                    /**
                     * 设置运行游戏会话的实例的IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipAddress 运行游戏会话的实例的IP地址
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取运行游戏会话的实例的端口号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Port 运行游戏会话的实例的端口号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置运行游戏会话的实例的端口号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _port 运行游戏会话的实例的端口号
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取游戏匹配数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MatchmakerData 游戏匹配数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMatchmakerData() const;

                    /**
                     * 设置游戏匹配数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _matchmakerData 游戏匹配数据
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
                     * 获取部署的玩家游戏数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PlacedPlayerSessions 部署的玩家游戏数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PlacedPlayerSession> GetPlacedPlayerSessions() const;

                    /**
                     * 设置部署的玩家游戏数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _placedPlayerSessions 部署的玩家游戏数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPlacedPlayerSessions(const std::vector<PlacedPlayerSession>& _placedPlayerSessions);

                    /**
                     * 判断参数 PlacedPlayerSessions 是否已赋值
                     * @return PlacedPlayerSessions 是否已赋值
                     * 
                     */
                    bool PlacedPlayerSessionsHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param _startTime 开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 部署Id
                     */
                    std::string m_placementId;
                    bool m_placementIdHasBeenSet;

                    /**
                     * 服务部署组名称
                     */
                    std::string m_gameServerSessionQueueName;
                    bool m_gameServerSessionQueueNameHasBeenSet;

                    /**
                     * 玩家延迟
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PlayerLatency> m_playerLatencies;
                    bool m_playerLatenciesHasBeenSet;

                    /**
                     * 服务部署状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 分配给正在运行游戏会话的实例的DNS标识符
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dnsName;
                    bool m_dnsNameHasBeenSet;

                    /**
                     * 游戏会话Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_gameServerSessionId;
                    bool m_gameServerSessionIdHasBeenSet;

                    /**
                     * 游戏会话名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_gameServerSessionName;
                    bool m_gameServerSessionNameHasBeenSet;

                    /**
                     * 服务部署区域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_gameServerSessionRegion;
                    bool m_gameServerSessionRegionHasBeenSet;

                    /**
                     * 游戏属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<GameProperty> m_gameProperties;
                    bool m_gamePropertiesHasBeenSet;

                    /**
                     * 游戏服务器允许同时连接到游戏会话的最大玩家数量，最小值1，最大值为玩家会话最大限额
                     */
                    uint64_t m_maximumPlayerSessionCount;
                    bool m_maximumPlayerSessionCountHasBeenSet;

                    /**
                     * 游戏会话数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_gameServerSessionData;
                    bool m_gameServerSessionDataHasBeenSet;

                    /**
                     * 运行游戏会话的实例的IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ipAddress;
                    bool m_ipAddressHasBeenSet;

                    /**
                     * 运行游戏会话的实例的端口号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 游戏匹配数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_matchmakerData;
                    bool m_matchmakerDataHasBeenSet;

                    /**
                     * 部署的玩家游戏数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PlacedPlayerSession> m_placedPlayerSessions;
                    bool m_placedPlayerSessionsHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_GAMESERVERSESSIONPLACEMENT_H_
