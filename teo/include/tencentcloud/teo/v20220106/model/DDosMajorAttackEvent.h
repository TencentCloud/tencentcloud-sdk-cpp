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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DDOSMAJORATTACKEVENT_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DDOSMAJORATTACKEVENT_H_

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
                * DDos主攻击事件
                */
                class DDosMajorAttackEvent : public AbstractModel
                {
                public:
                    DDosMajorAttackEvent();
                    ~DDosMajorAttackEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ddos 策略组id
                     * @return PolicyId ddos 策略组id
                     */
                    int64_t GetPolicyId() const;

                    /**
                     * 设置ddos 策略组id
                     * @param PolicyId ddos 策略组id
                     */
                    void SetPolicyId(const int64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取攻击最大带宽
                     * @return AttackMaxBandWidth 攻击最大带宽
                     */
                    int64_t GetAttackMaxBandWidth() const;

                    /**
                     * 设置攻击最大带宽
                     * @param AttackMaxBandWidth 攻击最大带宽
                     */
                    void SetAttackMaxBandWidth(const int64_t& _attackMaxBandWidth);

                    /**
                     * 判断参数 AttackMaxBandWidth 是否已赋值
                     * @return AttackMaxBandWidth 是否已赋值
                     */
                    bool AttackMaxBandWidthHasBeenSet() const;

                    /**
                     * 获取攻击时间 单位为s
                     * @return AttackTime 攻击时间 单位为s
                     */
                    int64_t GetAttackTime() const;

                    /**
                     * 设置攻击时间 单位为s
                     * @param AttackTime 攻击时间 单位为s
                     */
                    void SetAttackTime(const int64_t& _attackTime);

                    /**
                     * 判断参数 AttackTime 是否已赋值
                     * @return AttackTime 是否已赋值
                     */
                    bool AttackTimeHasBeenSet() const;

                private:

                    /**
                     * ddos 策略组id
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 攻击最大带宽
                     */
                    int64_t m_attackMaxBandWidth;
                    bool m_attackMaxBandWidthHasBeenSet;

                    /**
                     * 攻击时间 单位为s
                     */
                    int64_t m_attackTime;
                    bool m_attackTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DDOSMAJORATTACKEVENT_H_
