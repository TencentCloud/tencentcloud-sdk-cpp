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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_FLEETUTILIZATION_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_FLEETUTILIZATION_H_

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
                * 服务部署利用率
                */
                class FleetUtilization : public AbstractModel
                {
                public:
                    FleetUtilization();
                    ~FleetUtilization() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取游戏会话数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActiveGameServerSessionCount 游戏会话数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetActiveGameServerSessionCount() const;

                    /**
                     * 设置游戏会话数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _activeGameServerSessionCount 游戏会话数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActiveGameServerSessionCount(const uint64_t& _activeGameServerSessionCount);

                    /**
                     * 判断参数 ActiveGameServerSessionCount 是否已赋值
                     * @return ActiveGameServerSessionCount 是否已赋值
                     * 
                     */
                    bool ActiveGameServerSessionCountHasBeenSet() const;

                    /**
                     * 获取活跃进程数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActiveServerProcessCount 活跃进程数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetActiveServerProcessCount() const;

                    /**
                     * 设置活跃进程数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _activeServerProcessCount 活跃进程数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActiveServerProcessCount(const uint64_t& _activeServerProcessCount);

                    /**
                     * 判断参数 ActiveServerProcessCount 是否已赋值
                     * @return ActiveServerProcessCount 是否已赋值
                     * 
                     */
                    bool ActiveServerProcessCountHasBeenSet() const;

                    /**
                     * 获取当前游戏玩家数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CurrentPlayerSessionCount 当前游戏玩家数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCurrentPlayerSessionCount() const;

                    /**
                     * 设置当前游戏玩家数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _currentPlayerSessionCount 当前游戏玩家数
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取服务部署 Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FleetId 服务部署 Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFleetId() const;

                    /**
                     * 设置服务部署 Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fleetId 服务部署 Id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取最大玩家会话数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaximumPlayerSessionCount 最大玩家会话数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMaximumPlayerSessionCount() const;

                    /**
                     * 设置最大玩家会话数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maximumPlayerSessionCount 最大玩家会话数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaximumPlayerSessionCount(const uint64_t& _maximumPlayerSessionCount);

                    /**
                     * 判断参数 MaximumPlayerSessionCount 是否已赋值
                     * @return MaximumPlayerSessionCount 是否已赋值
                     * 
                     */
                    bool MaximumPlayerSessionCountHasBeenSet() const;

                private:

                    /**
                     * 游戏会话数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_activeGameServerSessionCount;
                    bool m_activeGameServerSessionCountHasBeenSet;

                    /**
                     * 活跃进程数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_activeServerProcessCount;
                    bool m_activeServerProcessCountHasBeenSet;

                    /**
                     * 当前游戏玩家数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_currentPlayerSessionCount;
                    bool m_currentPlayerSessionCountHasBeenSet;

                    /**
                     * 服务部署 Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fleetId;
                    bool m_fleetIdHasBeenSet;

                    /**
                     * 最大玩家会话数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_maximumPlayerSessionCount;
                    bool m_maximumPlayerSessionCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_FLEETUTILIZATION_H_
