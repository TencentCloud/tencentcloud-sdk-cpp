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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_PEAKPOINTSITEM_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_PEAKPOINTSITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * PeakPoints数组项
                */
                class PeakPointsItem : public AbstractModel
                {
                public:
                    PeakPointsItem();
                    ~PeakPointsItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取秒级别时间戳
                     * @return Time 秒级别时间戳
                     */
                    uint64_t GetTime() const;

                    /**
                     * 设置秒级别时间戳
                     * @param Time 秒级别时间戳
                     */
                    void SetTime(const uint64_t& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取QPS
                     * @return Access QPS
                     */
                    uint64_t GetAccess() const;

                    /**
                     * 设置QPS
                     * @param Access QPS
                     */
                    void SetAccess(const uint64_t& _access);

                    /**
                     * 判断参数 Access 是否已赋值
                     * @return Access 是否已赋值
                     */
                    bool AccessHasBeenSet() const;

                    /**
                     * 获取上行带宽峰值，单位B
                     * @return Up 上行带宽峰值，单位B
                     */
                    uint64_t GetUp() const;

                    /**
                     * 设置上行带宽峰值，单位B
                     * @param Up 上行带宽峰值，单位B
                     */
                    void SetUp(const uint64_t& _up);

                    /**
                     * 判断参数 Up 是否已赋值
                     * @return Up 是否已赋值
                     */
                    bool UpHasBeenSet() const;

                    /**
                     * 获取下行带宽峰值，单位B
                     * @return Down 下行带宽峰值，单位B
                     */
                    uint64_t GetDown() const;

                    /**
                     * 设置下行带宽峰值，单位B
                     * @param Down 下行带宽峰值，单位B
                     */
                    void SetDown(const uint64_t& _down);

                    /**
                     * 判断参数 Down 是否已赋值
                     * @return Down 是否已赋值
                     */
                    bool DownHasBeenSet() const;

                    /**
                     * 获取Web攻击次数
                     * @return Attack Web攻击次数
                     */
                    uint64_t GetAttack() const;

                    /**
                     * 设置Web攻击次数
                     * @param Attack Web攻击次数
                     */
                    void SetAttack(const uint64_t& _attack);

                    /**
                     * 判断参数 Attack 是否已赋值
                     * @return Attack 是否已赋值
                     */
                    bool AttackHasBeenSet() const;

                    /**
                     * 获取CC攻击次数
                     * @return Cc CC攻击次数
                     */
                    uint64_t GetCc() const;

                    /**
                     * 设置CC攻击次数
                     * @param Cc CC攻击次数
                     */
                    void SetCc(const uint64_t& _cc);

                    /**
                     * 判断参数 Cc 是否已赋值
                     * @return Cc 是否已赋值
                     */
                    bool CcHasBeenSet() const;

                    /**
                     * 获取Bot qps
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BotAccess Bot qps
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetBotAccess() const;

                    /**
                     * 设置Bot qps
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BotAccess Bot qps
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBotAccess(const uint64_t& _botAccess);

                    /**
                     * 判断参数 BotAccess 是否已赋值
                     * @return BotAccess 是否已赋值
                     */
                    bool BotAccessHasBeenSet() const;

                private:

                    /**
                     * 秒级别时间戳
                     */
                    uint64_t m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * QPS
                     */
                    uint64_t m_access;
                    bool m_accessHasBeenSet;

                    /**
                     * 上行带宽峰值，单位B
                     */
                    uint64_t m_up;
                    bool m_upHasBeenSet;

                    /**
                     * 下行带宽峰值，单位B
                     */
                    uint64_t m_down;
                    bool m_downHasBeenSet;

                    /**
                     * Web攻击次数
                     */
                    uint64_t m_attack;
                    bool m_attackHasBeenSet;

                    /**
                     * CC攻击次数
                     */
                    uint64_t m_cc;
                    bool m_ccHasBeenSet;

                    /**
                     * Bot qps
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_botAccess;
                    bool m_botAccessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_PEAKPOINTSITEM_H_
