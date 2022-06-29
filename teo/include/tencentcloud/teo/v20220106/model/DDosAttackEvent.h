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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DDOSATTACKEVENT_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DDOSATTACKEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DDos攻击事件对象
                */
                class DDosAttackEvent : public AbstractModel
                {
                public:
                    DDosAttackEvent();
                    ~DDosAttackEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ddos 策略组id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PolicyId ddos 策略组id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetPolicyId() const;

                    /**
                     * 设置ddos 策略组id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PolicyId ddos 策略组id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPolicyId(const int64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取攻击类型(对应交互事件名称)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttackType 攻击类型(对应交互事件名称)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAttackType() const;

                    /**
                     * 设置攻击类型(对应交互事件名称)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AttackType 攻击类型(对应交互事件名称)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAttackType(const std::string& _attackType);

                    /**
                     * 判断参数 AttackType 是否已赋值
                     * @return AttackType 是否已赋值
                     */
                    bool AttackTypeHasBeenSet() const;

                    /**
                     * 获取攻击状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttackStatus 攻击状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetAttackStatus() const;

                    /**
                     * 设置攻击状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AttackStatus 攻击状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAttackStatus(const int64_t& _attackStatus);

                    /**
                     * 判断参数 AttackStatus 是否已赋值
                     * @return AttackStatus 是否已赋值
                     */
                    bool AttackStatusHasBeenSet() const;

                    /**
                     * 获取攻击最大带宽
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttackMaxBandWidth 攻击最大带宽
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetAttackMaxBandWidth() const;

                    /**
                     * 设置攻击最大带宽
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AttackMaxBandWidth 攻击最大带宽
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAttackMaxBandWidth(const int64_t& _attackMaxBandWidth);

                    /**
                     * 判断参数 AttackMaxBandWidth 是否已赋值
                     * @return AttackMaxBandWidth 是否已赋值
                     */
                    bool AttackMaxBandWidthHasBeenSet() const;

                    /**
                     * 获取攻击包速率峰值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttackPacketMaxRate 攻击包速率峰值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetAttackPacketMaxRate() const;

                    /**
                     * 设置攻击包速率峰值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AttackPacketMaxRate 攻击包速率峰值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAttackPacketMaxRate(const int64_t& _attackPacketMaxRate);

                    /**
                     * 判断参数 AttackPacketMaxRate 是否已赋值
                     * @return AttackPacketMaxRate 是否已赋值
                     */
                    bool AttackPacketMaxRateHasBeenSet() const;

                    /**
                     * 获取攻击开始时间 单位为s
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttackStartTime 攻击开始时间 单位为s
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetAttackStartTime() const;

                    /**
                     * 设置攻击开始时间 单位为s
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AttackStartTime 攻击开始时间 单位为s
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAttackStartTime(const int64_t& _attackStartTime);

                    /**
                     * 判断参数 AttackStartTime 是否已赋值
                     * @return AttackStartTime 是否已赋值
                     */
                    bool AttackStartTimeHasBeenSet() const;

                    /**
                     * 获取攻击结束时间 单位为s
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttackEndTime 攻击结束时间 单位为s
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetAttackEndTime() const;

                    /**
                     * 设置攻击结束时间 单位为s
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AttackEndTime 攻击结束时间 单位为s
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAttackEndTime(const int64_t& _attackEndTime);

                    /**
                     * 判断参数 AttackEndTime 是否已赋值
                     * @return AttackEndTime 是否已赋值
                     */
                    bool AttackEndTimeHasBeenSet() const;

                    /**
                     * 获取事件ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventId 事件ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置事件ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EventId 事件ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取站点id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZoneId 站点id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ZoneId 站点id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                private:

                    /**
                     * ddos 策略组id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 攻击类型(对应交互事件名称)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_attackType;
                    bool m_attackTypeHasBeenSet;

                    /**
                     * 攻击状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_attackStatus;
                    bool m_attackStatusHasBeenSet;

                    /**
                     * 攻击最大带宽
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_attackMaxBandWidth;
                    bool m_attackMaxBandWidthHasBeenSet;

                    /**
                     * 攻击包速率峰值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_attackPacketMaxRate;
                    bool m_attackPacketMaxRateHasBeenSet;

                    /**
                     * 攻击开始时间 单位为s
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_attackStartTime;
                    bool m_attackStartTimeHasBeenSet;

                    /**
                     * 攻击结束时间 单位为s
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_attackEndTime;
                    bool m_attackEndTimeHasBeenSet;

                    /**
                     * 事件ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * 站点id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DDOSATTACKEVENT_H_
