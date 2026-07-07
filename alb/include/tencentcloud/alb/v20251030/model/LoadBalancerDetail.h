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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_LOADBALANCERDETAIL_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_LOADBALANCERDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/AccessLogConfig.h>
#include <tencentcloud/alb/v20251030/model/DeletionProtectionConfig.h>
#include <tencentcloud/alb/v20251030/model/LoadBalancerBillingConfig.h>
#include <tencentcloud/alb/v20251030/model/LoadBalancerOperationLocksItem.h>
#include <tencentcloud/alb/v20251030/model/ModificationProtectionInfo.h>
#include <tencentcloud/alb/v20251030/model/TagInfo.h>
#include <tencentcloud/alb/v20251030/model/ZoneMappingInfo.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * 负载均衡详细信息
                */
                class LoadBalancerDetail : public AbstractModel
                {
                public:
                    LoadBalancerDetail();
                    ~LoadBalancerDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取访问日志配置。
                     * @return AccessLogConfig 访问日志配置。
                     * 
                     */
                    AccessLogConfig GetAccessLogConfig() const;

                    /**
                     * 设置访问日志配置。
                     * @param _accessLogConfig 访问日志配置。
                     * 
                     */
                    void SetAccessLogConfig(const AccessLogConfig& _accessLogConfig);

                    /**
                     * 判断参数 AccessLogConfig 是否已赋值
                     * @return AccessLogConfig 是否已赋值
                     * 
                     */
                    bool AccessLogConfigHasBeenSet() const;

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
                     * 获取应用型负载均衡实例的网络地址类型。取值：

- **Internet/Public**：负载均衡具有公网IP地址，DNS域名被解析到公网IP，因此可以在公网环境访问。

- **Intranet/Internal**：负载均衡只有私网IP地址，DNS域名被解析到私网IP，因此只能被负载均衡所在VPC的内网环境访问。


                     * @return AddressType 应用型负载均衡实例的网络地址类型。取值：

- **Internet/Public**：负载均衡具有公网IP地址，DNS域名被解析到公网IP，因此可以在公网环境访问。

- **Intranet/Internal**：负载均衡只有私网IP地址，DNS域名被解析到私网IP，因此只能被负载均衡所在VPC的内网环境访问。


                     * 
                     */
                    std::string GetAddressType() const;

                    /**
                     * 设置应用型负载均衡实例的网络地址类型。取值：

- **Internet/Public**：负载均衡具有公网IP地址，DNS域名被解析到公网IP，因此可以在公网环境访问。

- **Intranet/Internal**：负载均衡只有私网IP地址，DNS域名被解析到私网IP，因此只能被负载均衡所在VPC的内网环境访问。


                     * @param _addressType 应用型负载均衡实例的网络地址类型。取值：

- **Internet/Public**：负载均衡具有公网IP地址，DNS域名被解析到公网IP，因此可以在公网环境访问。

- **Intranet/Internal**：负载均衡只有私网IP地址，DNS域名被解析到私网IP，因此只能被负载均衡所在VPC的内网环境访问。


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
                     * 获取资源创建时间，格式为`yyyy-MM-ddTHH:mm:ss±hh:mm`。
                     * @return CreateTime 资源创建时间，格式为`yyyy-MM-ddTHH:mm:ss±hh:mm`。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置资源创建时间，格式为`yyyy-MM-ddTHH:mm:ss±hh:mm`。
                     * @param _createTime 资源创建时间，格式为`yyyy-MM-ddTHH:mm:ss±hh:mm`。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取删除保护设置信息。
                     * @return DeletionProtection 删除保护设置信息。
                     * 
                     */
                    DeletionProtectionConfig GetDeletionProtection() const;

                    /**
                     * 设置删除保护设置信息。
                     * @param _deletionProtection 删除保护设置信息。
                     * 
                     */
                    void SetDeletionProtection(const DeletionProtectionConfig& _deletionProtection);

                    /**
                     * 判断参数 DeletionProtection 是否已赋值
                     * @return DeletionProtection 是否已赋值
                     * 
                     */
                    bool DeletionProtectionHasBeenSet() const;

                    /**
                     * 获取DNS域名。
                     * @return Domain DNS域名。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置DNS域名。
                     * @param _domain DNS域名。
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
                     * 获取负载均衡实例付计费配置信息
                     * @return LoadBalancerBillingConfig 负载均衡实例付计费配置信息
                     * 
                     */
                    LoadBalancerBillingConfig GetLoadBalancerBillingConfig() const;

                    /**
                     * 设置负载均衡实例付计费配置信息
                     * @param _loadBalancerBillingConfig 负载均衡实例付计费配置信息
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
                     * 获取实例名称。

长度为1~80个字符，可包含中文、字母、数字、短划线（-）、正斜线（/）、半角句号（.）和下划线（_）。
                     * @return LoadBalancerName 实例名称。

长度为1~80个字符，可包含中文、字母、数字、短划线（-）、正斜线（/）、半角句号（.）和下划线（_）。
                     * 
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置实例名称。

长度为1~80个字符，可包含中文、字母、数字、短划线（-）、正斜线（/）、半角句号（.）和下划线（_）。
                     * @param _loadBalancerName 实例名称。

长度为1~80个字符，可包含中文、字母、数字、短划线（-）、正斜线（/）、半角句号（.）和下划线（_）。
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
                     * 获取应用型负载均衡操作锁配置。
                     * @return LoadBalancerOperationLocks 应用型负载均衡操作锁配置。
                     * 
                     */
                    std::vector<LoadBalancerOperationLocksItem> GetLoadBalancerOperationLocks() const;

                    /**
                     * 设置应用型负载均衡操作锁配置。
                     * @param _loadBalancerOperationLocks 应用型负载均衡操作锁配置。
                     * 
                     */
                    void SetLoadBalancerOperationLocks(const std::vector<LoadBalancerOperationLocksItem>& _loadBalancerOperationLocks);

                    /**
                     * 判断参数 LoadBalancerOperationLocks 是否已赋值
                     * @return LoadBalancerOperationLocks 是否已赋值
                     * 
                     */
                    bool LoadBalancerOperationLocksHasBeenSet() const;

                    /**
                     * 获取应用型负载均衡实例状态。取值：

- **Provisioning**：创建中。
- **Active**: 运行中。
- **Configuring**: 变配中。
- **Deleting**：删除中。
- **ProvisionFailed**：创建失败。
- **ConfigureFailed**：变配失败。
- **DeletionFailed**：删除失败。
- **Abnormal**：异常状态，具体异常原因参见LoadBalancerOperationLocks字段。
                     * @return LoadBalancerStatus 应用型负载均衡实例状态。取值：

- **Provisioning**：创建中。
- **Active**: 运行中。
- **Configuring**: 变配中。
- **Deleting**：删除中。
- **ProvisionFailed**：创建失败。
- **ConfigureFailed**：变配失败。
- **DeletionFailed**：删除失败。
- **Abnormal**：异常状态，具体异常原因参见LoadBalancerOperationLocks字段。
                     * 
                     */
                    std::string GetLoadBalancerStatus() const;

                    /**
                     * 设置应用型负载均衡实例状态。取值：

- **Provisioning**：创建中。
- **Active**: 运行中。
- **Configuring**: 变配中。
- **Deleting**：删除中。
- **ProvisionFailed**：创建失败。
- **ConfigureFailed**：变配失败。
- **DeletionFailed**：删除失败。
- **Abnormal**：异常状态，具体异常原因参见LoadBalancerOperationLocks字段。
                     * @param _loadBalancerStatus 应用型负载均衡实例状态。取值：

- **Provisioning**：创建中。
- **Active**: 运行中。
- **Configuring**: 变配中。
- **Deleting**：删除中。
- **ProvisionFailed**：创建失败。
- **ConfigureFailed**：变配失败。
- **DeletionFailed**：删除失败。
- **Abnormal**：异常状态，具体异常原因参见LoadBalancerOperationLocks字段。
                     * 
                     */
                    void SetLoadBalancerStatus(const std::string& _loadBalancerStatus);

                    /**
                     * 判断参数 LoadBalancerStatus 是否已赋值
                     * @return LoadBalancerStatus 是否已赋值
                     * 
                     */
                    bool LoadBalancerStatusHasBeenSet() const;

                    /**
                     * 获取修改保护设置信息。
                     * @return ModificationProtection 修改保护设置信息。
                     * 
                     */
                    ModificationProtectionInfo GetModificationProtection() const;

                    /**
                     * 设置修改保护设置信息。
                     * @param _modificationProtection 修改保护设置信息。
                     * 
                     */
                    void SetModificationProtection(const ModificationProtectionInfo& _modificationProtection);

                    /**
                     * 判断参数 ModificationProtection 是否已赋值
                     * @return ModificationProtection 是否已赋值
                     * 
                     */
                    bool ModificationProtectionHasBeenSet() const;

                    /**
                     * 获取应用型负载均衡实例绑定的安全组ID集合。
                     * @return SecurityGroupIds 应用型负载均衡实例绑定的安全组ID集合。
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置应用型负载均衡实例绑定的安全组ID集合。
                     * @param _securityGroupIds 应用型负载均衡实例绑定的安全组ID集合。
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

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
                     * 获取可用区及子网映射列表，最多返回10个可用区。若当前地域支持2个及以上可用区，至少返回2个及以上可用区。
                     * @return ZoneMappings 可用区及子网映射列表，最多返回10个可用区。若当前地域支持2个及以上可用区，至少返回2个及以上可用区。
                     * 
                     */
                    std::vector<ZoneMappingInfo> GetZoneMappings() const;

                    /**
                     * 设置可用区及子网映射列表，最多返回10个可用区。若当前地域支持2个及以上可用区，至少返回2个及以上可用区。
                     * @param _zoneMappings 可用区及子网映射列表，最多返回10个可用区。若当前地域支持2个及以上可用区，至少返回2个及以上可用区。
                     * 
                     */
                    void SetZoneMappings(const std::vector<ZoneMappingInfo>& _zoneMappings);

                    /**
                     * 判断参数 ZoneMappings 是否已赋值
                     * @return ZoneMappings 是否已赋值
                     * 
                     */
                    bool ZoneMappingsHasBeenSet() const;

                private:

                    /**
                     * 访问日志配置。
                     */
                    AccessLogConfig m_accessLogConfig;
                    bool m_accessLogConfigHasBeenSet;

                    /**
                     * IP 地址版本，取值 IPv4 或 IPv6。
                     */
                    std::string m_addressIpVersion;
                    bool m_addressIpVersionHasBeenSet;

                    /**
                     * 应用型负载均衡实例的网络地址类型。取值：

- **Internet/Public**：负载均衡具有公网IP地址，DNS域名被解析到公网IP，因此可以在公网环境访问。

- **Intranet/Internal**：负载均衡只有私网IP地址，DNS域名被解析到私网IP，因此只能被负载均衡所在VPC的内网环境访问。


                     */
                    std::string m_addressType;
                    bool m_addressTypeHasBeenSet;

                    /**
                     * 资源创建时间，格式为`yyyy-MM-ddTHH:mm:ss±hh:mm`。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 删除保护设置信息。
                     */
                    DeletionProtectionConfig m_deletionProtection;
                    bool m_deletionProtectionHasBeenSet;

                    /**
                     * DNS域名。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 负载均衡实例付计费配置信息
                     */
                    LoadBalancerBillingConfig m_loadBalancerBillingConfig;
                    bool m_loadBalancerBillingConfigHasBeenSet;

                    /**
                     * 负载均衡实例 ID，格式为 alb- 后接 8 位字母数字。
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 实例名称。

长度为1~80个字符，可包含中文、字母、数字、短划线（-）、正斜线（/）、半角句号（.）和下划线（_）。
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * 应用型负载均衡操作锁配置。
                     */
                    std::vector<LoadBalancerOperationLocksItem> m_loadBalancerOperationLocks;
                    bool m_loadBalancerOperationLocksHasBeenSet;

                    /**
                     * 应用型负载均衡实例状态。取值：

- **Provisioning**：创建中。
- **Active**: 运行中。
- **Configuring**: 变配中。
- **Deleting**：删除中。
- **ProvisionFailed**：创建失败。
- **ConfigureFailed**：变配失败。
- **DeletionFailed**：删除失败。
- **Abnormal**：异常状态，具体异常原因参见LoadBalancerOperationLocks字段。
                     */
                    std::string m_loadBalancerStatus;
                    bool m_loadBalancerStatusHasBeenSet;

                    /**
                     * 修改保护设置信息。
                     */
                    ModificationProtectionInfo m_modificationProtection;
                    bool m_modificationProtectionHasBeenSet;

                    /**
                     * 应用型负载均衡实例绑定的安全组ID集合。
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * 标签。
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 私有网络 ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 可用区及子网映射列表，最多返回10个可用区。若当前地域支持2个及以上可用区，至少返回2个及以上可用区。
                     */
                    std::vector<ZoneMappingInfo> m_zoneMappings;
                    bool m_zoneMappingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_LOADBALANCERDETAIL_H_
