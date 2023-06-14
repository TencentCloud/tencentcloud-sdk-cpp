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

#ifndef TENCENTCLOUD_BSCA_V20210811_MODEL_CVSSV3INFO_H_
#define TENCENTCLOUD_BSCA_V20210811_MODEL_CVSSV3INFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bsca
    {
        namespace V20210811
        {
            namespace Model
            {
                /**
                * Cvssv3.0详细信息。
                */
                class CVSSV3Info : public AbstractModel
                {
                public:
                    CVSSV3Info();
                    ~CVSSV3Info() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CVE评分。
                     * @return CVSS CVE评分。
                     * 
                     */
                    double GetCVSS() const;

                    /**
                     * 设置CVE评分。
                     * @param _cVSS CVE评分。
                     * 
                     */
                    void SetCVSS(const double& _cVSS);

                    /**
                     * 判断参数 CVSS 是否已赋值
                     * @return CVSS 是否已赋值
                     * 
                     */
                    bool CVSSHasBeenSet() const;

                    /**
                     * 获取AttackVector 攻击途径。
取值范围：
<li>NETWORK 远程</li>
<li>ADJACENT_NETWORK 近邻</li>
<li>LOCAL 本地</li>
<li>PHYSICAL 物理</li>
                     * @return AttackVector AttackVector 攻击途径。
取值范围：
<li>NETWORK 远程</li>
<li>ADJACENT_NETWORK 近邻</li>
<li>LOCAL 本地</li>
<li>PHYSICAL 物理</li>
                     * 
                     */
                    std::string GetAttackVector() const;

                    /**
                     * 设置AttackVector 攻击途径。
取值范围：
<li>NETWORK 远程</li>
<li>ADJACENT_NETWORK 近邻</li>
<li>LOCAL 本地</li>
<li>PHYSICAL 物理</li>
                     * @param _attackVector AttackVector 攻击途径。
取值范围：
<li>NETWORK 远程</li>
<li>ADJACENT_NETWORK 近邻</li>
<li>LOCAL 本地</li>
<li>PHYSICAL 物理</li>
                     * 
                     */
                    void SetAttackVector(const std::string& _attackVector);

                    /**
                     * 判断参数 AttackVector 是否已赋值
                     * @return AttackVector 是否已赋值
                     * 
                     */
                    bool AttackVectorHasBeenSet() const;

                    /**
                     * 获取AttackComplexity 攻击复杂度。
取值范围：
<li>HIGH 高</li>
<li>LOW 低</li>
                     * @return AttackComplexity AttackComplexity 攻击复杂度。
取值范围：
<li>HIGH 高</li>
<li>LOW 低</li>
                     * 
                     */
                    std::string GetAttackComplexity() const;

                    /**
                     * 设置AttackComplexity 攻击复杂度。
取值范围：
<li>HIGH 高</li>
<li>LOW 低</li>
                     * @param _attackComplexity AttackComplexity 攻击复杂度。
取值范围：
<li>HIGH 高</li>
<li>LOW 低</li>
                     * 
                     */
                    void SetAttackComplexity(const std::string& _attackComplexity);

                    /**
                     * 判断参数 AttackComplexity 是否已赋值
                     * @return AttackComplexity 是否已赋值
                     * 
                     */
                    bool AttackComplexityHasBeenSet() const;

                    /**
                     * 获取PrivilegesRequired 触发特权。
取值范围：
<li>HIGH 高</li>
<li>LOW 低</li>
<li>NONE 无</li>
                     * @return PrivilegesRequired PrivilegesRequired 触发特权。
取值范围：
<li>HIGH 高</li>
<li>LOW 低</li>
<li>NONE 无</li>
                     * 
                     */
                    std::string GetPrivilegesRequired() const;

                    /**
                     * 设置PrivilegesRequired 触发特权。
取值范围：
<li>HIGH 高</li>
<li>LOW 低</li>
<li>NONE 无</li>
                     * @param _privilegesRequired PrivilegesRequired 触发特权。
取值范围：
<li>HIGH 高</li>
<li>LOW 低</li>
<li>NONE 无</li>
                     * 
                     */
                    void SetPrivilegesRequired(const std::string& _privilegesRequired);

                    /**
                     * 判断参数 PrivilegesRequired 是否已赋值
                     * @return PrivilegesRequired 是否已赋值
                     * 
                     */
                    bool PrivilegesRequiredHasBeenSet() const;

                    /**
                     * 获取UserInteraction 交互必要性。
取值范围：
<li>NONE 无</li>
<li>REQUIRED 需要</li>
                     * @return UserInteraction UserInteraction 交互必要性。
取值范围：
<li>NONE 无</li>
<li>REQUIRED 需要</li>
                     * 
                     */
                    std::string GetUserInteraction() const;

                    /**
                     * 设置UserInteraction 交互必要性。
取值范围：
<li>NONE 无</li>
<li>REQUIRED 需要</li>
                     * @param _userInteraction UserInteraction 交互必要性。
取值范围：
<li>NONE 无</li>
<li>REQUIRED 需要</li>
                     * 
                     */
                    void SetUserInteraction(const std::string& _userInteraction);

                    /**
                     * 判断参数 UserInteraction 是否已赋值
                     * @return UserInteraction 是否已赋值
                     * 
                     */
                    bool UserInteractionHasBeenSet() const;

                    /**
                     * 获取Scope 绕过安全边界。
取值范围：
<li>UNCHANGED 否</li>
<li>CHANGED 能</li>
                     * @return Scope Scope 绕过安全边界。
取值范围：
<li>UNCHANGED 否</li>
<li>CHANGED 能</li>
                     * 
                     */
                    std::string GetScope() const;

                    /**
                     * 设置Scope 绕过安全边界。
取值范围：
<li>UNCHANGED 否</li>
<li>CHANGED 能</li>
                     * @param _scope Scope 绕过安全边界。
取值范围：
<li>UNCHANGED 否</li>
<li>CHANGED 能</li>
                     * 
                     */
                    void SetScope(const std::string& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取ConfidentialityImpact 机密性影响。
取值范围：
<li>NONE 无</li>
<li>LOW 低</li>
<li>HIGH 高</li>
                     * @return ConImpact ConfidentialityImpact 机密性影响。
取值范围：
<li>NONE 无</li>
<li>LOW 低</li>
<li>HIGH 高</li>
                     * 
                     */
                    std::string GetConImpact() const;

                    /**
                     * 设置ConfidentialityImpact 机密性影响。
取值范围：
<li>NONE 无</li>
<li>LOW 低</li>
<li>HIGH 高</li>
                     * @param _conImpact ConfidentialityImpact 机密性影响。
取值范围：
<li>NONE 无</li>
<li>LOW 低</li>
<li>HIGH 高</li>
                     * 
                     */
                    void SetConImpact(const std::string& _conImpact);

                    /**
                     * 判断参数 ConImpact 是否已赋值
                     * @return ConImpact 是否已赋值
                     * 
                     */
                    bool ConImpactHasBeenSet() const;

                    /**
                     * 获取IntegrityImpact 完整性影响。
取值范围：
<li>NONE 无</li>
<li>LOW 低</li>
<li>HIGH 高</li>
                     * @return IntegrityImpact IntegrityImpact 完整性影响。
取值范围：
<li>NONE 无</li>
<li>LOW 低</li>
<li>HIGH 高</li>
                     * 
                     */
                    std::string GetIntegrityImpact() const;

                    /**
                     * 设置IntegrityImpact 完整性影响。
取值范围：
<li>NONE 无</li>
<li>LOW 低</li>
<li>HIGH 高</li>
                     * @param _integrityImpact IntegrityImpact 完整性影响。
取值范围：
<li>NONE 无</li>
<li>LOW 低</li>
<li>HIGH 高</li>
                     * 
                     */
                    void SetIntegrityImpact(const std::string& _integrityImpact);

                    /**
                     * 判断参数 IntegrityImpact 是否已赋值
                     * @return IntegrityImpact 是否已赋值
                     * 
                     */
                    bool IntegrityImpactHasBeenSet() const;

                    /**
                     * 获取AvailabilityImpact 可用性影响。
取值范围：
<li>NONE 无</li>
<li>LOW 低</li>
<li>HIGH 高</li>
                     * @return AvailabilityImpact AvailabilityImpact 可用性影响。
取值范围：
<li>NONE 无</li>
<li>LOW 低</li>
<li>HIGH 高</li>
                     * 
                     */
                    std::string GetAvailabilityImpact() const;

                    /**
                     * 设置AvailabilityImpact 可用性影响。
取值范围：
<li>NONE 无</li>
<li>LOW 低</li>
<li>HIGH 高</li>
                     * @param _availabilityImpact AvailabilityImpact 可用性影响。
取值范围：
<li>NONE 无</li>
<li>LOW 低</li>
<li>HIGH 高</li>
                     * 
                     */
                    void SetAvailabilityImpact(const std::string& _availabilityImpact);

                    /**
                     * 判断参数 AvailabilityImpact 是否已赋值
                     * @return AvailabilityImpact 是否已赋值
                     * 
                     */
                    bool AvailabilityImpactHasBeenSet() const;

                private:

                    /**
                     * CVE评分。
                     */
                    double m_cVSS;
                    bool m_cVSSHasBeenSet;

                    /**
                     * AttackVector 攻击途径。
取值范围：
<li>NETWORK 远程</li>
<li>ADJACENT_NETWORK 近邻</li>
<li>LOCAL 本地</li>
<li>PHYSICAL 物理</li>
                     */
                    std::string m_attackVector;
                    bool m_attackVectorHasBeenSet;

                    /**
                     * AttackComplexity 攻击复杂度。
取值范围：
<li>HIGH 高</li>
<li>LOW 低</li>
                     */
                    std::string m_attackComplexity;
                    bool m_attackComplexityHasBeenSet;

                    /**
                     * PrivilegesRequired 触发特权。
取值范围：
<li>HIGH 高</li>
<li>LOW 低</li>
<li>NONE 无</li>
                     */
                    std::string m_privilegesRequired;
                    bool m_privilegesRequiredHasBeenSet;

                    /**
                     * UserInteraction 交互必要性。
取值范围：
<li>NONE 无</li>
<li>REQUIRED 需要</li>
                     */
                    std::string m_userInteraction;
                    bool m_userInteractionHasBeenSet;

                    /**
                     * Scope 绕过安全边界。
取值范围：
<li>UNCHANGED 否</li>
<li>CHANGED 能</li>
                     */
                    std::string m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * ConfidentialityImpact 机密性影响。
取值范围：
<li>NONE 无</li>
<li>LOW 低</li>
<li>HIGH 高</li>
                     */
                    std::string m_conImpact;
                    bool m_conImpactHasBeenSet;

                    /**
                     * IntegrityImpact 完整性影响。
取值范围：
<li>NONE 无</li>
<li>LOW 低</li>
<li>HIGH 高</li>
                     */
                    std::string m_integrityImpact;
                    bool m_integrityImpactHasBeenSet;

                    /**
                     * AvailabilityImpact 可用性影响。
取值范围：
<li>NONE 无</li>
<li>LOW 低</li>
<li>HIGH 高</li>
                     */
                    std::string m_availabilityImpact;
                    bool m_availabilityImpactHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BSCA_V20210811_MODEL_CVSSV3INFO_H_
