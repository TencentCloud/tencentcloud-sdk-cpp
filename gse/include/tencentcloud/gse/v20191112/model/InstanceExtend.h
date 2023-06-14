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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_INSTANCEEXTEND_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_INSTANCEEXTEND_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gse/v20191112/model/Instance.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * 实例扩展信息
                */
                class InstanceExtend : public AbstractModel
                {
                public:
                    InstanceExtend();
                    ~InstanceExtend() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Instance 实例信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Instance GetInstance() const;

                    /**
                     * 设置实例信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instance 实例信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstance(const Instance& _instance);

                    /**
                     * 判断参数 Instance 是否已赋值
                     * @return Instance 是否已赋值
                     * 
                     */
                    bool InstanceHasBeenSet() const;

                    /**
                     * 获取实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return State 实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _state 实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取健康进程数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HealthyProcessCnt 健康进程数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetHealthyProcessCnt() const;

                    /**
                     * 设置健康进程数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _healthyProcessCnt 健康进程数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHealthyProcessCnt(const int64_t& _healthyProcessCnt);

                    /**
                     * 判断参数 HealthyProcessCnt 是否已赋值
                     * @return HealthyProcessCnt 是否已赋值
                     * 
                     */
                    bool HealthyProcessCntHasBeenSet() const;

                    /**
                     * 获取活跃进程数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActiveProcessCnt 活跃进程数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetActiveProcessCnt() const;

                    /**
                     * 设置活跃进程数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _activeProcessCnt 活跃进程数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActiveProcessCnt(const int64_t& _activeProcessCnt);

                    /**
                     * 判断参数 ActiveProcessCnt 是否已赋值
                     * @return ActiveProcessCnt 是否已赋值
                     * 
                     */
                    bool ActiveProcessCntHasBeenSet() const;

                    /**
                     * 获取当前游戏会话总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GameSessionCnt 当前游戏会话总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetGameSessionCnt() const;

                    /**
                     * 设置当前游戏会话总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gameSessionCnt 当前游戏会话总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGameSessionCnt(const int64_t& _gameSessionCnt);

                    /**
                     * 判断参数 GameSessionCnt 是否已赋值
                     * @return GameSessionCnt 是否已赋值
                     * 
                     */
                    bool GameSessionCntHasBeenSet() const;

                    /**
                     * 获取最大游戏会话数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxGameSessionCnt 最大游戏会话数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxGameSessionCnt() const;

                    /**
                     * 设置最大游戏会话数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxGameSessionCnt 最大游戏会话数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxGameSessionCnt(const int64_t& _maxGameSessionCnt);

                    /**
                     * 判断参数 MaxGameSessionCnt 是否已赋值
                     * @return MaxGameSessionCnt 是否已赋值
                     * 
                     */
                    bool MaxGameSessionCntHasBeenSet() const;

                    /**
                     * 获取当前玩家会话数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PlayerSessionCnt 当前玩家会话数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPlayerSessionCnt() const;

                    /**
                     * 设置当前玩家会话数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _playerSessionCnt 当前玩家会话数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPlayerSessionCnt(const int64_t& _playerSessionCnt);

                    /**
                     * 判断参数 PlayerSessionCnt 是否已赋值
                     * @return PlayerSessionCnt 是否已赋值
                     * 
                     */
                    bool PlayerSessionCntHasBeenSet() const;

                    /**
                     * 获取最大玩家会话数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxPlayerSessionCnt 最大玩家会话数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxPlayerSessionCnt() const;

                    /**
                     * 设置最大玩家会话数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxPlayerSessionCnt 最大玩家会话数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxPlayerSessionCnt(const int64_t& _maxPlayerSessionCnt);

                    /**
                     * 判断参数 MaxPlayerSessionCnt 是否已赋值
                     * @return MaxPlayerSessionCnt 是否已赋值
                     * 
                     */
                    bool MaxPlayerSessionCntHasBeenSet() const;

                private:

                    /**
                     * 实例信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Instance m_instance;
                    bool m_instanceHasBeenSet;

                    /**
                     * 实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 健康进程数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_healthyProcessCnt;
                    bool m_healthyProcessCntHasBeenSet;

                    /**
                     * 活跃进程数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_activeProcessCnt;
                    bool m_activeProcessCntHasBeenSet;

                    /**
                     * 当前游戏会话总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_gameSessionCnt;
                    bool m_gameSessionCntHasBeenSet;

                    /**
                     * 最大游戏会话数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxGameSessionCnt;
                    bool m_maxGameSessionCntHasBeenSet;

                    /**
                     * 当前玩家会话数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_playerSessionCnt;
                    bool m_playerSessionCntHasBeenSet;

                    /**
                     * 最大玩家会话数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxPlayerSessionCnt;
                    bool m_maxPlayerSessionCntHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_INSTANCEEXTEND_H_
