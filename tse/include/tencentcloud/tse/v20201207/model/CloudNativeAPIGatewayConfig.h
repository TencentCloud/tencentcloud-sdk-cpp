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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYCONFIG_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/NetworkAccessControl.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 云原生API网关配置信息。
                */
                class CloudNativeAPIGatewayConfig : public AbstractModel
                {
                public:
                    CloudNativeAPIGatewayConfig();
                    ~CloudNativeAPIGatewayConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取控制台类型。
                     * @return ConsoleType 控制台类型。
                     * 
                     */
                    std::string GetConsoleType() const;

                    /**
                     * 设置控制台类型。
                     * @param _consoleType 控制台类型。
                     * 
                     */
                    void SetConsoleType(const std::string& _consoleType);

                    /**
                     * 判断参数 ConsoleType 是否已赋值
                     * @return ConsoleType 是否已赋值
                     * 
                     */
                    bool ConsoleTypeHasBeenSet() const;

                    /**
                     * 获取HTTP链接地址。
                     * @return HttpUrl HTTP链接地址。
                     * 
                     */
                    std::string GetHttpUrl() const;

                    /**
                     * 设置HTTP链接地址。
                     * @param _httpUrl HTTP链接地址。
                     * 
                     */
                    void SetHttpUrl(const std::string& _httpUrl);

                    /**
                     * 判断参数 HttpUrl 是否已赋值
                     * @return HttpUrl 是否已赋值
                     * 
                     */
                    bool HttpUrlHasBeenSet() const;

                    /**
                     * 获取HTTPS链接地址。
                     * @return HttpsUrl HTTPS链接地址。
                     * 
                     */
                    std::string GetHttpsUrl() const;

                    /**
                     * 设置HTTPS链接地址。
                     * @param _httpsUrl HTTPS链接地址。
                     * 
                     */
                    void SetHttpsUrl(const std::string& _httpsUrl);

                    /**
                     * 判断参数 HttpsUrl 是否已赋值
                     * @return HttpsUrl 是否已赋值
                     * 
                     */
                    bool HttpsUrlHasBeenSet() const;

                    /**
                     * 获取网络类型, Open|Internal。
                     * @return NetType 网络类型, Open|Internal。
                     * 
                     */
                    std::string GetNetType() const;

                    /**
                     * 设置网络类型, Open|Internal。
                     * @param _netType 网络类型, Open|Internal。
                     * 
                     */
                    void SetNetType(const std::string& _netType);

                    /**
                     * 判断参数 NetType 是否已赋值
                     * @return NetType 是否已赋值
                     * 
                     */
                    bool NetTypeHasBeenSet() const;

                    /**
                     * 获取管理员用户名。
                     * @return AdminUser 管理员用户名。
                     * 
                     */
                    std::string GetAdminUser() const;

                    /**
                     * 设置管理员用户名。
                     * @param _adminUser 管理员用户名。
                     * 
                     */
                    void SetAdminUser(const std::string& _adminUser);

                    /**
                     * 判断参数 AdminUser 是否已赋值
                     * @return AdminUser 是否已赋值
                     * 
                     */
                    bool AdminUserHasBeenSet() const;

                    /**
                     * 获取管理员密码。
                     * @return AdminPassword 管理员密码。
                     * 
                     */
                    std::string GetAdminPassword() const;

                    /**
                     * 设置管理员密码。
                     * @param _adminPassword 管理员密码。
                     * 
                     */
                    void SetAdminPassword(const std::string& _adminPassword);

                    /**
                     * 判断参数 AdminPassword 是否已赋值
                     * @return AdminPassword 是否已赋值
                     * 
                     */
                    bool AdminPasswordHasBeenSet() const;

                    /**
                     * 获取网络状态, Open|Closed|Updating
                     * @return Status 网络状态, Open|Closed|Updating
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置网络状态, Open|Closed|Updating
                     * @param _status 网络状态, Open|Closed|Updating
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取网络访问策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccessControl 网络访问策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    NetworkAccessControl GetAccessControl() const;

                    /**
                     * 设置网络访问策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accessControl 网络访问策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccessControl(const NetworkAccessControl& _accessControl);

                    /**
                     * 判断参数 AccessControl 是否已赋值
                     * @return AccessControl 是否已赋值
                     * 
                     */
                    bool AccessControlHasBeenSet() const;

                    /**
                     * 获取内网子网 ID
                     * @return SubnetId 内网子网 ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置内网子网 ID
                     * @param _subnetId 内网子网 ID
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取内网VPC ID
                     * @return VpcId 内网VPC ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置内网VPC ID
                     * @param _vpcId 内网VPC ID
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
                     * 获取负载均衡的描述
                     * @return Description 负载均衡的描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置负载均衡的描述
                     * @param _description 负载均衡的描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取负载均衡的规格类型
                     * @return SlaType 负载均衡的规格类型
                     * 
                     */
                    std::string GetSlaType() const;

                    /**
                     * 设置负载均衡的规格类型
                     * @param _slaType 负载均衡的规格类型
                     * 
                     */
                    void SetSlaType(const std::string& _slaType);

                    /**
                     * 判断参数 SlaType 是否已赋值
                     * @return SlaType 是否已赋值
                     * 
                     */
                    bool SlaTypeHasBeenSet() const;

                    /**
                     * 获取clb规格名称
                     * @return SlaName clb规格名称
                     * 
                     */
                    std::string GetSlaName() const;

                    /**
                     * 设置clb规格名称
                     * @param _slaName clb规格名称
                     * 
                     */
                    void SetSlaName(const std::string& _slaName);

                    /**
                     * 判断参数 SlaName 是否已赋值
                     * @return SlaName 是否已赋值
                     * 
                     */
                    bool SlaNameHasBeenSet() const;

                    /**
                     * 获取clb vip
                     * @return Vip clb vip
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置clb vip
                     * @param _vip clb vip
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取带宽
                     * @return InternetMaxBandwidthOut 带宽
                     * 
                     */
                    uint64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置带宽
                     * @param _internetMaxBandwidthOut 带宽
                     * 
                     */
                    void SetInternetMaxBandwidthOut(const uint64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     * 
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                    /**
                     * 获取是否多可用区
                     * @return MultiZoneFlag 是否多可用区
                     * 
                     */
                    bool GetMultiZoneFlag() const;

                    /**
                     * 设置是否多可用区
                     * @param _multiZoneFlag 是否多可用区
                     * 
                     */
                    void SetMultiZoneFlag(const bool& _multiZoneFlag);

                    /**
                     * 判断参数 MultiZoneFlag 是否已赋值
                     * @return MultiZoneFlag 是否已赋值
                     * 
                     */
                    bool MultiZoneFlagHasBeenSet() const;

                    /**
                     * 获取主可用区
                     * @return MasterZoneId 主可用区
                     * 
                     */
                    std::string GetMasterZoneId() const;

                    /**
                     * 设置主可用区
                     * @param _masterZoneId 主可用区
                     * 
                     */
                    void SetMasterZoneId(const std::string& _masterZoneId);

                    /**
                     * 判断参数 MasterZoneId 是否已赋值
                     * @return MasterZoneId 是否已赋值
                     * 
                     */
                    bool MasterZoneIdHasBeenSet() const;

                    /**
                     * 获取备可用区
                     * @return SlaveZoneId 备可用区
                     * 
                     */
                    std::string GetSlaveZoneId() const;

                    /**
                     * 设置备可用区
                     * @param _slaveZoneId 备可用区
                     * 
                     */
                    void SetSlaveZoneId(const std::string& _slaveZoneId);

                    /**
                     * 判断参数 SlaveZoneId 是否已赋值
                     * @return SlaveZoneId 是否已赋值
                     * 
                     */
                    bool SlaveZoneIdHasBeenSet() const;

                    /**
                     * 获取主可用区名称
                     * @return MasterZoneName 主可用区名称
                     * 
                     */
                    std::string GetMasterZoneName() const;

                    /**
                     * 设置主可用区名称
                     * @param _masterZoneName 主可用区名称
                     * 
                     */
                    void SetMasterZoneName(const std::string& _masterZoneName);

                    /**
                     * 判断参数 MasterZoneName 是否已赋值
                     * @return MasterZoneName 是否已赋值
                     * 
                     */
                    bool MasterZoneNameHasBeenSet() const;

                    /**
                     * 获取备可用区名称
                     * @return SlaveZoneName 备可用区名称
                     * 
                     */
                    std::string GetSlaveZoneName() const;

                    /**
                     * 设置备可用区名称
                     * @param _slaveZoneName 备可用区名称
                     * 
                     */
                    void SetSlaveZoneName(const std::string& _slaveZoneName);

                    /**
                     * 判断参数 SlaveZoneName 是否已赋值
                     * @return SlaveZoneName 是否已赋值
                     * 
                     */
                    bool SlaveZoneNameHasBeenSet() const;

                    /**
                     * 获取网络 id
                     * @return NetworkId 网络 id
                     * 
                     */
                    std::string GetNetworkId() const;

                    /**
                     * 设置网络 id
                     * @param _networkId 网络 id
                     * 
                     */
                    void SetNetworkId(const std::string& _networkId);

                    /**
                     * 判断参数 NetworkId 是否已赋值
                     * @return NetworkId 是否已赋值
                     * 
                     */
                    bool NetworkIdHasBeenSet() const;

                    /**
                     * 获取是否为新 ipv6 CLB
                     * @return IPV6FullChain 是否为新 ipv6 CLB
                     * 
                     */
                    bool GetIPV6FullChain() const;

                    /**
                     * 设置是否为新 ipv6 CLB
                     * @param _iPV6FullChain 是否为新 ipv6 CLB
                     * 
                     */
                    void SetIPV6FullChain(const bool& _iPV6FullChain);

                    /**
                     * 判断参数 IPV6FullChain 是否已赋值
                     * @return IPV6FullChain 是否已赋值
                     * 
                     */
                    bool IPV6FullChainHasBeenSet() const;

                private:

                    /**
                     * 控制台类型。
                     */
                    std::string m_consoleType;
                    bool m_consoleTypeHasBeenSet;

                    /**
                     * HTTP链接地址。
                     */
                    std::string m_httpUrl;
                    bool m_httpUrlHasBeenSet;

                    /**
                     * HTTPS链接地址。
                     */
                    std::string m_httpsUrl;
                    bool m_httpsUrlHasBeenSet;

                    /**
                     * 网络类型, Open|Internal。
                     */
                    std::string m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * 管理员用户名。
                     */
                    std::string m_adminUser;
                    bool m_adminUserHasBeenSet;

                    /**
                     * 管理员密码。
                     */
                    std::string m_adminPassword;
                    bool m_adminPasswordHasBeenSet;

                    /**
                     * 网络状态, Open|Closed|Updating
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 网络访问策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    NetworkAccessControl m_accessControl;
                    bool m_accessControlHasBeenSet;

                    /**
                     * 内网子网 ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 内网VPC ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 负载均衡的描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 负载均衡的规格类型
                     */
                    std::string m_slaType;
                    bool m_slaTypeHasBeenSet;

                    /**
                     * clb规格名称
                     */
                    std::string m_slaName;
                    bool m_slaNameHasBeenSet;

                    /**
                     * clb vip
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 带宽
                     */
                    uint64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * 是否多可用区
                     */
                    bool m_multiZoneFlag;
                    bool m_multiZoneFlagHasBeenSet;

                    /**
                     * 主可用区
                     */
                    std::string m_masterZoneId;
                    bool m_masterZoneIdHasBeenSet;

                    /**
                     * 备可用区
                     */
                    std::string m_slaveZoneId;
                    bool m_slaveZoneIdHasBeenSet;

                    /**
                     * 主可用区名称
                     */
                    std::string m_masterZoneName;
                    bool m_masterZoneNameHasBeenSet;

                    /**
                     * 备可用区名称
                     */
                    std::string m_slaveZoneName;
                    bool m_slaveZoneNameHasBeenSet;

                    /**
                     * 网络 id
                     */
                    std::string m_networkId;
                    bool m_networkIdHasBeenSet;

                    /**
                     * 是否为新 ipv6 CLB
                     */
                    bool m_iPV6FullChain;
                    bool m_iPV6FullChainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYCONFIG_H_
