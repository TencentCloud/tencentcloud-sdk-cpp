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

#ifndef TENCENTCLOUD_BSCA_V20210811_MODEL_CVSSV2INFO_H_
#define TENCENTCLOUD_BSCA_V20210811_MODEL_CVSSV2INFO_H_

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
                * CVSSv2.0详细信息。
                */
                class CVSSV2Info : public AbstractModel
                {
                public:
                    CVSSV2Info();
                    ~CVSSV2Info() = default;
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
                     * 获取AccessVector 攻击途径。
取值范围：
<li>NETWORK 远程</li>
<li>ADJACENT_NETWORK 近邻</li>
<li>LOCAL 本地</li>
                     * @return AccessVector AccessVector 攻击途径。
取值范围：
<li>NETWORK 远程</li>
<li>ADJACENT_NETWORK 近邻</li>
<li>LOCAL 本地</li>
                     * 
                     */
                    std::string GetAccessVector() const;

                    /**
                     * 设置AccessVector 攻击途径。
取值范围：
<li>NETWORK 远程</li>
<li>ADJACENT_NETWORK 近邻</li>
<li>LOCAL 本地</li>
                     * @param _accessVector AccessVector 攻击途径。
取值范围：
<li>NETWORK 远程</li>
<li>ADJACENT_NETWORK 近邻</li>
<li>LOCAL 本地</li>
                     * 
                     */
                    void SetAccessVector(const std::string& _accessVector);

                    /**
                     * 判断参数 AccessVector 是否已赋值
                     * @return AccessVector 是否已赋值
                     * 
                     */
                    bool AccessVectorHasBeenSet() const;

                    /**
                     * 获取AccessComplexity 攻击复杂度。
取值范围：
<li>HIGH 高</li>
<li>MEDIUM 中</li>
<li>LOW 低</li>
                     * @return AccessComplexity AccessComplexity 攻击复杂度。
取值范围：
<li>HIGH 高</li>
<li>MEDIUM 中</li>
<li>LOW 低</li>
                     * 
                     */
                    std::string GetAccessComplexity() const;

                    /**
                     * 设置AccessComplexity 攻击复杂度。
取值范围：
<li>HIGH 高</li>
<li>MEDIUM 中</li>
<li>LOW 低</li>
                     * @param _accessComplexity AccessComplexity 攻击复杂度。
取值范围：
<li>HIGH 高</li>
<li>MEDIUM 中</li>
<li>LOW 低</li>
                     * 
                     */
                    void SetAccessComplexity(const std::string& _accessComplexity);

                    /**
                     * 判断参数 AccessComplexity 是否已赋值
                     * @return AccessComplexity 是否已赋值
                     * 
                     */
                    bool AccessComplexityHasBeenSet() const;

                    /**
                     * 获取Authentication 身份验证。
取值范围：
<li>MULTIPLE 多系统认证</li>
<li>SINGLE 单系统认证</li>
<li>NONE 无</li>
                     * @return Authentication Authentication 身份验证。
取值范围：
<li>MULTIPLE 多系统认证</li>
<li>SINGLE 单系统认证</li>
<li>NONE 无</li>
                     * 
                     */
                    std::string GetAuthentication() const;

                    /**
                     * 设置Authentication 身份验证。
取值范围：
<li>MULTIPLE 多系统认证</li>
<li>SINGLE 单系统认证</li>
<li>NONE 无</li>
                     * @param _authentication Authentication 身份验证。
取值范围：
<li>MULTIPLE 多系统认证</li>
<li>SINGLE 单系统认证</li>
<li>NONE 无</li>
                     * 
                     */
                    void SetAuthentication(const std::string& _authentication);

                    /**
                     * 判断参数 Authentication 是否已赋值
                     * @return Authentication 是否已赋值
                     * 
                     */
                    bool AuthenticationHasBeenSet() const;

                    /**
                     * 获取ConfidentialityImpact 机密性影响。
取值范围：
<li>NONE 无</li>
<li>PARTIAL 部分</li>
<li>COMPLETE 完整</li>
                     * @return ConImpact ConfidentialityImpact 机密性影响。
取值范围：
<li>NONE 无</li>
<li>PARTIAL 部分</li>
<li>COMPLETE 完整</li>
                     * 
                     */
                    std::string GetConImpact() const;

                    /**
                     * 设置ConfidentialityImpact 机密性影响。
取值范围：
<li>NONE 无</li>
<li>PARTIAL 部分</li>
<li>COMPLETE 完整</li>
                     * @param _conImpact ConfidentialityImpact 机密性影响。
取值范围：
<li>NONE 无</li>
<li>PARTIAL 部分</li>
<li>COMPLETE 完整</li>
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
<li>PARTIAL 部分</li>
<li>COMPLETE 完整</li>
                     * @return IntegrityImpact IntegrityImpact 完整性影响。
取值范围：
<li>NONE 无</li>
<li>PARTIAL 部分</li>
<li>COMPLETE 完整</li>
                     * 
                     */
                    std::string GetIntegrityImpact() const;

                    /**
                     * 设置IntegrityImpact 完整性影响。
取值范围：
<li>NONE 无</li>
<li>PARTIAL 部分</li>
<li>COMPLETE 完整</li>
                     * @param _integrityImpact IntegrityImpact 完整性影响。
取值范围：
<li>NONE 无</li>
<li>PARTIAL 部分</li>
<li>COMPLETE 完整</li>
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
<li>PARTIAL 部分</li>
<li>COMPLETE 完整</li>
                     * @return AvailabilityImpact AvailabilityImpact 可用性影响。
取值范围：
<li>NONE 无</li>
<li>PARTIAL 部分</li>
<li>COMPLETE 完整</li>
                     * 
                     */
                    std::string GetAvailabilityImpact() const;

                    /**
                     * 设置AvailabilityImpact 可用性影响。
取值范围：
<li>NONE 无</li>
<li>PARTIAL 部分</li>
<li>COMPLETE 完整</li>
                     * @param _availabilityImpact AvailabilityImpact 可用性影响。
取值范围：
<li>NONE 无</li>
<li>PARTIAL 部分</li>
<li>COMPLETE 完整</li>
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
                     * AccessVector 攻击途径。
取值范围：
<li>NETWORK 远程</li>
<li>ADJACENT_NETWORK 近邻</li>
<li>LOCAL 本地</li>
                     */
                    std::string m_accessVector;
                    bool m_accessVectorHasBeenSet;

                    /**
                     * AccessComplexity 攻击复杂度。
取值范围：
<li>HIGH 高</li>
<li>MEDIUM 中</li>
<li>LOW 低</li>
                     */
                    std::string m_accessComplexity;
                    bool m_accessComplexityHasBeenSet;

                    /**
                     * Authentication 身份验证。
取值范围：
<li>MULTIPLE 多系统认证</li>
<li>SINGLE 单系统认证</li>
<li>NONE 无</li>
                     */
                    std::string m_authentication;
                    bool m_authenticationHasBeenSet;

                    /**
                     * ConfidentialityImpact 机密性影响。
取值范围：
<li>NONE 无</li>
<li>PARTIAL 部分</li>
<li>COMPLETE 完整</li>
                     */
                    std::string m_conImpact;
                    bool m_conImpactHasBeenSet;

                    /**
                     * IntegrityImpact 完整性影响。
取值范围：
<li>NONE 无</li>
<li>PARTIAL 部分</li>
<li>COMPLETE 完整</li>
                     */
                    std::string m_integrityImpact;
                    bool m_integrityImpactHasBeenSet;

                    /**
                     * AvailabilityImpact 可用性影响。
取值范围：
<li>NONE 无</li>
<li>PARTIAL 部分</li>
<li>COMPLETE 完整</li>
                     */
                    std::string m_availabilityImpact;
                    bool m_availabilityImpactHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BSCA_V20210811_MODEL_CVSSV2INFO_H_
