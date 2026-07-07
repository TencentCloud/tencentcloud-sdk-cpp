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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_MODIFYLOADBALANCERADDRESSTYPEREQUEST_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_MODIFYLOADBALANCERADDRESSTYPEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/ZoneMappingsItem.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * ModifyLoadBalancerAddressType请求参数结构体
                */
                class ModifyLoadBalancerAddressTypeRequest : public AbstractModel
                {
                public:
                    ModifyLoadBalancerAddressTypeRequest();
                    ~ModifyLoadBalancerAddressTypeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取目标网络类型。取值：
- **Internet**（公网型）
负载均衡实例分配公网 IP 地址，域名（DNS）解析至公网 IP，可在公网环境中直接访问，适用于对外提供服务的业务场景。
- **Intranet**（内网型）
负载均衡实例仅分配私网 IP 地址，域名（DNS）解析至私网 IP，仅支持在负载均衡实例所属 VPC 内的内网环境访问，适用于内部业务或对安全性要求较高的场景。
                     * @return AddressType 目标网络类型。取值：
- **Internet**（公网型）
负载均衡实例分配公网 IP 地址，域名（DNS）解析至公网 IP，可在公网环境中直接访问，适用于对外提供服务的业务场景。
- **Intranet**（内网型）
负载均衡实例仅分配私网 IP 地址，域名（DNS）解析至私网 IP，仅支持在负载均衡实例所属 VPC 内的内网环境访问，适用于内部业务或对安全性要求较高的场景。
                     * 
                     */
                    std::string GetAddressType() const;

                    /**
                     * 设置目标网络类型。取值：
- **Internet**（公网型）
负载均衡实例分配公网 IP 地址，域名（DNS）解析至公网 IP，可在公网环境中直接访问，适用于对外提供服务的业务场景。
- **Intranet**（内网型）
负载均衡实例仅分配私网 IP 地址，域名（DNS）解析至私网 IP，仅支持在负载均衡实例所属 VPC 内的内网环境访问，适用于内部业务或对安全性要求较高的场景。
                     * @param _addressType 目标网络类型。取值：
- **Internet**（公网型）
负载均衡实例分配公网 IP 地址，域名（DNS）解析至公网 IP，可在公网环境中直接访问，适用于对外提供服务的业务场景。
- **Intranet**（内网型）
负载均衡实例仅分配私网 IP 地址，域名（DNS）解析至私网 IP，仅支持在负载均衡实例所属 VPC 内的内网环境访问，适用于内部业务或对安全性要求较高的场景。
                     * 
                     */
                    void SetAddressType(const std::string& _addressType);

                    /**
                     * 判断参数 AddressType 是否已赋值
                     * @return AddressType 是否已赋值
                     * 
                     */
                    bool AddressTypeHasBeenSet() const;

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
                     * 获取是否只预检此次请求。取值：
- **true**：发送检查请求，不会更新实例的网络类型。检查项包括是否填写了必需参数、请求格式、业务限制。如果检查不通过，则返回对应错误。如果检查通过，则返回错误码DryRunOperation。
- **false**（默认值）：发送正常请求，通过检查后返回 HTTP 2xx 状态码并直接进行操作。
                     * @return DryRun 是否只预检此次请求。取值：
- **true**：发送检查请求，不会更新实例的网络类型。检查项包括是否填写了必需参数、请求格式、业务限制。如果检查不通过，则返回对应错误。如果检查通过，则返回错误码DryRunOperation。
- **false**（默认值）：发送正常请求，通过检查后返回 HTTP 2xx 状态码并直接进行操作。
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置是否只预检此次请求。取值：
- **true**：发送检查请求，不会更新实例的网络类型。检查项包括是否填写了必需参数、请求格式、业务限制。如果检查不通过，则返回对应错误。如果检查通过，则返回错误码DryRunOperation。
- **false**（默认值）：发送正常请求，通过检查后返回 HTTP 2xx 状态码并直接进行操作。
                     * @param _dryRun 是否只预检此次请求。取值：
- **true**：发送检查请求，不会更新实例的网络类型。检查项包括是否填写了必需参数、请求格式、业务限制。如果检查不通过，则返回对应错误。如果检查通过，则返回错误码DryRunOperation。
- **false**（默认值）：发送正常请求，通过检查后返回 HTTP 2xx 状态码并直接进行操作。
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                    /**
                     * 获取可用区及子网映射结构体。
若当前地域支持 2 个及以上的可用区，至少需要添加 2 个可用区。
                     * @return ZoneMappings 可用区及子网映射结构体。
若当前地域支持 2 个及以上的可用区，至少需要添加 2 个可用区。
                     * 
                     */
                    std::vector<ZoneMappingsItem> GetZoneMappings() const;

                    /**
                     * 设置可用区及子网映射结构体。
若当前地域支持 2 个及以上的可用区，至少需要添加 2 个可用区。
                     * @param _zoneMappings 可用区及子网映射结构体。
若当前地域支持 2 个及以上的可用区，至少需要添加 2 个可用区。
                     * 
                     */
                    void SetZoneMappings(const std::vector<ZoneMappingsItem>& _zoneMappings);

                    /**
                     * 判断参数 ZoneMappings 是否已赋值
                     * @return ZoneMappings 是否已赋值
                     * 
                     */
                    bool ZoneMappingsHasBeenSet() const;

                private:

                    /**
                     * 目标网络类型。取值：
- **Internet**（公网型）
负载均衡实例分配公网 IP 地址，域名（DNS）解析至公网 IP，可在公网环境中直接访问，适用于对外提供服务的业务场景。
- **Intranet**（内网型）
负载均衡实例仅分配私网 IP 地址，域名（DNS）解析至私网 IP，仅支持在负载均衡实例所属 VPC 内的内网环境访问，适用于内部业务或对安全性要求较高的场景。
                     */
                    std::string m_addressType;
                    bool m_addressTypeHasBeenSet;

                    /**
                     * 负载均衡实例 ID，格式为 alb- 后接 8 位字母数字。
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 共享带宽包 ID。
                     */
                    std::string m_bandwidthPackageId;
                    bool m_bandwidthPackageIdHasBeenSet;

                    /**
                     * 是否只预检此次请求。取值：
- **true**：发送检查请求，不会更新实例的网络类型。检查项包括是否填写了必需参数、请求格式、业务限制。如果检查不通过，则返回对应错误。如果检查通过，则返回错误码DryRunOperation。
- **false**（默认值）：发送正常请求，通过检查后返回 HTTP 2xx 状态码并直接进行操作。
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * 可用区及子网映射结构体。
若当前地域支持 2 个及以上的可用区，至少需要添加 2 个可用区。
                     */
                    std::vector<ZoneMappingsItem> m_zoneMappings;
                    bool m_zoneMappingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_MODIFYLOADBALANCERADDRESSTYPEREQUEST_H_
