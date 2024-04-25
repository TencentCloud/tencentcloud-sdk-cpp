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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYMODULESTATUSREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYMODULESTATUSREQUEST_H_

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
                * ModifyModuleStatus请求参数结构体
                */
                class ModifyModuleStatusRequest : public AbstractModel
                {
                public:
                    ModifyModuleStatusRequest();
                    ~ModifyModuleStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要设置的domain
                     * @return Domain 需要设置的domain
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置需要设置的domain
                     * @param _domain 需要设置的domain
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
                     * 获取Web 安全模块开关，0或1
                     * @return WebSecurity Web 安全模块开关，0或1
                     * 
                     */
                    uint64_t GetWebSecurity() const;

                    /**
                     * 设置Web 安全模块开关，0或1
                     * @param _webSecurity Web 安全模块开关，0或1
                     * 
                     */
                    void SetWebSecurity(const uint64_t& _webSecurity);

                    /**
                     * 判断参数 WebSecurity 是否已赋值
                     * @return WebSecurity 是否已赋值
                     * 
                     */
                    bool WebSecurityHasBeenSet() const;

                    /**
                     * 获取访问控制模块开关，0或者1
                     * @return AccessControl 访问控制模块开关，0或者1
                     * 
                     */
                    uint64_t GetAccessControl() const;

                    /**
                     * 设置访问控制模块开关，0或者1
                     * @param _accessControl 访问控制模块开关，0或者1
                     * 
                     */
                    void SetAccessControl(const uint64_t& _accessControl);

                    /**
                     * 判断参数 AccessControl 是否已赋值
                     * @return AccessControl 是否已赋值
                     * 
                     */
                    bool AccessControlHasBeenSet() const;

                    /**
                     * 获取CC模块开关，0或者1
                     * @return CcProtection CC模块开关，0或者1
                     * 
                     */
                    uint64_t GetCcProtection() const;

                    /**
                     * 设置CC模块开关，0或者1
                     * @param _ccProtection CC模块开关，0或者1
                     * 
                     */
                    void SetCcProtection(const uint64_t& _ccProtection);

                    /**
                     * 判断参数 CcProtection 是否已赋值
                     * @return CcProtection 是否已赋值
                     * 
                     */
                    bool CcProtectionHasBeenSet() const;

                    /**
                     * 获取API安全模块开关，0或者1
                     * @return ApiProtection API安全模块开关，0或者1
                     * 
                     */
                    uint64_t GetApiProtection() const;

                    /**
                     * 设置API安全模块开关，0或者1
                     * @param _apiProtection API安全模块开关，0或者1
                     * 
                     */
                    void SetApiProtection(const uint64_t& _apiProtection);

                    /**
                     * 判断参数 ApiProtection 是否已赋值
                     * @return ApiProtection 是否已赋值
                     * 
                     */
                    bool ApiProtectionHasBeenSet() const;

                    /**
                     * 获取防篡改模块开关，0或者1
                     * @return AntiTamper 防篡改模块开关，0或者1
                     * 
                     */
                    uint64_t GetAntiTamper() const;

                    /**
                     * 设置防篡改模块开关，0或者1
                     * @param _antiTamper 防篡改模块开关，0或者1
                     * 
                     */
                    void SetAntiTamper(const uint64_t& _antiTamper);

                    /**
                     * 判断参数 AntiTamper 是否已赋值
                     * @return AntiTamper 是否已赋值
                     * 
                     */
                    bool AntiTamperHasBeenSet() const;

                    /**
                     * 获取防泄漏模块开关，0或者1
                     * @return AntiLeakage 防泄漏模块开关，0或者1
                     * 
                     */
                    uint64_t GetAntiLeakage() const;

                    /**
                     * 设置防泄漏模块开关，0或者1
                     * @param _antiLeakage 防泄漏模块开关，0或者1
                     * 
                     */
                    void SetAntiLeakage(const uint64_t& _antiLeakage);

                    /**
                     * 判断参数 AntiLeakage 是否已赋值
                     * @return AntiLeakage 是否已赋值
                     * 
                     */
                    bool AntiLeakageHasBeenSet() const;

                    /**
                     * 获取限流模块开关，0或1
                     * @return RateLimit 限流模块开关，0或1
                     * 
                     */
                    uint64_t GetRateLimit() const;

                    /**
                     * 设置限流模块开关，0或1
                     * @param _rateLimit 限流模块开关，0或1
                     * 
                     */
                    void SetRateLimit(const uint64_t& _rateLimit);

                    /**
                     * 判断参数 RateLimit 是否已赋值
                     * @return RateLimit 是否已赋值
                     * 
                     */
                    bool RateLimitHasBeenSet() const;

                private:

                    /**
                     * 需要设置的domain
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Web 安全模块开关，0或1
                     */
                    uint64_t m_webSecurity;
                    bool m_webSecurityHasBeenSet;

                    /**
                     * 访问控制模块开关，0或者1
                     */
                    uint64_t m_accessControl;
                    bool m_accessControlHasBeenSet;

                    /**
                     * CC模块开关，0或者1
                     */
                    uint64_t m_ccProtection;
                    bool m_ccProtectionHasBeenSet;

                    /**
                     * API安全模块开关，0或者1
                     */
                    uint64_t m_apiProtection;
                    bool m_apiProtectionHasBeenSet;

                    /**
                     * 防篡改模块开关，0或者1
                     */
                    uint64_t m_antiTamper;
                    bool m_antiTamperHasBeenSet;

                    /**
                     * 防泄漏模块开关，0或者1
                     */
                    uint64_t m_antiLeakage;
                    bool m_antiLeakageHasBeenSet;

                    /**
                     * 限流模块开关，0或1
                     */
                    uint64_t m_rateLimit;
                    bool m_rateLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYMODULESTATUSREQUEST_H_
