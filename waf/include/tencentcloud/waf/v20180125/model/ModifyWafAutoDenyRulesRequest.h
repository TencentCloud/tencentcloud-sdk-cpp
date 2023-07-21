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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYWAFAUTODENYRULESREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYWAFAUTODENYRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyWafAutoDenyRules请求参数结构体
                */
                class ModifyWafAutoDenyRulesRequest : public AbstractModel
                {
                public:
                    ModifyWafAutoDenyRulesRequest();
                    ~ModifyWafAutoDenyRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取触发IP封禁的攻击次数阈值，范围为2~100次
                     * @return AttackThreshold 触发IP封禁的攻击次数阈值，范围为2~100次
                     * 
                     */
                    int64_t GetAttackThreshold() const;

                    /**
                     * 设置触发IP封禁的攻击次数阈值，范围为2~100次
                     * @param _attackThreshold 触发IP封禁的攻击次数阈值，范围为2~100次
                     * 
                     */
                    void SetAttackThreshold(const int64_t& _attackThreshold);

                    /**
                     * 判断参数 AttackThreshold 是否已赋值
                     * @return AttackThreshold 是否已赋值
                     * 
                     */
                    bool AttackThresholdHasBeenSet() const;

                    /**
                     * 获取IP封禁统计时间，范围为1-60分钟
                     * @return TimeThreshold IP封禁统计时间，范围为1-60分钟
                     * 
                     */
                    int64_t GetTimeThreshold() const;

                    /**
                     * 设置IP封禁统计时间，范围为1-60分钟
                     * @param _timeThreshold IP封禁统计时间，范围为1-60分钟
                     * 
                     */
                    void SetTimeThreshold(const int64_t& _timeThreshold);

                    /**
                     * 判断参数 TimeThreshold 是否已赋值
                     * @return TimeThreshold 是否已赋值
                     * 
                     */
                    bool TimeThresholdHasBeenSet() const;

                    /**
                     * 获取触发IP封禁后的封禁时间，范围为5~360分钟
                     * @return DenyTimeThreshold 触发IP封禁后的封禁时间，范围为5~360分钟
                     * 
                     */
                    int64_t GetDenyTimeThreshold() const;

                    /**
                     * 设置触发IP封禁后的封禁时间，范围为5~360分钟
                     * @param _denyTimeThreshold 触发IP封禁后的封禁时间，范围为5~360分钟
                     * 
                     */
                    void SetDenyTimeThreshold(const int64_t& _denyTimeThreshold);

                    /**
                     * 判断参数 DenyTimeThreshold 是否已赋值
                     * @return DenyTimeThreshold 是否已赋值
                     * 
                     */
                    bool DenyTimeThresholdHasBeenSet() const;

                    /**
                     * 获取自动封禁状态，0表示关闭，1表示打开
                     * @return DefenseStatus 自动封禁状态，0表示关闭，1表示打开
                     * 
                     */
                    int64_t GetDefenseStatus() const;

                    /**
                     * 设置自动封禁状态，0表示关闭，1表示打开
                     * @param _defenseStatus 自动封禁状态，0表示关闭，1表示打开
                     * 
                     */
                    void SetDefenseStatus(const int64_t& _defenseStatus);

                    /**
                     * 判断参数 DefenseStatus 是否已赋值
                     * @return DefenseStatus 是否已赋值
                     * 
                     */
                    bool DefenseStatusHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 触发IP封禁的攻击次数阈值，范围为2~100次
                     */
                    int64_t m_attackThreshold;
                    bool m_attackThresholdHasBeenSet;

                    /**
                     * IP封禁统计时间，范围为1-60分钟
                     */
                    int64_t m_timeThreshold;
                    bool m_timeThresholdHasBeenSet;

                    /**
                     * 触发IP封禁后的封禁时间，范围为5~360分钟
                     */
                    int64_t m_denyTimeThreshold;
                    bool m_denyTimeThresholdHasBeenSet;

                    /**
                     * 自动封禁状态，0表示关闭，1表示打开
                     */
                    int64_t m_defenseStatus;
                    bool m_defenseStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYWAFAUTODENYRULESREQUEST_H_
