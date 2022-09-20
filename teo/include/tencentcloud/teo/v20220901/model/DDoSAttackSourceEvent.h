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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DDOSATTACKSOURCEEVENT_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DDOSATTACKSOURCEEVENT_H_

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
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DDoS攻击事件对象
                */
                class DDoSAttackSourceEvent : public AbstractModel
                {
                public:
                    DDoSAttackSourceEvent();
                    ~DDoSAttackSourceEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取攻击源ip。
                     * @return AttackSourceIp 攻击源ip。
                     */
                    std::string GetAttackSourceIp() const;

                    /**
                     * 设置攻击源ip。
                     * @param AttackSourceIp 攻击源ip。
                     */
                    void SetAttackSourceIp(const std::string& _attackSourceIp);

                    /**
                     * 判断参数 AttackSourceIp 是否已赋值
                     * @return AttackSourceIp 是否已赋值
                     */
                    bool AttackSourceIpHasBeenSet() const;

                    /**
                     * 获取地区（国家）。
                     * @return AttackRegion 地区（国家）。
                     */
                    std::string GetAttackRegion() const;

                    /**
                     * 设置地区（国家）。
                     * @param AttackRegion 地区（国家）。
                     */
                    void SetAttackRegion(const std::string& _attackRegion);

                    /**
                     * 判断参数 AttackRegion 是否已赋值
                     * @return AttackRegion 是否已赋值
                     */
                    bool AttackRegionHasBeenSet() const;

                    /**
                     * 获取累计攻击流量。
                     * @return AttackFlow 累计攻击流量。
                     */
                    uint64_t GetAttackFlow() const;

                    /**
                     * 设置累计攻击流量。
                     * @param AttackFlow 累计攻击流量。
                     */
                    void SetAttackFlow(const uint64_t& _attackFlow);

                    /**
                     * 判断参数 AttackFlow 是否已赋值
                     * @return AttackFlow 是否已赋值
                     */
                    bool AttackFlowHasBeenSet() const;

                    /**
                     * 获取累计攻击包量。
                     * @return AttackPacketNum 累计攻击包量。
                     */
                    uint64_t GetAttackPacketNum() const;

                    /**
                     * 设置累计攻击包量。
                     * @param AttackPacketNum 累计攻击包量。
                     */
                    void SetAttackPacketNum(const uint64_t& _attackPacketNum);

                    /**
                     * 判断参数 AttackPacketNum 是否已赋值
                     * @return AttackPacketNum 是否已赋值
                     */
                    bool AttackPacketNumHasBeenSet() const;

                private:

                    /**
                     * 攻击源ip。
                     */
                    std::string m_attackSourceIp;
                    bool m_attackSourceIpHasBeenSet;

                    /**
                     * 地区（国家）。
                     */
                    std::string m_attackRegion;
                    bool m_attackRegionHasBeenSet;

                    /**
                     * 累计攻击流量。
                     */
                    uint64_t m_attackFlow;
                    bool m_attackFlowHasBeenSet;

                    /**
                     * 累计攻击包量。
                     */
                    uint64_t m_attackPacketNum;
                    bool m_attackPacketNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DDOSATTACKSOURCEEVENT_H_
