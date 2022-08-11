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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DDOSATTACKEVENTDETAILDATA_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DDOSATTACKEVENTDETAILDATA_H_

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
                * ddos 攻击事件的详情
                */
                class DDosAttackEventDetailData : public AbstractModel
                {
                public:
                    DDosAttackEventDetailData();
                    ~DDosAttackEventDetailData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取攻击状态，取值有：
<li>1 ：观察中 ；</li>
<li>2 ：攻击开始 ；</li>
<li>3 ：攻击结束 。</li>
                     * @return AttackStatus 攻击状态，取值有：
<li>1 ：观察中 ；</li>
<li>2 ：攻击开始 ；</li>
<li>3 ：攻击结束 。</li>
                     */
                    int64_t GetAttackStatus() const;

                    /**
                     * 设置攻击状态，取值有：
<li>1 ：观察中 ；</li>
<li>2 ：攻击开始 ；</li>
<li>3 ：攻击结束 。</li>
                     * @param AttackStatus 攻击状态，取值有：
<li>1 ：观察中 ；</li>
<li>2 ：攻击开始 ；</li>
<li>3 ：攻击结束 。</li>
                     */
                    void SetAttackStatus(const int64_t& _attackStatus);

                    /**
                     * 判断参数 AttackStatus 是否已赋值
                     * @return AttackStatus 是否已赋值
                     */
                    bool AttackStatusHasBeenSet() const;

                    /**
                     * 获取攻击类型。
                     * @return AttackType 攻击类型。
                     */
                    std::string GetAttackType() const;

                    /**
                     * 设置攻击类型。
                     * @param AttackType 攻击类型。
                     */
                    void SetAttackType(const std::string& _attackType);

                    /**
                     * 判断参数 AttackType 是否已赋值
                     * @return AttackType 是否已赋值
                     */
                    bool AttackTypeHasBeenSet() const;

                    /**
                     * 获取结束时间。
                     * @return EndTime 结束时间。
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置结束时间。
                     * @param EndTime 结束时间。
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取开始时间。
                     * @return StartTime 开始时间。
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置开始时间。
                     * @param StartTime 开始时间。
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取最大带宽。
                     * @return MaxBandWidth 最大带宽。
                     */
                    int64_t GetMaxBandWidth() const;

                    /**
                     * 设置最大带宽。
                     * @param MaxBandWidth 最大带宽。
                     */
                    void SetMaxBandWidth(const int64_t& _maxBandWidth);

                    /**
                     * 判断参数 MaxBandWidth 是否已赋值
                     * @return MaxBandWidth 是否已赋值
                     */
                    bool MaxBandWidthHasBeenSet() const;

                    /**
                     * 获取最大包速率。
                     * @return PacketMaxRate 最大包速率。
                     */
                    int64_t GetPacketMaxRate() const;

                    /**
                     * 设置最大包速率。
                     * @param PacketMaxRate 最大包速率。
                     */
                    void SetPacketMaxRate(const int64_t& _packetMaxRate);

                    /**
                     * 判断参数 PacketMaxRate 是否已赋值
                     * @return PacketMaxRate 是否已赋值
                     */
                    bool PacketMaxRateHasBeenSet() const;

                    /**
                     * 获取事件Id。
                     * @return EventId 事件Id。
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置事件Id。
                     * @param EventId 事件Id。
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取ddos 策略组id。
                     * @return PolicyId ddos 策略组id。
                     */
                    int64_t GetPolicyId() const;

                    /**
                     * 设置ddos 策略组id。
                     * @param PolicyId ddos 策略组id。
                     */
                    void SetPolicyId(const int64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     */
                    bool PolicyIdHasBeenSet() const;

                private:

                    /**
                     * 攻击状态，取值有：
<li>1 ：观察中 ；</li>
<li>2 ：攻击开始 ；</li>
<li>3 ：攻击结束 。</li>
                     */
                    int64_t m_attackStatus;
                    bool m_attackStatusHasBeenSet;

                    /**
                     * 攻击类型。
                     */
                    std::string m_attackType;
                    bool m_attackTypeHasBeenSet;

                    /**
                     * 结束时间。
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 开始时间。
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 最大带宽。
                     */
                    int64_t m_maxBandWidth;
                    bool m_maxBandWidthHasBeenSet;

                    /**
                     * 最大包速率。
                     */
                    int64_t m_packetMaxRate;
                    bool m_packetMaxRateHasBeenSet;

                    /**
                     * 事件Id。
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * ddos 策略组id。
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DDOSATTACKEVENTDETAILDATA_H_
