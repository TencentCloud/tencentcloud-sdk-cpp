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
                     * 获取WEB安全规则是否开启
                     * @return WebSecurity WEB安全规则是否开启
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
                     * 获取访问控制规则是否开启
                     * @return AccessControl 访问控制规则是否开启
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
                     * 获取CC防护是否开启
                     * @return CcProtection CC防护是否开启
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
                     * 获取网页防篡改是否开启
                     * @return AntiTamper 网页防篡改是否开启
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
                     * 获取信息防泄漏是否开启
                     * @return AntiLeakage 信息防泄漏是否开启
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
                     * 获取API安全是否开启
                     * @return ApiProtection API安全是否开启
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
                     * 获取限流模块开关
                     * @return RateLimit 限流模块开关
                     * 
                     */
                    uint64_t GetRateLimit() const;

                    /**
                     * 判断参数 RateLimit 是否已赋值
                     * @return RateLimit 是否已赋值
                     * 
                     */
                    bool RateLimitHasBeenSet() const;

                private:

                    /**
                     * WEB安全规则是否开启
                     */
                    uint64_t m_webSecurity;
                    bool m_webSecurityHasBeenSet;

                    /**
                     * 访问控制规则是否开启
                     */
                    int64_t m_accessControl;
                    bool m_accessControlHasBeenSet;

                    /**
                     * CC防护是否开启
                     */
                    uint64_t m_ccProtection;
                    bool m_ccProtectionHasBeenSet;

                    /**
                     * 网页防篡改是否开启
                     */
                    uint64_t m_antiTamper;
                    bool m_antiTamperHasBeenSet;

                    /**
                     * 信息防泄漏是否开启
                     */
                    uint64_t m_antiLeakage;
                    bool m_antiLeakageHasBeenSet;

                    /**
                     * API安全是否开启
                     */
                    uint64_t m_apiProtection;
                    bool m_apiProtectionHasBeenSet;

                    /**
                     * 限流模块开关
                     */
                    uint64_t m_rateLimit;
                    bool m_rateLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEMODULESTATUSRESPONSE_H_
