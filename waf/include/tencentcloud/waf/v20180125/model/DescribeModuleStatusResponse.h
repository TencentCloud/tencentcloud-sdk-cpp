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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEMODULESTATUSRESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEMODULESTATUSRESPONSE_H_

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
                * DescribeModuleStatus返回参数结构体
                */
                class DescribeModuleStatusResponse : public AbstractModel
                {
                public:
                    DescribeModuleStatusResponse();
                    ~DescribeModuleStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>WEB安全规则是否开启</p>
                     * @return WebSecurity <p>WEB安全规则是否开启</p>
                     * 
                     */
                    uint64_t GetWebSecurity() const;

                    /**
                     * 判断参数 WebSecurity 是否已赋值
                     * @return WebSecurity 是否已赋值
                     * 
                     */
                    bool WebSecurityHasBeenSet() const;

                    /**
                     * 获取<p>访问控制规则是否开启</p>
                     * @return AccessControl <p>访问控制规则是否开启</p>
                     * 
                     */
                    int64_t GetAccessControl() const;

                    /**
                     * 判断参数 AccessControl 是否已赋值
                     * @return AccessControl 是否已赋值
                     * 
                     */
                    bool AccessControlHasBeenSet() const;

                    /**
                     * 获取<p>CC防护是否开启</p>
                     * @return CcProtection <p>CC防护是否开启</p>
                     * 
                     */
                    uint64_t GetCcProtection() const;

                    /**
                     * 判断参数 CcProtection 是否已赋值
                     * @return CcProtection 是否已赋值
                     * 
                     */
                    bool CcProtectionHasBeenSet() const;

                    /**
                     * 获取<p>网页防篡改是否开启</p>
                     * @return AntiTamper <p>网页防篡改是否开启</p>
                     * 
                     */
                    uint64_t GetAntiTamper() const;

                    /**
                     * 判断参数 AntiTamper 是否已赋值
                     * @return AntiTamper 是否已赋值
                     * 
                     */
                    bool AntiTamperHasBeenSet() const;

                    /**
                     * 获取<p>信息防泄漏是否开启</p>
                     * @return AntiLeakage <p>信息防泄漏是否开启</p>
                     * 
                     */
                    uint64_t GetAntiLeakage() const;

                    /**
                     * 判断参数 AntiLeakage 是否已赋值
                     * @return AntiLeakage 是否已赋值
                     * 
                     */
                    bool AntiLeakageHasBeenSet() const;

                    /**
                     * 获取<p>API安全是否开启</p>
                     * @return ApiProtection <p>API安全是否开启</p>
                     * 
                     */
                    uint64_t GetApiProtection() const;

                    /**
                     * 判断参数 ApiProtection 是否已赋值
                     * @return ApiProtection 是否已赋值
                     * 
                     */
                    bool ApiProtectionHasBeenSet() const;

                    /**
                     * 获取<p>API安全检测开关是否开启</p>
                     * @return ApiDetect <p>API安全检测开关是否开启</p>
                     * 
                     */
                    uint64_t GetApiDetect() const;

                    /**
                     * 判断参数 ApiDetect 是否已赋值
                     * @return ApiDetect 是否已赋值
                     * 
                     */
                    bool ApiDetectHasBeenSet() const;

                    /**
                     * 获取<p>限流模块开关，0表示关闭，1表示开启</p>
                     * @return RateLimit <p>限流模块开关，0表示关闭，1表示开启</p>
                     * 
                     */
                    uint64_t GetRateLimit() const;

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
                     * 判断参数 GzipAnalysis 是否已赋值
                     * @return GzipAnalysis 是否已赋值
                     * 
                     */
                    bool GzipAnalysisHasBeenSet() const;

                private:

                    /**
                     * <p>WEB安全规则是否开启</p>
                     */
                    uint64_t m_webSecurity;
                    bool m_webSecurityHasBeenSet;

                    /**
                     * <p>访问控制规则是否开启</p>
                     */
                    int64_t m_accessControl;
                    bool m_accessControlHasBeenSet;

                    /**
                     * <p>CC防护是否开启</p>
                     */
                    uint64_t m_ccProtection;
                    bool m_ccProtectionHasBeenSet;

                    /**
                     * <p>网页防篡改是否开启</p>
                     */
                    uint64_t m_antiTamper;
                    bool m_antiTamperHasBeenSet;

                    /**
                     * <p>信息防泄漏是否开启</p>
                     */
                    uint64_t m_antiLeakage;
                    bool m_antiLeakageHasBeenSet;

                    /**
                     * <p>API安全是否开启</p>
                     */
                    uint64_t m_apiProtection;
                    bool m_apiProtectionHasBeenSet;

                    /**
                     * <p>API安全检测开关是否开启</p>
                     */
                    uint64_t m_apiDetect;
                    bool m_apiDetectHasBeenSet;

                    /**
                     * <p>限流模块开关，0表示关闭，1表示开启</p>
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

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEMODULESTATUSRESPONSE_H_
