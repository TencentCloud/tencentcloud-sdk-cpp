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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYDDOSPOLICYHOSTREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYDDOSPOLICYHOSTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyDDoSPolicyHost请求参数结构体
                */
                class ModifyDDoSPolicyHostRequest : public AbstractModel
                {
                public:
                    ModifyDDoSPolicyHostRequest();
                    ~ModifyDDoSPolicyHostRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点Id。
                     * @return ZoneId 站点Id。
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点Id。
                     * @param ZoneId 站点Id。
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取子域名/应用名。
                     * @return Host 子域名/应用名。
                     */
                    std::string GetHost() const;

                    /**
                     * 设置子域名/应用名。
                     * @param Host 子域名/应用名。
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取加速开关，取值有：
<li>on：开启加速；</li>
<li>off：关闭加速。</li>
                     * @return AccelerateType 加速开关，取值有：
<li>on：开启加速；</li>
<li>off：关闭加速。</li>
                     */
                    std::string GetAccelerateType() const;

                    /**
                     * 设置加速开关，取值有：
<li>on：开启加速；</li>
<li>off：关闭加速。</li>
                     * @param AccelerateType 加速开关，取值有：
<li>on：开启加速；</li>
<li>off：关闭加速。</li>
                     */
                    void SetAccelerateType(const std::string& _accelerateType);

                    /**
                     * 判断参数 AccelerateType 是否已赋值
                     * @return AccelerateType 是否已赋值
                     */
                    bool AccelerateTypeHasBeenSet() const;

                    /**
                     * 获取策略id。
                     * @return PolicyId 策略id。
                     */
                    int64_t GetPolicyId() const;

                    /**
                     * 设置策略id。
                     * @param PolicyId 策略id。
                     */
                    void SetPolicyId(const int64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取安全开关，取值有：
<li>on：开启安全；</li>
<li>off：关闭安全。</li>
                     * @return SecurityType 安全开关，取值有：
<li>on：开启安全；</li>
<li>off：关闭安全。</li>
                     */
                    std::string GetSecurityType() const;

                    /**
                     * 设置安全开关，取值有：
<li>on：开启安全；</li>
<li>off：关闭安全。</li>
                     * @param SecurityType 安全开关，取值有：
<li>on：开启安全；</li>
<li>off：关闭安全。</li>
                     */
                    void SetSecurityType(const std::string& _securityType);

                    /**
                     * 判断参数 SecurityType 是否已赋值
                     * @return SecurityType 是否已赋值
                     */
                    bool SecurityTypeHasBeenSet() const;

                private:

                    /**
                     * 站点Id。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 子域名/应用名。
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 加速开关，取值有：
<li>on：开启加速；</li>
<li>off：关闭加速。</li>
                     */
                    std::string m_accelerateType;
                    bool m_accelerateTypeHasBeenSet;

                    /**
                     * 策略id。
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 安全开关，取值有：
<li>on：开启安全；</li>
<li>off：关闭安全。</li>
                     */
                    std::string m_securityType;
                    bool m_securityTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYDDOSPOLICYHOSTREQUEST_H_
