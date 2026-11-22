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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_CREATESLINSTANCEREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_CREATESLINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/ZoneSetting.h>
#include <tencentcloud/emr/v20190103/model/PrePaySetting.h>
#include <tencentcloud/emr/v20190103/model/Tag.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * CreateSLInstance请求参数结构体
                */
                class CreateSLInstanceRequest : public AbstractModel
                {
                public:
                    CreateSLInstanceRequest();
                    ~CreateSLInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例单节点磁盘容量，单位GB，单节点磁盘容量需大于等于100，小于等于250*CPU核心数，容量调整步长为100。</p>
                     * @return DiskSize <p>实例单节点磁盘容量，单位GB，单节点磁盘容量需大于等于100，小于等于250*CPU核心数，容量调整步长为100。</p>
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置<p>实例单节点磁盘容量，单位GB，单节点磁盘容量需大于等于100，小于等于250*CPU核心数，容量调整步长为100。</p>
                     * @param _diskSize <p>实例单节点磁盘容量，单位GB，单节点磁盘容量需大于等于100，小于等于250*CPU核心数，容量调整步长为100。</p>
                     * 
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取<p>实例存储类型，CLOUD_HSSD表示性能云存储， CLOUD_BSSD表示标准云存储。</p>
                     * @return DiskType <p>实例存储类型，CLOUD_HSSD表示性能云存储， CLOUD_BSSD表示标准云存储。</p>
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置<p>实例存储类型，CLOUD_HSSD表示性能云存储， CLOUD_BSSD表示标准云存储。</p>
                     * @param _diskType <p>实例存储类型，CLOUD_HSSD表示性能云存储， CLOUD_BSSD表示标准云存储。</p>
                     * 
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取<p>实例名称。</p>
                     * @return InstanceName <p>实例名称。</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称。</p>
                     * @param _instanceName <p>实例名称。</p>
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>实例节点规格，可填写4C16G、8C32G、16C64G、32C128G，不区分大小写。</p>
                     * @return NodeType <p>实例节点规格，可填写4C16G、8C32G、16C64G、32C128G，不区分大小写。</p>
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置<p>实例节点规格，可填写4C16G、8C32G、16C64G、32C128G，不区分大小写。</p>
                     * @param _nodeType <p>实例节点规格，可填写4C16G、8C32G、16C64G、32C128G，不区分大小写。</p>
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取<p>实例计费模式，0表示后付费，即按量计费，1表示预付费，即包年包月。</p>
                     * @return PayMode <p>实例计费模式，0表示后付费，即按量计费，1表示预付费，即包年包月。</p>
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置<p>实例计费模式，0表示后付费，即按量计费，1表示预付费，即包年包月。</p>
                     * @param _payMode <p>实例计费模式，0表示后付费，即按量计费，1表示预付费，即包年包月。</p>
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取<p>实例可用区详细配置，当前支持多可用区，可用区数量只能为1或3，包含区域名称，VPC信息、节点数量，其中所有区域节点总数需大于等于3，小于等于50。</p>
                     * @return ZoneSettings <p>实例可用区详细配置，当前支持多可用区，可用区数量只能为1或3，包含区域名称，VPC信息、节点数量，其中所有区域节点总数需大于等于3，小于等于50。</p>
                     * 
                     */
                    std::vector<ZoneSetting> GetZoneSettings() const;

                    /**
                     * 设置<p>实例可用区详细配置，当前支持多可用区，可用区数量只能为1或3，包含区域名称，VPC信息、节点数量，其中所有区域节点总数需大于等于3，小于等于50。</p>
                     * @param _zoneSettings <p>实例可用区详细配置，当前支持多可用区，可用区数量只能为1或3，包含区域名称，VPC信息、节点数量，其中所有区域节点总数需大于等于3，小于等于50。</p>
                     * 
                     */
                    void SetZoneSettings(const std::vector<ZoneSetting>& _zoneSettings);

                    /**
                     * 判断参数 ZoneSettings 是否已赋值
                     * @return ZoneSettings 是否已赋值
                     * 
                     */
                    bool ZoneSettingsHasBeenSet() const;

                    /**
                     * 获取<p>唯一随机标识，时效性为5分钟，需要调用者指定 防止客户端重复创建资源，例如 a9a90aa6-<strong><strong>-</strong></strong>-****-fae360632808</p>
                     * @return ClientToken <p>唯一随机标识，时效性为5分钟，需要调用者指定 防止客户端重复创建资源，例如 a9a90aa6-<strong><strong>-</strong></strong>-****-fae360632808</p>
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置<p>唯一随机标识，时效性为5分钟，需要调用者指定 防止客户端重复创建资源，例如 a9a90aa6-<strong><strong>-</strong></strong>-****-fae360632808</p>
                     * @param _clientToken <p>唯一随机标识，时效性为5分钟，需要调用者指定 防止客户端重复创建资源，例如 a9a90aa6-<strong><strong>-</strong></strong>-****-fae360632808</p>
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
                     * 获取<p>部署模式</p>
                     * @return DeploymentMode <p>部署模式</p>
                     * 
                     */
                    std::string GetDeploymentMode() const;

                    /**
                     * 设置<p>部署模式</p>
                     * @param _deploymentMode <p>部署模式</p>
                     * 
                     */
                    void SetDeploymentMode(const std::string& _deploymentMode);

                    /**
                     * 判断参数 DeploymentMode 是否已赋值
                     * @return DeploymentMode 是否已赋值
                     * 
                     */
                    bool DeploymentModeHasBeenSet() const;

                    /**
                     * 获取<p>是否开启公网 IP 访问，默认 false。TCBase 开启后会创建并绑定 EIP；内网 CLB 绑定 EIP 后，CLB 安全组对来自 EIP 的流量不生效，对来自内网 CLB 的流量生效。</p>
                     * @return EnablePublicIP <p>是否开启公网 IP 访问，默认 false。TCBase 开启后会创建并绑定 EIP；内网 CLB 绑定 EIP 后，CLB 安全组对来自 EIP 的流量不生效，对来自内网 CLB 的流量生效。</p>
                     * 
                     */
                    bool GetEnablePublicIP() const;

                    /**
                     * 设置<p>是否开启公网 IP 访问，默认 false。TCBase 开启后会创建并绑定 EIP；内网 CLB 绑定 EIP 后，CLB 安全组对来自 EIP 的流量不生效，对来自内网 CLB 的流量生效。</p>
                     * @param _enablePublicIP <p>是否开启公网 IP 访问，默认 false。TCBase 开启后会创建并绑定 EIP；内网 CLB 绑定 EIP 后，CLB 安全组对来自 EIP 的流量不生效，对来自内网 CLB 的流量生效。</p>
                     * 
                     */
                    void SetEnablePublicIP(const bool& _enablePublicIP);

                    /**
                     * 判断参数 EnablePublicIP 是否已赋值
                     * @return EnablePublicIP 是否已赋值
                     * 
                     */
                    bool EnablePublicIPHasBeenSet() const;

                    /**
                     * 获取<p>预付费参数</p>
                     * @return PrePaySetting <p>预付费参数</p>
                     * 
                     */
                    PrePaySetting GetPrePaySetting() const;

                    /**
                     * 设置<p>预付费参数</p>
                     * @param _prePaySetting <p>预付费参数</p>
                     * 
                     */
                    void SetPrePaySetting(const PrePaySetting& _prePaySetting);

                    /**
                     * 判断参数 PrePaySetting 是否已赋值
                     * @return PrePaySetting 是否已赋值
                     * 
                     */
                    bool PrePaySettingHasBeenSet() const;

                    /**
                     * 获取<p>TCBase 实例 CLB 绑定的安全组 ID 列表，形如 sg-xxxxxxxx，可通过 DescribeSecurityGroups 获取。绑定后管控侧会尝试补充 TCP 80、5432、5433 入站放通规则。</p>
                     * @return SecurityGroupIds <p>TCBase 实例 CLB 绑定的安全组 ID 列表，形如 sg-xxxxxxxx，可通过 DescribeSecurityGroups 获取。绑定后管控侧会尝试补充 TCP 80、5432、5433 入站放通规则。</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置<p>TCBase 实例 CLB 绑定的安全组 ID 列表，形如 sg-xxxxxxxx，可通过 DescribeSecurityGroups 获取。绑定后管控侧会尝试补充 TCP 80、5432、5433 入站放通规则。</p>
                     * @param _securityGroupIds <p>TCBase 实例 CLB 绑定的安全组 ID 列表，形如 sg-xxxxxxxx，可通过 DescribeSecurityGroups 获取。绑定后管控侧会尝试补充 TCP 80、5432、5433 入站放通规则。</p>
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
                     * 获取<p>实例要绑定的标签列表。</p>
                     * @return Tags <p>实例要绑定的标签列表。</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>实例要绑定的标签列表。</p>
                     * @param _tags <p>实例要绑定的标签列表。</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>是否开启实例销毁保护，默认 false；true 表示开启，开启后不允许销毁实例。</p>
                     * @return TerminateProtection <p>是否开启实例销毁保护，默认 false；true 表示开启，开启后不允许销毁实例。</p>
                     * 
                     */
                    bool GetTerminateProtection() const;

                    /**
                     * 设置<p>是否开启实例销毁保护，默认 false；true 表示开启，开启后不允许销毁实例。</p>
                     * @param _terminateProtection <p>是否开启实例销毁保护，默认 false；true 表示开启，开启后不允许销毁实例。</p>
                     * 
                     */
                    void SetTerminateProtection(const bool& _terminateProtection);

                    /**
                     * 判断参数 TerminateProtection 是否已赋值
                     * @return TerminateProtection 是否已赋值
                     * 
                     */
                    bool TerminateProtectionHasBeenSet() const;

                    /**
                     * 获取<p>服务用户名，对不需要用户名的服务不用传，8-16个字符，支持大写字母、小写字母、数字</p>
                     * @return UserName <p>服务用户名，对不需要用户名的服务不用传，8-16个字符，支持大写字母、小写字母、数字</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>服务用户名，对不需要用户名的服务不用传，8-16个字符，支持大写字母、小写字母、数字</p>
                     * @param _userName <p>服务用户名，对不需要用户名的服务不用传，8-16个字符，支持大写字母、小写字母、数字</p>
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                private:

                    /**
                     * <p>实例单节点磁盘容量，单位GB，单节点磁盘容量需大于等于100，小于等于250*CPU核心数，容量调整步长为100。</p>
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * <p>实例存储类型，CLOUD_HSSD表示性能云存储， CLOUD_BSSD表示标准云存储。</p>
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * <p>实例名称。</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>实例节点规格，可填写4C16G、8C32G、16C64G、32C128G，不区分大小写。</p>
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * <p>实例计费模式，0表示后付费，即按量计费，1表示预付费，即包年包月。</p>
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>实例可用区详细配置，当前支持多可用区，可用区数量只能为1或3，包含区域名称，VPC信息、节点数量，其中所有区域节点总数需大于等于3，小于等于50。</p>
                     */
                    std::vector<ZoneSetting> m_zoneSettings;
                    bool m_zoneSettingsHasBeenSet;

                    /**
                     * <p>唯一随机标识，时效性为5分钟，需要调用者指定 防止客户端重复创建资源，例如 a9a90aa6-<strong><strong>-</strong></strong>-****-fae360632808</p>
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * <p>部署模式</p>
                     */
                    std::string m_deploymentMode;
                    bool m_deploymentModeHasBeenSet;

                    /**
                     * <p>是否开启公网 IP 访问，默认 false。TCBase 开启后会创建并绑定 EIP；内网 CLB 绑定 EIP 后，CLB 安全组对来自 EIP 的流量不生效，对来自内网 CLB 的流量生效。</p>
                     */
                    bool m_enablePublicIP;
                    bool m_enablePublicIPHasBeenSet;

                    /**
                     * <p>预付费参数</p>
                     */
                    PrePaySetting m_prePaySetting;
                    bool m_prePaySettingHasBeenSet;

                    /**
                     * <p>TCBase 实例 CLB 绑定的安全组 ID 列表，形如 sg-xxxxxxxx，可通过 DescribeSecurityGroups 获取。绑定后管控侧会尝试补充 TCP 80、5432、5433 入站放通规则。</p>
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * <p>实例要绑定的标签列表。</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>是否开启实例销毁保护，默认 false；true 表示开启，开启后不允许销毁实例。</p>
                     */
                    bool m_terminateProtection;
                    bool m_terminateProtectionHasBeenSet;

                    /**
                     * <p>服务用户名，对不需要用户名的服务不用传，8-16个字符，支持大写字母、小写字母、数字</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CREATESLINSTANCEREQUEST_H_
