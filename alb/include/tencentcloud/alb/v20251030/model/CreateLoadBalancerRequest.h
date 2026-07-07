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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_CREATELOADBALANCERREQUEST_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_CREATELOADBALANCERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/LoadBalancerBillingConfig.h>
#include <tencentcloud/alb/v20251030/model/ZoneMappingsItem.h>
#include <tencentcloud/alb/v20251030/model/DeletionProtectionConfig.h>
#include <tencentcloud/alb/v20251030/model/TagInfo.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * CreateLoadBalancer请求参数结构体
                */
                class CreateLoadBalancerRequest : public AbstractModel
                {
                public:
                    CreateLoadBalancerRequest();
                    ~CreateLoadBalancerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用型负载均衡的地址类型。取值：

- **Internet**：负载均衡具有公网IP地址，DNS域名被解析到公网IP，因此可以在公网环境访问。

- **Intranet**：负载均衡只有私网IP地址，DNS域名被解析到私网IP，因此只能被负载均衡所在VPC的内网环境访问。
                     * @return AddressType 应用型负载均衡的地址类型。取值：

- **Internet**：负载均衡具有公网IP地址，DNS域名被解析到公网IP，因此可以在公网环境访问。

- **Intranet**：负载均衡只有私网IP地址，DNS域名被解析到私网IP，因此只能被负载均衡所在VPC的内网环境访问。
                     * 
                     */
                    std::string GetAddressType() const;

                    /**
                     * 设置应用型负载均衡的地址类型。取值：

- **Internet**：负载均衡具有公网IP地址，DNS域名被解析到公网IP，因此可以在公网环境访问。

- **Intranet**：负载均衡只有私网IP地址，DNS域名被解析到私网IP，因此只能被负载均衡所在VPC的内网环境访问。
                     * @param _addressType 应用型负载均衡的地址类型。取值：

- **Internet**：负载均衡具有公网IP地址，DNS域名被解析到公网IP，因此可以在公网环境访问。

- **Intranet**：负载均衡只有私网IP地址，DNS域名被解析到私网IP，因此只能被负载均衡所在VPC的内网环境访问。
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
                     * 获取应用型负载均衡实例计费配置。
                     * @return LoadBalancerBillingConfig 应用型负载均衡实例计费配置。
                     * 
                     */
                    LoadBalancerBillingConfig GetLoadBalancerBillingConfig() const;

                    /**
                     * 设置应用型负载均衡实例计费配置。
                     * @param _loadBalancerBillingConfig 应用型负载均衡实例计费配置。
                     * 
                     */
                    void SetLoadBalancerBillingConfig(const LoadBalancerBillingConfig& _loadBalancerBillingConfig);

                    /**
                     * 判断参数 LoadBalancerBillingConfig 是否已赋值
                     * @return LoadBalancerBillingConfig 是否已赋值
                     * 
                     */
                    bool LoadBalancerBillingConfigHasBeenSet() const;

                    /**
                     * 获取私有网络 ID。
                     * @return VpcId 私有网络 ID。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络 ID。
                     * @param _vpcId 私有网络 ID。
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取可用区及私有网络子网映射列表，最多支持添加10个可用区。若当前地域支持2个及以上的可用区，至少需要添加2个可用区。
                     * @return ZoneMappings 可用区及私有网络子网映射列表，最多支持添加10个可用区。若当前地域支持2个及以上的可用区，至少需要添加2个可用区。
                     * 
                     */
                    std::vector<ZoneMappingsItem> GetZoneMappings() const;

                    /**
                     * 设置可用区及私有网络子网映射列表，最多支持添加10个可用区。若当前地域支持2个及以上的可用区，至少需要添加2个可用区。
                     * @param _zoneMappings 可用区及私有网络子网映射列表，最多支持添加10个可用区。若当前地域支持2个及以上的可用区，至少需要添加2个可用区。
                     * 
                     */
                    void SetZoneMappings(const std::vector<ZoneMappingsItem>& _zoneMappings);

                    /**
                     * 判断参数 ZoneMappings 是否已赋值
                     * @return ZoneMappings 是否已赋值
                     * 
                     */
                    bool ZoneMappingsHasBeenSet() const;

                    /**
                     * 获取IP 地址版本，取值 IPv4 或 IPv6。
                     * @return AddressIpVersion IP 地址版本，取值 IPv4 或 IPv6。
                     * 
                     */
                    std::string GetAddressIpVersion() const;

                    /**
                     * 设置IP 地址版本，取值 IPv4 或 IPv6。
                     * @param _addressIpVersion IP 地址版本，取值 IPv4 或 IPv6。
                     * 
                     */
                    void SetAddressIpVersion(const std::string& _addressIpVersion);

                    /**
                     * 判断参数 AddressIpVersion 是否已赋值
                     * @return AddressIpVersion 是否已赋值
                     * 
                     */
                    bool AddressIpVersionHasBeenSet() const;

                    /**
                     * 获取客户端Token，用于保证请求的幂等性。

从您的客户端生成一个参数值，确保不同请求间该参数值唯一。ClientToken只支持ASCII字符。
                     * @return ClientToken 客户端Token，用于保证请求的幂等性。

从您的客户端生成一个参数值，确保不同请求间该参数值唯一。ClientToken只支持ASCII字符。
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置客户端Token，用于保证请求的幂等性。

从您的客户端生成一个参数值，确保不同请求间该参数值唯一。ClientToken只支持ASCII字符。
                     * @param _clientToken 客户端Token，用于保证请求的幂等性。

从您的客户端生成一个参数值，确保不同请求间该参数值唯一。ClientToken只支持ASCII字符。
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
                     * 获取删除保护配置。
                     * @return DeleteProtection 删除保护配置。
                     * 
                     */
                    DeletionProtectionConfig GetDeleteProtection() const;

                    /**
                     * 设置删除保护配置。
                     * @param _deleteProtection 删除保护配置。
                     * 
                     */
                    void SetDeleteProtection(const DeletionProtectionConfig& _deleteProtection);

                    /**
                     * 判断参数 DeleteProtection 是否已赋值
                     * @return DeleteProtection 是否已赋值
                     * 
                     */
                    bool DeleteProtectionHasBeenSet() const;

                    /**
                     * 获取是否只预检此次请求，取值：

- **true**：发送检查请求，不会创建应用型负载均衡实例。检查项包括是否填写了必需参数、请求格式和业务限制。如果检查不通过，则返回对应错误。如果检查通过，则返回错误码`DryRunOperation`。

- **false**（默认值）：发送正常请求，通过检查后返回HTTP 2xx状态码并直接进行操作。
                     * @return DryRun 是否只预检此次请求，取值：

- **true**：发送检查请求，不会创建应用型负载均衡实例。检查项包括是否填写了必需参数、请求格式和业务限制。如果检查不通过，则返回对应错误。如果检查通过，则返回错误码`DryRunOperation`。

- **false**（默认值）：发送正常请求，通过检查后返回HTTP 2xx状态码并直接进行操作。
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置是否只预检此次请求，取值：

- **true**：发送检查请求，不会创建应用型负载均衡实例。检查项包括是否填写了必需参数、请求格式和业务限制。如果检查不通过，则返回对应错误。如果检查通过，则返回错误码`DryRunOperation`。

- **false**（默认值）：发送正常请求，通过检查后返回HTTP 2xx状态码并直接进行操作。
                     * @param _dryRun 是否只预检此次请求，取值：

- **true**：发送检查请求，不会创建应用型负载均衡实例。检查项包括是否填写了必需参数、请求格式和业务限制。如果检查不通过，则返回对应错误。如果检查通过，则返回错误码`DryRunOperation`。

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

                    /**
                     * 获取EIP 地址类型，可取值：
- **EIP**: 普通弹性公网 IP
- **AntiDDoSEIP**: 高防EIP
- **AnycastEIP**: 加速 EIP
- **HighQualityEIP**: 精品 IP。仅新加坡和中国香港支持精品IP。
- **ResidentialEIP**: 原生 IP

不传默认是EIP。
                     * @return InternetAddressType EIP 地址类型，可取值：
- **EIP**: 普通弹性公网 IP
- **AntiDDoSEIP**: 高防EIP
- **AnycastEIP**: 加速 EIP
- **HighQualityEIP**: 精品 IP。仅新加坡和中国香港支持精品IP。
- **ResidentialEIP**: 原生 IP

不传默认是EIP。
                     * 
                     */
                    std::string GetInternetAddressType() const;

                    /**
                     * 设置EIP 地址类型，可取值：
- **EIP**: 普通弹性公网 IP
- **AntiDDoSEIP**: 高防EIP
- **AnycastEIP**: 加速 EIP
- **HighQualityEIP**: 精品 IP。仅新加坡和中国香港支持精品IP。
- **ResidentialEIP**: 原生 IP

不传默认是EIP。
                     * @param _internetAddressType EIP 地址类型，可取值：
- **EIP**: 普通弹性公网 IP
- **AntiDDoSEIP**: 高防EIP
- **AnycastEIP**: 加速 EIP
- **HighQualityEIP**: 精品 IP。仅新加坡和中国香港支持精品IP。
- **ResidentialEIP**: 原生 IP

不传默认是EIP。
                     * 
                     */
                    void SetInternetAddressType(const std::string& _internetAddressType);

                    /**
                     * 判断参数 InternetAddressType 是否已赋值
                     * @return InternetAddressType 是否已赋值
                     * 
                     */
                    bool InternetAddressTypeHasBeenSet() const;

                    /**
                     * 获取应用型负载均衡实例名称。长度为1~80个字符，可包含中文、字母、数字、短划线（-）、正斜线（/）、半角句号（.）和下划线（_）。
                     * @return LoadBalancerName 应用型负载均衡实例名称。长度为1~80个字符，可包含中文、字母、数字、短划线（-）、正斜线（/）、半角句号（.）和下划线（_）。
                     * 
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置应用型负载均衡实例名称。长度为1~80个字符，可包含中文、字母、数字、短划线（-）、正斜线（/）、半角句号（.）和下划线（_）。
                     * @param _loadBalancerName 应用型负载均衡实例名称。长度为1~80个字符，可包含中文、字母、数字、短划线（-）、正斜线（/）、半角句号（.）和下划线（_）。
                     * 
                     */
                    void SetLoadBalancerName(const std::string& _loadBalancerName);

                    /**
                     * 判断参数 LoadBalancerName 是否已赋值
                     * @return LoadBalancerName 是否已赋值
                     * 
                     */
                    bool LoadBalancerNameHasBeenSet() const;

                    /**
                     * 获取标签。
                     * @return Tags 标签。
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置标签。
                     * @param _tags 标签。
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 应用型负载均衡的地址类型。取值：

- **Internet**：负载均衡具有公网IP地址，DNS域名被解析到公网IP，因此可以在公网环境访问。

- **Intranet**：负载均衡只有私网IP地址，DNS域名被解析到私网IP，因此只能被负载均衡所在VPC的内网环境访问。
                     */
                    std::string m_addressType;
                    bool m_addressTypeHasBeenSet;

                    /**
                     * 应用型负载均衡实例计费配置。
                     */
                    LoadBalancerBillingConfig m_loadBalancerBillingConfig;
                    bool m_loadBalancerBillingConfigHasBeenSet;

                    /**
                     * 私有网络 ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 可用区及私有网络子网映射列表，最多支持添加10个可用区。若当前地域支持2个及以上的可用区，至少需要添加2个可用区。
                     */
                    std::vector<ZoneMappingsItem> m_zoneMappings;
                    bool m_zoneMappingsHasBeenSet;

                    /**
                     * IP 地址版本，取值 IPv4 或 IPv6。
                     */
                    std::string m_addressIpVersion;
                    bool m_addressIpVersionHasBeenSet;

                    /**
                     * 客户端Token，用于保证请求的幂等性。

从您的客户端生成一个参数值，确保不同请求间该参数值唯一。ClientToken只支持ASCII字符。
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * 删除保护配置。
                     */
                    DeletionProtectionConfig m_deleteProtection;
                    bool m_deleteProtectionHasBeenSet;

                    /**
                     * 是否只预检此次请求，取值：

- **true**：发送检查请求，不会创建应用型负载均衡实例。检查项包括是否填写了必需参数、请求格式和业务限制。如果检查不通过，则返回对应错误。如果检查通过，则返回错误码`DryRunOperation`。

- **false**（默认值）：发送正常请求，通过检查后返回HTTP 2xx状态码并直接进行操作。
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * EIP 地址类型，可取值：
- **EIP**: 普通弹性公网 IP
- **AntiDDoSEIP**: 高防EIP
- **AnycastEIP**: 加速 EIP
- **HighQualityEIP**: 精品 IP。仅新加坡和中国香港支持精品IP。
- **ResidentialEIP**: 原生 IP

不传默认是EIP。
                     */
                    std::string m_internetAddressType;
                    bool m_internetAddressTypeHasBeenSet;

                    /**
                     * 应用型负载均衡实例名称。长度为1~80个字符，可包含中文、字母、数字、短划线（-）、正斜线（/）、半角句号（.）和下划线（_）。
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * 标签。
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_CREATELOADBALANCERREQUEST_H_
