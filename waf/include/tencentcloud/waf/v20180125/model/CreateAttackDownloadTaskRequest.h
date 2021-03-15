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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_CREATEATTACKDOWNLOADTASKREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_CREATEATTACKDOWNLOADTASKREQUEST_H_

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
                * CreateAttackDownloadTask请求参数结构体
                */
                class CreateAttackDownloadTaskRequest : public AbstractModel
                {
                public:
                    CreateAttackDownloadTaskRequest();
                    ~CreateAttackDownloadTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取域名，所有域名填写all
                     * @return Domain 域名，所有域名填写all
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名，所有域名填写all
                     * @param Domain 域名，所有域名填写all
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取查询起始时间
                     * @return FromTime 查询起始时间
                     */
                    std::string GetFromTime() const;

                    /**
                     * 设置查询起始时间
                     * @param FromTime 查询起始时间
                     */
                    void SetFromTime(const std::string& _fromTime);

                    /**
                     * 判断参数 FromTime 是否已赋值
                     * @return FromTime 是否已赋值
                     */
                    bool FromTimeHasBeenSet() const;

                    /**
                     * 获取查询结束时间
                     * @return ToTime 查询结束时间
                     */
                    std::string GetToTime() const;

                    /**
                     * 设置查询结束时间
                     * @param ToTime 查询结束时间
                     */
                    void SetToTime(const std::string& _toTime);

                    /**
                     * 判断参数 ToTime 是否已赋值
                     * @return ToTime 是否已赋值
                     */
                    bool ToTimeHasBeenSet() const;

                    /**
                     * 获取下载任务名字
                     * @return Name 下载任务名字
                     */
                    std::string GetName() const;

                    /**
                     * 设置下载任务名字
                     * @param Name 下载任务名字
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取风险等级
                     * @return RiskLevel 风险等级
                     */
                    uint64_t GetRiskLevel() const;

                    /**
                     * 设置风险等级
                     * @param RiskLevel 风险等级
                     */
                    void SetRiskLevel(const uint64_t& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取拦截状态
                     * @return Status 拦截状态
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置拦截状态
                     * @param Status 拦截状态
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取自定义策略ID
                     * @return RuleId 自定义策略ID
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置自定义策略ID
                     * @param RuleId 自定义策略ID
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取攻击者IP
                     * @return AttackIp 攻击者IP
                     */
                    std::string GetAttackIp() const;

                    /**
                     * 设置攻击者IP
                     * @param AttackIp 攻击者IP
                     */
                    void SetAttackIp(const std::string& _attackIp);

                    /**
                     * 判断参数 AttackIp 是否已赋值
                     * @return AttackIp 是否已赋值
                     */
                    bool AttackIpHasBeenSet() const;

                    /**
                     * 获取攻击类型
                     * @return AttackType 攻击类型
                     */
                    std::string GetAttackType() const;

                    /**
                     * 设置攻击类型
                     * @param AttackType 攻击类型
                     */
                    void SetAttackType(const std::string& _attackType);

                    /**
                     * 判断参数 AttackType 是否已赋值
                     * @return AttackType 是否已赋值
                     */
                    bool AttackTypeHasBeenSet() const;

                private:

                    /**
                     * 域名，所有域名填写all
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 查询起始时间
                     */
                    std::string m_fromTime;
                    bool m_fromTimeHasBeenSet;

                    /**
                     * 查询结束时间
                     */
                    std::string m_toTime;
                    bool m_toTimeHasBeenSet;

                    /**
                     * 下载任务名字
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 风险等级
                     */
                    uint64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * 拦截状态
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 自定义策略ID
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 攻击者IP
                     */
                    std::string m_attackIp;
                    bool m_attackIpHasBeenSet;

                    /**
                     * 攻击类型
                     */
                    std::string m_attackType;
                    bool m_attackTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_CREATEATTACKDOWNLOADTASKREQUEST_H_
