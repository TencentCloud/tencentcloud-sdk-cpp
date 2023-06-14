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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DDOSATTACKEVENT_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DDOSATTACKEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/DDoSBlockData.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DDoS攻击事件对象
                */
                class DDoSAttackEvent : public AbstractModel
                {
                public:
                    DDoSAttackEvent();
                    ~DDoSAttackEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件ID。
                     * @return EventId 事件ID。
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置事件ID。
                     * @param _eventId 事件ID。
                     * 
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取攻击类型(对应交互事件名称)。
                     * @return AttackType 攻击类型(对应交互事件名称)。
                     * 
                     */
                    std::string GetAttackType() const;

                    /**
                     * 设置攻击类型(对应交互事件名称)。
                     * @param _attackType 攻击类型(对应交互事件名称)。
                     * 
                     */
                    void SetAttackType(const std::string& _attackType);

                    /**
                     * 判断参数 AttackType 是否已赋值
                     * @return AttackType 是否已赋值
                     * 
                     */
                    bool AttackTypeHasBeenSet() const;

                    /**
                     * 获取攻击状态。
                     * @return AttackStatus 攻击状态。
                     * 
                     */
                    int64_t GetAttackStatus() const;

                    /**
                     * 设置攻击状态。
                     * @param _attackStatus 攻击状态。
                     * 
                     */
                    void SetAttackStatus(const int64_t& _attackStatus);

                    /**
                     * 判断参数 AttackStatus 是否已赋值
                     * @return AttackStatus 是否已赋值
                     * 
                     */
                    bool AttackStatusHasBeenSet() const;

                    /**
                     * 获取攻击最大带宽。
                     * @return AttackMaxBandWidth 攻击最大带宽。
                     * 
                     */
                    int64_t GetAttackMaxBandWidth() const;

                    /**
                     * 设置攻击最大带宽。
                     * @param _attackMaxBandWidth 攻击最大带宽。
                     * 
                     */
                    void SetAttackMaxBandWidth(const int64_t& _attackMaxBandWidth);

                    /**
                     * 判断参数 AttackMaxBandWidth 是否已赋值
                     * @return AttackMaxBandWidth 是否已赋值
                     * 
                     */
                    bool AttackMaxBandWidthHasBeenSet() const;

                    /**
                     * 获取攻击包速率峰值。
                     * @return AttackPacketMaxRate 攻击包速率峰值。
                     * 
                     */
                    int64_t GetAttackPacketMaxRate() const;

                    /**
                     * 设置攻击包速率峰值。
                     * @param _attackPacketMaxRate 攻击包速率峰值。
                     * 
                     */
                    void SetAttackPacketMaxRate(const int64_t& _attackPacketMaxRate);

                    /**
                     * 判断参数 AttackPacketMaxRate 是否已赋值
                     * @return AttackPacketMaxRate 是否已赋值
                     * 
                     */
                    bool AttackPacketMaxRateHasBeenSet() const;

                    /**
                     * 获取攻击开始时间，单位为s。
                     * @return AttackStartTime 攻击开始时间，单位为s。
                     * 
                     */
                    int64_t GetAttackStartTime() const;

                    /**
                     * 设置攻击开始时间，单位为s。
                     * @param _attackStartTime 攻击开始时间，单位为s。
                     * 
                     */
                    void SetAttackStartTime(const int64_t& _attackStartTime);

                    /**
                     * 判断参数 AttackStartTime 是否已赋值
                     * @return AttackStartTime 是否已赋值
                     * 
                     */
                    bool AttackStartTimeHasBeenSet() const;

                    /**
                     * 获取攻击结束时间，单位为s。
                     * @return AttackEndTime 攻击结束时间，单位为s。
                     * 
                     */
                    int64_t GetAttackEndTime() const;

                    /**
                     * 设置攻击结束时间，单位为s。
                     * @param _attackEndTime 攻击结束时间，单位为s。
                     * 
                     */
                    void SetAttackEndTime(const int64_t& _attackEndTime);

                    /**
                     * 判断参数 AttackEndTime 是否已赋值
                     * @return AttackEndTime 是否已赋值
                     * 
                     */
                    bool AttackEndTimeHasBeenSet() const;

                    /**
                     * 获取DDoS策略组ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PolicyId DDoS策略组ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPolicyId() const;

                    /**
                     * 设置DDoS策略组ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _policyId DDoS策略组ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPolicyId(const int64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取站点ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZoneId 站点ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zoneId 站点ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取攻击事件所属地区，取值有：
<li>overseas：全球（除中国大陆地区）数据；</li>
<li>mainland：中国大陆地区数据。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Area 攻击事件所属地区，取值有：
<li>overseas：全球（除中国大陆地区）数据；</li>
<li>mainland：中国大陆地区数据。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置攻击事件所属地区，取值有：
<li>overseas：全球（除中国大陆地区）数据；</li>
<li>mainland：中国大陆地区数据。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _area 攻击事件所属地区，取值有：
<li>overseas：全球（除中国大陆地区）数据；</li>
<li>mainland：中国大陆地区数据。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取封禁解封信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DDoSBlockData 封禁解封信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DDoSBlockData> GetDDoSBlockData() const;

                    /**
                     * 设置封禁解封信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dDoSBlockData 封禁解封信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDDoSBlockData(const std::vector<DDoSBlockData>& _dDoSBlockData);

                    /**
                     * 判断参数 DDoSBlockData 是否已赋值
                     * @return DDoSBlockData 是否已赋值
                     * 
                     */
                    bool DDoSBlockDataHasBeenSet() const;

                private:

                    /**
                     * 事件ID。
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * 攻击类型(对应交互事件名称)。
                     */
                    std::string m_attackType;
                    bool m_attackTypeHasBeenSet;

                    /**
                     * 攻击状态。
                     */
                    int64_t m_attackStatus;
                    bool m_attackStatusHasBeenSet;

                    /**
                     * 攻击最大带宽。
                     */
                    int64_t m_attackMaxBandWidth;
                    bool m_attackMaxBandWidthHasBeenSet;

                    /**
                     * 攻击包速率峰值。
                     */
                    int64_t m_attackPacketMaxRate;
                    bool m_attackPacketMaxRateHasBeenSet;

                    /**
                     * 攻击开始时间，单位为s。
                     */
                    int64_t m_attackStartTime;
                    bool m_attackStartTimeHasBeenSet;

                    /**
                     * 攻击结束时间，单位为s。
                     */
                    int64_t m_attackEndTime;
                    bool m_attackEndTimeHasBeenSet;

                    /**
                     * DDoS策略组ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 站点ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 攻击事件所属地区，取值有：
<li>overseas：全球（除中国大陆地区）数据；</li>
<li>mainland：中国大陆地区数据。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 封禁解封信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DDoSBlockData> m_dDoSBlockData;
                    bool m_dDoSBlockDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DDOSATTACKEVENT_H_
