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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_DISASSOCIATEBANDWIDTHPACKAGEFROMLOADBALANCERREQUEST_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_DISASSOCIATEBANDWIDTHPACKAGEFROMLOADBALANCERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * DisassociateBandwidthPackageFromLoadBalancer请求参数结构体
                */
                class DisassociateBandwidthPackageFromLoadBalancerRequest : public AbstractModel
                {
                public:
                    DisassociateBandwidthPackageFromLoadBalancerRequest();
                    ~DisassociateBandwidthPackageFromLoadBalancerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取共享带宽包 ID。
                     * @return BandwidthPackageId 共享带宽包 ID。
                     * 
                     */
                    std::string GetBandwidthPackageId() const;

                    /**
                     * 设置共享带宽包 ID。
                     * @param _bandwidthPackageId 共享带宽包 ID。
                     * 
                     */
                    void SetBandwidthPackageId(const std::string& _bandwidthPackageId);

                    /**
                     * 判断参数 BandwidthPackageId 是否已赋值
                     * @return BandwidthPackageId 是否已赋值
                     * 
                     */
                    bool BandwidthPackageIdHasBeenSet() const;

                    /**
                     * 获取负载均衡实例 ID，格式为 alb- 后接 8 位字母数字。
                     * @return LoadBalancerId 负载均衡实例 ID，格式为 alb- 后接 8 位字母数字。
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡实例 ID，格式为 alb- 后接 8 位字母数字。
                     * @param _loadBalancerId 负载均衡实例 ID，格式为 alb- 后接 8 位字母数字。
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取客户端Token，用于保证请求的幂等性。

从您的客户端生成一个参数值，确保不同请求间该参数值唯一。ClientToken只支持ASCII字符。

> 若您未指定，则系统自动使用API请求的**RequestId**作为**ClientToken**标识。每次API请求的**RequestId**不一样。
                     * @return ClientToken 客户端Token，用于保证请求的幂等性。

从您的客户端生成一个参数值，确保不同请求间该参数值唯一。ClientToken只支持ASCII字符。

> 若您未指定，则系统自动使用API请求的**RequestId**作为**ClientToken**标识。每次API请求的**RequestId**不一样。
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置客户端Token，用于保证请求的幂等性。

从您的客户端生成一个参数值，确保不同请求间该参数值唯一。ClientToken只支持ASCII字符。

> 若您未指定，则系统自动使用API请求的**RequestId**作为**ClientToken**标识。每次API请求的**RequestId**不一样。
                     * @param _clientToken 客户端Token，用于保证请求的幂等性。

从您的客户端生成一个参数值，确保不同请求间该参数值唯一。ClientToken只支持ASCII字符。

> 若您未指定，则系统自动使用API请求的**RequestId**作为**ClientToken**标识。每次API请求的**RequestId**不一样。
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取是否只预检此次请求。取值：
- **true**：发送检查请求，不会将共享带宽包从负载均衡实例中移除。检查项包括是否填写了必需参数、请求格式、业务限制。如果检查不通过，则返回对应错误。如果检查通过，则返回错误码`DryRunOperation`。
- **false**（默认值）：发送正常请求，通过检查后返回HTTP 2xx状态码并直接进行操作。
                     * @return DryRun 是否只预检此次请求。取值：
- **true**：发送检查请求，不会将共享带宽包从负载均衡实例中移除。检查项包括是否填写了必需参数、请求格式、业务限制。如果检查不通过，则返回对应错误。如果检查通过，则返回错误码`DryRunOperation`。
- **false**（默认值）：发送正常请求，通过检查后返回HTTP 2xx状态码并直接进行操作。
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置是否只预检此次请求。取值：
- **true**：发送检查请求，不会将共享带宽包从负载均衡实例中移除。检查项包括是否填写了必需参数、请求格式、业务限制。如果检查不通过，则返回对应错误。如果检查通过，则返回错误码`DryRunOperation`。
- **false**（默认值）：发送正常请求，通过检查后返回HTTP 2xx状态码并直接进行操作。
                     * @param _dryRun 是否只预检此次请求。取值：
- **true**：发送检查请求，不会将共享带宽包从负载均衡实例中移除。检查项包括是否填写了必需参数、请求格式、业务限制。如果检查不通过，则返回对应错误。如果检查通过，则返回错误码`DryRunOperation`。
- **false**（默认值）：发送正常请求，通过检查后返回HTTP 2xx状态码并直接进行操作。
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                private:

                    /**
                     * 共享带宽包 ID。
                     */
                    std::string m_bandwidthPackageId;
                    bool m_bandwidthPackageIdHasBeenSet;

                    /**
                     * 负载均衡实例 ID，格式为 alb- 后接 8 位字母数字。
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 客户端Token，用于保证请求的幂等性。

从您的客户端生成一个参数值，确保不同请求间该参数值唯一。ClientToken只支持ASCII字符。

> 若您未指定，则系统自动使用API请求的**RequestId**作为**ClientToken**标识。每次API请求的**RequestId**不一样。
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * 是否只预检此次请求。取值：
- **true**：发送检查请求，不会将共享带宽包从负载均衡实例中移除。检查项包括是否填写了必需参数、请求格式、业务限制。如果检查不通过，则返回对应错误。如果检查通过，则返回错误码`DryRunOperation`。
- **false**（默认值）：发送正常请求，通过检查后返回HTTP 2xx状态码并直接进行操作。
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_DISASSOCIATEBANDWIDTHPACKAGEFROMLOADBALANCERREQUEST_H_
