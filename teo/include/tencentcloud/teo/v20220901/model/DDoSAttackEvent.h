/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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
                     * 获取<p>事件 ID。</p>
                     * @return EventId <p>事件 ID。</p>
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置<p>事件 ID。</p>
                     * @param _eventId <p>事件 ID。</p>
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
                     * 获取<p>攻击类型。</p>
                     * @return AttackType <p>攻击类型。</p>
                     * 
                     */
                    std::string GetAttackType() const;

                    /**
                     * 设置<p>攻击类型。</p>
                     * @param _attackType <p>攻击类型。</p>
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
                     * 获取<p>攻击状态。</p><p>枚举值：</p><ul><li>0： 观察中</li><li>1： 攻击中</li><li>2： 攻击结束</li></ul>
                     * @return AttackStatus <p>攻击状态。</p><p>枚举值：</p><ul><li>0： 观察中</li><li>1： 攻击中</li><li>2： 攻击结束</li></ul>
                     * 
                     */
                    int64_t GetAttackStatus() const;

                    /**
                     * 设置<p>攻击状态。</p><p>枚举值：</p><ul><li>0： 观察中</li><li>1： 攻击中</li><li>2： 攻击结束</li></ul>
                     * @param _attackStatus <p>攻击状态。</p><p>枚举值：</p><ul><li>0： 观察中</li><li>1： 攻击中</li><li>2： 攻击结束</li></ul>
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
                     * 获取<p>攻击最大带宽，单位为 bps。</p>
                     * @return AttackMaxBandWidth <p>攻击最大带宽，单位为 bps。</p>
                     * 
                     */
                    int64_t GetAttackMaxBandWidth() const;

                    /**
                     * 设置<p>攻击最大带宽，单位为 bps。</p>
                     * @param _attackMaxBandWidth <p>攻击最大带宽，单位为 bps。</p>
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
                     * 获取<p>攻击包速率峰值，单位为 pps。</p>
                     * @return AttackPacketMaxRate <p>攻击包速率峰值，单位为 pps。</p>
                     * 
                     */
                    int64_t GetAttackPacketMaxRate() const;

                    /**
                     * 设置<p>攻击包速率峰值，单位为 pps。</p>
                     * @param _attackPacketMaxRate <p>攻击包速率峰值，单位为 pps。</p>
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
                     * 获取<p>攻击开始时间戳。</p><p>单位：秒</p>
                     * @return AttackStartTime <p>攻击开始时间戳。</p><p>单位：秒</p>
                     * 
                     */
                    int64_t GetAttackStartTime() const;

                    /**
                     * 设置<p>攻击开始时间戳。</p><p>单位：秒</p>
                     * @param _attackStartTime <p>攻击开始时间戳。</p><p>单位：秒</p>
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
                     * 获取<p>攻击结束时间戳。</p><p>单位：秒</p>
                     * @return AttackEndTime <p>攻击结束时间戳。</p><p>单位：秒</p>
                     * 
                     */
                    int64_t GetAttackEndTime() const;

                    /**
                     * 设置<p>攻击结束时间戳。</p><p>单位：秒</p>
                     * @param _attackEndTime <p>攻击结束时间戳。</p><p>单位：秒</p>
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
                     * 获取<p>DDoS 策略组 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PolicyId <p>DDoS 策略组 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPolicyId() const;

                    /**
                     * 设置<p>DDoS 策略组 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _policyId <p>DDoS 策略组 ID。</p>
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
                     * 获取<p>站点 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZoneId <p>站点 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>站点 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zoneId <p>站点 ID。</p>
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
                     * 获取<p>攻击事件所属地区。</p><p>枚举值：</p><ul><li>overseas： 全球（除中国大陆地区）数据；</li><li>mainland： 中国大陆地区数据。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Area <p>攻击事件所属地区。</p><p>枚举值：</p><ul><li>overseas： 全球（除中国大陆地区）数据；</li><li>mainland： 中国大陆地区数据。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置<p>攻击事件所属地区。</p><p>枚举值：</p><ul><li>overseas： 全球（除中国大陆地区）数据；</li><li>mainland： 中国大陆地区数据。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _area <p>攻击事件所属地区。</p><p>枚举值：</p><ul><li>overseas： 全球（除中国大陆地区）数据；</li><li>mainland： 中国大陆地区数据。</li></ul>
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
                     * 获取<p>封禁解封信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DDoSBlockData <p>封禁解封信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DDoSBlockData> GetDDoSBlockData() const;

                    /**
                     * 设置<p>封禁解封信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dDoSBlockData <p>封禁解封信息。</p>
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

                    /**
                     * 获取<p>被 DDoS 攻击的目的 IP 列表。</p>
                     * @return DDoSAttackDips <p>被 DDoS 攻击的目的 IP 列表。</p>
                     * 
                     */
                    std::vector<std::string> GetDDoSAttackDips() const;

                    /**
                     * 设置<p>被 DDoS 攻击的目的 IP 列表。</p>
                     * @param _dDoSAttackDips <p>被 DDoS 攻击的目的 IP 列表。</p>
                     * 
                     */
                    void SetDDoSAttackDips(const std::vector<std::string>& _dDoSAttackDips);

                    /**
                     * 判断参数 DDoSAttackDips 是否已赋值
                     * @return DDoSAttackDips 是否已赋值
                     * 
                     */
                    bool DDoSAttackDipsHasBeenSet() const;

                private:

                    /**
                     * <p>事件 ID。</p>
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * <p>攻击类型。</p>
                     */
                    std::string m_attackType;
                    bool m_attackTypeHasBeenSet;

                    /**
                     * <p>攻击状态。</p><p>枚举值：</p><ul><li>0： 观察中</li><li>1： 攻击中</li><li>2： 攻击结束</li></ul>
                     */
                    int64_t m_attackStatus;
                    bool m_attackStatusHasBeenSet;

                    /**
                     * <p>攻击最大带宽，单位为 bps。</p>
                     */
                    int64_t m_attackMaxBandWidth;
                    bool m_attackMaxBandWidthHasBeenSet;

                    /**
                     * <p>攻击包速率峰值，单位为 pps。</p>
                     */
                    int64_t m_attackPacketMaxRate;
                    bool m_attackPacketMaxRateHasBeenSet;

                    /**
                     * <p>攻击开始时间戳。</p><p>单位：秒</p>
                     */
                    int64_t m_attackStartTime;
                    bool m_attackStartTimeHasBeenSet;

                    /**
                     * <p>攻击结束时间戳。</p><p>单位：秒</p>
                     */
                    int64_t m_attackEndTime;
                    bool m_attackEndTimeHasBeenSet;

                    /**
                     * <p>DDoS 策略组 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * <p>站点 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>攻击事件所属地区。</p><p>枚举值：</p><ul><li>overseas： 全球（除中国大陆地区）数据；</li><li>mainland： 中国大陆地区数据。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * <p>封禁解封信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DDoSBlockData> m_dDoSBlockData;
                    bool m_dDoSBlockDataHasBeenSet;

                    /**
                     * <p>被 DDoS 攻击的目的 IP 列表。</p>
                     */
                    std::vector<std::string> m_dDoSAttackDips;
                    bool m_dDoSAttackDipsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DDOSATTACKEVENT_H_
