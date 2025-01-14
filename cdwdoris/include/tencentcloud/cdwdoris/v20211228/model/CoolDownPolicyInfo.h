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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_COOLDOWNPOLICYINFO_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_COOLDOWNPOLICYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * 冷热分层策略
                */
                class CoolDownPolicyInfo : public AbstractModel
                {
                public:
                    CoolDownPolicyInfo();
                    ~CoolDownPolicyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略名称
                     * @return PolicyName 策略名称
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置策略名称
                     * @param _policyName 策略名称
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取cooldown_ttl
                     * @return CooldownDatetime cooldown_ttl
                     * 
                     */
                    std::string GetCooldownDatetime() const;

                    /**
                     * 设置cooldown_ttl
                     * @param _cooldownDatetime cooldown_ttl
                     * 
                     */
                    void SetCooldownDatetime(const std::string& _cooldownDatetime);

                    /**
                     * 判断参数 CooldownDatetime 是否已赋值
                     * @return CooldownDatetime 是否已赋值
                     * 
                     */
                    bool CooldownDatetimeHasBeenSet() const;

                    /**
                     * 获取cooldown_datetime
                     * @return CooldownTtl cooldown_datetime
                     * 
                     */
                    std::string GetCooldownTtl() const;

                    /**
                     * 设置cooldown_datetime
                     * @param _cooldownTtl cooldown_datetime
                     * 
                     */
                    void SetCooldownTtl(const std::string& _cooldownTtl);

                    /**
                     * 判断参数 CooldownTtl 是否已赋值
                     * @return CooldownTtl 是否已赋值
                     * 
                     */
                    bool CooldownTtlHasBeenSet() const;

                private:

                    /**
                     * 策略名称
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * cooldown_ttl
                     */
                    std::string m_cooldownDatetime;
                    bool m_cooldownDatetimeHasBeenSet;

                    /**
                     * cooldown_datetime
                     */
                    std::string m_cooldownTtl;
                    bool m_cooldownTtlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_COOLDOWNPOLICYINFO_H_
