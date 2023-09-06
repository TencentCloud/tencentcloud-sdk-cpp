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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_GRAFANAINSTANCEINFO_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_GRAFANAINSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusTag.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 查询 Grafana 实例时的实例类型
                */
                class GrafanaInstanceInfo : public AbstractModel
                {
                public:
                    GrafanaInstanceInfo();
                    ~GrafanaInstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例名
                     * @return InstanceName 实例名
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名
                     * @param _instanceName 实例名
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
                     * 获取实例 ID
                     * @return InstanceId 实例 ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID
                     * @param _instanceId 实例 ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取地域
                     * @return Region 地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param _region 地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取VPC ID
                     * @return VpcId VPC ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID
                     * @param _vpcId VPC ID
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
                     * 获取子网 ID 数组
                     * @return SubnetIds 子网 ID 数组
                     * 
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置子网 ID 数组
                     * @param _subnetIds 子网 ID 数组
                     * 
                     */
                    void SetSubnetIds(const std::vector<std::string>& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     * 
                     */
                    bool SubnetIdsHasBeenSet() const;

                    /**
                     * 获取Grafana 公网地址
                     * @return InternetUrl Grafana 公网地址
                     * 
                     */
                    std::string GetInternetUrl() const;

                    /**
                     * 设置Grafana 公网地址
                     * @param _internetUrl Grafana 公网地址
                     * 
                     */
                    void SetInternetUrl(const std::string& _internetUrl);

                    /**
                     * 判断参数 InternetUrl 是否已赋值
                     * @return InternetUrl 是否已赋值
                     * 
                     */
                    bool InternetUrlHasBeenSet() const;

                    /**
                     * 获取Grafana 内网地址
                     * @return InternalUrl Grafana 内网地址
                     * 
                     */
                    std::string GetInternalUrl() const;

                    /**
                     * 设置Grafana 内网地址
                     * @param _internalUrl Grafana 内网地址
                     * 
                     */
                    void SetInternalUrl(const std::string& _internalUrl);

                    /**
                     * 判断参数 InternalUrl 是否已赋值
                     * @return InternalUrl 是否已赋值
                     * 
                     */
                    bool InternalUrlHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreatedAt 创建时间
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置创建时间
                     * @param _createdAt 创建时间
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取运行状态（1:正在创建；2:运行中；3:异常；4:重启中；5:停机中； 6:已停机； 7: 已删除）
                     * @return InstanceStatus 运行状态（1:正在创建；2:运行中；3:异常；4:重启中；5:停机中； 6:已停机； 7: 已删除）
                     * 
                     */
                    int64_t GetInstanceStatus() const;

                    /**
                     * 设置运行状态（1:正在创建；2:运行中；3:异常；4:重启中；5:停机中； 6:已停机； 7: 已删除）
                     * @param _instanceStatus 运行状态（1:正在创建；2:运行中；3:异常；4:重启中；5:停机中； 6:已停机； 7: 已删除）
                     * 
                     */
                    void SetInstanceStatus(const int64_t& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取实例的标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagSpecification 实例的标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PrometheusTag> GetTagSpecification() const;

                    /**
                     * 设置实例的标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagSpecification 实例的标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTagSpecification(const std::vector<PrometheusTag>& _tagSpecification);

                    /**
                     * 判断参数 TagSpecification 是否已赋值
                     * @return TagSpecification 是否已赋值
                     * 
                     */
                    bool TagSpecificationHasBeenSet() const;

                    /**
                     * 获取实例的可用区
                     * @return Zone 实例的可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置实例的可用区
                     * @param _zone 实例的可用区
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取计费模式（1:包年包月）
                     * @return InstanceChargeType 计费模式（1:包年包月）
                     * 
                     */
                    int64_t GetInstanceChargeType() const;

                    /**
                     * 设置计费模式（1:包年包月）
                     * @param _instanceChargeType 计费模式（1:包年包月）
                     * 
                     */
                    void SetInstanceChargeType(const int64_t& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取VPC 名称
                     * @return VpcName VPC 名称
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置VPC 名称
                     * @param _vpcName VPC 名称
                     * 
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     * 
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取子网名称
                     * @return SubnetName 子网名称
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置子网名称
                     * @param _subnetName 子网名称
                     * 
                     */
                    void SetSubnetName(const std::string& _subnetName);

                    /**
                     * 判断参数 SubnetName 是否已赋值
                     * @return SubnetName 是否已赋值
                     * 
                     */
                    bool SubnetNameHasBeenSet() const;

                    /**
                     * 获取地域 ID
                     * @return RegionId 地域 ID
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置地域 ID
                     * @param _regionId 地域 ID
                     * 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取可访问此实例的完整 URL
                     * @return RootUrl 可访问此实例的完整 URL
                     * 
                     */
                    std::string GetRootUrl() const;

                    /**
                     * 设置可访问此实例的完整 URL
                     * @param _rootUrl 可访问此实例的完整 URL
                     * 
                     */
                    void SetRootUrl(const std::string& _rootUrl);

                    /**
                     * 判断参数 RootUrl 是否已赋值
                     * @return RootUrl 是否已赋值
                     * 
                     */
                    bool RootUrlHasBeenSet() const;

                    /**
                     * 获取是否开启 SSO
                     * @return EnableSSO 是否开启 SSO
                     * 
                     */
                    bool GetEnableSSO() const;

                    /**
                     * 设置是否开启 SSO
                     * @param _enableSSO 是否开启 SSO
                     * 
                     */
                    void SetEnableSSO(const bool& _enableSSO);

                    /**
                     * 判断参数 EnableSSO 是否已赋值
                     * @return EnableSSO 是否已赋值
                     * 
                     */
                    bool EnableSSOHasBeenSet() const;

                    /**
                     * 获取版本号
                     * @return Version 版本号
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置版本号
                     * @param _version 版本号
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取SSO登录时是否开启cam鉴权
                     * @return EnableSSOCamCheck SSO登录时是否开启cam鉴权
                     * 
                     */
                    bool GetEnableSSOCamCheck() const;

                    /**
                     * 设置SSO登录时是否开启cam鉴权
                     * @param _enableSSOCamCheck SSO登录时是否开启cam鉴权
                     * 
                     */
                    void SetEnableSSOCamCheck(const bool& _enableSSOCamCheck);

                    /**
                     * 判断参数 EnableSSOCamCheck 是否已赋值
                     * @return EnableSSOCamCheck 是否已赋值
                     * 
                     */
                    bool EnableSSOCamCheckHasBeenSet() const;

                private:

                    /**
                     * 实例名
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 实例 ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * VPC ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网 ID 数组
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * Grafana 公网地址
                     */
                    std::string m_internetUrl;
                    bool m_internetUrlHasBeenSet;

                    /**
                     * Grafana 内网地址
                     */
                    std::string m_internalUrl;
                    bool m_internalUrlHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 运行状态（1:正在创建；2:运行中；3:异常；4:重启中；5:停机中； 6:已停机； 7: 已删除）
                     */
                    int64_t m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * 实例的标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PrometheusTag> m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                    /**
                     * 实例的可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 计费模式（1:包年包月）
                     */
                    int64_t m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * VPC 名称
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * 子网名称
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * 地域 ID
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 可访问此实例的完整 URL
                     */
                    std::string m_rootUrl;
                    bool m_rootUrlHasBeenSet;

                    /**
                     * 是否开启 SSO
                     */
                    bool m_enableSSO;
                    bool m_enableSSOHasBeenSet;

                    /**
                     * 版本号
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * SSO登录时是否开启cam鉴权
                     */
                    bool m_enableSSOCamCheck;
                    bool m_enableSSOCamCheckHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_GRAFANAINSTANCEINFO_H_
