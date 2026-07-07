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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBESECURITYPOLICYCAPABILITIESRESPONSE_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBESECURITYPOLICYCAPABILITIESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/SecurityPolicyCapability.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * DescribeSecurityPolicyCapabilities返回参数结构体
                */
                class DescribeSecurityPolicyCapabilitiesResponse : public AbstractModel
                {
                public:
                    DescribeSecurityPolicyCapabilitiesResponse();
                    ~DescribeSecurityPolicyCapabilitiesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取安全策略配置能力列表。返回当前地域支持的所有 TLS 版本及其对应的加密套件信息。

**返回内容包含：**
- 支持的 TLS 协议版本（如 TLSv1.0、TLSv1.1、TLSv1.2、TLSv1.3）。
- 每个 TLS 版本支持的加密套件列表。

**使用场景：**
- 在创建安全策略（CreateSecurityPolicy）前，调用此接口获取可选的加密套件。
- 在修改安全策略（ModifySecurityPolicyAttributes）前，确认新配置的有效性。

                     * @return SecurityPolicyCapabilities 安全策略配置能力列表。返回当前地域支持的所有 TLS 版本及其对应的加密套件信息。

**返回内容包含：**
- 支持的 TLS 协议版本（如 TLSv1.0、TLSv1.1、TLSv1.2、TLSv1.3）。
- 每个 TLS 版本支持的加密套件列表。

**使用场景：**
- 在创建安全策略（CreateSecurityPolicy）前，调用此接口获取可选的加密套件。
- 在修改安全策略（ModifySecurityPolicyAttributes）前，确认新配置的有效性。

                     * 
                     */
                    std::vector<SecurityPolicyCapability> GetSecurityPolicyCapabilities() const;

                    /**
                     * 判断参数 SecurityPolicyCapabilities 是否已赋值
                     * @return SecurityPolicyCapabilities 是否已赋值
                     * 
                     */
                    bool SecurityPolicyCapabilitiesHasBeenSet() const;

                private:

                    /**
                     * 安全策略配置能力列表。返回当前地域支持的所有 TLS 版本及其对应的加密套件信息。

**返回内容包含：**
- 支持的 TLS 协议版本（如 TLSv1.0、TLSv1.1、TLSv1.2、TLSv1.3）。
- 每个 TLS 版本支持的加密套件列表。

**使用场景：**
- 在创建安全策略（CreateSecurityPolicy）前，调用此接口获取可选的加密套件。
- 在修改安全策略（ModifySecurityPolicyAttributes）前，确认新配置的有效性。

                     */
                    std::vector<SecurityPolicyCapability> m_securityPolicyCapabilities;
                    bool m_securityPolicyCapabilitiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBESECURITYPOLICYCAPABILITIESRESPONSE_H_
