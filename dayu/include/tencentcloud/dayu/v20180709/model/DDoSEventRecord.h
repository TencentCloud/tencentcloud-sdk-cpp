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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DDOSEVENTRECORD_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DDOSEVENTRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DDoS攻击事件记录
                */
                class DDoSEventRecord : public AbstractModel
                {
                public:
                    DDoSEventRecord();
                    ~DDoSEventRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版；basic表示DDoS基础防护）
                     * @return Business 大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版；basic表示DDoS基础防护）
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版；basic表示DDoS基础防护）
                     * @param _business 大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版；basic表示DDoS基础防护）
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取资源ID
                     * @return Id 资源ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置资源ID
                     * @param _id 资源ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取资源的IP
                     * @return Vip 资源的IP
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置资源的IP
                     * @param _vip 资源的IP
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取攻击开始时间
                     * @return StartTime 攻击开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置攻击开始时间
                     * @param _startTime 攻击开始时间
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
                     * 获取攻击结束时间
                     * @return EndTime 攻击结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置攻击结束时间
                     * @param _endTime 攻击结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取攻击最大带宽
                     * @return Mbps 攻击最大带宽
                     * 
                     */
                    uint64_t GetMbps() const;

                    /**
                     * 设置攻击最大带宽
                     * @param _mbps 攻击最大带宽
                     * 
                     */
                    void SetMbps(const uint64_t& _mbps);

                    /**
                     * 判断参数 Mbps 是否已赋值
                     * @return Mbps 是否已赋值
                     * 
                     */
                    bool MbpsHasBeenSet() const;

                    /**
                     * 获取攻击最大包速率
                     * @return Pps 攻击最大包速率
                     * 
                     */
                    uint64_t GetPps() const;

                    /**
                     * 设置攻击最大包速率
                     * @param _pps 攻击最大包速率
                     * 
                     */
                    void SetPps(const uint64_t& _pps);

                    /**
                     * 判断参数 Pps 是否已赋值
                     * @return Pps 是否已赋值
                     * 
                     */
                    bool PpsHasBeenSet() const;

                    /**
                     * 获取攻击类型
                     * @return AttackType 攻击类型
                     * 
                     */
                    std::string GetAttackType() const;

                    /**
                     * 设置攻击类型
                     * @param _attackType 攻击类型
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
                     * 获取是否被封堵，取值[1（是），0（否），2（无效值）]
                     * @return BlockFlag 是否被封堵，取值[1（是），0（否），2（无效值）]
                     * 
                     */
                    uint64_t GetBlockFlag() const;

                    /**
                     * 设置是否被封堵，取值[1（是），0（否），2（无效值）]
                     * @param _blockFlag 是否被封堵，取值[1（是），0（否），2（无效值）]
                     * 
                     */
                    void SetBlockFlag(const uint64_t& _blockFlag);

                    /**
                     * 判断参数 BlockFlag 是否已赋值
                     * @return BlockFlag 是否已赋值
                     * 
                     */
                    bool BlockFlagHasBeenSet() const;

                    /**
                     * 获取是否超过弹性防护峰值，取值取值[yes(是)，no(否)，空字符串（未知值）]
                     * @return OverLoad 是否超过弹性防护峰值，取值取值[yes(是)，no(否)，空字符串（未知值）]
                     * 
                     */
                    std::string GetOverLoad() const;

                    /**
                     * 设置是否超过弹性防护峰值，取值取值[yes(是)，no(否)，空字符串（未知值）]
                     * @param _overLoad 是否超过弹性防护峰值，取值取值[yes(是)，no(否)，空字符串（未知值）]
                     * 
                     */
                    void SetOverLoad(const std::string& _overLoad);

                    /**
                     * 判断参数 OverLoad 是否已赋值
                     * @return OverLoad 是否已赋值
                     * 
                     */
                    bool OverLoadHasBeenSet() const;

                    /**
                     * 获取攻击状态，取值[0（攻击中）, 1（攻击结束）]
                     * @return AttackStatus 攻击状态，取值[0（攻击中）, 1（攻击结束）]
                     * 
                     */
                    uint64_t GetAttackStatus() const;

                    /**
                     * 设置攻击状态，取值[0（攻击中）, 1（攻击结束）]
                     * @param _attackStatus 攻击状态，取值[0（攻击中）, 1（攻击结束）]
                     * 
                     */
                    void SetAttackStatus(const uint64_t& _attackStatus);

                    /**
                     * 判断参数 AttackStatus 是否已赋值
                     * @return AttackStatus 是否已赋值
                     * 
                     */
                    bool AttackStatusHasBeenSet() const;

                    /**
                     * 获取资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceName 资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceName 资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取攻击事件Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventId 攻击事件Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置攻击事件Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventId 攻击事件Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                private:

                    /**
                     * 大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版；basic表示DDoS基础防护）
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * 资源ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 资源的IP
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 攻击开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 攻击结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 攻击最大带宽
                     */
                    uint64_t m_mbps;
                    bool m_mbpsHasBeenSet;

                    /**
                     * 攻击最大包速率
                     */
                    uint64_t m_pps;
                    bool m_ppsHasBeenSet;

                    /**
                     * 攻击类型
                     */
                    std::string m_attackType;
                    bool m_attackTypeHasBeenSet;

                    /**
                     * 是否被封堵，取值[1（是），0（否），2（无效值）]
                     */
                    uint64_t m_blockFlag;
                    bool m_blockFlagHasBeenSet;

                    /**
                     * 是否超过弹性防护峰值，取值取值[yes(是)，no(否)，空字符串（未知值）]
                     */
                    std::string m_overLoad;
                    bool m_overLoadHasBeenSet;

                    /**
                     * 攻击状态，取值[0（攻击中）, 1（攻击结束）]
                     */
                    uint64_t m_attackStatus;
                    bool m_attackStatusHasBeenSet;

                    /**
                     * 资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * 攻击事件Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DDOSEVENTRECORD_H_
