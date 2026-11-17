/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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
                     * 获取<p>需要设置的domain</p>
                     * @return Domain <p>需要设置的domain</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>需要设置的domain</p>
                     * @param _domain <p>需要设置的domain</p>
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
                     * 获取<p>Web 安全模块开关，0或1</p>
                     * @return WebSecurity <p>Web 安全模块开关，0或1</p>
                     * 
                     */
                    uint64_t GetWebSecurity() const;

                    /**
                     * 设置<p>Web 安全模块开关，0或1</p>
                     * @param _webSecurity <p>Web 安全模块开关，0或1</p>
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
                     * 获取<p>访问控制模块开关，0或者1</p>
                     * @return AccessControl <p>访问控制模块开关，0或者1</p>
                     * 
                     */
                    uint64_t GetAccessControl() const;

                    /**
                     * 设置<p>访问控制模块开关，0或者1</p>
                     * @param _accessControl <p>访问控制模块开关，0或者1</p>
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
                     * 获取<p>CC模块开关，0或者1</p>
                     * @return CcProtection <p>CC模块开关，0或者1</p>
                     * 
                     */
                    uint64_t GetCcProtection() const;

                    /**
                     * 设置<p>CC模块开关，0或者1</p>
                     * @param _ccProtection <p>CC模块开关，0或者1</p>
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
                     * 获取<p>API安全模块开关，0或者1</p>
                     * @return ApiProtection <p>API安全模块开关，0或者1</p>
                     * 
                     */
                    uint64_t GetApiProtection() const;

                    /**
                     * 设置<p>API安全模块开关，0或者1</p>
                     * @param _apiProtection <p>API安全模块开关，0或者1</p>
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
                     * 获取<p>API安全检测开关，0关闭1开启</p>
                     * @return ApiDetect <p>API安全检测开关，0关闭1开启</p>
                     * 
                     */
                    uint64_t GetApiDetect() const;

                    /**
                     * 设置<p>API安全检测开关，0关闭1开启</p>
                     * @param _apiDetect <p>API安全检测开关，0关闭1开启</p>
                     * 
                     */
                    void SetApiDetect(const uint64_t& _apiDetect);

                    /**
                     * 判断参数 ApiDetect 是否已赋值
                     * @return ApiDetect 是否已赋值
                     * 
                     */
                    bool ApiDetectHasBeenSet() const;

                    /**
                     * 获取<p>防篡改模块开关，0或者1</p>
                     * @return AntiTamper <p>防篡改模块开关，0或者1</p>
                     * 
                     */
                    uint64_t GetAntiTamper() const;

                    /**
                     * 设置<p>防篡改模块开关，0或者1</p>
                     * @param _antiTamper <p>防篡改模块开关，0或者1</p>
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
                     * 获取<p>防泄漏模块开关，0或者1</p>
                     * @return AntiLeakage <p>防泄漏模块开关，0或者1</p>
                     * 
                     */
                    uint64_t GetAntiLeakage() const;

                    /**
                     * 设置<p>防泄漏模块开关，0或者1</p>
                     * @param _antiLeakage <p>防泄漏模块开关，0或者1</p>
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
                     * 获取<p>限流模块开关，0或1</p>
                     * @return RateLimit <p>限流模块开关，0或1</p>
                     * 
                     */
                    uint64_t GetRateLimit() const;

                    /**
                     * 设置<p>限流模块开关，0或1</p>
                     * @param _rateLimit <p>限流模块开关，0或1</p>
                     * 
                     */
                    void SetRateLimit(const uint64_t& _rateLimit);

                    /**
                     * 判断参数 RateLimit 是否已赋值
                     * @return RateLimit 是否已赋值
                     * 
                     */
                    bool RateLimitHasBeenSet() const;

                    /**
                     * 获取<p>gzip 开关</p>
                     * @return GzipAnalysis <p>gzip 开关</p>
                     * 
                     */
                    uint64_t GetGzipAnalysis() const;

                    /**
                     * 设置<p>gzip 开关</p>
                     * @param _gzipAnalysis <p>gzip 开关</p>
                     * 
                     */
                    void SetGzipAnalysis(const uint64_t& _gzipAnalysis);

                    /**
                     * 判断参数 GzipAnalysis 是否已赋值
                     * @return GzipAnalysis 是否已赋值
                     * 
                     */
                    bool GzipAnalysisHasBeenSet() const;

                private:

                    /**
                     * <p>需要设置的domain</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>Web 安全模块开关，0或1</p>
                     */
                    uint64_t m_webSecurity;
                    bool m_webSecurityHasBeenSet;

                    /**
                     * <p>访问控制模块开关，0或者1</p>
                     */
                    uint64_t m_accessControl;
                    bool m_accessControlHasBeenSet;

                    /**
                     * <p>CC模块开关，0或者1</p>
                     */
                    uint64_t m_ccProtection;
                    bool m_ccProtectionHasBeenSet;

                    /**
                     * <p>API安全模块开关，0或者1</p>
                     */
                    uint64_t m_apiProtection;
                    bool m_apiProtectionHasBeenSet;

                    /**
                     * <p>API安全检测开关，0关闭1开启</p>
                     */
                    uint64_t m_apiDetect;
                    bool m_apiDetectHasBeenSet;

                    /**
                     * <p>防篡改模块开关，0或者1</p>
                     */
                    uint64_t m_antiTamper;
                    bool m_antiTamperHasBeenSet;

                    /**
                     * <p>防泄漏模块开关，0或者1</p>
                     */
                    uint64_t m_antiLeakage;
                    bool m_antiLeakageHasBeenSet;

                    /**
                     * <p>限流模块开关，0或1</p>
                     */
                    uint64_t m_rateLimit;
                    bool m_rateLimitHasBeenSet;

                    /**
                     * <p>gzip 开关</p>
                     */
                    uint64_t m_gzipAnalysis;
                    bool m_gzipAnalysisHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYMODULESTATUSREQUEST_H_
